//
// WCPLRedEnvelopParamQueue.m
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLRedEnvelopParamQueue.h"
#import "WeChatRedEnvelopParam.h"

@interface WCPLRedEnvelopParamQueue ()

@property (strong, nonatomic) NSMutableArray *queue;

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
    }
    return self;
}

- (void)enqueue:(WeChatRedEnvelopParam *)param {
    [self.queue addObject:param];
}

- (WeChatRedEnvelopParam *)dequeue {
    if (self.queue.count == 0 && !self.queue.firstObject) {
        return nil;
    }
    
    WeChatRedEnvelopParam *first = self.queue.firstObject;
    
    [self.queue removeObjectAtIndex:0];
    
    return first;
}

- (WeChatRedEnvelopParam *)peek {
    if (self.queue.count == 0) {
        return nil;
    }
    
    return self.queue.firstObject;
}

- (BOOL)isEmpty {
    return self.queue.count == 0;
}

@end
