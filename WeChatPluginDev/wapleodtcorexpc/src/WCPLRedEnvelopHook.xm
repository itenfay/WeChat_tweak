#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WCRedEnvelopesNetworkHelper.h"
#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopTaskManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLServiceCenter.h"
#import "WCPLFuncService.h"
#import "WCPLDispatchUtils.h"
#import "WCPLHookGovernance.h"
#import "WCPLLogger.h"
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
static NSString *const kWCPLFeatureReceiveDonePageSummary = @"receive_done_page_summary";
static const void *kWCPLReceiveDonePageSummaryLabelKey = &kWCPLReceiveDonePageSummaryLabelKey;
static NSTimeInterval const kWCPLReceiverQueryMatchRetryDelay = 0.03;
static NSUInteger const kWCPLReceiverQueryMatchMaxRetryCount = 3;
static NSTimeInterval const kWCPLReceiverQueryHedgeDelays[] = {0.20, 0.55};
static NSString *const kWCPLHongbaoBackgroundTaskName = @"com.wcpl.hongbao.receive";
static NSString *const kWCPLHookFeatureRedEnvelop = @"red_envelop";
static const void *kWCPLHongbaoBackgroundTaskQueueSpecificKey = &kWCPLHongbaoBackgroundTaskQueueSpecificKey;
static const void *kWCPLReceiverQueryTrackQueueSpecificKey = &kWCPLReceiverQueryTrackQueueSpecificKey;
static const void *kWCPLOpenReplyTrackQueueSpecificKey = &kWCPLOpenReplyTrackQueueSpecificKey;

static inline void wcpl_dispatch_sync_safe(dispatch_queue_t queue, const void *key, dispatch_block_t block) {
    if (!block) return;
    if (dispatch_get_specific(key)) {
        block();
        return;
    }
    dispatch_sync(queue, block);
}

static NSString *wcpl_stringFromSelector(id obj, SEL sel);
static NSString *wcpl_trimString(NSString *text);
static NSString *wcpl_stringForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys);
static NSInteger wcpl_integerForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys, BOOL *found);
static NSString *wcpl_sanitizeInlineText(NSString *text, NSUInteger maxLen);
static int wcpl_intFromSelector(id obj, SEL sel);
static long long wcpl_longLongFromSelector(id obj, SEL sel, BOOL *found);
static NSDictionary *wcpl_nativeUrlDictionaryFromRequestDictionary(NSDictionary *requestDict);
static NSString *wcpl_sessionFromDictionary(NSDictionary *dict);
static void wcpl_markReceiverQueryPending(NSString *sendId, NSString *sign);
static BOOL wcpl_isReceiverQueryPending(NSString *sendId, NSString *sign);
static NSTimeInterval wcpl_markReceiverQueryFinished(NSString *sendId, NSString *sign);
static void wcpl_scheduleReceiverQueryHedgeRequests(NSString *sendId, NSString *sign, NSDictionary *params, NSString *sessionUserName);
static void wcpl_miyouStyleHookStoryViewControllerViewDidLoad(void);

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

static void (*wcpl_orig_StoryViewController_viewDidLoad)(id, SEL) = NULL;

static NSString *wcpl_hongbaoTrackToken(NSString *sendId, NSString *sign) {
    NSString *normalizedSendId = wcpl_trimString(sendId);
    if (normalizedSendId.length > 0) {
        return [NSString stringWithFormat:@"sendId:%@", normalizedSendId];
    }

    NSString *normalizedSign = wcpl_trimString(sign);
    if (normalizedSign.length > 0) {
        return [NSString stringWithFormat:@"sign:%@", normalizedSign];
    }

    return nil;
}

static dispatch_queue_t wcpl_hongbaoBackgroundTaskQueue(void) {
    static dispatch_queue_t queue;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = dispatch_queue_create("com.wcpl.red_envelop.bg_task", DISPATCH_QUEUE_SERIAL);
        dispatch_queue_set_specific(queue,
                                    kWCPLHongbaoBackgroundTaskQueueSpecificKey,
                                    (void *)kWCPLHongbaoBackgroundTaskQueueSpecificKey,
                                    NULL);
    });
    return queue;
}

static NSMutableDictionary<NSString *, NSNumber *> *wcpl_hongbaoBackgroundTaskMap(void) {
    static NSMutableDictionary<NSString *, NSNumber *> *tracker;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tracker = [NSMutableDictionary dictionary];
    });
    return tracker;
}

static void wcpl_beginHongbaoBackgroundTask(NSString *sendId, NSString *sign) {
    NSString *token = wcpl_hongbaoTrackToken(sendId, sign);
    if (token.length == 0) {
        return;
    }

    if (![NSThread isMainThread]) {
        NSString *sendIdCopy = [sendId copy];
        NSString *signCopy = [sign copy];
        dispatch_async(dispatch_get_main_queue(), ^{
            wcpl_beginHongbaoBackgroundTask(sendIdCopy, signCopy);
        });
        return;
    }

    UIApplication *app = [UIApplication sharedApplication];
    if (!app || app.applicationState == UIApplicationStateActive) {
        return;
    }

    __block BOOL alreadyTracked = NO;
    wcpl_dispatch_sync_safe(wcpl_hongbaoBackgroundTaskQueue(), kWCPLHongbaoBackgroundTaskQueueSpecificKey, ^{
        NSNumber *existing = wcpl_hongbaoBackgroundTaskMap()[token];
        alreadyTracked = (existing != nil && existing.unsignedIntegerValue != UIBackgroundTaskInvalid);
    });
    if (alreadyTracked) {
        return;
    }

    NSString *tokenCopy = [token copy];
    __block UIBackgroundTaskIdentifier taskId = UIBackgroundTaskInvalid;
    taskId = [app beginBackgroundTaskWithName:kWCPLHongbaoBackgroundTaskName expirationHandler:^{
        UIApplication *innerApp = [UIApplication sharedApplication];
        __block BOOL shouldEnd = NO;
        wcpl_dispatch_sync_safe(wcpl_hongbaoBackgroundTaskQueue(), kWCPLHongbaoBackgroundTaskQueueSpecificKey, ^{
            NSMutableDictionary<NSString *, NSNumber *> *tracker = wcpl_hongbaoBackgroundTaskMap();
            NSNumber *stored = tracker[tokenCopy];
            if (stored && stored.unsignedIntegerValue == taskId) {
                [tracker removeObjectForKey:tokenCopy];
                shouldEnd = YES;
            }
        });
        if (shouldEnd && innerApp && taskId != UIBackgroundTaskInvalid) {
            [innerApp endBackgroundTask:taskId];
            WCPLLogWarning(@"红包后台任务过期: token=%@ task=%lu",
                           tokenCopy,
                           (unsigned long)taskId);
        }
    }];

    if (taskId == UIBackgroundTaskInvalid) {
        return;
    }

    wcpl_dispatch_sync_safe(wcpl_hongbaoBackgroundTaskQueue(), kWCPLHongbaoBackgroundTaskQueueSpecificKey, ^{
        wcpl_hongbaoBackgroundTaskMap()[tokenCopy] = @(taskId);
    });

    WCPLLogDebug(@"红包后台任务开始: token=%@ task=%lu state=%ld",
                 token,
                 (unsigned long)taskId,
                 (long)app.applicationState);
}

static void wcpl_endHongbaoBackgroundTask(NSString *sendId, NSString *sign, NSString *reason) {
    NSString *token = wcpl_hongbaoTrackToken(sendId, sign);
    if (token.length == 0) {
        return;
    }

    if (![NSThread isMainThread]) {
        NSString *sendIdCopy = [sendId copy];
        NSString *signCopy = [sign copy];
        NSString *reasonCopy = [reason copy];
        dispatch_async(dispatch_get_main_queue(), ^{
            wcpl_endHongbaoBackgroundTask(sendIdCopy, signCopy, reasonCopy);
        });
        return;
    }

    UIApplication *app = [UIApplication sharedApplication];
    if (!app) {
        return;
    }

    __block UIBackgroundTaskIdentifier taskId = UIBackgroundTaskInvalid;
    wcpl_dispatch_sync_safe(wcpl_hongbaoBackgroundTaskQueue(), kWCPLHongbaoBackgroundTaskQueueSpecificKey, ^{
        NSMutableDictionary<NSString *, NSNumber *> *tracker = wcpl_hongbaoBackgroundTaskMap();
        NSNumber *stored = tracker[token];
        if (stored) {
            taskId = (UIBackgroundTaskIdentifier)stored.unsignedIntegerValue;
            [tracker removeObjectForKey:token];
        }
    });

    if (taskId != UIBackgroundTaskInvalid) {
        [app endBackgroundTask:taskId];
        WCPLLogDebug(@"红包后台任务结束: token=%@ reason=%@ task=%lu",
                     token,
                     wcpl_trimString(reason) ?: @"",
                     (unsigned long)taskId);
    }
}

static dispatch_queue_t wcpl_receiverQueryTrackQueue(void) {
    static dispatch_queue_t queue;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = dispatch_queue_create("com.wcpl.red_envelop.query_track", DISPATCH_QUEUE_SERIAL);
        dispatch_queue_set_specific(queue,
                                    kWCPLReceiverQueryTrackQueueSpecificKey,
                                    (void *)kWCPLReceiverQueryTrackQueueSpecificKey,
                                    NULL);
    });
    return queue;
}

static NSMutableDictionary<NSString *, NSNumber *> *wcpl_receiverQueryTrackMap(void) {
    static NSMutableDictionary<NSString *, NSNumber *> *tracker;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tracker = [NSMutableDictionary dictionary];
    });
    return tracker;
}

static void wcpl_markReceiverQueryPending(NSString *sendId, NSString *sign) {
    NSString *token = wcpl_hongbaoTrackToken(sendId, sign);
    if (token.length == 0) {
        return;
    }

    NSTimeInterval now = CFAbsoluteTimeGetCurrent();
    wcpl_dispatch_sync_safe(wcpl_receiverQueryTrackQueue(), kWCPLReceiverQueryTrackQueueSpecificKey, ^{
        wcpl_receiverQueryTrackMap()[token] = @(now);
    });
}

static BOOL wcpl_isReceiverQueryPending(NSString *sendId, NSString *sign) {
    NSString *token = wcpl_hongbaoTrackToken(sendId, sign);
    if (token.length == 0) {
        return NO;
    }

    __block BOOL pending = NO;
    wcpl_dispatch_sync_safe(wcpl_receiverQueryTrackQueue(), kWCPLReceiverQueryTrackQueueSpecificKey, ^{
        pending = (wcpl_receiverQueryTrackMap()[token] != nil);
    });
    return pending;
}

static NSTimeInterval wcpl_markReceiverQueryFinished(NSString *sendId, NSString *sign) {
    NSString *token = wcpl_hongbaoTrackToken(sendId, sign);
    if (token.length == 0) {
        return -1;
    }

    __block NSTimeInterval elapsed = -1;
    NSTimeInterval now = CFAbsoluteTimeGetCurrent();
    wcpl_dispatch_sync_safe(wcpl_receiverQueryTrackQueue(), kWCPLReceiverQueryTrackQueueSpecificKey, ^{
        NSMutableDictionary<NSString *, NSNumber *> *tracker = wcpl_receiverQueryTrackMap();
        NSNumber *start = tracker[token];
        if (start) {
            elapsed = MAX(0, now - start.doubleValue);
            [tracker removeObjectForKey:token];
        }
    });
    return elapsed;
}

static void wcpl_scheduleReceiverQueryHedgeRequests(NSString *sendId, NSString *sign, NSDictionary *params, NSString *sessionUserName) {
    if (![params isKindOfClass:[NSDictionary class]] || params.count == 0) {
        return;
    }

    NSString *sendIdCopy = [sendId copy] ?: @"";
    NSString *signCopy = [sign copy] ?: @"";
    NSString *sessionCopy = [sessionUserName copy] ?: @"";
    NSDictionary *paramsCopy = [params copy] ?: @{};
    NSUInteger hedgeCount = sizeof(kWCPLReceiverQueryHedgeDelays) / sizeof(NSTimeInterval);
    for (NSUInteger i = 0; i < hedgeCount; i++) {
        NSTimeInterval delay = kWCPLReceiverQueryHedgeDelays[i];
        NSUInteger retryIndex = i + 1;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                       dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
            if (!wcpl_isReceiverQueryPending(sendIdCopy, signCopy)) {
                return;
            }

            dispatch_async(dispatch_get_main_queue(), ^{
                if (!wcpl_isReceiverQueryPending(sendIdCopy, signCopy)) {
                    return;
                }

                WCRedEnvelopesLogicMgr *logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
                if (logicMgr && [logicMgr respondsToSelector:@selector(ReceiverQueryRedEnvelopesRequest:)]) {
                    [logicMgr ReceiverQueryRedEnvelopesRequest:[paramsCopy mutableCopy]];
                    WCPLLogDebug(@"红包查询补发: retry=%lu delay=%.2fs session=%@ sendId=%@ signLen=%lu",
                                 (unsigned long)retryIndex,
                                 delay,
                                 sessionCopy ?: @"",
                                 sendIdCopy ?: @"",
                                 (unsigned long)signCopy.length);
                } else {
                    WCPLLogDebug(@"红包查询补发跳过: logicMgr不可用 retry=%lu sendId=%@",
                                 (unsigned long)retryIndex,
                                 sendIdCopy ?: @"");
                }
            });
        });
    }
}

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_normalizeSessionUserName(NSString *text) {
    NSString *session = wcpl_trimString(text);
    if (session.length == 0) {
        return nil;
    }

    for (NSInteger i = 0; i < 2; i++) {
        if ([session rangeOfString:@"%"].location == NSNotFound) {
            break;
        }
        NSString *decoded = [session stringByRemovingPercentEncoding];
        NSString *normalized = wcpl_trimString(decoded);
        if (normalized.length == 0 || [normalized isEqualToString:session]) {
            break;
        }
        session = normalized;
    }

    return session;
}

static BOOL wcpl_userNameInList(NSString *userName, NSArray *list) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0 || ![list isKindOfClass:[NSArray class]] || list.count == 0) {
        return NO;
    }

    for (id obj in list) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *candidate = wcpl_normalizeSessionUserName((NSString *)obj);
        if (candidate.length > 0 && [candidate isEqualToString:target]) {
            return YES;
        }
    }
    return NO;
}

static NSString *wcpl_replyTextForSession(NSString *sessionUserName, BOOL isGroup) {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *rawText = isGroup ? config.groupAutoReplyText : config.privateAutoReplyText;
    NSString *trimmed = wcpl_trimString(rawText);
    if (trimmed.length == 0) {
        return nil;
    }

    if (isGroup) {
        if (!config.groupRedEnvelopEnable) {
            return nil;
        }
        if (config.groupRedEnvelopScope == 1 && !wcpl_userNameInList(sessionUserName, config.allowedGroupList)) {
            return nil;
        }
        if (config.groupRedEnvelopScope == 2 && wcpl_userNameInList(sessionUserName, config.blockedGroupList)) {
            return nil;
        }
    } else {
        if (!config.privateRedEnvelopEnable) {
            return nil;
        }
    }

    return trimmed;
}

static NSTimeInterval const kWCPLAutoReplyTrackTTL = 180.0;
static NSTimeInterval const kWCPLAutoReplyTrackFallbackAge = 12.0;
static NSUInteger const kWCPLAutoReplyTrackHardLimit = 512;

static dispatch_queue_t wcpl_openReplyTrackQueue(void) {
    static dispatch_queue_t queue;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = dispatch_queue_create("com.wcpl.red_envelop.reply_track", DISPATCH_QUEUE_SERIAL);
        dispatch_queue_set_specific(queue,
                                    kWCPLOpenReplyTrackQueueSpecificKey,
                                    (void *)kWCPLOpenReplyTrackQueueSpecificKey,
                                    NULL);
    });
    return queue;
}

static NSMutableDictionary<NSString *, NSDictionary *> *wcpl_openReplyTrackMap(void) {
    static NSMutableDictionary<NSString *, NSDictionary *> *tracker;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tracker = [NSMutableDictionary dictionary];
    });
    return tracker;
}

static NSString *wcpl_openReplyTrackKey(NSString *prefix, NSString *token) {
    NSString *safePrefix = wcpl_trimString(prefix);
    NSString *safeToken = wcpl_trimString(token);
    if (safePrefix.length == 0 || safeToken.length == 0) {
        return nil;
    }
    return [NSString stringWithFormat:@"%@:%@", safePrefix, safeToken];
}

static void wcpl_openReplyTrackCleanupLocked(NSMutableDictionary<NSString *, NSDictionary *> *tracker, NSTimeInterval now) {
    if (![tracker isKindOfClass:[NSMutableDictionary class]]) return;

    NSTimeInterval expireBefore = now - kWCPLAutoReplyTrackTTL;
    NSArray<NSString *> *allKeys = [tracker allKeys];
    for (NSString *key in allKeys) {
        NSDictionary *entry = [tracker[key] isKindOfClass:[NSDictionary class]] ? tracker[key] : nil;
        NSNumber *ts = [entry[@"ts"] isKindOfClass:[NSNumber class]] ? entry[@"ts"] : nil;
        if (!ts || ts.doubleValue < expireBefore) {
            [tracker removeObjectForKey:key];
        }
    }

    if (tracker.count > kWCPLAutoReplyTrackHardLimit) {
        [tracker removeAllObjects];
    }
}

static void wcpl_trackOpenReplySession(NSString *sendId, NSString *sign, NSString *timingIdentifier, NSString *sessionUserName) {
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    wcpl_dispatch_sync_safe(wcpl_openReplyTrackQueue(), kWCPLOpenReplyTrackQueueSpecificKey, ^{
        NSMutableDictionary<NSString *, NSDictionary *> *tracker = wcpl_openReplyTrackMap();
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        wcpl_openReplyTrackCleanupLocked(tracker, now);

        NSDictionary *entry = @{
            @"session": session,
            @"ts": @(now)
        };

        NSString *sendKey = wcpl_openReplyTrackKey(@"sendId", sendId);
        NSString *signKey = wcpl_openReplyTrackKey(@"sign", sign);
        NSString *timingKey = wcpl_openReplyTrackKey(@"timing", timingIdentifier);

        if (sendKey.length > 0) tracker[sendKey] = entry;
        if (signKey.length > 0) tracker[signKey] = entry;
        if (timingKey.length > 0) tracker[timingKey] = entry;

        tracker[@"__last__"] = entry;
    });
}

static void wcpl_trackOpenReplySessionFromRequest(NSDictionary *params) {
    if (![params isKindOfClass:[NSDictionary class]] || params.count == 0) {
        return;
    }

    NSString *sendId = wcpl_stringForKeysInDictionary(params, @[@"sendId", @"sendid", @"send_id"]);
    NSString *sign = wcpl_stringForKeysInDictionary(params, @[@"sign"]);
    NSString *timingIdentifier = wcpl_stringForKeysInDictionary(params, @[@"timingIdentifier", @"timing_identifier"]);

    NSString *session = wcpl_stringForKeysInDictionary(params, @[@"sessionUserName", @"sessionusername", @"session_user_name"]);
    if (session.length == 0) {
        NSDictionary *nativeUrlDict = wcpl_nativeUrlDictionaryFromRequestDictionary(params);
        session = wcpl_sessionFromDictionary(nativeUrlDict);
    }
    session = wcpl_normalizeSessionUserName(session);
    if (session.length == 0) {
        return;
    }

    wcpl_trackOpenReplySession(sendId, sign, timingIdentifier, session);
}

static NSString *wcpl_lookupTrackedOpenSession(NSString *sendId, NSString *sign, NSString *timingIdentifier, NSString **sourceOut) {
    __block NSString *session = nil;
    __block NSString *source = nil;

    wcpl_dispatch_sync_safe(wcpl_openReplyTrackQueue(), kWCPLOpenReplyTrackQueueSpecificKey, ^{
        NSMutableDictionary<NSString *, NSDictionary *> *tracker = wcpl_openReplyTrackMap();
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        wcpl_openReplyTrackCleanupLocked(tracker, now);

        NSString *(^lookupSessionForKey)(NSString *) = ^NSString *(NSString *key) {
            if (key.length == 0) return nil;
            NSDictionary *entry = [tracker[key] isKindOfClass:[NSDictionary class]] ? tracker[key] : nil;
            NSString *trackedSession = wcpl_normalizeSessionUserName(entry[@"session"]);
            if (trackedSession.length == 0) return nil;
            NSNumber *ts = [entry[@"ts"] isKindOfClass:[NSNumber class]] ? entry[@"ts"] : nil;
            if (!ts || (now - ts.doubleValue > kWCPLAutoReplyTrackTTL)) return nil;
            return trackedSession;
        };

        NSString *sendKey = wcpl_openReplyTrackKey(@"sendId", sendId);
        NSString *signKey = wcpl_openReplyTrackKey(@"sign", sign);
        NSString *timingKey = wcpl_openReplyTrackKey(@"timing", timingIdentifier);

        session = lookupSessionForKey(sendKey);
        if (session.length > 0) {
            source = @"sendId";
            return;
        }

        session = lookupSessionForKey(signKey);
        if (session.length > 0) {
            source = @"sign";
            return;
        }

        session = lookupSessionForKey(timingKey);
        if (session.length > 0) {
            source = @"timing";
            return;
        }

        NSDictionary *lastEntry = [tracker[@"__last__"] isKindOfClass:[NSDictionary class]] ? tracker[@"__last__"] : nil;
        NSString *lastSession = wcpl_normalizeSessionUserName(lastEntry[@"session"]);
        NSNumber *lastTs = [lastEntry[@"ts"] isKindOfClass:[NSNumber class]] ? lastEntry[@"ts"] : nil;
        if (lastSession.length > 0 && lastTs && (now - lastTs.doubleValue <= kWCPLAutoReplyTrackFallbackAge)) {
            session = lastSession;
            source = @"last";
        }
    });

    if (sourceOut) {
        *sourceOut = source;
    }
    return session;
}

static BOOL wcpl_hongbaoOpenLooksSuccessful(NSDictionary *responseDict,
                                            HongBaoRes *res,
                                            NSInteger *amountOut,
                                            NSInteger *totalAmountOut,
                                            NSInteger *receiveStatusOut,
                                            NSInteger *retCodeOut) {
    BOOL hasReceiveStatus = NO;
    NSInteger receiveStatus = wcpl_integerForKeysInDictionary(responseDict, @[@"receiveStatus", @"receive_status"], &hasReceiveStatus);

    BOOL hasRetCode = NO;
    NSInteger retCode = wcpl_integerForKeysInDictionary(responseDict, @[@"retCode", @"retcode"], &hasRetCode);
    if (!hasRetCode && [res respondsToSelector:@selector(retCode)]) {
        hasRetCode = YES;
        retCode = wcpl_intFromSelector(res, @selector(retCode));
    } else if (!hasRetCode && [res respondsToSelector:@selector(retcode)]) {
        hasRetCode = YES;
        retCode = wcpl_intFromSelector(res, @selector(retcode));
    }

    BOOL hasAmount = NO;
    NSInteger amount = wcpl_integerForKeysInDictionary(responseDict,
                                                       @[@"amount", @"receiveAmount", @"receive_amount", @"recvAmount", @"recv_amount"],
                                                       &hasAmount);

    BOOL hasTotalAmount = NO;
    NSInteger totalAmount = wcpl_integerForKeysInDictionary(responseDict,
                                                            @[@"totalAmount", @"total_amount", @"totalFee", @"total_fee", @"totalMoney", @"total_money", @"hbTotalAmount", @"hb_total_amount"],
                                                            &hasTotalAmount);

    int errorType = wcpl_intFromSelector(res, @selector(errorType));
    int platRet = wcpl_intFromSelector(res, @selector(platRet));

    BOOL successByStatus = (hasReceiveStatus && receiveStatus == 2);
    BOOL successByAmount = (hasAmount && amount > 0);
    BOOL successByRetCode = (hasRetCode && retCode == 0);
    BOOL successByTransport = (errorType == 0 && platRet == 0);
    BOOL hasUsefulPayload = (responseDict.count > 0 || hasRetCode || hasReceiveStatus || hasAmount);

    BOOL success = (successByTransport && (successByStatus || successByAmount || successByRetCode));
    if (!success) {
        success = (successByTransport && hasUsefulPayload && (retCode == 0 || receiveStatus == 2 || amount > 0));
    }

    if (amountOut) {
        *amountOut = amount;
    }
    if (totalAmountOut) {
        *totalAmountOut = hasTotalAmount ? totalAmount : 0;
    }
    if (receiveStatusOut) {
        *receiveStatusOut = receiveStatus;
    }
    if (retCodeOut) {
        *retCodeOut = retCode;
    }

    return success;
}

static NSString *wcpl_sessionFromDictionary(NSDictionary *dict) {
    if (![dict isKindOfClass:[NSDictionary class]] || dict.count == 0) {
        return nil;
    }

    NSString *session = wcpl_stringForKeysInDictionary(dict,
                                                       @[@"sessionUserName", @"sessionusername", @"session_user_name",
                                                         @"chatroomname", @"chatRoomName", @"chat_room_name",
                                                         @"talker", @"fromUsername", @"fromUserName", @"from_username",
                                                         @"toUsername", @"toUserName", @"to_username"]);
    return wcpl_normalizeSessionUserName(session);
}

static NSString *wcpl_guessSessionFromRequestObject(HongBaoReq *req) {
    if (!req) {
        return nil;
    }

    NSArray<NSString *> *keys = @[@"sessionUserName", @"sessionusername", @"session_user_name",
                                  @"chatroomname", @"chatRoomName", @"chat_room_name",
                                  @"talker", @"fromUsername", @"fromUserName", @"from_username",
                                  @"toUsername", @"toUserName", @"to_username"];
    for (NSString *key in keys) {
        @try {
            id value = [req valueForKey:key];
            NSString *session = wcpl_normalizeSessionUserName(value);
            if (session.length > 0) {
                return session;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static NSString *wcpl_bestSessionCandidate(NSString *primarySession,
                                           NSDictionary *requestDict,
                                           NSDictionary *responseDict,
                                           NSDictionary *requestNativeUrlDict,
                                           HongBaoReq *req,
                                           NSString **sourceOut) {
    NSString *session = wcpl_normalizeSessionUserName(primarySession);
    NSString *source = @"request";
    if (session.length > 0) {
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_sessionFromDictionary(requestDict);
    if (session.length > 0) {
        source = @"request.dict";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_sessionFromDictionary(requestNativeUrlDict);
    if (session.length > 0) {
        source = @"request.nativeUrl";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_sessionFromDictionary(responseDict);
    if (session.length > 0) {
        source = @"response";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_guessSessionFromRequestObject(req);
    if (session.length > 0) {
        source = @"request.kvc";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    if (sourceOut) {
        *sourceOut = source;
    }
    return nil;
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

static id wcpl_contactForUserName(NSString *userName) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    __block id contact = nil;
    void (^resolveBlock)(void) = ^{
        CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
        if (!contactMgr) {
            return;
        }

        @try {
            if ([contactMgr respondsToSelector:@selector(getContactByName:)]) {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), target);
            }
            if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromDB:), target);
            }
            if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromCache:), target);
            }
        } @catch (__unused NSException *exception) {
            contact = nil;
        }
    };

    if ([NSThread isMainThread]) {
        resolveBlock();
    } else {
        BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, resolveBlock);
        if (!didFinish) {
            WCPLLogWarning(@"联系人解析超时: user=%@", target);
            return nil;
        }
    }

    return contact;
}

static NSString *wcpl_nonEmptyDisplayNameValue(id value) {
    NSString *displayName = wcpl_trimString(value);
    if (displayName.length == 0) {
        return nil;
    }

    displayName = [[displayName stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                   stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    return wcpl_trimString(displayName);
}

static BOOL wcpl_isRawGroupSessionName(NSString *displayName, NSString *sessionUserName) {
    NSString *name = wcpl_normalizeSessionUserName(displayName);
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (name.length == 0 || session.length == 0) {
        return NO;
    }

    if ([name isEqualToString:session]) {
        return YES;
    }

    if ([name rangeOfString:@"@chatroom" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }

    NSString *groupId = [session stringByReplacingOccurrencesOfString:@"@chatroom" withString:@""];
    if (groupId.length > 0 && [name isEqualToString:groupId]) {
        return YES;
    }

    return NO;
}

static NSString *wcpl_displayNameViaBizUtil(NSString *userName) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    Class bizUtilClass = objc_getClass("WCBizUtil");
    if (!(bizUtilClass && [bizUtilClass respondsToSelector:@selector(getContactDisplayName:)])) {
        return nil;
    }

    @try {
        id value = ((id (*)(id, SEL, id))objc_msgSend)(bizUtilClass, @selector(getContactDisplayName:), target);
        return wcpl_nonEmptyDisplayNameValue(value);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static NSString *wcpl_groupNameFromChatRoomDataObject(id chatRoomData) {
    if (!chatRoomData) {
        return nil;
    }

    NSArray<NSString *> *selectors = @[@"roomName", @"chatroomName", @"m_nsNickName", @"m_nsChatRoomName", @"topic", @"title", @"name"];
    for (NSString *selectorName in selectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!selector || ![chatRoomData respondsToSelector:selector]) {
            continue;
        }
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(chatRoomData, selector);
            NSString *displayName = wcpl_nonEmptyDisplayNameValue(value);
            if (displayName.length > 0) {
                return displayName;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *keys = @[@"roomName", @"chatroomName", @"m_nsNickName", @"m_nsChatRoomName", @"topic", @"title", @"name"];
    for (NSString *key in keys) {
        @try {
            id value = [chatRoomData valueForKey:key];
            NSString *displayName = wcpl_nonEmptyDisplayNameValue(value);
            if (displayName.length > 0) {
                return displayName;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static NSString *wcpl_groupDisplayNameFromContact(id contact, NSString *sessionUserName) {
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (!contact || session.length == 0 || [session rangeOfString:@"@chatroom"].location == NSNotFound) {
        return nil;
    }

    id chatRoomData = nil;
    if ([contact respondsToSelector:@selector(m_ChatRoomData)]) {
        @try {
            chatRoomData = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_ChatRoomData));
        } @catch (__unused NSException *exception) {
            chatRoomData = nil;
        }
    }
    if (!chatRoomData) {
        @try {
            chatRoomData = [contact valueForKey:@"m_ChatRoomData"];
        } @catch (__unused NSException *exception) {
            chatRoomData = nil;
        }
    }

    NSString *displayName = wcpl_groupNameFromChatRoomDataObject(chatRoomData);
    if (displayName.length > 0 && !wcpl_isRawGroupSessionName(displayName, session)) {
        return displayName;
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [contactClass respondsToSelector:@selector(genChatRoomName:)]) {
        @try {
            id value = ((id (*)(id, SEL, id))objc_msgSend)(contactClass, @selector(genChatRoomName:), contact);
            displayName = wcpl_nonEmptyDisplayNameValue(value);
            if (displayName.length > 0 && !wcpl_isRawGroupSessionName(displayName, session)) {
                return displayName;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    displayName = wcpl_displayNameViaBizUtil(session);
    if (displayName.length > 0 && !wcpl_isRawGroupSessionName(displayName, session)) {
        return displayName;
    }

    return nil;
}

static NSString *wcpl_contactDisplayName(id contact) {
    if (!contact) {
        return nil;
    }

    NSString *rawUserName = wcpl_safeUserNameFromObject(contact);
    BOOL isGroupContact = ([rawUserName rangeOfString:@"@chatroom"].location != NSNotFound);

    NSString *displayName = nil;
    @try {
        if ([contact respondsToSelector:@selector(getContactDisplayName)]) {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(getContactDisplayName));
            displayName = wcpl_nonEmptyDisplayNameValue(value);
        }
    } @catch (__unused NSException *exception) {
        displayName = nil;
    }

    if (displayName.length == 0) {
        @try {
            if ([contact respondsToSelector:@selector(m_nsNickName)]) {
                id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsNickName));
                displayName = wcpl_nonEmptyDisplayNameValue(value);
            }
        } @catch (__unused NSException *exception) {
            displayName = nil;
        }
    }

    if (displayName.length == 0) {
        @try {
            id value = [contact valueForKey:@"m_nsRemark"];
            displayName = wcpl_nonEmptyDisplayNameValue(value);
        } @catch (__unused NSException *exception) {
            displayName = nil;
        }
    }

    if (isGroupContact && wcpl_isRawGroupSessionName(displayName, rawUserName)) {
        displayName = nil;
    }

    if (displayName.length == 0 && isGroupContact) {
        displayName = wcpl_groupDisplayNameFromContact(contact, rawUserName);
    }

    return displayName;
}

static NSString *wcpl_displayNameForUserName(NSString *userName) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    if ([target isEqualToString:kWCPLFileHelperUserName]) {
        return @"文件传输助手";
    }

    BOOL isGroup = ([target rangeOfString:@"@chatroom"].location != NSNotFound);

    id contact = wcpl_contactForUserName(target);
    NSString *displayName = wcpl_contactDisplayName(contact);
    if (isGroup && wcpl_isRawGroupSessionName(displayName, target)) {
        displayName = nil;
    }

    if (displayName.length == 0) {
        NSString *bizDisplayName = wcpl_displayNameViaBizUtil(target);
        if (bizDisplayName.length > 0 && (!isGroup || !wcpl_isRawGroupSessionName(bizDisplayName, target))) {
            displayName = bizDisplayName;
            if (isGroup) {
                WCPLLogDebug(@"群聊名称解析兜底: session=%@ source=WCBizUtil name=%@", target, displayName);
            }
        }
    }

    return displayName;
}

static NSString *wcpl_notifySceneDisplayText(NSString *sessionUserName) {
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return @"当前会话";
    }

    BOOL isGroup = ([session rangeOfString:@"@chatroom"].location != NSNotFound);
    NSString *displayName = wcpl_displayNameForUserName(session);

    if (isGroup) {
        if (displayName.length > 0 && !wcpl_isRawGroupSessionName(displayName, session)) {
            return [NSString stringWithFormat:@"群聊(%@)", displayName];
        }
        WCPLLogDebug(@"群聊名称解析失败: session=%@ display=%@", session, displayName ?: @"");
        return @"群聊(未命名群)";
    }

    if (displayName.length > 0) {
        return [NSString stringWithFormat:@"私聊(%@)", displayName];
    }

    NSString *peer = session;
    if (peer.length > 12) {
        peer = [peer substringToIndex:12];
    }
    return [NSString stringWithFormat:@"私聊(%@)", peer];
}

static NSString *wcpl_currentSelfUserName(void) {
    __block NSString *selfUserName = nil;
    void (^resolveBlock)(void) = ^{
        CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
        if (!(contactMgr && [contactMgr respondsToSelector:@selector(getSelfContact)])) {
            return;
        }
        @try {
            id selfContact = [contactMgr getSelfContact];
            selfUserName = [wcpl_safeUserNameFromObject(selfContact) copy];
        } @catch (__unused NSException *exception) {
            selfUserName = nil;
        }
    };

    if ([NSThread isMainThread]) {
        resolveBlock();
    } else {
        BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, resolveBlock);
        if (!didFinish) {
            WCPLLogWarning(@"获取 selfUserName 超时，已放弃");
            return nil;
        }
    }

    return selfUserName;
}

static NSString *wcpl_currencyYuanString(NSInteger amountInCent) {
    if (amountInCent <= 0) {
        return @"0.00";
    }
    double amount = ((double)amountInCent) / 100.0;
    return [NSString stringWithFormat:@"%.2f", amount];
}

static long long wcpl_longLongFromSelector(id obj, SEL sel, BOOL *found) {
    if (found) {
        *found = NO;
    }
    if (!obj || !sel || ![obj respondsToSelector:sel]) {
        return 0;
    }
    @try {
        long long value = ((long long (*)(id, SEL))objc_msgSend)(obj, sel);
        if (found) {
            *found = YES;
        }
        return value;
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

static BOOL wcpl_miyouLongLongForField(id obj, NSString *fieldName, long long *valueOut) {
    if (valueOut) {
        *valueOut = 0;
    }
    if (!obj || fieldName.length == 0) {
        return NO;
    }

    BOOL found = NO;
    long long selectorValue = wcpl_longLongFromSelector(obj, NSSelectorFromString(fieldName), &found);
    if (found) {
        if (valueOut) {
            *valueOut = selectorValue;
        }
        return YES;
    }

    id rawValue = nil;
    @try {
        rawValue = [obj valueForKey:fieldName];
    } @catch (__unused NSException *exception) {
        rawValue = nil;
    }
    if (!(rawValue && [rawValue respondsToSelector:@selector(longLongValue)])) {
        return NO;
    }
    @try {
        if (valueOut) {
            *valueOut = [rawValue longLongValue];
        }
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

static id wcpl_miyouDataFromTarget(id target) {
    if (!target) {
        return nil;
    }

    id data = nil;
    @try {
        if ([target respondsToSelector:@selector(m_data)]) {
            data = ((id (*)(id, SEL))objc_msgSend)(target, @selector(m_data));
        }
    } @catch (__unused NSException *exception) {
        data = nil;
    }
    if (data) {
        return data;
    }

    @try {
        data = [target valueForKey:@"m_data"];
    } @catch (__unused NSException *exception) {
        data = nil;
    }
    return data;
}

static id wcpl_miyouDetailInfoFromData(id data) {
    if (!data) {
        return nil;
    }

    id detailInfo = nil;
    @try {
        if ([data respondsToSelector:@selector(m_oWCRedEnvelopesDetailInfo)]) {
            detailInfo = ((id (*)(id, SEL))objc_msgSend)(data, @selector(m_oWCRedEnvelopesDetailInfo));
        }
    } @catch (__unused NSException *exception) {
        detailInfo = nil;
    }
    if (detailInfo) {
        return detailInfo;
    }

    @try {
        detailInfo = [data valueForKey:@"m_oWCRedEnvelopesDetailInfo"];
    } @catch (__unused NSException *exception) {
        detailInfo = nil;
    }
    return detailInfo;
}

static UILabel *wcpl_miyouSummaryLabelForView(UIView *container, BOOL createIfNeeded) {
    UILabel *label = objc_getAssociatedObject(container, kWCPLReceiveDonePageSummaryLabelKey);
    if (label || !createIfNeeded) {
        return label;
    }

    label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.numberOfLines = 0;
    label.textAlignment = NSTextAlignmentCenter;
    label.font = [UIFont systemFontOfSize:14.0];
    label.textColor = [UIColor whiteColor];
    label.backgroundColor = [UIColor clearColor];
    label.lineBreakMode = NSLineBreakByWordWrapping;
    label.userInteractionEnabled = NO;
    label.hidden = NO;
    objc_setAssociatedObject(container, kWCPLReceiveDonePageSummaryLabelKey, label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    [container addSubview:label];
    return label;
}

static CGFloat wcpl_miyouStatusBarHeight(void) {
    UIApplication *app = [UIApplication sharedApplication];
    if (!app) {
        return 0.0;
    }

    if (@available(iOS 13.0, *)) {
        for (UIScene *scene in app.connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            UIStatusBarManager *manager = windowScene.statusBarManager;
            if (!manager) {
                continue;
            }
            CGFloat height = CGRectGetHeight(manager.statusBarFrame);
            if (height > 0.0) {
                return height;
            }
        }
    }

    return 0.0;
}

static void wcpl_miyouLayoutSummaryLabel(UIView *container, UILabel *label) {
    if (!container || !label) {
        return;
    }

    CGFloat width = CGRectGetWidth(container.frame);
    if (width <= 0.0) {
        width = CGRectGetWidth(container.bounds);
    }
    if (width <= 0.0) {
        return;
    }

    CGFloat statusBarHeight = wcpl_miyouStatusBarHeight();
    label.frame = CGRectMake(0.0, statusBarHeight, width, 80.0);
}

static void wcpl_miyouApplyRedDetailSummary(id target) {
    if (![target isKindOfClass:[UIViewController class]]) {
        return;
    }

    UIView *container = nil;
    @try {
        container = ((UIViewController *)target).view;
    } @catch (__unused NSException *exception) {
        container = nil;
    }
    if (!container) {
        return;
    }

    BOOL enabled = [WCPLRedEnvelopConfig sharedConfig].receiveDonePageSummaryEnable;
    UILabel *existing = wcpl_miyouSummaryLabelForView(container, NO);
    if (!enabled) {
        if (existing) {
            existing.hidden = YES;
        }
        return;
    }

    id data = wcpl_miyouDataFromTarget(target);
    id detailInfo = wcpl_miyouDetailInfoFromData(data);
    if (!detailInfo) {
        if (existing) {
            existing.hidden = YES;
        }
        return;
    }

    UILabel *label = existing ?: wcpl_miyouSummaryLabelForView(container, YES);
    if (!label) {
        return;
    }

    long long totalAmount = 0;
    long long totalNum = 0;
    long long recNum = 0;
    long long recAmount = 0;

    BOOL ok1 = wcpl_miyouLongLongForField(detailInfo, @"m_lTotalAmount", &totalAmount);
    BOOL ok2 = wcpl_miyouLongLongForField(detailInfo, @"m_lTotalNum", &totalNum);
    BOOL ok3 = wcpl_miyouLongLongForField(detailInfo, @"m_lRecNum", &recNum);
    BOOL ok4 = wcpl_miyouLongLongForField(detailInfo, @"m_lRecAmount", &recAmount);
    if (!(ok1 && ok2 && ok3 && ok4)) {
        label.hidden = YES;
        return;
    }

    if (totalAmount < 0) totalAmount = 0;
    if (totalNum < 0) totalNum = 0;
    if (recNum < 0) recNum = 0;
    if (recAmount < 0) recAmount = 0;

    long long remainNum = totalNum - recNum;
    long long remainAmount = totalAmount - recAmount;
    if (remainNum < 0) remainNum = 0;
    if (remainAmount < 0) remainAmount = 0;

    label.hidden = NO;
    label.text = [NSString stringWithFormat:@"总额：%.2f元 / 总数：%lld个\n剩余：%lld个(%.2f元)",
                                          ((double)totalAmount) / 100.0,
                                          totalNum,
                                          remainNum,
                                          ((double)remainAmount) / 100.0];
    wcpl_miyouLayoutSummaryLabel(container, label);

    WCPLLogDebug(@"红包领取完页汇总: feature_id=%@ branch=miyou_copy_storyvc data=%@ detail=%@ totalAmount=%lld totalNum=%lld recNum=%lld recAmount=%lld",
                 kWCPLFeatureReceiveDonePageSummary,
                 data ? NSStringFromClass([data class]) : @"(nil)",
                 NSStringFromClass([detailInfo class]),
                 totalAmount,
                 totalNum,
                 recNum,
                 recAmount);
}

static void wcpl_miyouStyle_StoryViewController_viewDidLoad(id self, SEL _cmd) {
    if (wcpl_orig_StoryViewController_viewDidLoad) {
        wcpl_orig_StoryViewController_viewDidLoad(self, _cmd);
    }

    @try {
        wcpl_miyouApplyRedDetailSummary(self);
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.25 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            wcpl_miyouApplyRedDetailSummary(self);
        });
    } @catch (NSException *exception) {
        WCPLLogError(@"红包领取完页汇总异常: feature_id=%@ branch=miyou_copy_storyvc exception=%@",
                     kWCPLFeatureReceiveDonePageSummary,
                     wcpl_sanitizeInlineText(exception.reason, 120) ?: @"unknown");
    }
}

static void wcpl_miyouStyleHookStoryViewControllerViewDidLoad(void) {
    Class targetClass = objc_getClass("WCRedEnvelopesStoryViewController");
    if (!targetClass) {
        WCPLLogDebug(@"红包领取完页汇总: feature_id=%@ branch=miyou_copy_storyvc class_not_found=%@",
                     kWCPLFeatureReceiveDonePageSummary,
                     @"WCRedEnvelopesStoryViewController");
        return;
    }

    Method method = class_getInstanceMethod(targetClass, @selector(viewDidLoad));
    if (!method) {
        return;
    }

    IMP newImp = (IMP)wcpl_miyouStyle_StoryViewController_viewDidLoad;
    IMP oldImp = method_getImplementation(method);
    if (oldImp == newImp) {
        return;
    }
    wcpl_orig_StoryViewController_viewDidLoad = (void (*)(id, SEL))oldImp;
    method_setImplementation(method, newImp);

    WCPLLogDebug(@"红包领取完页汇总: feature_id=%@ branch=miyou_copy_storyvc hook=installed class=%@ method=%@",
                 kWCPLFeatureReceiveDonePageSummary,
                 NSStringFromClass(targetClass),
                 @"viewDidLoad");
}

__attribute__((constructor))
static void wcpl_miyouStyleInstallHookOnLoad(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        wcpl_miyouStyleHookStoryViewControllerViewDidLoad();
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            wcpl_miyouStyleHookStoryViewControllerViewDidLoad();
        });
    });
}


static NSString *wcpl_redEnvelopNotifyMessage(NSString *sessionUserName, NSInteger amount, NSInteger totalAmount) {
    NSString *sceneName = wcpl_notifySceneDisplayText(sessionUserName);

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

static NSString *wcpl_stringForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys) {
    if (![keys isKindOfClass:[NSArray class]] || keys.count == 0) {
        return nil;
    }

    for (NSString *key in keys) {
        NSString *value = wcpl_stringForKeyInDictionary(dict, key);
        if (value.length > 0) {
            return value;
        }
    }

    return nil;
}

static NSInteger wcpl_integerForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys, BOOL *found) {
    if (found) {
        *found = NO;
    }

    if (![dict isKindOfClass:[NSDictionary class]] || ![keys isKindOfClass:[NSArray class]] || keys.count == 0) {
        return 0;
    }

    for (NSString *key in keys) {
        id value = dict[key];
        if (!value || value == [NSNull null]) {
            continue;
        }

        if (found) {
            *found = YES;
        }

        if ([value respondsToSelector:@selector(integerValue)]) {
            @try {
                return [value integerValue];
            } @catch (__unused NSException *exception) {
                return 0;
            }
        }

        return 0;
    }

    return 0;
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

static NSDictionary *wcpl_nativeUrlDictionaryFromRequestDictionary(NSDictionary *requestDict) {
    if (![requestDict isKindOfClass:[NSDictionary class]] || requestDict.count == 0) {
        return nil;
    }

    NSString *nativeUrl = wcpl_stringForKeysInDictionary(requestDict, @[@"nativeUrl", @"nativeurl", @"native_url"]);
    if (nativeUrl.length == 0) {
        return nil;
    }

    NSString *decodedNativeUrl = [nativeUrl stringByRemovingPercentEncoding] ?: nativeUrl;
    decodedNativeUrl = wcpl_trimString(decodedNativeUrl);
    if (decodedNativeUrl.length == 0) {
        return nil;
    }

    NSDictionary *nativeUrlDict = wcpl_dictionaryFromQueryString(decodedNativeUrl);
    if (nativeUrlDict.count > 0) {
        return nativeUrlDict;
    }

    NSRange qmark = [decodedNativeUrl rangeOfString:@"?"];
    if (qmark.location != NSNotFound && qmark.location + 1 < decodedNativeUrl.length) {
        nativeUrlDict = wcpl_dictionaryFromQueryString([decodedNativeUrl substringFromIndex:qmark.location + 1]);
        if (nativeUrlDict.count > 0) {
            return nativeUrlDict;
        }
    }

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
    if ([arg1 isKindOfClass:[NSDictionary class]]) {
        wcpl_trackOpenReplySessionFromRequest((NSDictionary *)arg1);
    }

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

    wcpl_trackOpenReplySession(sendId, sign, timingIdentifier, sessionUserName);
    if (params) {
        wcpl_trackOpenReplySessionFromRequest(params);
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
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
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
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
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
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
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

    NSDictionary *responseDict = wcpl_dictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]] || responseDict.count == 0) {
        return;
    }

    NSDictionary *requestDict = wcpl_dictionaryFromHongbaoBuffer(req.reqText);
    if (![requestDict isKindOfClass:[NSDictionary class]]) {
        requestDict = @{};
    }

    NSDictionary *requestNativeUrlDict = wcpl_nativeUrlDictionaryFromRequestDictionary(requestDict);
    NSString *requestSign = wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sign");
    NSString *requestSendId = wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sendid")
        ?: wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sendId")
        ?: wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"send_id");

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
        if (!wcpl_isReceiverQueryPending(normalizedSendId, normalizedSign)) {
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
            NSTimeInterval queryElapsed = wcpl_markReceiverQueryFinished(normalizedSendId, normalizedSign);
            if (queryElapsed >= 0) {
                WCPLLogDebug(@"红包查询结束: result=no_match elapsed=%.3fs signLen=%lu sendId=%@",
                             queryElapsed,
                             (unsigned long)normalizedSign.length,
                             normalizedSendId ?: @"");
            }
            wcpl_endHongbaoBackgroundTask(normalizedSendId, normalizedSign, @"query_no_match");
        }
        return;
    }

    NSTimeInterval queryElapsed = wcpl_markReceiverQueryFinished(normalizedSendId, normalizedSign);
    if (queryElapsed >= 0) {
        WCPLLogDebug(@"红包查询结束: result=matched elapsed=%.3fs signLen=%lu sendId=%@",
                     queryElapsed,
                     (unsigned long)normalizedSign.length,
                     normalizedSendId ?: @"");
    }

    BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
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
        if ([safeResponseDict[@"receiveStatus"] integerValue] == 2) { return NO; }

        // 红包被抢完
        if ([safeResponseDict[@"hbStatus"] integerValue] == 4) { return NO; }

        // 没有这个字段会被判定为使用外挂
        NSString *timingIdentifier = wcpl_stringForKeyInDictionary(safeResponseDict, @"timingIdentifier")
            ?: wcpl_stringForKeyInDictionary(safeResponseDict, @"timing_identifier");
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
        mgrParams.timingIdentifier = wcpl_stringForKeyInDictionary(safeResponseDict, @"timingIdentifier")
            ?: wcpl_stringForKeyInDictionary(safeResponseDict, @"timing_identifier");

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
                    wcpl_endHongbaoBackgroundTask(mgrParams.sendId, mgrParams.sign, @"fast_open_unavailable");
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
        wcpl_endHongbaoBackgroundTask(normalizedSendId, normalizedSign, @"query_skip");
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

    unsigned int cmdId = wcpl_hongbaoCmdId(res, req);
    if (cmdId != 4) {
        return;
    }

    NSDictionary *responseDict = wcpl_dictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]]) {
        responseDict = @{};
    }

    NSDictionary *requestDict = wcpl_dictionaryFromHongbaoBuffer(req.reqText);
    if (![requestDict isKindOfClass:[NSDictionary class]]) {
        requestDict = @{};
    }

    NSDictionary *requestNativeUrlDict = wcpl_nativeUrlDictionaryFromRequestDictionary(requestDict);

    NSString *sendId = wcpl_stringForKeysInDictionary(requestDict, @[@"sendId", @"sendid", @"send_id"])
        ?: wcpl_stringForKeysInDictionary(responseDict, @[@"sendId", @"sendid", @"send_id"])
        ?: wcpl_stringForKeysInDictionary(requestNativeUrlDict, @[@"sendId", @"sendid", @"send_id"]);
    NSString *sign = wcpl_stringForKeysInDictionary(requestDict, @[@"sign"])
        ?: wcpl_stringForKeysInDictionary(responseDict, @[@"sign"])
        ?: wcpl_stringForKeysInDictionary(requestNativeUrlDict, @[@"sign"]);
    NSString *timingIdentifier = wcpl_stringForKeysInDictionary(requestDict, @[@"timingIdentifier", @"timing_identifier"])
        ?: wcpl_stringForKeysInDictionary(responseDict, @[@"timingIdentifier", @"timing_identifier"])
        ?: wcpl_stringForKeysInDictionary(requestNativeUrlDict, @[@"timingIdentifier", @"timing_identifier"]);

    // 后台场景下尽快释放保活任务，避免无意义占用。
    wcpl_endHongbaoBackgroundTask(sendId, sign, @"open_response");

    NSInteger amount = 0;
    NSInteger totalAmount = 0;
    NSInteger receiveStatus = 0;
    NSInteger retCode = 0;

    BOOL hasHbStatus = NO;
    NSInteger hbStatus = wcpl_integerForKeysInDictionary(responseDict, @[@"hbStatus", @"hb_status"], &hasHbStatus);

    BOOL success = wcpl_hongbaoOpenLooksSuccessful(responseDict, res, &amount, &totalAmount, &receiveStatus, &retCode);

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

    NSString *session = wcpl_stringForKeysInDictionary(requestDict,
                                                       @[@"sessionUserName", @"sessionusername", @"session_user_name"]);
    NSString *sessionSource = @"request";
    session = wcpl_bestSessionCandidate(session, requestDict, responseDict, requestNativeUrlDict, req, &sessionSource);

    if (session.length == 0) {
        NSString *trackedSource = nil;
        session = wcpl_lookupTrackedOpenSession(sendId, sign, timingIdentifier, &trackedSource);
        if (session.length > 0) {
            sessionSource = trackedSource.length > 0 ? [NSString stringWithFormat:@"tracker:%@", trackedSource] : @"tracker";
        }
    }

    if (session.length == 0) {
        NSString *selfUserName = wcpl_currentSelfUserName();
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

    BOOL isGroup = ([session rangeOfString:@"@chatroom"].location != NSNotFound);
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
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
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
        NSString *replyPreview = wcpl_sanitizeInlineText(replyCopy, 80) ?: @"";
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

    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    NSString *notifyReceiver = nil;
    if (target == WCPLRedEnvelopNotifyTargetSelf) {
        notifyReceiver = wcpl_currentSelfUserName();
    } else if (target == WCPLRedEnvelopNotifyTargetFileHelper) {
        notifyReceiver = kWCPLFileHelperUserName;
    }

    notifyReceiver = wcpl_normalizeSessionUserName(notifyReceiver);
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

    NSString *sceneDisplay = wcpl_notifySceneDisplayText(session);
    NSString *messagePreview = wcpl_sanitizeInlineText(message, 120) ?: @"";
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
                           wcpl_normalizeSessionUserName(sessionCopy) ?: @"");
            return NO;
        }
        return sentOnMain;
    }

    NSString *text = wcpl_trimString(content);
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (text.length == 0 || session.length == 0) {
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserName();
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
        } @catch (__unused NSException *exception3) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsContent:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsContent:), text);
    } else {
        @try {
            [msgWrap setValue:text forKey:@"m_nsContent"];
        } @catch (__unused NSException *exception4) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsToUsr:), session);
    } else {
        @try {
            [msgWrap setValue:session forKey:@"m_nsToUsr"];
        } @catch (__unused NSException *exception5) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsFromUsr:), selfUserName);
    } else {
        @try {
            [msgWrap setValue:selfUserName forKey:@"m_nsFromUsr"];
        } @catch (__unused NSException *exception6) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsPushContent:), text);
    } else {
        @try {
            [msgWrap setValue:text forKey:@"m_nsPushContent"];
        } @catch (__unused NSException *exceptionPush) {
        }
    }

    unsigned int createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([msgWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiCreateTime:), createTime);
    } else {
        @try {
            [msgWrap setValue:@(createTime) forKey:@"m_uiCreateTime"];
        } @catch (__unused NSException *exceptionCreateTime) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiStatus:), 0);
    } else {
        @try {
            [msgWrap setValue:@(0) forKey:@"m_uiStatus"];
        } @catch (__unused NSException *exceptionStatus) {
        }
    }

    if ([session rangeOfString:@"@chatroom"].location != NSNotFound) {
        if ([msgWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsRealChatUsr:), selfUserName);
        } else {
            @try {
                [msgWrap setValue:selfUserName forKey:@"m_nsRealChatUsr"];
            } @catch (__unused NSException *exceptionRealChat) {
            }
        }
    }

    __block BOOL sent = NO;
    __block NSString *path = @"";

    CMessageMgr *msgMgr = WCPLGetService(objc_getClass("CMessageMgr"));
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
            } @catch (__unused NSException *exception) {
            }
        }

        if ([msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
            @try {
                [msgMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:YES NewMsgArriveNotify:YES];
                sent = YES;
                path = @"AddLocalMsgFixTime";
                return;
            } @catch (__unused NSException *exception) {
            }
        }

        if ([msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
            @try {
                [msgMgr AddLocalMsg:session MsgWrap:msgWrap];
                sent = YES;
                path = @"AddLocalMsg";
                return;
            } @catch (__unused NSException *exception) {
            }
        }
    };

    sendBlock();

    if (!sent) {
        WCPLLogDebug(@"红包自动回复发送路径降级: session=%@ reason=AddMsg链路未命中，尝试SendMessageMgr", session);

        id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
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
                                 wcpl_sanitizeInlineText(msgText, 120) ?: @"");
                }
                break;
            }
            if (![nativeUrl hasPrefix:prefix]) {
                if (looksLikeRedEnvelop) {
                    WCPLLogDebug(@"红包入口跳过: reason=prefix_mismatch from=%@ to=%@ url=%@",
                                 fromUserName,
                                 toUserName,
                                 wcpl_sanitizeInlineText(nativeUrl, 180) ?: @"");
                }
                break;
            }
            WCPLLogDebug(@"红包入口命中: from=%@ to=%@ url=%@",
                         fromUserName,
                         toUserName,
                         wcpl_sanitizeInlineText(nativeUrl, 180) ?: @"");

            WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
            if (!config.autoReceiveEnable) {
                WCPLLogDebug(@"红包入口跳过: reason=auto_receive_disabled from=%@ to=%@",
                             fromUserName,
                             toUserName);
                break;
            }

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
                    BOOL inWhiteList = wcpl_userNameInList(groupUserName, config.allowedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=白名单 wl=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.allowedGroupList.count,
                                 inWhiteList);
                    if (!inWhiteList) {
                        WCPLLogDebug(@"红包入口跳过: reason=not_in_whitelist session=%@", groupUserName);
                        break;
                    }
                } else if (config.groupRedEnvelopScope == 2) { // 排除黑名单
                    BOOL inDenyList = wcpl_userNameInList(groupUserName, config.blockedGroupList);
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

            // 先入队再查询，避免“回包先到、参数后到”的匹配竞态
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
            wcpl_beginHongbaoBackgroundTask(sendId, sign);

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
                NSString *sessionForLog = isGroupSender ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
                wcpl_markReceiverQueryPending(sendId, sign);
                [logicMgr ReceiverQueryRedEnvelopesRequest:params];
                WCPLLogDebug(@"红包查询请求: session=%@ sendId=%@ signLen=%lu", sessionForLog ?: @"", sendId, (unsigned long)sign.length);
                wcpl_scheduleReceiverQueryHedgeRequests(sendId, sign, params, sessionForLog);
            } else {
                WCPLLogDebug(@"红包查询跳过: WCRedEnvelopesLogicMgr 不可用");
                // 查询请求未发出时回滚本次入队，避免队列残留
                [[WCPLRedEnvelopParamQueue sharedQueue] dequeueMatchingSign:sign sendId:sendId];
                WCPLLogDebug(@"红包入队回滚: session=%@ sendId=%@ signLen=%lu",
                             mgrParams.sessionUserName ?: @"",
                             sendId,
                             (unsigned long)sign.length);
                wcpl_markReceiverQueryFinished(sendId, sign);
                wcpl_endHongbaoBackgroundTask(sendId, sign, @"query_unavailable");
            }

            break;
        }
        default:
            break;
    }
}

%end
