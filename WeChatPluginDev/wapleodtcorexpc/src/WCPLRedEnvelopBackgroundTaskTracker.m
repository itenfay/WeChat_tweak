#import "WCPLRedEnvelopBackgroundTaskTracker.h"

#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLRedEnvelopSessionResolver.h"
#import <UIKit/UIKit.h>

static NSString *const kWCPLHongbaoBackgroundTaskName = @"com.wcpl.hongbao.receive";
static const void *kWCPLHongbaoBackgroundTaskQueueSpecificKey = &kWCPLHongbaoBackgroundTaskQueueSpecificKey;

static inline WCPLDispatchQueueSpecific wcpl_hongbaoBackgroundTaskQueueSpecific(void) {
    return WCPLDispatchQueueSpecificMake(kWCPLHongbaoBackgroundTaskQueueSpecificKey,
                                         kWCPLHongbaoBackgroundTaskQueueSpecificKey);
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

void WCPLBeginHongbaoBackgroundTask(NSString *sendId, NSString *sign) {
    NSString *token = WCPLRedEnvelopTrackToken(sendId, sign);
    if (token.length == 0) {
        return;
    }

    if (![NSThread isMainThread]) {
        NSString *sendIdCopy = [sendId copy];
        NSString *signCopy = [sign copy];
        dispatch_async(dispatch_get_main_queue(), ^{
            WCPLBeginHongbaoBackgroundTask(sendIdCopy, signCopy);
        });
        return;
    }

    UIApplication *app = [UIApplication sharedApplication];
    if (!app || app.applicationState == UIApplicationStateActive) {
        return;
    }

    __block BOOL alreadyTracked = NO;
    WCPLDispatchSyncSafe(wcpl_hongbaoBackgroundTaskQueue(), wcpl_hongbaoBackgroundTaskQueueSpecific(), ^{
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
        WCPLDispatchSyncSafe(wcpl_hongbaoBackgroundTaskQueue(), wcpl_hongbaoBackgroundTaskQueueSpecific(), ^{
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

    WCPLDispatchSyncSafe(wcpl_hongbaoBackgroundTaskQueue(), wcpl_hongbaoBackgroundTaskQueueSpecific(), ^{
        wcpl_hongbaoBackgroundTaskMap()[tokenCopy] = @(taskId);
    });

    WCPLLogDebug(@"红包后台任务开始: token=%@ task=%lu state=%ld",
                 token,
                 (unsigned long)taskId,
                 (long)app.applicationState);
}

void WCPLEndHongbaoBackgroundTask(NSString *sendId, NSString *sign, NSString *reason) {
    NSString *token = WCPLRedEnvelopTrackToken(sendId, sign);
    if (token.length == 0) {
        return;
    }

    if (![NSThread isMainThread]) {
        NSString *sendIdCopy = [sendId copy];
        NSString *signCopy = [sign copy];
        NSString *reasonCopy = [reason copy];
        dispatch_async(dispatch_get_main_queue(), ^{
            WCPLEndHongbaoBackgroundTask(sendIdCopy, signCopy, reasonCopy);
        });
        return;
    }

    UIApplication *app = [UIApplication sharedApplication];
    if (!app) {
        return;
    }

    __block UIBackgroundTaskIdentifier taskId = UIBackgroundTaskInvalid;
    WCPLDispatchSyncSafe(wcpl_hongbaoBackgroundTaskQueue(), wcpl_hongbaoBackgroundTaskQueueSpecific(), ^{
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
                     WCPLTrimText(reason) ?: @"",
                     (unsigned long)taskId);
    }
}
