//
// WCPLRedEnvelopTaskManager.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WCPLReceiveRedEnvelopOperation;

@interface WCPLRedEnvelopTaskManager : NSObject

+ (instancetype)sharedManager;

- (void)addNormalTask:(WCPLReceiveRedEnvelopOperation *)task;
- (void)addSerialTask:(WCPLReceiveRedEnvelopOperation *)task;

- (BOOL)serialQueueIsEmpty;

@end
