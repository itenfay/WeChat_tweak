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
#import <objc/objc-runtime.h>

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
        self.finished  = YES;
        self.executing = NO;
        return;
    }
    
    [self main];
    
    self.executing = YES;
    self.finished  = NO;
}

- (void)main {
    sleep(self.delaySeconds);
    
    WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
    [logicMgr OpenRedEnvelopesRequest:[self.redEnvelopParam toParams]];
    
    self.finished  = YES;
    self.executing = NO;
}

- (void)cancel {
    self.finished  = YES;
    self.executing = NO;
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
