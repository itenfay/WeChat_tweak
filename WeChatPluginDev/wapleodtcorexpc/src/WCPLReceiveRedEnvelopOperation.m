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
#import "WCPLCrashReporter.h"
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
    WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
    [logicMgr OpenRedEnvelopesRequest:[self.redEnvelopParam toParams]];
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
