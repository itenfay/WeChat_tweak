//
// WCPLRedEnvelopParamQueue.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WeChatRedEnvelopParam;

@interface WCPLRedEnvelopParamQueue : NSObject

+ (instancetype)sharedQueue;

- (void)enqueue:(WeChatRedEnvelopParam *)param;
- (WeChatRedEnvelopParam *)dequeue;
- (WeChatRedEnvelopParam *)dequeueMatchingSign:(NSString *)sign sendId:(NSString *)sendId;
- (WeChatRedEnvelopParam *)peek;
- (BOOL)isEmpty;

@end
