#import "WCPLRedEnvelopEntryCoordinator.h"

#import "WeChatRedEnvelopParam.h"
#import "WCPLAlertTextHelpers.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLRedEnvelopBackgroundTaskTracker.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLRedEnvelopReceiverQueryTracker.h"
#import "WCPLRedEnvelopRequestParser.h"
#import "WCPLServiceCenter.h"
#import <objc/message.h>
#import <objc/runtime.h>

@implementation WCPLRedEnvelopEntryContext
@end

static NSString *wcpl_redEnvelopEntryTrimText(id text) {
    NSString *trimmed = WCPLTrimText(text);
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_redEnvelopEntryContactValue(id contact, SEL selector) {
    if (!(contact && selector && [contact respondsToSelector:selector])) {
        return nil;
    }
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(contact, selector);
        return wcpl_redEnvelopEntryTrimText(value);
    } @catch (__unused NSException *exception) {
        WCPLCatchLog(exception);
        return nil;
    }
}

static NSString *wcpl_redEnvelopEntryValue(NSString *nativeUrl,
                                           NSDictionary *nativeUrlDict,
                                           NSArray<NSString *> *keys) {
    if (nativeUrl.length > 0) {
        for (NSString *key in keys) {
            NSString *queryValue = WCPLQueryValueForKeyInURL(key, nativeUrl);
            if (queryValue.length > 0) {
                return queryValue;
            }
        }
    }
    return WCPLRedEnvelopStringForKeysInDictionary(nativeUrlDict, keys);
}

static WeChatRedEnvelopParam *wcpl_redEnvelopBuildEntryParam(WCPLRedEnvelopEntryContext *context) {
    NSString *nativeUrl = wcpl_redEnvelopEntryTrimText(context.nativeUrl);
    if (nativeUrl.length == 0) {
        return nil;
    }

    NSDictionary *nativeUrlDict = WCPLRedEnvelopDictionaryFromNativeUrlString(nativeUrl);
    if (nativeUrlDict.count == 0) {
        WCPLLogDebug(@"红包解析失败: nativeUrlDict 为空 url=%@",
                     WCPLSanitizeInlineText(nativeUrl, 160));
        return nil;
    }

    NSString *msgType = wcpl_redEnvelopEntryValue(nativeUrl, nativeUrlDict, @[@"msgtype", @"msgType"]);
    NSString *sendId = wcpl_redEnvelopEntryValue(nativeUrl, nativeUrlDict, @[@"sendid", @"sendId"]);
    NSString *channelId = wcpl_redEnvelopEntryValue(nativeUrl, nativeUrlDict, @[@"channelid", @"channelId"]);
    NSString *sign = wcpl_redEnvelopEntryValue(nativeUrl, nativeUrlDict, @[@"sign"]);
    if (msgType.length == 0 || sendId.length == 0 || channelId.length == 0) {
        WCPLLogDebug(@"红包解析失败: msgType=%@ sendId=%@ channelId=%@ url=%@",
                     msgType ?: @"",
                     sendId ?: @"",
                     channelId ?: @"",
                     WCPLSanitizeInlineText(nativeUrl, 160));
        return nil;
    }

    WeChatRedEnvelopParam *param = [[WeChatRedEnvelopParam alloc] init];
    param.msgType = msgType;
    param.sendId = sendId;
    param.channelId = channelId;
    param.nickName = wcpl_redEnvelopEntryContactValue(context.selfContact, @selector(getContactDisplayName));
    param.headImg = wcpl_redEnvelopEntryContactValue(context.selfContact, @selector(m_nsHeadImgUrl));
    param.nativeUrl = nativeUrl;
    param.sessionUserName = wcpl_redEnvelopEntryTrimText(context.sessionUserName);
    param.sign = sign;
    param.isGroupSender = context.isGroupSender;
    return param;
}

static NSDictionary *wcpl_redEnvelopBuildQueryParams(WeChatRedEnvelopParam *param) {
    if (!param) {
        return @{};
    }
    return @{
        @"agreeDuty": @"0",
        @"channelId": param.channelId ?: @"",
        @"inWay": @"0",
        @"msgType": param.msgType ?: @"",
        @"nativeUrl": param.nativeUrl ?: @"",
        @"sendId": param.sendId ?: @"",
    };
}

void WCPLHandleRedEnvelopEntry(WCPLRedEnvelopEntryContext *context) {
    WeChatRedEnvelopParam *mgrParams = wcpl_redEnvelopBuildEntryParam(context);
    if (!mgrParams) {
        return;
    }

    [[WCPLRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
    WCPLLogDebug(@"红包入队: session=%@ sendId=%@ signLen=%lu",
                 mgrParams.sessionUserName ?: @"",
                 mgrParams.sendId ?: @"",
                 (unsigned long)mgrParams.sign.length);
    WCPLBeginHongbaoBackgroundTask(mgrParams.sendId, mgrParams.sign);

    NSDictionary *queryParams = wcpl_redEnvelopBuildQueryParams(mgrParams);
    id logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
    BOOL canQuery = (logicMgr && [logicMgr respondsToSelector:@selector(ReceiverQueryRedEnvelopesRequest:)]);
    BOOL canOpen = (logicMgr && [logicMgr respondsToSelector:@selector(OpenRedEnvelopesRequest:)]);
    WCPLLogDebug(@"红包逻辑管理器: mgr=%p class=%@ canQuery=%d canOpen=%d",
                 logicMgr,
                 logicMgr ? NSStringFromClass([logicMgr class]) : @"",
                 canQuery,
                 canOpen);
    if (!canQuery) {
        WCPLLogDebug(@"红包查询跳过: WCRedEnvelopesLogicMgr 不可用");
        [[WCPLRedEnvelopParamQueue sharedQueue] dequeueMatchingSign:mgrParams.sign sendId:mgrParams.sendId];
        WCPLLogDebug(@"红包入队回滚: session=%@ sendId=%@ signLen=%lu",
                     mgrParams.sessionUserName ?: @"",
                     mgrParams.sendId ?: @"",
                     (unsigned long)mgrParams.sign.length);
        WCPLMarkReceiverQueryFinished(mgrParams.sendId, mgrParams.sign);
        WCPLEndHongbaoBackgroundTask(mgrParams.sendId, mgrParams.sign, @"query_unavailable");
        return;
    }

    WCPLMarkReceiverQueryPending(mgrParams.sendId, mgrParams.sign);
    ((void (*)(id, SEL, id))objc_msgSend)(logicMgr,
                                          @selector(ReceiverQueryRedEnvelopesRequest:),
                                          [queryParams mutableCopy]);
    WCPLLogDebug(@"红包查询请求: session=%@ sendId=%@ signLen=%lu",
                 mgrParams.sessionUserName ?: @"",
                 mgrParams.sendId ?: @"",
                 (unsigned long)mgrParams.sign.length);
    WCPLScheduleReceiverQueryHedgeRequests(mgrParams.sendId,
                                           mgrParams.sign,
                                           queryParams,
                                           mgrParams.sessionUserName);
}
