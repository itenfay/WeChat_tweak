//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock;

@interface MMLockMutableDictionary
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (void).cxx_destruct;
- (int)count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)fetchDictionary;
- (void)setDictionary:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1;
- (id)init;

@end

