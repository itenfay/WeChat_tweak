//
//  EZRedEnvelopTaskManager.h
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EZReceiveRedEnvelopOperation;

@interface EZRedEnvelopTaskManager : NSObject

+ (instancetype)sharedManager;

- (void)addNormalTask:(EZReceiveRedEnvelopOperation *)task;
- (void)addSerialTask:(EZReceiveRedEnvelopOperation *)task;

- (BOOL)serialQueueIsEmpty;

@end
