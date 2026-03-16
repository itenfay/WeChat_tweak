//
// WCPLThreadSafeMutableDictionary.m
//

#import "WCPLThreadSafeMutableDictionary.h"
#import "WCPLConstants.h"
#import "WCPLDispatchUtils.h"
#import <dispatch/dispatch.h>

static const void *kWCPLThreadSafeDictionaryQueueSpecificKey = &kWCPLThreadSafeDictionaryQueueSpecificKey;

@interface WCPLThreadSafeMutableDictionary<KeyType, ObjectType> ()
@property (nonatomic, strong) NSMutableDictionary<KeyType, ObjectType> *backing;
@property (nonatomic) dispatch_queue_t queue;
@end

@implementation WCPLThreadSafeMutableDictionary

- (void)wcpl_setupWithDictionary:(NSDictionary *)dictionary {
    _backing = dictionary ? [dictionary mutableCopy] : [NSMutableDictionary dictionary];
    _queue = dispatch_queue_create(kWCPLConfigQueueLabel.UTF8String, DISPATCH_QUEUE_CONCURRENT);
    // 通过 queue-specific 检测当前是否已在同一队列内，避免重入 sync 死锁。
    dispatch_queue_set_specific(_queue,
                                kWCPLThreadSafeDictionaryQueueSpecificKey,
                                (__bridge void *)self,
                                NULL);
}

- (void)wcpl_readSync:(dispatch_block_t)block {
    WCPLDispatchQueueSpecific specific = WCPLDispatchQueueSpecificMake(kWCPLThreadSafeDictionaryQueueSpecificKey,
                                                                      (__bridge void *)self);
    WCPLDispatchSyncSafe(self.queue, specific, block);
}

- (void)wcpl_writeSync:(dispatch_block_t)block {
    WCPLDispatchQueueSpecific specific = WCPLDispatchQueueSpecificMake(kWCPLThreadSafeDictionaryQueueSpecificKey,
                                                                      (__bridge void *)self);
    WCPLDispatchBarrierSyncSafe(self.queue, specific, block);
}

- (void)wcpl_writeAsync:(dispatch_block_t)block {
    WCPLDispatchQueueSpecific specific = WCPLDispatchQueueSpecificMake(kWCPLThreadSafeDictionaryQueueSpecificKey,
                                                                      (__bridge void *)self);
    WCPLDispatchBarrierAsyncSafe(self.queue, specific, block);
}

- (instancetype)init {
    self = [super init];
    if (self) {
        [self wcpl_setupWithDictionary:nil];
    }
    return self;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary {
    self = [super init];
    if (self) {
        [self wcpl_setupWithDictionary:dictionary];
    }
    return self;
}

- (NSUInteger)count {
    __block NSUInteger count = 0;
    [self wcpl_readSync:^{
        count = self.backing.count;
    }];
    return count;
}

- (id)objectForKey:(id)aKey {
    if (!aKey) return nil;
    __block id value = nil;
    [self wcpl_readSync:^{
        value = self.backing[aKey];
    }];
    return value;
}

- (NSEnumerator *)keyEnumerator {
    return [[self dictionaryRepresentation] keyEnumerator];
}

- (void)setObject:(id)anObject forKey:(id<NSCopying>)aKey {
    if (!aKey) return;
    [self wcpl_writeSync:^{
        if (anObject) {
            self.backing[aKey] = anObject;
        } else {
            [self.backing removeObjectForKey:aKey];
        }
    }];
}

- (void)removeObjectForKey:(id)aKey {
    if (!aKey) return;
    [self wcpl_writeSync:^{
        [self.backing removeObjectForKey:aKey];
    }];
}

- (id)objectForKeyedSubscript:(id)key {
    return [self objectForKey:key];
}

- (void)setObject:(id)obj forKeyedSubscript:(id<NSCopying>)key {
    [self setObject:obj forKey:key];
}

- (NSArray *)allKeys {
    return [[self dictionaryRepresentation] allKeys];
}

- (NSArray *)allValues {
    return [[self dictionaryRepresentation] allValues];
}

- (void)enumerateKeysAndObjectsUsingBlock:(void (NS_NOESCAPE ^)(id key, id obj, BOOL *stop))block {
    if (!block) return;
    [[self dictionaryRepresentation] enumerateKeysAndObjectsUsingBlock:block];
}

- (NSDictionary *)dictionaryRepresentation {
    __block NSDictionary *snapshot = nil;
    [self wcpl_readSync:^{
        snapshot = [self.backing copy];
    }];
    return snapshot ?: @{};
}

- (id)copyWithZone:(NSZone *)zone {
    (void)zone;
    return [self dictionaryRepresentation];
}

- (id)mutableCopyWithZone:(NSZone *)zone {
    (void)zone;
    return [[self dictionaryRepresentation] mutableCopy];
}

@end
