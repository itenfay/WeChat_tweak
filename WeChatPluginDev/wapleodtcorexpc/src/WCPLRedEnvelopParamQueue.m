//
// WCPLRedEnvelopParamQueue.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLRedEnvelopParamQueue.h"
#import "WeChatRedEnvelopParam.h"
#import "WCPLConstants.h"
#import <dispatch/dispatch.h>

@interface WCPLRedEnvelopParamQueue ()

@property (strong, nonatomic) NSMutableArray *queue;
@property (nonatomic) dispatch_queue_t syncQueue;

@end

@implementation WCPLRedEnvelopParamQueue

+ (instancetype)sharedQueue {
    static WCPLRedEnvelopParamQueue *queue = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = [[WCPLRedEnvelopParamQueue alloc] init];
    });
    return queue;
}

- (instancetype)init {
    if (self = [super init]) {
        _queue = [[NSMutableArray alloc] init];
        _syncQueue = dispatch_queue_create(kWCPLRedEnvelopQueueLabel.UTF8String, DISPATCH_QUEUE_SERIAL);
    }
    return self;
}

- (void)enqueue:(WeChatRedEnvelopParam *)param {
    if (!param) return;
    dispatch_sync(self.syncQueue, ^{
        [self.queue addObject:param];
    });
}

- (WeChatRedEnvelopParam *)dequeue {
    __block WeChatRedEnvelopParam *first = nil;
    dispatch_sync(self.syncQueue, ^{
        if (self.queue.count == 0) {
            return;
        }
        first = self.queue.firstObject;
        [self.queue removeObjectAtIndex:0];
    });
    return first;
}

- (WeChatRedEnvelopParam *)dequeueMatchingSign:(NSString *)sign sendId:(NSString *)sendId {
    __block WeChatRedEnvelopParam *matched = nil;
    dispatch_sync(self.syncQueue, ^{
        if (self.queue.count == 0) return;

        NSUInteger index = NSNotFound;
        for (NSUInteger i = 0; i < self.queue.count; i++) {
            WeChatRedEnvelopParam *param = self.queue[i];
            BOOL signMatch = (sign.length > 0 && [param.sign isEqualToString:sign]);
            BOOL sendIdMatch = (sendId.length > 0 && [param.sendId isEqualToString:sendId]);
            if (signMatch || sendIdMatch) {
                index = i;
                break;
            }
        }

        if (index != NSNotFound) {
            matched = self.queue[index];
            [self.queue removeObjectAtIndex:index];
        }
    });
    return matched;
}

- (WeChatRedEnvelopParam *)peek {
    __block WeChatRedEnvelopParam *first = nil;
    dispatch_sync(self.syncQueue, ^{
        if (self.queue.count == 0) {
            return;
        }
        first = self.queue.firstObject;
    });
    return first;
}

- (BOOL)isEmpty {
    __block BOOL empty = YES;
    dispatch_sync(self.syncQueue, ^{
        empty = (self.queue.count == 0);
    });
    return empty;
}

@end
