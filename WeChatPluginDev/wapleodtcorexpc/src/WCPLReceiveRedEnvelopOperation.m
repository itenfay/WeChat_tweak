//
// WCPLReceiveRedEnvelopOperation.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLReceiveRedEnvelopOperation.h"
#import "WeChatRedEnvelopParam.h"
#import "WeChatRedEnvelop.h"
#import "WCPLServiceCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLConstants.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <dispatch/dispatch.h>

@interface WCPLReceiveRedEnvelopOperation ()

@property (assign, nonatomic, getter=isExecuting) BOOL executing;
@property (assign, nonatomic, getter=isFinished ) BOOL finished;
@property (assign, nonatomic) BOOL didNotifyResult;

@property (strong, nonatomic) WeChatRedEnvelopParam *redEnvelopParam;
@property (assign, nonatomic) unsigned int delaySeconds;

@end

@implementation WCPLReceiveRedEnvelopOperation

@synthesize executing = _executing;
@synthesize finished  = _finished;

- (instancetype)initWithRedEnvelopParam:(WeChatRedEnvelopParam *)param delay:(unsigned int)delaySeconds {
    if (self = [super init]) {
        _redEnvelopParam = param;
        _delaySeconds = delaySeconds;
        _maxRetryCount = 3;
    }
    return self;
}

- (void)start {
    if (self.isCancelled) {
        [self wcpl_notifyResultSuccess:NO error:[self wcpl_errorWithCode:1003 description:@"操作已取消"]];
        [self completeOperation];
        return;
    }

    self.executing = YES;
    WCPLLogInfo(@"[抢红包] 任务开始: delay=%u session=%@ sendId=%@",
                self.delaySeconds,
                self.redEnvelopParam.sessionUserName ?: @"",
                self.redEnvelopParam.sendId ?: @"");

    __weak typeof(self) weakSelf = self;

    // 超时保护机制
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLRedEnvelopOperationTimeout * NSEC_PER_SEC)),
                   dispatch_get_global_queue(QOS_CLASS_DEFAULT, 0), ^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (strongSelf && strongSelf.isExecuting && !strongSelf.isFinished) {
            WCPLLogWarning(@"[抢红包] 操作超时: sendId=%@", strongSelf.redEnvelopParam.sendId ?: @"");
            [strongSelf wcpl_notifyResultSuccess:NO error:[strongSelf wcpl_errorWithCode:1004 description:@"操作超时"]];
            [strongSelf cancel];
        }
    });

    uint64_t delayNsec = (uint64_t)self.delaySeconds * NSEC_PER_SEC;
    dispatch_time_t when = dispatch_time(DISPATCH_TIME_NOW, delayNsec);
    dispatch_after(when, dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        __strong typeof(weakSelf) self = weakSelf;
        if (!self) return;
        if (self.isCancelled) {
            [self wcpl_notifyResultSuccess:NO error:[self wcpl_errorWithCode:1003 description:@"操作已取消"]];
            [self completeOperation];
            return;
        }
        [self main];
        [self completeOperation];
    });
}

- (void)main {
    WCPLCrashBreadcrumb(@"自动抢红包: session=%@ sendId=%@", self.redEnvelopParam.sessionUserName ?: @"", self.redEnvelopParam.sendId ?: @"");

    NSDictionary *params = [self.redEnvelopParam toParams];
    WCPLLogDebug(@"[抢红包] 任务执行: mainThread=%d session=%@ sendId=%@ timing=%@ signLen=%lu paramsKeys=%lu",
                 [NSThread isMainThread],
                 self.redEnvelopParam.sessionUserName ?: @"",
                 self.redEnvelopParam.sendId ?: @"",
                 [params[@"timingIdentifier"] isKindOfClass:[NSString class]] ? params[@"timingIdentifier"] : @"",
                 (unsigned long)([params[@"sign"] isKindOfClass:[NSString class]] ? [(NSString *)params[@"sign"] length] : 0),
                 (unsigned long)params.count);
    WCPLLogDebug(@"[抢红包] 参数详情: channelId=%@ nativeUrl=%@ sendUserName=%@",
                 [params[@"channelId"] isKindOfClass:[NSString class]] ? params[@"channelId"] : @"",
                 [params[@"nativeUrl"] isKindOfClass:[NSString class]] ? params[@"nativeUrl"] : @"",
                 [params[@"sendUserName"] isKindOfClass:[NSString class]] ? params[@"sendUserName"] : @"");

    NSInteger maxRetry = self.maxRetryCount > 0 ? self.maxRetryCount : 1;
    NSError *lastError = nil;
    BOOL didSchedule = NO;

    for (NSInteger attempt = 1; attempt <= maxRetry; attempt++) {
        if (self.isCancelled) {
            lastError = [self wcpl_errorWithCode:1003 description:@"操作已取消"];
            break;
        }

        WCRedEnvelopesLogicMgr *logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
        if (!logicMgr) {
            lastError = [self wcpl_errorWithCode:1001 description:@"WCRedEnvelopesLogicMgr 不可用"];
            WCPLLogWarning(@"[抢红包] logicMgr=nil，准备重试(%ld/%ld) sendId=%@",
                           (long)attempt,
                           (long)maxRetry,
                           self.redEnvelopParam.sendId ?: @"");
            if (attempt < maxRetry) {
                [NSThread sleepForTimeInterval:0.5];
                continue;
            }
            break;
        }
        if (![logicMgr respondsToSelector:@selector(OpenRedEnvelopesRequest:)]) {
            lastError = [self wcpl_errorWithCode:1002 description:@"OpenRedEnvelopesRequest 不存在"];
            WCPLLogError(@"[抢红包] 任务失败: OpenRedEnvelopesRequest 不存在 logicMgr=%@",
                         NSStringFromClass([logicMgr class]) ?: @"");
            break;
        }

        __weak typeof(self) weakSelf = self;
        void (^openBlock)(void) = ^{
            __strong typeof(weakSelf) strongSelf = weakSelf;
            if (!strongSelf || strongSelf.isCancelled) {
                [strongSelf wcpl_notifyResultSuccess:NO error:[strongSelf wcpl_errorWithCode:1003 description:@"操作已取消"]];
                return;
            }
            [logicMgr OpenRedEnvelopesRequest:params];
            WCPLLogInfo(@"[抢红包] 调用完成: sendId=%@", strongSelf.redEnvelopParam.sendId ?: @"");
            [strongSelf wcpl_notifyResultSuccess:YES error:nil];
        };

        didSchedule = YES;
        if ([NSThread isMainThread]) {
            openBlock();
        } else {
            // 使用 dispatch_async 避免死锁风险
            dispatch_async(dispatch_get_main_queue(), openBlock);
        }
        break;
    }

    if (!didSchedule) {
        [self wcpl_notifyResultSuccess:NO error:lastError ?: [self wcpl_errorWithCode:1000 description:@"未知错误"]];
    }
}

- (void)cancel {
    [super cancel];
    if (self.isExecuting && !self.isFinished) {
        [self wcpl_notifyResultSuccess:NO error:[self wcpl_errorWithCode:1003 description:@"操作已取消"]];
        [self completeOperation];
    }
}

- (void)completeOperation {
    @synchronized (self) {
        if (self.isFinished) return;
        self.executing = NO;
        self.finished = YES;
    }
}

- (void)setFinished:(BOOL)finished {
    [self willChangeValueForKey:@"isFinished"];
    _finished = finished;
    [self didChangeValueForKey:@"isFinished"];
}

- (void)setExecuting:(BOOL)executing {
    [self willChangeValueForKey:@"isExecuting"];
    _executing = executing;
    [self didChangeValueForKey:@"isExecuting"];
}

- (BOOL)isAsynchronous {
    return YES;
}

#pragma mark - Private Helpers

- (NSError *)wcpl_errorWithCode:(NSInteger)code description:(NSString *)description {
    NSString *desc = description.length > 0 ? description : @"未知错误";
    return [NSError errorWithDomain:@"WCPLRedEnvelopOperation"
                               code:code
                           userInfo:@{NSLocalizedDescriptionKey: desc}];
}

- (void)wcpl_notifyResultSuccess:(BOOL)success error:(NSError *)error {
    WCPLRedEnvelopResultBlock block = nil;
    @synchronized (self) {
        if (self.didNotifyResult) {
            return;
        }
        self.didNotifyResult = YES;
        block = self.resultBlock;
    }

    if (!block) {
        return;
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        block(success, error);
    });
}

@end
