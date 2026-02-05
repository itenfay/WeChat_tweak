//
// WCPLReceiveRedEnvelopOperation.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopConfig.h"
#import "WeChatRedEnvelopParam.h"
#import "WeChatRedEnvelop.h"
#import "WCPLRedEnvelopOpenTracker.h"
#import "WCPLServiceCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <dispatch/dispatch.h>

@interface WCPLReceiveRedEnvelopOperation ()

@property (assign, nonatomic, getter=isExecuting) BOOL executing;
@property (assign, nonatomic, getter=isFinished ) BOOL finished;

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
    }
    return self;
}

- (void)start {
    if (self.isCancelled) {
        [self completeOperation];
        return;
    }

    self.executing = YES;
    WCPLLog(@"[抢红包] 任务开始: delay=%u session=%@ sendId=%@",
            self.delaySeconds,
            self.redEnvelopParam.sessionUserName ?: @"",
            self.redEnvelopParam.sendId ?: @"");

    uint64_t delayNsec = (uint64_t)self.delaySeconds * NSEC_PER_SEC;
    dispatch_time_t when = dispatch_time(DISPATCH_TIME_NOW, delayNsec);
    __weak typeof(self) weakSelf = self;
    dispatch_after(when, dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        __strong typeof(weakSelf) self = weakSelf;
        if (!self) return;
        if (self.isCancelled) {
            [self completeOperation];
            return;
        }
        [self main];
        [self completeOperation];
    });
}

- (void)main {
    WCPLCrashBreadcrumb(@"自动抢红包: session=%@ sendId=%@", self.redEnvelopParam.sessionUserName ?: @"", self.redEnvelopParam.sendId ?: @"");
    [[WCPLRedEnvelopOpenTracker sharedTracker] trackParam:self.redEnvelopParam];

    NSDictionary *params = [self.redEnvelopParam toParams];
    WCPLLog(@"[抢红包] 任务执行: mainThread=%d session=%@ sendId=%@ timing=%@ signLen=%lu paramsKeys=%lu",
            [NSThread isMainThread],
            self.redEnvelopParam.sessionUserName ?: @"",
            self.redEnvelopParam.sendId ?: @"",
            [params[@"timingIdentifier"] isKindOfClass:[NSString class]] ? params[@"timingIdentifier"] : @"",
            (unsigned long)([params[@"sign"] isKindOfClass:[NSString class]] ? [(NSString *)params[@"sign"] length] : 0),
            (unsigned long)params.count);
    WCPLLog(@"[抢红包] 参数详情: channelId=%@ nativeUrl=%@ sendUserName=%@",
            [params[@"channelId"] isKindOfClass:[NSString class]] ? params[@"channelId"] : @"",
            [params[@"nativeUrl"] isKindOfClass:[NSString class]] ? params[@"nativeUrl"] : @"",
            [params[@"sendUserName"] isKindOfClass:[NSString class]] ? params[@"sendUserName"] : @"");

    WCRedEnvelopesLogicMgr *logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
    if (!logicMgr) {
        WCPLLog(@"[抢红包] 任务失败: WCRedEnvelopesLogicMgr=nil");
        return;
    }
    if (![logicMgr respondsToSelector:@selector(OpenRedEnvelopesRequest:)]) {
        WCPLLog(@"[抢红包] 任务失败: OpenRedEnvelopesRequest 不存在 logicMgr=%@", NSStringFromClass([logicMgr class]) ?: @"");
        return;
    }

    void (^openBlock)(void) = ^{
        [logicMgr OpenRedEnvelopesRequest:params];
    };

    if ([NSThread isMainThread]) {
        openBlock();
    } else {
        dispatch_sync(dispatch_get_main_queue(), openBlock);
    }
    WCPLLog(@"[抢红包] 调用完成: sendId=%@", self.redEnvelopParam.sendId ?: @"");
}

- (void)cancel {
    [super cancel];
    if (self.isExecuting && !self.isFinished) {
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

@end
