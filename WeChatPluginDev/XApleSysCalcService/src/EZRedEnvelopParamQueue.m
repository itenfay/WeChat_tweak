//
//  EZRedEnvelopParamQueue.m
//
//  Created by ez on 17/4/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import "EZRedEnvelopParamQueue.h"
#import "WeChatRedEnvelopParam.h"

@interface EZRedEnvelopParamQueue ()

@property (strong, nonatomic) NSMutableArray *queue;

@end

@implementation EZRedEnvelopParamQueue

+ (instancetype)sharedQueue {
    static EZRedEnvelopParamQueue *queue = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = [[EZRedEnvelopParamQueue alloc] init];
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
