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

@property (strong, nonatomic) NSMutableArray<WeChatRedEnvelopParam *> *queue;
@property (strong, nonatomic) NSMutableDictionary<NSString *, NSMutableArray<WeChatRedEnvelopParam *> *> *queueBySendId;
@property (strong, nonatomic) NSMutableDictionary<NSString *, NSMutableArray<WeChatRedEnvelopParam *> *> *queueBySign;
@property (nonatomic) dispatch_queue_t syncQueue;

@end

static NSString *wcpl_trimQueueKey(NSString *value) {
    if (![value isKindOfClass:[NSString class]] || value.length == 0) {
        return nil;
    }
    NSString *trimmed = [value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

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
        _queueBySendId = [[NSMutableDictionary alloc] init];
        _queueBySign = [[NSMutableDictionary alloc] init];
        _syncQueue = dispatch_queue_create(kWCPLRedEnvelopQueueLabel.UTF8String, DISPATCH_QUEUE_SERIAL);
    }
    return self;
}

- (void)enqueue:(WeChatRedEnvelopParam *)param {
    if (!param) return;
    dispatch_sync(self.syncQueue, ^{
        [self.queue addObject:param];
        [self wcpl_indexParam:param];
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
        [self wcpl_deindexParam:first];
    });
    return first;
}

- (WeChatRedEnvelopParam *)dequeueMatchingSign:(NSString *)sign sendId:(NSString *)sendId {
    NSString *normalizedSign = wcpl_trimQueueKey(sign);
    NSString *normalizedSendId = wcpl_trimQueueKey(sendId);

    __block WeChatRedEnvelopParam *matched = nil;
    dispatch_sync(self.syncQueue, ^{
        if (self.queue.count == 0) return;

        if (normalizedSendId.length > 0) {
            matched = [self wcpl_firstParamForKey:normalizedSendId inIndex:self.queueBySendId];
        }
        if (!matched && normalizedSign.length > 0) {
            matched = [self wcpl_firstParamForKey:normalizedSign inIndex:self.queueBySign];
        }

        if (!matched) {
            for (WeChatRedEnvelopParam *param in self.queue) {
                NSString *paramSendId = wcpl_trimQueueKey(param.sendId);
                NSString *paramSign = wcpl_trimQueueKey(param.sign);
                BOOL signMatch = (normalizedSign.length > 0 && [paramSign isEqualToString:normalizedSign]);
                BOOL sendIdMatch = (normalizedSendId.length > 0 && [paramSendId isEqualToString:normalizedSendId]);
                if (signMatch || sendIdMatch) {
                    matched = param;
                    break;
                }
            }
        }

        if (matched) {
            [self wcpl_removeParamFromQueue:matched];
            [self wcpl_deindexParam:matched];
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

#pragma mark - Private Helpers

- (void)wcpl_indexParam:(WeChatRedEnvelopParam *)param {
    if (!param) {
        return;
    }

    NSString *sendId = wcpl_trimQueueKey(param.sendId);
    if (sendId.length > 0) {
        [self wcpl_addParam:param toIndex:self.queueBySendId forKey:sendId];
    }

    NSString *sign = wcpl_trimQueueKey(param.sign);
    if (sign.length > 0) {
        [self wcpl_addParam:param toIndex:self.queueBySign forKey:sign];
    }
}

- (void)wcpl_deindexParam:(WeChatRedEnvelopParam *)param {
    if (!param) {
        return;
    }

    NSString *sendId = wcpl_trimQueueKey(param.sendId);
    if (sendId.length > 0) {
        [self wcpl_removeParam:param fromIndex:self.queueBySendId forKey:sendId];
    }

    NSString *sign = wcpl_trimQueueKey(param.sign);
    if (sign.length > 0) {
        [self wcpl_removeParam:param fromIndex:self.queueBySign forKey:sign];
    }
}

- (void)wcpl_addParam:(WeChatRedEnvelopParam *)param
              toIndex:(NSMutableDictionary<NSString *, NSMutableArray<WeChatRedEnvelopParam *> *> *)index
               forKey:(NSString *)key {
    if (!param || key.length == 0) {
        return;
    }

    NSMutableArray<WeChatRedEnvelopParam *> *list = index[key];
    if (!list) {
        list = [[NSMutableArray alloc] init];
        index[key] = list;
    }
    [list addObject:param];
}

- (void)wcpl_removeParam:(WeChatRedEnvelopParam *)param
               fromIndex:(NSMutableDictionary<NSString *, NSMutableArray<WeChatRedEnvelopParam *> *> *)index
                  forKey:(NSString *)key {
    if (!param || key.length == 0) {
        return;
    }

    NSMutableArray<WeChatRedEnvelopParam *> *list = index[key];
    if (!list || list.count == 0) {
        return;
    }

    NSUInteger idx = [list indexOfObjectIdenticalTo:param];
    if (idx != NSNotFound) {
        [list removeObjectAtIndex:idx];
    } else {
        [list removeObject:param];
    }

    if (list.count == 0) {
        [index removeObjectForKey:key];
    }
}

- (WeChatRedEnvelopParam *)wcpl_firstParamForKey:(NSString *)key
                                         inIndex:(NSMutableDictionary<NSString *, NSMutableArray<WeChatRedEnvelopParam *> *> *)index {
    if (key.length == 0) {
        return nil;
    }

    NSMutableArray<WeChatRedEnvelopParam *> *list = index[key];
    if (![list isKindOfClass:[NSMutableArray class]] || list.count == 0) {
        return nil;
    }

    WeChatRedEnvelopParam *candidate = list.firstObject;
    if (candidate && [self.queue containsObject:candidate]) {
        return candidate;
    }

    // 索引残留时做一次清理，避免返回失效对象。
    [list removeAllObjects];
    [index removeObjectForKey:key];
    return nil;
}

- (void)wcpl_removeParamFromQueue:(WeChatRedEnvelopParam *)param {
    if (!param) {
        return;
    }

    NSUInteger idx = [self.queue indexOfObjectIdenticalTo:param];
    if (idx != NSNotFound) {
        [self.queue removeObjectAtIndex:idx];
    } else {
        [self.queue removeObject:param];
    }
}

@end
