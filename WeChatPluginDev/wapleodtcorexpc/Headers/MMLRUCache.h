//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLRUCache : NSObject
{
    unsigned int m_capacity;
    _Bool m_alwaysCache;
    struct unordered_map<NSString *, id, KeyHasher, KeyEqualer, std::allocator<std::pair<NSString *const, id>>> m_dic;
    struct vector<NSString *__unsafe_unretained, std::allocator<NSString *__unsafe_unretained>> m_vector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
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

