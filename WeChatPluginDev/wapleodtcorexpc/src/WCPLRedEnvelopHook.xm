#import "WCPLWeChatCompatibilityHeaders.h"
#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatMessageHeaders.h"
#import "WeChatRedEnvelopParam.h"
#import "WCRedEnvelopesNetworkHelper.h"
#import "WCPLRedEnvelopEntryCoordinator.h"
#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopBackgroundTaskTracker.h"
#import "WCPLRedEnvelopReceiverQueryTracker.h"
#import "WCPLRedEnvelopRequestParser.h"
#import "WCPLRedEnvelopSessionResolver.h"
#import "WCPLRedEnvelopSummaryPresenter.h"
#import "WCPLRedEnvelopTaskManager.h"
#import "WCPLRedEnvelopOpenReplyTracker.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLContactAdapter.h"
#import "WCPLFuncService.h"
#import "WCPLDispatchUtils.h"
#import "WCPLHookGovernance.h"
#import "WCPLAlertTextHelpers.h"
#import "WCPLLogger.h"
#import "WCPLMessagePersistenceAdapter.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenterAdapter.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

@interface WCRedEnvelopesLogicMgr (WCPLRedEnvelopOpen)
- (void)wcpl_handleRedEnvelopReceiverQueryResponse:(HongBaoRes *)res request:(HongBaoReq *)req;
- (void)wcpl_tryHandleReceiverQueryResponseDict:(NSDictionary *)responseDict
                                    requestSign:(NSString *)requestSign
                                   requestSendId:(NSString *)requestSendId
                                     retryIndex:(NSUInteger)retryIndex;
@end

@interface WCRedEnvelopesLogicMgr (WCPLRedEnvelopAutoReply)
- (void)wcpl_handleRedEnvelopOpenResponse:(HongBaoRes *)res request:(HongBaoReq *)req;
- (void)wcpl_trySendAutoReplyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup;
- (void)wcpl_trySendRedEnvelopNotifyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup amount:(NSInteger)amount totalAmount:(NSInteger)totalAmount;
- (BOOL)wcpl_sendTextMessage:(NSString *)content toSession:(NSString *)sessionUserName;
@end

static NSString *const kWCPLFileHelperUserName = @"filehelper";
static NSTimeInterval const kWCPLReceiverQueryMatchRetryDelay = 0.03;
static NSUInteger const kWCPLReceiverQueryMatchMaxRetryCount = 3;
static NSString *const kWCPLHookFeatureRedEnvelop = @"red_envelop";

static void wcpl_redEnvelopHookLogCMessageMgr(NSString *selectorName,
                                              NSString *stage,
                                              NSString *decision,
                                              WCPLHookOrigPolicy policy,
                                              NSString *detail) {
    wcpl_hookGovernanceLog(kWCPLHookFeatureRedEnvelop,
                           @"CMessageMgr",
                           selectorName,
                           stage,
                           decision,
                           policy,
                           detail);
}

static NSString *wcpl_replyTextForSession(NSString *sessionUserName, BOOL isGroup) {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *rawText = isGroup ? config.groupAutoReplyText : config.privateAutoReplyText;
    NSString *trimmed = WCPLTrimText(rawText);
    if (trimmed.length == 0) {
        return nil;
    }

    if (isGroup) {
        if (!config.groupRedEnvelopEnable) {
            return nil;
        }
        if (config.groupRedEnvelopScope == 1 && !WCPLRedEnvelopUserNameInList(sessionUserName, config.allowedGroupList)) {
            return nil;
        }
        if (config.groupRedEnvelopScope == 2 && WCPLRedEnvelopUserNameInList(sessionUserName, config.blockedGroupList)) {
            return nil;
        }
    } else {
        if (!config.privateRedEnvelopEnable) {
            return nil;
        }
    }

    return trimmed;
}

static NSString *wcpl_currencyYuanString(NSInteger amountInCent) {
    if (amountInCent <= 0) {
        return @"0.00";
    }
    double amount = ((double)amountInCent) / 100.0;
    return [NSString stringWithFormat:@"%.2f", amount];
}

__attribute__((constructor))
static void wcpl_redEnvelopSummaryPresenterInstallOnLoad(void) {
    WCPLInstallRedEnvelopSummaryPresenterHook();
}

static NSString *wcpl_redEnvelopNotifyMessage(NSString *sessionUserName, NSInteger amount, NSInteger totalAmount) {
    NSString *sceneName = WCPLRedEnvelopNotifySceneDisplayText(sessionUserName);

    NSString *receiveYuan = wcpl_currencyYuanString(amount);
    NSString *totalYuan = wcpl_currencyYuanString(totalAmount);
    BOOL hasTotal = (totalAmount > 0);
    if (!hasTotal && amount > 0) {
        totalYuan = receiveYuan;
        hasTotal = YES;
    }

    NSMutableString *message = [NSMutableString stringWithFormat:@"🎉 抢到红包提醒\n会话：%@\n本次金额：¥%@", sceneName, receiveYuan];
    [message appendFormat:@"\n红包总额：%@", hasTotal ? [NSString stringWithFormat:@"¥%@", totalYuan] : @"未获取"];
    [message appendString:@"\n状态：已自动领取"];
    return message;
}

static int wcpl_intFromSelector(id obj, SEL sel) {
    if (!(obj && sel && [obj respondsToSelector:sel])) {
        return 0;
    }
    @try {
        return ((int (*)(id, SEL))objc_msgSend)(obj, sel);
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

%hook WCRedEnvelopesLogicMgr

- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1 {
    if ([arg1 isKindOfClass:[NSDictionary class]]) {
        WCPLTrackOpenReplySessionFromRequestDictionary((NSDictionary *)arg1);
    }

    NSDictionary *params = [arg1 isKindOfClass:[NSDictionary class]] ? (NSDictionary *)arg1 : nil;
    NSString *sendId = WCPLRedEnvelopStringForKeyInDictionary(params, @"sendId")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"sendid")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"send_id");
    NSString *channelId = WCPLRedEnvelopStringForKeyInDictionary(params, @"channelId")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"channelid")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"channel_id");
    NSString *msgType = WCPLRedEnvelopStringForKeyInDictionary(params, @"msgType")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"msgtype")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"msg_type");
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
    NSString *sendId = WCPLRedEnvelopStringForKeyInDictionary(params, @"sendId")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"sendid")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"send_id");
    NSString *channelId = WCPLRedEnvelopStringForKeyInDictionary(params, @"channelId")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"channelid")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"channel_id");
    NSString *msgType = WCPLRedEnvelopStringForKeyInDictionary(params, @"msgType")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"msgtype")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"msg_type");
    NSString *timingIdentifier = WCPLRedEnvelopStringForKeyInDictionary(params, @"timingIdentifier")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"timing_identifier");
    NSString *sessionUserName = WCPLRedEnvelopStringForKeyInDictionary(params, @"sessionUserName")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"sessionusername")
        ?: WCPLRedEnvelopStringForKeyInDictionary(params, @"session_user_name");
    NSString *sign = WCPLRedEnvelopStringForKeyInDictionary(params, @"sign");

    WCPLTrackOpenReplySession(sendId, sign, timingIdentifier, sessionUserName);
    if (params) {
        WCPLTrackOpenReplySessionFromRequestDictionary(params);
    }

    WCPLLogDebug(@"OpenRedEnvelopesRequest: mainThread=%d sendId=%@ channelId=%@ msgType=%@ timingType=%@ timingLen=%lu signLen=%lu session=%@ tracked=%d keys=%lu",
                 [NSThread isMainThread],
                 sendId ?: @"",
                 channelId ?: @"",
                 msgType ?: @"",
                 params[@"timingIdentifier"] ? NSStringFromClass([params[@"timingIdentifier"] class]) : @"",
                 (unsigned long)timingIdentifier.length,
                 (unsigned long)sign.length,
                 sessionUserName ?: @"",
                 sessionUserName.length > 0,
                 (unsigned long)params.count);

    %orig;
}

- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    unsigned int cmdId = WCPLRedEnvelopCommandId(arg1, arg2);
    WCPLLogDebug(@"红包公共回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");

    // 自动抢红包：处理查询回包 -> 排队打开
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
    // 自动回复：处理打开回包（cmd=4）
    [self wcpl_handleRedEnvelopOpenResponse:arg1 request:arg2];
    %orig;
}

- (void)OnWCToOpenIMHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    unsigned int cmdId = WCPLRedEnvelopCommandId(arg1, arg2);
    WCPLLogDebug(@"OpenIM红包回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
    [self wcpl_handleRedEnvelopOpenResponse:arg1 request:arg2];
    %orig;
}

- (void)OnWCToLiveStreamHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    unsigned int cmdId = WCPLRedEnvelopCommandId(arg1, arg2);
    WCPLLogDebug(@"LiveStream红包回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
    [self wcpl_handleRedEnvelopOpenResponse:arg1 request:arg2];
    %orig;
}

- (void)OnWCToHongbaoCommonErrorResponse:(id)arg1 Request:(id)arg2 {
    %orig;
    WCPLLogRedEnvelopCommonErrorResponse(@"错误", arg1, arg2);
}

- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)arg1 Request:(id)arg2 {
    %orig;
    WCPLLogRedEnvelopCommonErrorResponse(@"系统错误", arg1, arg2);
}

%new
- (void)wcpl_handleRedEnvelopReceiverQueryResponse:(HongBaoRes *)res request:(HongBaoReq *)req {
    if (!res || !req) return;

    unsigned int cmdId = WCPLRedEnvelopCommandId(res, req);
    // 非参数查询请求
    if (cmdId != 3) {
        return;
    }

    NSDictionary *responseDict = WCPLRedEnvelopDictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]] || responseDict.count == 0) {
        return;
    }

    NSDictionary *requestDict = WCPLRedEnvelopDictionaryFromHongbaoBuffer(req.reqText);
    if (![requestDict isKindOfClass:[NSDictionary class]]) {
        requestDict = @{};
    }

    NSDictionary *requestNativeUrlDict = WCPLRedEnvelopNativeUrlDictionaryFromRequestDictionary(requestDict);
    NSString *requestSign = WCPLRedEnvelopStringForKeyInDictionary(requestNativeUrlDict, @"sign");
    NSString *requestSendId = WCPLRedEnvelopStringForKeyInDictionary(requestNativeUrlDict, @"sendid")
        ?: WCPLRedEnvelopStringForKeyInDictionary(requestNativeUrlDict, @"sendId")
        ?: WCPLRedEnvelopStringForKeyInDictionary(requestNativeUrlDict, @"send_id");

    [self wcpl_tryHandleReceiverQueryResponseDict:responseDict
                                      requestSign:requestSign
                                     requestSendId:requestSendId
                                       retryIndex:0];
}

%new
- (void)wcpl_tryHandleReceiverQueryResponseDict:(NSDictionary *)responseDict
                                    requestSign:(NSString *)requestSign
                                   requestSendId:(NSString *)requestSendId
                                     retryIndex:(NSUInteger)retryIndex {
    NSString *normalizedSign = [requestSign isKindOfClass:[NSString class]] ? requestSign : @"";
    NSString *normalizedSendId = [requestSendId isKindOfClass:[NSString class]] ? requestSendId : @"";
    NSDictionary *safeResponseDict = [responseDict isKindOfClass:[NSDictionary class]] ? responseDict : @{};

    WeChatRedEnvelopParam *mgrParams = [[WCPLRedEnvelopParamQueue sharedQueue] dequeueMatchingSign:normalizedSign sendId:normalizedSendId];
    if (retryIndex == 0) {
        WCPLLogDebug(@"红包查询回包: cmd=3 matched=%d signLen=%lu sendId=%@",
                     mgrParams != nil,
                     (unsigned long)normalizedSign.length,
                     normalizedSendId ?: @"");
    } else {
        WCPLLogDebug(@"红包查询回包重试: retry=%lu matched=%d signLen=%lu sendId=%@",
                     (unsigned long)retryIndex,
                     mgrParams != nil,
                     (unsigned long)normalizedSign.length,
                     normalizedSendId ?: @"");
    }

    if (!mgrParams) {
        if (!WCPLIsReceiverQueryPending(normalizedSendId, normalizedSign)) {
            WCPLLogDebug(@"红包查询回包忽略: track_missing signLen=%lu sendId=%@",
                         (unsigned long)normalizedSign.length,
                         normalizedSendId ?: @"");
            return;
        }

        BOOL hasMatchKey = (normalizedSign.length > 0 || normalizedSendId.length > 0);
        if (hasMatchKey && retryIndex < kWCPLReceiverQueryMatchMaxRetryCount) {
            __weak typeof(self) weakSelf = self;
            NSDictionary *responseCopy = [safeResponseDict copy] ?: @{};
            NSString *signCopy = [normalizedSign copy] ?: @"";
            NSString *sendIdCopy = [normalizedSendId copy] ?: @"";
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLReceiverQueryMatchRetryDelay * NSEC_PER_SEC)),
                           dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
                __strong typeof(weakSelf) strongSelf = weakSelf;
                if (!strongSelf) {
                    return;
                }
                [strongSelf wcpl_tryHandleReceiverQueryResponseDict:responseCopy
                                                        requestSign:signCopy
                                                       requestSendId:sendIdCopy
                                                         retryIndex:retryIndex + 1];
            });
        }
        if (!hasMatchKey || retryIndex >= kWCPLReceiverQueryMatchMaxRetryCount) {
            NSTimeInterval queryElapsed = WCPLMarkReceiverQueryFinished(normalizedSendId, normalizedSign);
            if (queryElapsed >= 0) {
                WCPLLogDebug(@"红包查询结束: result=no_match elapsed=%.3fs signLen=%lu sendId=%@",
                             queryElapsed,
                             (unsigned long)normalizedSign.length,
                             normalizedSendId ?: @"");
            }
            WCPLEndHongbaoBackgroundTask(normalizedSendId, normalizedSign, @"query_no_match");
        }
        return;
    }

    NSTimeInterval queryElapsed = WCPLMarkReceiverQueryFinished(normalizedSendId, normalizedSign);
    if (queryElapsed >= 0) {
        WCPLLogDebug(@"红包查询结束: result=matched elapsed=%.3fs signLen=%lu sendId=%@",
                     queryElapsed,
                     (unsigned long)normalizedSign.length,
                     normalizedSendId ?: @"");
    }

    BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        if (!config.autoReceiveEnable) { return NO; }

        BOOL isGroupSession = WCPLIsChatRoomName(mgrParams.sessionUserName);
        if (isGroupSession) {
            if (!config.groupRedEnvelopEnable) { return NO; }
            if (mgrParams.isGroupSender && !config.receiveSelfRedEnvelop) { return NO; }
            if (config.groupRedEnvelopScope == 1) {
                if (!WCPLRedEnvelopUserNameInList(mgrParams.sessionUserName, config.allowedGroupList)) { return NO; }
            } else if (config.groupRedEnvelopScope == 2) {
                if (WCPLRedEnvelopUserNameInList(mgrParams.sessionUserName, config.blockedGroupList)) { return NO; }
            }
        } else {
            if (!config.privateRedEnvelopEnable) { return NO; }
        }

        // 自己已经抢过
        if ([safeResponseDict[@"receiveStatus"] integerValue] == 2) { return NO; }

        // 红包被抢完
        if ([safeResponseDict[@"hbStatus"] integerValue] == 4) { return NO; }

        // 没有这个字段会被判定为使用外挂
        NSString *timingIdentifier = WCPLRedEnvelopStringForKeyInDictionary(safeResponseDict, @"timingIdentifier")
            ?: WCPLRedEnvelopStringForKeyInDictionary(safeResponseDict, @"timing_identifier");
        if (timingIdentifier.length == 0) { return NO; }

        if (mgrParams.isGroupSender) {
            // 自己发红包的时候没有 sign 字段
            return YES;
        } else {
            if (normalizedSign.length > 0 && ![normalizedSign isEqualToString:mgrParams.sign]) { return NO; }
            return YES;
        }
    };

    BOOL allowOpen = shouldReceiveRedEnvelop();
    if (mgrParams) {
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        BOOL isGroupSession = WCPLIsChatRoomName(mgrParams.sessionUserName);
        WCPLLogDebug(@"红包回包判定: session=%@ isGroup=%d scope=%ld wl=%lu deny=%lu allow=%d",
                     mgrParams.sessionUserName ?: @"",
                     isGroupSession,
                     (long)config.groupRedEnvelopScope,
                     (unsigned long)config.allowedGroupList.count,
                     (unsigned long)config.blockedGroupList.count,
                     allowOpen);
    }

    if (allowOpen) {
        mgrParams.timingIdentifier = WCPLRedEnvelopStringForKeyInDictionary(safeResponseDict, @"timingIdentifier")
            ?: WCPLRedEnvelopStringForKeyInDictionary(safeResponseDict, @"timing_identifier");

        unsigned int delaySeconds = [self wcpl_calculateDelaySeconds];
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        BOOL fastPath = (delaySeconds == 0);
        if (fastPath) {
            NSDictionary *params = [mgrParams toParams];
            WCPLLogInfo(@"[抢红包] 极速直发: session=%@ sendId=%@ serial=%d",
                        mgrParams.sessionUserName ?: @"",
                        mgrParams.sendId ?: @"",
                        config.serialReceive ? 1 : 0);
            void (^performOpen)(void) = ^{
                if ([self respondsToSelector:@selector(OpenRedEnvelopesRequest:)]) {
                    [self OpenRedEnvelopesRequest:params];
                    WCPLLogInfo(@"[抢红包] 极速直发完成: sendId=%@", mgrParams.sendId ?: @"");
                } else {
                    WCPLLogWarning(@"[抢红包] 极速直发失败: OpenRedEnvelopesRequest 不可用 sendId=%@",
                                   mgrParams.sendId ?: @"");
                    WCPLEndHongbaoBackgroundTask(mgrParams.sendId, mgrParams.sign, @"fast_open_unavailable");
                }
            };
            if ([NSThread isMainThread]) {
                performOpen();
            } else {
                dispatch_async(dispatch_get_main_queue(), performOpen);
            }
        } else {
            WCPLReceiveRedEnvelopOperation *operation = [[WCPLReceiveRedEnvelopOperation alloc] initWithRedEnvelopParam:mgrParams delay:delaySeconds];
            if (config.serialReceive) {
                [[WCPLRedEnvelopTaskManager sharedManager] addSerialTask:operation];
            } else {
                [[WCPLRedEnvelopTaskManager sharedManager] addNormalTask:operation];
            }
        }
    } else {
        WCPLEndHongbaoBackgroundTask(normalizedSendId, normalizedSign, @"query_skip");
    }
}

%new
- (unsigned int)wcpl_calculateDelaySeconds {
    NSInteger configDelaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;
    if (configDelaySeconds < 0) {
        configDelaySeconds = 0;
    }
    return (unsigned int)configDelaySeconds;
}

%new
- (void)wcpl_handleRedEnvelopOpenResponse:(HongBaoRes *)res request:(HongBaoReq *)req {
    if (!res || !req) {
        return;
    }

    unsigned int cmdId = WCPLRedEnvelopCommandId(res, req);
    if (cmdId != 4) {
        return;
    }

    NSDictionary *responseDict = WCPLRedEnvelopDictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]]) {
        responseDict = @{};
    }

    NSDictionary *requestDict = WCPLRedEnvelopDictionaryFromHongbaoBuffer(req.reqText);
    if (![requestDict isKindOfClass:[NSDictionary class]]) {
        requestDict = @{};
    }

    NSDictionary *requestNativeUrlDict = WCPLRedEnvelopNativeUrlDictionaryFromRequestDictionary(requestDict);

    NSString *sendId = WCPLRedEnvelopStringForKeysInDictionary(requestDict, @[@"sendId", @"sendid", @"send_id"])
        ?: WCPLRedEnvelopStringForKeysInDictionary(responseDict, @[@"sendId", @"sendid", @"send_id"])
        ?: WCPLRedEnvelopStringForKeysInDictionary(requestNativeUrlDict, @[@"sendId", @"sendid", @"send_id"]);
    NSString *sign = WCPLRedEnvelopStringForKeysInDictionary(requestDict, @[@"sign"])
        ?: WCPLRedEnvelopStringForKeysInDictionary(responseDict, @[@"sign"])
        ?: WCPLRedEnvelopStringForKeysInDictionary(requestNativeUrlDict, @[@"sign"]);
    NSString *timingIdentifier = WCPLRedEnvelopStringForKeysInDictionary(requestDict, @[@"timingIdentifier", @"timing_identifier"])
        ?: WCPLRedEnvelopStringForKeysInDictionary(responseDict, @[@"timingIdentifier", @"timing_identifier"])
        ?: WCPLRedEnvelopStringForKeysInDictionary(requestNativeUrlDict, @[@"timingIdentifier", @"timing_identifier"]);

    // 后台场景下尽快释放保活任务，避免无意义占用。
    WCPLEndHongbaoBackgroundTask(sendId, sign, @"open_response");

    NSInteger amount = 0;
    NSInteger totalAmount = 0;
    NSInteger receiveStatus = 0;
    NSInteger retCode = 0;

    BOOL hasHbStatus = NO;
    NSInteger hbStatus = WCPLRedEnvelopIntegerForKeysInDictionary(responseDict, @[@"hbStatus", @"hb_status"], &hasHbStatus);

    BOOL success = WCPLRedEnvelopOpenResponseLooksSuccessful(responseDict, res, &amount, &totalAmount, &receiveStatus, &retCode);

    if (!success) {
        int errorType = wcpl_intFromSelector(res, @selector(errorType));
        int platRet = wcpl_intFromSelector(res, @selector(platRet));
        WCPLLogDebug(@"红包打开回包: cmd=4 未成功 errorType=%d platRet=%d receiveStatus=%ld hasReceiveStatus=%d retCode=%ld hasRetCode=%d amount=%ld hasAmount=%d hbStatus=%ld hasHbStatus=%d sendId=%@ signLen=%lu timingLen=%lu reqKeys=%lu resKeys=%lu",
                     errorType,
                     platRet,
                     (long)receiveStatus,
                     (receiveStatus != 0),
                     (long)retCode,
                     (retCode != 0),
                     (long)amount,
                     (amount != 0),
                     (long)hbStatus,
                     hasHbStatus,
                     sendId ?: @"",
                     (unsigned long)sign.length,
                     (unsigned long)timingIdentifier.length,
                     (unsigned long)requestDict.count,
                     (unsigned long)responseDict.count);
        return;
    }

    // 仅在“实际抢到金额”时触发自动回复与通知，避免空抢/未抢到也触发。
    BOOL didReceiveAmount = (amount > 0);
    if (!didReceiveAmount) {
        WCPLLogDebug(@"红包打开回包: cmd=4 成功但未抢到金额，跳过自动回复与通知 receiveStatus=%ld retCode=%ld amount=%ld hbStatus=%ld hasHbStatus=%d sendId=%@ signLen=%lu timingLen=%lu",
                     (long)receiveStatus,
                     (long)retCode,
                     (long)amount,
                     (long)hbStatus,
                     hasHbStatus,
                     sendId ?: @"",
                     (unsigned long)sign.length,
                     (unsigned long)timingIdentifier.length);
        return;
    }

    NSString *session = WCPLRedEnvelopStringForKeysInDictionary(requestDict,
                                                       @[@"sessionUserName", @"sessionusername", @"session_user_name"]);
    NSString *sessionSource = @"request";
    session = WCPLBestRedEnvelopSessionCandidate(session, requestDict, responseDict, requestNativeUrlDict, req, &sessionSource);

    if (session.length == 0) {
        NSString *trackedSource = nil;
        session = WCPLLookupTrackedOpenSession(sendId, sign, timingIdentifier, &trackedSource);
        if (session.length > 0) {
            sessionSource = trackedSource.length > 0 ? [NSString stringWithFormat:@"tracker:%@", trackedSource] : @"tracker";
        }
    }

    if (session.length == 0) {
        NSString *selfUserName = WCPLRedEnvelopCurrentSelfUserName();
        if (selfUserName.length > 0) {
            session = selfUserName;
            sessionSource = @"fallback:self";
            WCPLLogWarning(@"红包打开回包: 使用兜底 self 会话避免通知/回复丢失 sendId=%@ signLen=%lu timingLen=%lu",
                           sendId ?: @"",
                           (unsigned long)sign.length,
                           (unsigned long)timingIdentifier.length);
        }
    }

    if (session.length == 0) {
        WCPLLogDebug(@"红包打开回包: cmd=4 缺少 sessionUserName，跳过自动回复 sendId=%@ signLen=%lu timingLen=%lu reqKeys=%lu nativeKeys=%lu resKeys=%lu",
                     sendId ?: @"",
                     (unsigned long)sign.length,
                     (unsigned long)timingIdentifier.length,
                     (unsigned long)requestDict.count,
                     (unsigned long)requestNativeUrlDict.count,
                     (unsigned long)responseDict.count);
        return;
    }

    BOOL isGroup = WCPLIsChatRoomName(session);
    WCPLLogDebug(@"红包打开回包: cmd=4 成功 isGroup=%d session=%@ source=%@ sendId=%@ signLen=%lu timingLen=%lu receiveStatus=%ld retCode=%ld amount=%ld",
                 isGroup,
                 session,
                 sessionSource,
                 sendId ?: @"",
                 (unsigned long)sign.length,
                 (unsigned long)timingIdentifier.length,
                 (long)receiveStatus,
                 (long)retCode,
                 (long)amount);
    [self wcpl_trySendAutoReplyForSession:session isGroup:isGroup];
    [self wcpl_trySendRedEnvelopNotifyForSession:session isGroup:isGroup amount:amount totalAmount:totalAmount];
}

%new
- (void)wcpl_trySendAutoReplyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup {
    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    NSString *replyText = wcpl_replyTextForSession(session, isGroup);
    if (replyText.length == 0) {
        WCPLLogDebug(@"红包自动回复跳过: session=%@ isGroup=%d 原因=未配置文案或未命中名单规则", session, isGroup);
        return;
    }

    NSString *sessionCopy = [session copy];
    NSString *replyCopy = [replyText copy];
    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *replyPreview = WCPLSanitizeInlineText(replyCopy, 80) ?: @"";
        WCPLLogDebug(@"红包自动回复准备: session=%@ isGroup=%d textLen=%lu preview=%@",
                     sessionCopy,
                     isGroup,
                     (unsigned long)replyCopy.length,
                     replyPreview);

        BOOL sent = [self wcpl_sendTextMessage:replyCopy toSession:sessionCopy];
        if (!sent) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                BOOL retrySent = [self wcpl_sendTextMessage:replyCopy toSession:sessionCopy];
                WCPLLogDebug(@"红包自动回复重试: session=%@ isGroup=%d textLen=%lu sent=%d",
                             sessionCopy,
                             isGroup,
                             (unsigned long)replyCopy.length,
                             retrySent);
            });
        }
        WCPLLogDebug(@"红包自动回复: session=%@ isGroup=%d textLen=%lu preview=%@ sent=%d",
                     sessionCopy,
                     isGroup,
                     (unsigned long)replyCopy.length,
                     replyPreview,
                     sent);
    });
}

%new
- (void)wcpl_trySendRedEnvelopNotifyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup amount:(NSInteger)amount totalAmount:(NSInteger)totalAmount {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSInteger target = config.redEnvelopNotifyTarget;
    if (target == WCPLRedEnvelopNotifyTargetDisabled) {
        return;
    }

    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    NSString *notifyReceiver = nil;
    if (target == WCPLRedEnvelopNotifyTargetSelf) {
        notifyReceiver = WCPLRedEnvelopCurrentSelfUserName();
    } else if (target == WCPLRedEnvelopNotifyTargetFileHelper) {
        notifyReceiver = kWCPLFileHelperUserName;
    }

    notifyReceiver = WCPLRedEnvelopNormalizeSessionUserName(notifyReceiver);
    if (notifyReceiver.length == 0) {
        WCPLLogDebug(@"抢包通知跳过: 原因=目标用户为空 session=%@ target=%ld", session, (long)target);
        return;
    }

    NSString *message = wcpl_redEnvelopNotifyMessage(session, amount, totalAmount);
    if (isGroup) {
        message = [message stringByAppendingString:@"\n场景：群聊"];
    } else {
        message = [message stringByAppendingString:@"\n场景：私聊"];
    }

    NSString *sceneDisplay = WCPLRedEnvelopNotifySceneDisplayText(session);
    NSString *messagePreview = WCPLSanitizeInlineText(message, 120) ?: @"";
    WCPLLogDebug(@"抢包通知准备: sourceSession=%@ scene=%@ target=%ld receiver=%@ msgLen=%lu preview=%@",
                 session,
                 sceneDisplay ?: @"",
                 (long)target,
                 notifyReceiver,
                 (unsigned long)message.length,
                 messagePreview);

    NSString *sourceSessionCopy = [session copy];
    NSString *targetSessionCopy = [notifyReceiver copy];
    NSString *messageCopy = [message copy];
    NSString *sceneDisplayCopy = sceneDisplay.length > 0 ? [sceneDisplay copy] : @"";
    NSString *messagePreviewCopy = messagePreview.length > 0 ? [messagePreview copy] : @"";
    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL sent = [self wcpl_sendTextMessage:messageCopy toSession:targetSessionCopy];
        NSString *actualTargetSession = targetSessionCopy;
        BOOL fallbackToFileHelper = NO;

        if (!sent && target == WCPLRedEnvelopNotifyTargetSelf) {
            BOOL fallbackSent = [self wcpl_sendTextMessage:messageCopy toSession:kWCPLFileHelperUserName];
            if (fallbackSent) {
                sent = YES;
                actualTargetSession = kWCPLFileHelperUserName;
                fallbackToFileHelper = YES;
            }
        }

        if (!sent) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                BOOL retrySent = [self wcpl_sendTextMessage:messageCopy toSession:targetSessionCopy];
                WCPLLogDebug(@"抢包通知重试: sourceSession=%@ targetSession=%@ target=%ld sent=%d",
                             sourceSessionCopy,
                             targetSessionCopy,
                             (long)target,
                             retrySent);
            });
        }

        WCPLLogDebug(@"抢包通知发送: sourceSession=%@ scene=%@ targetSession=%@ target=%ld amount=%ld total=%ld msgLen=%lu preview=%@ sent=%d fallbackFileHelper=%d",
                     sourceSessionCopy,
                     sceneDisplayCopy,
                     actualTargetSession,
                     (long)target,
                     (long)amount,
                     (long)totalAmount,
                     (unsigned long)messageCopy.length,
                     messagePreviewCopy,
                     sent,
                     fallbackToFileHelper);
    });
}

%new
- (BOOL)wcpl_sendTextMessage:(NSString *)content toSession:(NSString *)sessionUserName {
    if (![NSThread isMainThread]) {
        __block BOOL sentOnMain = NO;
        NSString *contentCopy = [content copy];
        NSString *sessionCopy = [sessionUserName copy];
        __weak id weakSelf = self;
        BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, ^{
            id strongSelf = weakSelf;
            if (!strongSelf) {
                return;
            }
            sentOnMain = [strongSelf wcpl_sendTextMessage:contentCopy toSession:sessionCopy];
        });
        if (!didFinish) {
            WCPLLogWarning(@"红包自动回复失败: 主线程调度超时 session=%@",
                           WCPLRedEnvelopNormalizeSessionUserName(sessionCopy) ?: @"");
            return NO;
        }
        return sentOnMain;
    }

    NSString *text = WCPLTrimText(content);
    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(sessionUserName);
    if (text.length == 0 || session.length == 0) {
        return NO;
    }

    NSString *selfUserName = WCPLRedEnvelopCurrentSelfUserName();
    if (selfUserName.length == 0) {
        WCPLLogDebug(@"红包自动回复失败: 无法获取 selfUserName session=%@", session);
        return NO;
    }

    Class msgWrapClass = objc_getClass("CMessageWrap");
    if (!msgWrapClass) {
        WCPLLogDebug(@"红包自动回复失败: CMessageWrap 类不可用");
        return NO;
    }

    id msgWrap = nil;
    if ([msgWrapClass instancesRespondToSelector:@selector(initWithMsgType:nsFromUsr:)]) {
        @try {
            msgWrap = [[msgWrapClass alloc] initWithMsgType:1 nsFromUsr:selfUserName];
        } @catch (__unused NSException *exception0) {
            msgWrap = nil;
        }
    }
    if (!msgWrap && [msgWrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        @try {
            msgWrap = [[msgWrapClass alloc] initWithMsgType:1];
        } @catch (__unused NSException *exception) {
            msgWrap = nil;
        }
    }
    if (!msgWrap) {
        @try {
            msgWrap = [[msgWrapClass alloc] init];
        } @catch (__unused NSException *exception2) {
            msgWrap = nil;
        }
    }
    if (!msgWrap) {
        return NO;
    }

    if ([msgWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiMessageType:), 1);
    } else {
        @try {
            [msgWrap setValue:@(1) forKey:@"m_uiMessageType"];
        } @catch (__unused NSException *exception3) { WCPLCatchLog(exception3); }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsContent:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsContent:), text);
    } else {
        @try {
            [msgWrap setValue:text forKey:@"m_nsContent"];
        } @catch (__unused NSException *exception4) { WCPLCatchLog(exception4); }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsToUsr:), session);
    } else {
        @try {
            [msgWrap setValue:session forKey:@"m_nsToUsr"];
        } @catch (__unused NSException *exception5) { WCPLCatchLog(exception5); }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsFromUsr:), selfUserName);
    } else {
        @try {
            [msgWrap setValue:selfUserName forKey:@"m_nsFromUsr"];
        } @catch (__unused NSException *exception6) { WCPLCatchLog(exception6); }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsPushContent:), text);
    } else {
        @try {
            [msgWrap setValue:text forKey:@"m_nsPushContent"];
        } @catch (__unused NSException *exceptionPush) { WCPLCatchLog(exceptionPush); }
    }

    unsigned int createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([msgWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiCreateTime:), createTime);
    } else {
        @try {
            [msgWrap setValue:@(createTime) forKey:@"m_uiCreateTime"];
        } @catch (__unused NSException *exceptionCreateTime) { WCPLCatchLog(exceptionCreateTime); }
    }

    if ([msgWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiStatus:), 0);
    } else {
        @try {
            [msgWrap setValue:@(0) forKey:@"m_uiStatus"];
        } @catch (__unused NSException *exceptionStatus) { WCPLCatchLog(exceptionStatus); }
    }

    if (WCPLIsChatRoomName(session)) {
        if ([msgWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsRealChatUsr:), selfUserName);
        } else {
            @try {
                [msgWrap setValue:selfUserName forKey:@"m_nsRealChatUsr"];
            } @catch (__unused NSException *exceptionRealChat) { WCPLCatchLog(exceptionRealChat); }
        }
    }

    __block BOOL sent = NO;
    __block NSString *path = @"";

    CMessageMgr *msgMgr = WCPLServiceCenterAdapterGetService(objc_getClass("CMessageMgr"));
    if (!msgMgr) {
        WCPLLogDebug(@"红包自动回复失败: CMessageMgr 不可用 session=%@", session);
        return NO;
    }

    void (^sendBlock)(void) = ^{
        if ([msgMgr respondsToSelector:@selector(AddMsg:MsgWrap:)]) {
            @try {
                [msgMgr AddMsg:session MsgWrap:msgWrap];
                sent = YES;
                path = @"AddMsg";
                return;
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }

        WCPLAddLocalMsgInsertPath insertPath = WCPLAddLocalMsgInsertPathNone;
        sent = WCPLAddLocalMsgInsert((WCPLAddLocalMsgInsertRequest){
                                         .messageMgr = msgMgr,
                                         .sessionUserName = session,
                                         .msgWrap = msgWrap,
                                         .fixTime = YES,
                                         .notify = YES,
                                         .unique = NO,
                                     },
                                     &insertPath);
        if (sent) {
            path = WCPLAddLocalMsgInsertPathDescription(insertPath);
        }
    };

    sendBlock();

    if (!sent) {
        WCPLLogDebug(@"红包自动回复发送路径降级: session=%@ reason=AddMsg链路未命中，尝试SendMessageMgr", session);

        id sendMessageMgr = WCPLServiceCenterAdapterGetService(objc_getClass("SendMessageMgr"));
        if (sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr,
                                                           @selector(AddMsgToSendTable:MsgWrap:),
                                                           session,
                                                           msgWrap);
                sent = YES;
                path = @"SendMessageMgrFallback";
            } @catch (__unused NSException *exceptionSendMgr) {
                sent = NO;
            }
        }
    }

    if (!sent) {
        WCPLLogDebug(@"红包自动回复发送路径降级: session=%@ reason=SendMessageMgr失败，尝试BypSendMessageMgr", session);

        id bypSendMessageMgr = nil;
        if ([msgMgr respondsToSelector:@selector(m_bypSendMessageMgr)]) {
            @try {
                bypSendMessageMgr = ((id (*)(id, SEL))objc_msgSend)(msgMgr, @selector(m_bypSendMessageMgr));
            } @catch (__unused NSException *exceptionBypGetter) {
                bypSendMessageMgr = nil;
            }
        }
        if (!bypSendMessageMgr) {
            @try {
                bypSendMessageMgr = [msgMgr valueForKey:@"m_bypSendMessageMgr"];
            } @catch (__unused NSException *exceptionBypKVC) {
                bypSendMessageMgr = nil;
            }
        }

        if (bypSendMessageMgr && [bypSendMessageMgr respondsToSelector:@selector(StartSendMsg:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(bypSendMessageMgr, @selector(StartSendMsg:), msgWrap);
                sent = YES;
                path = @"BypSendMessageMgrFallback";
            } @catch (__unused NSException *exceptionBypSend) {
                sent = NO;
            }
        }
    }

    WCPLLogDebug(@"红包自动回复发送: session=%@ sent=%d path=%@ mainThread=%d",
                 session,
                 sent,
                 path,
                 [NSThread isMainThread]);
    return sent;
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
    static NSString *const kHookSelector = @"AsyncOnAddMsg:MsgWrap:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    if ([WCPLFuncService shouldIgnoreMessageWrap:wrap]) {
        if (wrap.m_uiMessageType == 49) {
            WCPLLogDebug(@"红包入口跳过: reason=message_ignored type=%u from=%@ to=%@",
                         wrap.m_uiMessageType,
                         wrap.m_nsFromUsr ?: @"",
                         wrap.m_nsToUsr ?: @"");
        }
        wcpl_redEnvelopHookLogCMessageMgr(kHookSelector,
                                          @"pre_filter",
                                          @"skip_feature",
                                          kOrigPolicy,
                                          @"reason=message_ignored");
        // 兜底放行：即使红包功能跳过，也不能阻断原生和其他 Hook 链路。
        %orig;
        return;
    }

    // 统一策略：同类入口先放行原生，再做插件功能，降低 Hook 链顺序敏感性。
    %orig;

    switch(wrap.m_uiMessageType) {
        case 49: { // AppNode
            wcpl_redEnvelopHookLogCMessageMgr(kHookSelector,
                                              @"feature",
                                              @"enter",
                                              kOrigPolicy,
                                              @"message_type=49");
            NSString *fromUserName = wrap.m_nsFromUsr ?: @"";
            NSString *toUserName = wrap.m_nsToUsr ?: @"";
            NSString *msgText = [msg isKindOfClass:[NSString class]] ? (NSString *)msg : @"";
            NSString *nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
            NSString *prefix = @"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?";
            BOOL msgHasHongbaoKeyword = ([msgText rangeOfString:@"红包"].location != NSNotFound ||
                                         [msgText rangeOfString:@"hongbao" options:NSCaseInsensitiveSearch].location != NSNotFound);
            BOOL urlHasHongbaoKeyword = ([nativeUrl rangeOfString:@"hongbao" options:NSCaseInsensitiveSearch].location != NSNotFound);
            BOOL looksLikeRedEnvelop = (msgHasHongbaoKeyword || urlHasHongbaoKeyword);
            if (nativeUrl.length == 0) {
                if (looksLikeRedEnvelop) {
                    WCPLLogDebug(@"红包入口跳过: reason=nativeUrl_empty from=%@ to=%@ msgSnippet=%@",
                                 fromUserName,
                                 toUserName,
                                 WCPLSanitizeInlineText(msgText, 120) ?: @"");
                }
                break;
            }
            if (![nativeUrl hasPrefix:prefix]) {
                if (looksLikeRedEnvelop) {
                    WCPLLogDebug(@"红包入口跳过: reason=prefix_mismatch from=%@ to=%@ url=%@",
                                 fromUserName,
                                 toUserName,
                                 WCPLSanitizeInlineText(nativeUrl, 180) ?: @"");
                }
                break;
            }
            WCPLLogDebug(@"红包入口命中: from=%@ to=%@ url=%@",
                         fromUserName,
                         toUserName,
                         WCPLSanitizeInlineText(nativeUrl, 180) ?: @"");

            WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
            if (!config.autoReceiveEnable) {
                WCPLLogDebug(@"红包入口跳过: reason=auto_receive_disabled from=%@ to=%@",
                             fromUserName,
                             toUserName);
                break;
            }

            NSString *selfUserName = WCPLContactAdapterCurrentSelfUserName() ?: @"";

            BOOL isSender = (selfUserName.length > 0 && [wrap.m_nsFromUsr isEqualToString:selfUserName]);
            BOOL isGroupReceiver = WCPLIsChatRoomName(wrap.m_nsFromUsr);
            BOOL isGroupSender = (isSender && WCPLIsChatRoomName(wrap.m_nsToUsr));
            BOOL isGroup = (isGroupReceiver || isGroupSender);

            if (isGroup) {
                if (!config.groupRedEnvelopEnable) {
                    WCPLLogDebug(@"红包入口跳过: reason=group_disabled session=%@",
                                 isGroupReceiver ? fromUserName : toUserName);
                    break;
                }
                if (isGroupSender && !config.receiveSelfRedEnvelop) {
                    WCPLLogDebug(@"红包入口跳过: reason=self_group_red_disabled session=%@",
                                 toUserName);
                    break;
                }

                NSString *groupUserName = isGroupReceiver ? wrap.m_nsFromUsr : wrap.m_nsToUsr;
                if (groupUserName.length == 0) {
                    WCPLLogDebug(@"红包入口跳过: reason=group_session_empty from=%@ to=%@",
                                 fromUserName,
                                 toUserName);
                    break;
                }

                if (config.groupRedEnvelopScope == 1) { // 仅白名单
                    BOOL inWhiteList = WCPLRedEnvelopUserNameInList(groupUserName, config.allowedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=白名单 wl=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.allowedGroupList.count,
                                 inWhiteList);
                    if (!inWhiteList) {
                        WCPLLogDebug(@"红包入口跳过: reason=not_in_whitelist session=%@", groupUserName);
                        break;
                    }
                } else if (config.groupRedEnvelopScope == 2) { // 排除黑名单
                    BOOL inDenyList = WCPLRedEnvelopUserNameInList(groupUserName, config.blockedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=黑名单 deny=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.blockedGroupList.count,
                                 !inDenyList);
                    if (inDenyList) {
                        WCPLLogDebug(@"红包入口跳过: reason=in_denylist session=%@", groupUserName);
                        break;
                    }
                } else {
                    WCPLLogDebug(@"群红包预检: session=%@ scope=全部", groupUserName);
                }
            } else {
                // 私聊红包：仅接收方处理
                if (!config.privateRedEnvelopEnable) {
                    WCPLLogDebug(@"红包入口跳过: reason=private_disabled from=%@ to=%@",
                                 fromUserName,
                                 toUserName);
                    break;
                }
                if (isSender) {
                    WCPLLogDebug(@"红包入口跳过: reason=self_private_red from=%@ to=%@",
                                 fromUserName,
                                 toUserName);
                    break;
                }
            }

            WCPLRedEnvelopEntryContext *entryContext = [[WCPLRedEnvelopEntryContext alloc] init];
            entryContext.nativeUrl = nativeUrl;
            entryContext.sessionUserName = isGroupSender ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
            entryContext.selfContact = WCPLContactAdapterCurrentSelfContact();
            entryContext.groupSender = isGroupSender;
            WCPLHandleRedEnvelopEntry(entryContext);

            break;
        }
        default:
            break;
    }
}

%end
