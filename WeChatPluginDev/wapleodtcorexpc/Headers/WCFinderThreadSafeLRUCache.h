//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache;
@protocol OS_dispatch_semaphore;

@interface WCFinderThreadSafeLRUCache : NSObject
{
    MMLRUCache *_cache;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MMLRUCache *cache; // @synthesize cache=_cache;
- (id)allKeysAndObjects;
- (id)allObjects;
- (id)allKeys;
- (unsigned long long)count;
- (unsigned int)capacity;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;

@end

