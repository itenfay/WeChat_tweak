//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMutableDictionary.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface FinderThreadSafeDictionary : NSMutableDictionary
{
    NSMutableDictionary *_dic;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectEnumerator;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionInStringsFileFormat;
- (id)description;
- (id)allValues;
- (id)allKeysForObject:(id)arg1;
- (id)allKeys;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)init;

@end

