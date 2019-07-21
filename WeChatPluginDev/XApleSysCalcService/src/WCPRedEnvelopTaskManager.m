//
// WCPRedEnvelopTaskManager.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPRedEnvelopTaskManager.h"
#import "WCPReceiveRedEnvelopOperation.h"

@interface WCPRedEnvelopTaskManager ()

@property (strong, nonatomic) NSOperationQueue *normalTaskQueue;
@property (strong, nonatomic) NSOperationQueue *serialTaskQueue;

@end

@implementation WCPRedEnvelopTaskManager

+ (instancetype)sharedManager {
    static WCPRedEnvelopTaskManager *taskManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        taskManager = [WCPRedEnvelopTaskManager new];
    });
    return taskManager;
}

- (instancetype)init {
    if (self = [super init]) {
        _serialTaskQueue = [[NSOperationQueue alloc] init];
        _serialTaskQueue.maxConcurrentOperationCount = 1;
        
        _normalTaskQueue = [[NSOperationQueue alloc] init];
        _normalTaskQueue.maxConcurrentOperationCount = 5;
    }
    return self;
}

- (void)addNormalTask:(WCPReceiveRedEnvelopOperation *)task {
    [self.normalTaskQueue addOperation:task];
}

- (void)addSerialTask:(WCPReceiveRedEnvelopOperation *)task {
    [self.serialTaskQueue addOperation:task];
}

- (BOOL)serialQueueIsEmpty {
    return [self.serialTaskQueue operations].count == 0;
}

@end
