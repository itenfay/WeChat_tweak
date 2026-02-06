#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WCRedEnvelopesNetworkHelper.h"
#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopTaskManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLServiceCenter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>

@interface WCRedEnvelopesLogicMgr (WCPLRedEnvelopOpen)
- (void)wcpl_handleRedEnvelopReceiverQueryResponse:(HongBaoRes *)res request:(HongBaoReq *)req;
@end

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static BOOL wcpl_userNameInList(NSString *userName, NSArray *list) {
    NSString *target = wcpl_trimString(userName);
    if (target.length == 0 || ![list isKindOfClass:[NSArray class]] || list.count == 0) {
        return NO;
    }

    for (id obj in list) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *candidate = wcpl_trimString((NSString *)obj);
        if (candidate.length > 0 && [candidate isEqualToString:target]) {
            return YES;
        }
    }
    return NO;
}

static unsigned int wcpl_hongbaoCmdId(HongBaoRes *res, HongBaoReq *req) {
    unsigned int cmd = 0;
    @try {
        if (req && [req respondsToSelector:@selector(cgiCmd)]) {
            cmd = req.cgiCmd;
        }
    } @catch (__unused NSException *exception) {
        cmd = 0;
    }

    if (cmd == 0 && req) {
        NSArray<NSString *> *keys = @[@"cgiCmd", @"cgiCmdId", @"cgiCmdid", @"cmdId", @"cmdid"];
        for (NSString *key in keys) {
            @try {
                id value = [req valueForKey:key];
                if ([value respondsToSelector:@selector(unsignedIntValue)]) {
                    cmd = [value unsignedIntValue];
                    if (cmd != 0) break;
                } else if ([value respondsToSelector:@selector(intValue)]) {
                    int v = [value intValue];
                    if (v > 0) { cmd = (unsigned int)v; break; }
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if (cmd == 0) {
        @try {
            if (res && [res respondsToSelector:@selector(cgiCmdid)]) {
                cmd = (unsigned int)res.cgiCmdid;
            }
        } @catch (__unused NSException *exception) {
            cmd = 0;
        }
    }

    if (cmd == 0 && res) {
        NSArray<NSString *> *keys = @[@"cgiCmdid", @"cgiCmdId", @"cgiCmd", @"cmdId", @"cmdid"];
        for (NSString *key in keys) {
            @try {
                id value = [res valueForKey:key];
                if ([value respondsToSelector:@selector(unsignedIntValue)]) {
                    cmd = [value unsignedIntValue];
                    if (cmd != 0) break;
                } else if ([value respondsToSelector:@selector(intValue)]) {
                    int v = [value intValue];
                    if (v > 0) { cmd = (unsigned int)v; break; }
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    return cmd;
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

static NSString *wcpl_sanitizeInlineText(NSString *text, NSUInteger maxLen) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;

    value = [[value stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                stringByReplacingOccurrencesOfString:@"\n" withString:@" "];

    if (maxLen > 0 && value.length > maxLen) {
        value = [[value substringToIndex:maxLen] stringByAppendingString:@"…"];
    }
    return value;
}

static NSString *wcpl_stringForKeyInDictionary(NSDictionary *dict, NSString *key) {
    if (![dict isKindOfClass:[NSDictionary class]] || key.length == 0) return nil;
    id value = dict[key];
    if ([value isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)value);
    }
    if ([value respondsToSelector:@selector(stringValue)]) {
        @try {
            return wcpl_trimString([value stringValue]);
        } @catch (__unused NSException *exception) {
            return nil;
        }
    }
    return nil;
}

static NSDictionary *wcpl_dictionaryFromQueryString(NSString *text) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;
    if ([value hasPrefix:@"?"] && value.length > 1) {
        value = [value substringFromIndex:1];
    }
    NSDictionary *dict = nil;
    @try {
        dict = [%c(WCBizUtil) dictionaryWithDecodedComponets:value separator:@"&"];
    } @catch (__unused NSException *exception) {
        dict = nil;
    }
    return [dict isKindOfClass:[NSDictionary class]] ? dict : nil;
}

static NSDictionary *wcpl_dictionaryFromJsonString(NSString *text) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;
    NSDictionary *dict = nil;
    @try {
        dict = [value JSONDictionary];
    } @catch (__unused NSException *exception) {
        dict = nil;
    }
    return [dict isKindOfClass:[NSDictionary class]] ? dict : nil;
}

static NSDictionary *wcpl_dictionaryFromHongbaoBuffer(SKBuiltinBuffer_t *buffer) {
    if (![buffer isKindOfClass:%c(SKBuiltinBuffer_t)]) return nil;
    NSData *data = buffer.buffer;
    if (![data isKindOfClass:[NSData class]] || data.length == 0) return nil;

    NSString *text = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    if (text.length == 0) {
        text = [[NSString alloc] initWithData:data encoding:NSISOLatin1StringEncoding];
    }
    if (text.length == 0) return nil;

    NSDictionary *dict = wcpl_dictionaryFromJsonString(text);
    if (dict.count > 0) return dict;

    dict = wcpl_dictionaryFromQueryString(text);
    if (dict.count > 0) return dict;

    return nil;
}

static int wcpl_intFromSelector(id obj, SEL sel) {
    if (!obj || !sel) return 0;
    if (![obj respondsToSelector:sel]) return 0;
    @try {
        return ((int (*)(id, SEL))objc_msgSend)(obj, sel);
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

static NSString *wcpl_stringFromSelector(id obj, SEL sel) {
    if (!obj || !sel) return nil;
    if (![obj respondsToSelector:sel]) return nil;
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
        return nil;
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static void wcpl_logHongbaoCommonErrorResponse(NSString *tag, id resObj, id reqObj) {
    unsigned int cmdId = 0;
    @try {
        if (reqObj && [reqObj respondsToSelector:@selector(cgiCmd)]) {
            cmdId = ((unsigned int (*)(id, SEL))objc_msgSend)(reqObj, @selector(cgiCmd));
        }
    } @catch (__unused NSException *exception) {
        cmdId = 0;
    }
    if (cmdId == 0) {
        @try {
            if (resObj && [resObj respondsToSelector:@selector(cgiCmdid)]) {
                cmdId = (unsigned int)((int (*)(id, SEL))objc_msgSend)(resObj, @selector(cgiCmdid));
            }
        } @catch (__unused NSException *exception) {
            cmdId = 0;
        }
    }

    NSDictionary *requestDict = nil;
    @try {
        if (reqObj && [reqObj respondsToSelector:@selector(reqText)]) {
            SKBuiltinBuffer_t *buf = ((id (*)(id, SEL))objc_msgSend)(reqObj, @selector(reqText));
            requestDict = wcpl_dictionaryFromHongbaoBuffer(buf);
        }
    } @catch (__unused NSException *exception) {
        requestDict = nil;
    }

    NSString *sendId = wcpl_stringForKeyInDictionary(requestDict, @"sendId")
        ?: wcpl_stringForKeyInDictionary(requestDict, @"sendid")
        ?: wcpl_stringForKeyInDictionary(requestDict, @"send_id");
    NSString *timingIdentifier = wcpl_stringForKeyInDictionary(requestDict, @"timingIdentifier")
        ?: wcpl_stringForKeyInDictionary(requestDict, @"timing_identifier");

    int errorType = wcpl_intFromSelector(resObj, @selector(errorType));
    int platRet = wcpl_intFromSelector(resObj, @selector(platRet));
    NSString *errorMsg = wcpl_stringFromSelector(resObj, @selector(errorMsg));
    NSString *platMsg = wcpl_stringFromSelector(resObj, @selector(platMsg));

    WCPLLogDebug(@"红包%@回包: cmd=%u sendId=%@ timing=%@ errorType=%d platRet=%d errorMsg=%@ platMsg=%@ res=%@ req=%@",
                 wcpl_trimString(tag) ?: @"错误",
                 cmdId,
                 sendId ?: @"",
                 timingIdentifier ?: @"",
                 errorType,
                 platRet,
                 wcpl_sanitizeInlineText(errorMsg, 120) ?: @"",
                 wcpl_sanitizeInlineText(platMsg, 120) ?: @"",
                 resObj ? NSStringFromClass([resObj class]) : @"",
                 reqObj ? NSStringFromClass([reqObj class]) : @"");
}

%hook WCRedEnvelopesLogicMgr

- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1 {
    NSDictionary *params = [arg1 isKindOfClass:[NSDictionary class]] ? (NSDictionary *)arg1 : nil;
    NSString *sendId = wcpl_stringForKeyInDictionary(params, @"sendId")
        ?: wcpl_stringForKeyInDictionary(params, @"sendid")
        ?: wcpl_stringForKeyInDictionary(params, @"send_id");
    NSString *channelId = wcpl_stringForKeyInDictionary(params, @"channelId")
        ?: wcpl_stringForKeyInDictionary(params, @"channelid")
        ?: wcpl_stringForKeyInDictionary(params, @"channel_id");
    NSString *msgType = wcpl_stringForKeyInDictionary(params, @"msgType")
        ?: wcpl_stringForKeyInDictionary(params, @"msgtype")
        ?: wcpl_stringForKeyInDictionary(params, @"msg_type");
    WCPLLogDebug(@"ReceiverQueryRedEnvelopesRequest: mainThread=%d sendId=%@ channelId=%@ msgType=%@ keys=%lu",
                 [NSThread isMainThread],
                 sendId ?: @"",
                 channelId ?: @"",
                 msgType ?: @"",
                 (unsigned long)params.count);
    %orig;
}

- (void)OpenRedEnvelopesRequest:(id)arg1 {
    NSDictionary *params = [arg1 isKindOfClass:[NSDictionary class]] ? (NSDictionary *)arg1 : nil;
    NSString *sendId = wcpl_stringForKeyInDictionary(params, @"sendId")
        ?: wcpl_stringForKeyInDictionary(params, @"sendid")
        ?: wcpl_stringForKeyInDictionary(params, @"send_id");
    NSString *channelId = wcpl_stringForKeyInDictionary(params, @"channelId")
        ?: wcpl_stringForKeyInDictionary(params, @"channelid")
        ?: wcpl_stringForKeyInDictionary(params, @"channel_id");
    NSString *msgType = wcpl_stringForKeyInDictionary(params, @"msgType")
        ?: wcpl_stringForKeyInDictionary(params, @"msgtype")
        ?: wcpl_stringForKeyInDictionary(params, @"msg_type");
    NSString *timingIdentifier = wcpl_stringForKeyInDictionary(params, @"timingIdentifier")
        ?: wcpl_stringForKeyInDictionary(params, @"timing_identifier");
    NSString *sessionUserName = wcpl_stringForKeyInDictionary(params, @"sessionUserName")
        ?: wcpl_stringForKeyInDictionary(params, @"sessionusername")
        ?: wcpl_stringForKeyInDictionary(params, @"session_user_name");
    NSString *sign = wcpl_stringForKeyInDictionary(params, @"sign");

    WCPLLogDebug(@"OpenRedEnvelopesRequest: mainThread=%d sendId=%@ channelId=%@ msgType=%@ timingType=%@ timingLen=%lu signLen=%lu session=%@ keys=%lu",
                 [NSThread isMainThread],
                 sendId ?: @"",
                 channelId ?: @"",
                 msgType ?: @"",
                 params[@"timingIdentifier"] ? NSStringFromClass([params[@"timingIdentifier"] class]) : @"",
                 (unsigned long)timingIdentifier.length,
                 (unsigned long)sign.length,
                 sessionUserName ?: @"",
                 (unsigned long)params.count);

    %orig;
}

- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;

    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
    WCPLLogDebug(@"红包公共回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");

    // 自动抢红包：处理查询回包 -> 排队打开
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
}

- (void)OnWCToOpenIMHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
    WCPLLogDebug(@"OpenIM红包回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
}

- (void)OnWCToLiveStreamHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
    WCPLLogDebug(@"LiveStream红包回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
}

- (void)OnWCToHongbaoCommonErrorResponse:(id)arg1 Request:(id)arg2 {
    %orig;
    wcpl_logHongbaoCommonErrorResponse(@"错误", arg1, arg2);
}

- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)arg1 Request:(id)arg2 {
    %orig;
    wcpl_logHongbaoCommonErrorResponse(@"系统错误", arg1, arg2);
}

%new
- (void)wcpl_handleRedEnvelopReceiverQueryResponse:(HongBaoRes *)res request:(HongBaoReq *)req {
    if (!res || !req) return;

    unsigned int cmdId = wcpl_hongbaoCmdId(res, req);
    // 非参数查询请求
    if (cmdId != 3) {
        return;
    }

    NSDictionary *(^parseRequestNativeUrlDict)() = ^NSDictionary *() {
        NSDictionary *requestDict = wcpl_dictionaryFromHongbaoBuffer(req.reqText);
        if (![requestDict isKindOfClass:[NSDictionary class]] || requestDict.count == 0) return nil;
        NSString *nativeUrl = wcpl_stringForKeyInDictionary(requestDict, @"nativeUrl");
        if (nativeUrl.length == 0) return nil;
        nativeUrl = [nativeUrl stringByRemovingPercentEncoding];
        if (nativeUrl.length == 0) return nil;

        NSDictionary *nativeUrlDict = wcpl_dictionaryFromQueryString(nativeUrl);
        if (nativeUrlDict.count > 0) return nativeUrlDict;

        NSRange qmark = [nativeUrl rangeOfString:@"?"];
        if (qmark.location != NSNotFound && qmark.location + 1 < nativeUrl.length) {
            nativeUrlDict = wcpl_dictionaryFromQueryString([nativeUrl substringFromIndex:qmark.location + 1]);
        }

        return nativeUrlDict;
    };

    NSDictionary *responseDict = wcpl_dictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]] || responseDict.count == 0) {
        return;
    }

    NSDictionary *requestNativeUrlDict = parseRequestNativeUrlDict();
    NSString *requestSign = wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sign");
    NSString *requestSendId = wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sendid")
        ?: wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sendId")
        ?: wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"send_id");

    WeChatRedEnvelopParam *mgrParams = [[WCPLRedEnvelopParamQueue sharedQueue] dequeueMatchingSign:requestSign sendId:requestSendId];
    WCPLLogDebug(@"红包查询回包: cmd=%u matched=%d signLen=%lu sendId=%@",
                 cmdId,
                 mgrParams != nil,
                 (unsigned long)requestSign.length,
                 requestSendId ?: @"");

    BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
        // 手动抢红包
        if (!mgrParams) { return NO; }

        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        if (!config.autoReceiveEnable) { return NO; }

        BOOL isGroupSession = ([mgrParams.sessionUserName rangeOfString:@"@chatroom"].location != NSNotFound);
        if (isGroupSession) {
            if (!config.groupRedEnvelopEnable) { return NO; }
            if (mgrParams.isGroupSender && !config.receiveSelfRedEnvelop) { return NO; }
            if (config.groupRedEnvelopScope == 1) {
                if (!wcpl_userNameInList(mgrParams.sessionUserName, config.allowedGroupList)) { return NO; }
            } else if (config.groupRedEnvelopScope == 2) {
                if (wcpl_userNameInList(mgrParams.sessionUserName, config.blockedGroupList)) { return NO; }
            }
        } else {
            if (!config.privateRedEnvelopEnable) { return NO; }
        }

        // 自己已经抢过
        if ([responseDict[@"receiveStatus"] integerValue] == 2) { return NO; }

        // 红包被抢完
        if ([responseDict[@"hbStatus"] integerValue] == 4) { return NO; }

        // 没有这个字段会被判定为使用外挂
        NSString *timingIdentifier = wcpl_stringForKeyInDictionary(responseDict, @"timingIdentifier")
            ?: wcpl_stringForKeyInDictionary(responseDict, @"timing_identifier");
        if (timingIdentifier.length == 0) { return NO; }

        if (mgrParams.isGroupSender) {
            // 自己发红包的时候没有 sign 字段
            return YES;
        } else {
            if (requestSign.length > 0 && ![requestSign isEqualToString:mgrParams.sign]) { return NO; }
            return YES;
        }
    };

    BOOL allowOpen = shouldReceiveRedEnvelop();
    if (mgrParams) {
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        BOOL isGroupSession = ([mgrParams.sessionUserName rangeOfString:@"@chatroom"].location != NSNotFound);
        WCPLLogDebug(@"红包回包判定: session=%@ isGroup=%d scope=%ld wl=%lu deny=%lu allow=%d",
                     mgrParams.sessionUserName ?: @"",
                     isGroupSession,
                     (long)config.groupRedEnvelopScope,
                     (unsigned long)config.allowedGroupList.count,
                     (unsigned long)config.blockedGroupList.count,
                     allowOpen);
    }

    if (allowOpen) {
        mgrParams.timingIdentifier = wcpl_stringForKeyInDictionary(responseDict, @"timingIdentifier")
            ?: wcpl_stringForKeyInDictionary(responseDict, @"timing_identifier");

        unsigned int delaySeconds = [self wcpl_calculateDelaySeconds];
        WCPLReceiveRedEnvelopOperation *operation = [[WCPLReceiveRedEnvelopOperation alloc] initWithRedEnvelopParam:mgrParams delay:delaySeconds];

        if ([WCPLRedEnvelopConfig sharedConfig].serialReceive) {
            [[WCPLRedEnvelopTaskManager sharedManager] addSerialTask:operation];
        } else {
            [[WCPLRedEnvelopTaskManager sharedManager] addNormalTask:operation];
        }
    }
}

%new
- (unsigned int)wcpl_calculateDelaySeconds {
    NSInteger configDelaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;

    if ([WCPLRedEnvelopConfig sharedConfig].serialReceive) {
        unsigned int serialDelaySeconds;
        if ([WCPLRedEnvelopTaskManager sharedManager].serialQueueIsEmpty) {
            serialDelaySeconds = configDelaySeconds;
        } else {
            serialDelaySeconds = 5;
        }

        return serialDelaySeconds;
    } else {
        return (unsigned int)configDelaySeconds;
    }
}

%end

%hook WCRedEnvelopesNetworkHelper

- (void)MessageReturnOnHongbao:(id)arg1 Event:(unsigned int)arg2 {
    WCPLLogDebug(@"HBNet回包: selector=%@ event=%u arg=%@",
                 NSStringFromSelector(_cmd),
                 arg2,
                 arg1 ? NSStringFromClass([arg1 class]) : @"");
    %orig;
}

- (void)MessageReturnOnOpenIMHongbao:(id)arg1 Event:(unsigned int)arg2 {
    WCPLLogDebug(@"HBNet(OpenIM)回包: selector=%@ event=%u arg=%@",
                 NSStringFromSelector(_cmd),
                 arg2,
                 arg1 ? NSStringFromClass([arg1 class]) : @"");
    %orig;
}

- (void)MessageReturnOnLiveStreamHongbao:(id)arg1 Event:(unsigned int)arg2 {
    WCPLLogDebug(@"HBNet(LiveStream)回包: selector=%@ event=%u arg=%@",
                 NSStringFromSelector(_cmd),
                 arg2,
                 arg1 ? NSStringFromClass([arg1 class]) : @"");
    %orig;
}

%end

%hook CMessageMgr

- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
    if ([WCPLFuncService shouldIgnoreMessageWrap:wrap]) {
        return;
    }

    %orig;

    switch(wrap.m_uiMessageType) {
        case 49: { // AppNode
            NSString *nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
            NSString *prefix = @"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?";
            if (nativeUrl.length == 0 || ![nativeUrl hasPrefix:prefix]) { break; }

            WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
            if (!config.autoReceiveEnable) { break; }

            id contactManager = WCPLGetService(objc_getClass("CContactMgr"));
            id selfContact = nil;
            if (contactManager && [contactManager respondsToSelector:@selector(getSelfContact)]) {
                selfContact = [contactManager getSelfContact];
            }
            NSString *selfUserName = wcpl_safeUserNameFromObject(selfContact) ?: @"";

            BOOL isSender = (selfUserName.length > 0 && [wrap.m_nsFromUsr isEqualToString:selfUserName]);
            BOOL isGroupReceiver = ([wrap.m_nsFromUsr rangeOfString:@"@chatroom"].location != NSNotFound);
            BOOL isGroupSender = (isSender && [wrap.m_nsToUsr rangeOfString:@"@chatroom"].location != NSNotFound);
            BOOL isGroup = (isGroupReceiver || isGroupSender);

            if (isGroup) {
                if (!config.groupRedEnvelopEnable) { break; }
                if (isGroupSender && !config.receiveSelfRedEnvelop) { break; }

                NSString *groupUserName = isGroupReceiver ? wrap.m_nsFromUsr : wrap.m_nsToUsr;
                if (groupUserName.length == 0) { break; }

                if (config.groupRedEnvelopScope == 1) { // 仅白名单
                    BOOL inWhiteList = wcpl_userNameInList(groupUserName, config.allowedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=白名单 wl=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.allowedGroupList.count,
                                 inWhiteList);
                    if (!inWhiteList) { break; }
                } else if (config.groupRedEnvelopScope == 2) { // 排除黑名单
                    BOOL inDenyList = wcpl_userNameInList(groupUserName, config.blockedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=黑名单 deny=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.blockedGroupList.count,
                                 !inDenyList);
                    if (inDenyList) { break; }
                } else {
                    WCPLLogDebug(@"群红包预检: session=%@ scope=全部", groupUserName);
                }
            } else {
                // 私聊红包：仅接收方处理
                if (!config.privateRedEnvelopEnable) { break; }
                if (isSender) { break; }
            }

            NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:[nativeUrl substringFromIndex:prefix.length] separator:@"&"];
            if (nativeUrlDict.count == 0) {
                nativeUrlDict = wcpl_dictionaryFromQueryString([nativeUrl substringFromIndex:prefix.length]);
            }
            if (nativeUrlDict.count == 0) {
                NSRange qmark = [nativeUrl rangeOfString:@"?"];
                if (qmark.location != NSNotFound && qmark.location + 1 < nativeUrl.length) {
                    nativeUrlDict = wcpl_dictionaryFromQueryString([nativeUrl substringFromIndex:qmark.location + 1]);
                }
            }
            if (nativeUrlDict.count == 0) {
                WCPLLogDebug(@"红包解析失败: nativeUrlDict 为空 url=%@", wcpl_sanitizeInlineText(nativeUrl, 160));
                break;
            }

            NSString *msgType = wcpl_stringForKeyInDictionary(nativeUrlDict, @"msgtype") ?: wcpl_stringForKeyInDictionary(nativeUrlDict, @"msgType");
            NSString *sendId = wcpl_stringForKeyInDictionary(nativeUrlDict, @"sendid") ?: wcpl_stringForKeyInDictionary(nativeUrlDict, @"sendId");
            NSString *channelId = wcpl_stringForKeyInDictionary(nativeUrlDict, @"channelid") ?: wcpl_stringForKeyInDictionary(nativeUrlDict, @"channelId");
            NSString *sign = wcpl_stringForKeyInDictionary(nativeUrlDict, @"sign");
            if (msgType.length == 0 || sendId.length == 0 || channelId.length == 0) {
                WCPLLogDebug(@"红包解析失败: msgType=%@ sendId=%@ channelId=%@ url=%@",
                             msgType ?: @"",
                             sendId ?: @"",
                             channelId ?: @"",
                             wcpl_sanitizeInlineText(nativeUrl, 160));
                break;
            }

            // 获取服务端验证参数
            NSMutableDictionary *params = [@{} mutableCopy];
            params[@"agreeDuty"] = @"0";
            params[@"channelId"] = channelId;
            params[@"inWay"] = @"0";
            params[@"msgType"] = msgType;
            params[@"nativeUrl"] = nativeUrl;
            params[@"sendId"] = sendId;

            WCRedEnvelopesLogicMgr *logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
            BOOL canQuery = (logicMgr && [logicMgr respondsToSelector:@selector(ReceiverQueryRedEnvelopesRequest:)]);
            BOOL canOpen = (logicMgr && [logicMgr respondsToSelector:@selector(OpenRedEnvelopesRequest:)]);
            WCPLLogDebug(@"红包逻辑管理器: mgr=%p class=%@ canQuery=%d canOpen=%d",
                         logicMgr,
                         logicMgr ? NSStringFromClass([logicMgr class]) : @"",
                         canQuery,
                         canOpen);
            if (canQuery) {
                [logicMgr ReceiverQueryRedEnvelopesRequest:params];
            } else {
                WCPLLogDebug(@"红包查询跳过: WCRedEnvelopesLogicMgr 不可用");
            }
            NSString *sessionForLog = isGroupSender ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
            WCPLLogDebug(@"红包查询请求: session=%@ sendId=%@ signLen=%lu", sessionForLog ?: @"", sendId, (unsigned long)sign.length);

            // 储存参数
            WeChatRedEnvelopParam *mgrParams = [[WeChatRedEnvelopParam alloc] init];
            mgrParams.msgType = msgType;
            mgrParams.sendId = sendId;
            mgrParams.channelId = channelId;
            if (selfContact) {
                if ([selfContact respondsToSelector:@selector(getContactDisplayName)]) {
                    @try {
                        id value = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(getContactDisplayName));
                        mgrParams.nickName = wcpl_trimString(value);
                    } @catch (__unused NSException *exception) {
                    }
                }
                if ([selfContact respondsToSelector:@selector(m_nsHeadImgUrl)]) {
                    @try {
                        id value = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsHeadImgUrl));
                        mgrParams.headImg = wcpl_trimString(value);
                    } @catch (__unused NSException *exception) {
                    }
                }
            }
            mgrParams.nativeUrl = nativeUrl;
            mgrParams.sessionUserName = isGroupSender ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
            mgrParams.sign = sign;
            mgrParams.isGroupSender = isGroupSender;

            [[WCPLRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
            WCPLLogDebug(@"红包入队: session=%@ sendId=%@ signLen=%lu",
                         mgrParams.sessionUserName ?: @"",
                         sendId,
                         (unsigned long)sign.length);

            break;
        }
        default:
            break;
    }
}

%end
