//
// WCPRedEnvelopTaskManager.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WCPReceiveRedEnvelopOperation;

@interface WCPRedEnvelopTaskManager : NSObject

+ (instancetype)sharedManager;

- (void)addNormalTask:(WCPReceiveRedEnvelopOperation *)task;
- (void)addSerialTask:(WCPReceiveRedEnvelopOperation *)task;

- (BOOL)serialQueueIsEmpty;

@end
