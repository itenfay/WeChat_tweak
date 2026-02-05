//
// WCPLThreadSafeMutableDictionary.m
//

#import "WCPLThreadSafeMutableDictionary.h"
#import "WCPLConstants.h"
#import <dispatch/dispatch.h>

@interface WCPLThreadSafeMutableDictionary<KeyType, ObjectType> ()
@property (nonatomic, strong) NSMutableDictionary<KeyType, ObjectType> *backing;
@property (nonatomic) dispatch_queue_t queue;
@end

@implementation WCPLThreadSafeMutableDictionary

- (void)wcpl_setupWithDictionary:(NSDictionary *)dictionary {
    _backing = dictionary ? [dictionary mutableCopy] : [NSMutableDictionary dictionary];
    _queue = dispatch_queue_create(kWCPLConfigQueueLabel.UTF8String, DISPATCH_QUEUE_SERIAL);
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
    dispatch_sync(self.queue, ^{
        count = self.backing.count;
    });
    return count;
}

- (id)objectForKey:(id)aKey {
    if (!aKey) return nil;
    __block id value = nil;
    dispatch_sync(self.queue, ^{
        value = self.backing[aKey];
    });
    return value;
}

- (NSEnumerator *)keyEnumerator {
    return [[self dictionaryRepresentation] keyEnumerator];
}

- (void)setObject:(id)anObject forKey:(id<NSCopying>)aKey {
    if (!aKey) return;
    dispatch_sync(self.queue, ^{
        if (anObject) {
            self.backing[aKey] = anObject;
        } else {
            [self.backing removeObjectForKey:aKey];
        }
    });
}

- (void)removeObjectForKey:(id)aKey {
    if (!aKey) return;
    dispatch_sync(self.queue, ^{
        [self.backing removeObjectForKey:aKey];
    });
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
    dispatch_sync(self.queue, ^{
        snapshot = [self.backing copy];
    });
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

