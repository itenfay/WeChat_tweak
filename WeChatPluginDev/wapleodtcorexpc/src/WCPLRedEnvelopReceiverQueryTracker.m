#import "WCPLRedEnvelopReceiverQueryTracker.h"

#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLRedEnvelopSessionResolver.h"
#import "WCPLServiceCenter.h"
#import <objc/message.h>
#import <objc/runtime.h>

static NSTimeInterval const kWCPLReceiverQueryHedgeDelays[] = {0.20, 0.55};
static const void *kWCPLReceiverQueryTrackQueueSpecificKey = &kWCPLReceiverQueryTrackQueueSpecificKey;

static inline WCPLDispatchQueueSpecific wcpl_receiverQueryTrackQueueSpecific(void) {
    return WCPLDispatchQueueSpecificMake(kWCPLReceiverQueryTrackQueueSpecificKey,
                                         kWCPLReceiverQueryTrackQueueSpecificKey);
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

void WCPLMarkReceiverQueryPending(NSString *sendId, NSString *sign) {
    NSString *token = WCPLRedEnvelopTrackToken(sendId, sign);
    if (token.length == 0) {
        return;
    }

    NSTimeInterval now = CFAbsoluteTimeGetCurrent();
    WCPLDispatchSyncSafe(wcpl_receiverQueryTrackQueue(), wcpl_receiverQueryTrackQueueSpecific(), ^{
        wcpl_receiverQueryTrackMap()[token] = @(now);
    });
}

BOOL WCPLIsReceiverQueryPending(NSString *sendId, NSString *sign) {
    NSString *token = WCPLRedEnvelopTrackToken(sendId, sign);
    if (token.length == 0) {
        return NO;
    }

    __block BOOL pending = NO;
    WCPLDispatchSyncSafe(wcpl_receiverQueryTrackQueue(), wcpl_receiverQueryTrackQueueSpecific(), ^{
        pending = (wcpl_receiverQueryTrackMap()[token] != nil);
    });
    return pending;
}

NSTimeInterval WCPLMarkReceiverQueryFinished(NSString *sendId, NSString *sign) {
    NSString *token = WCPLRedEnvelopTrackToken(sendId, sign);
    if (token.length == 0) {
        return -1;
    }

    __block NSTimeInterval elapsed = -1;
    NSTimeInterval now = CFAbsoluteTimeGetCurrent();
    WCPLDispatchSyncSafe(wcpl_receiverQueryTrackQueue(), wcpl_receiverQueryTrackQueueSpecific(), ^{
        NSMutableDictionary<NSString *, NSNumber *> *tracker = wcpl_receiverQueryTrackMap();
        NSNumber *start = tracker[token];
        if (start) {
            elapsed = MAX(0, now - start.doubleValue);
            [tracker removeObjectForKey:token];
        }
    });
    return elapsed;
}

void WCPLScheduleReceiverQueryHedgeRequests(NSString *sendId,
                                            NSString *sign,
                                            NSDictionary *params,
                                            NSString *sessionUserName) {
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
            if (!WCPLIsReceiverQueryPending(sendIdCopy, signCopy)) {
                return;
            }

            dispatch_async(dispatch_get_main_queue(), ^{
                if (!WCPLIsReceiverQueryPending(sendIdCopy, signCopy)) {
                    return;
                }

                id logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
                if (logicMgr && [logicMgr respondsToSelector:@selector(ReceiverQueryRedEnvelopesRequest:)]) {
                    ((void (*)(id, SEL, id))objc_msgSend)(logicMgr,
                                                          @selector(ReceiverQueryRedEnvelopesRequest:),
                                                          [paramsCopy mutableCopy]);
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
