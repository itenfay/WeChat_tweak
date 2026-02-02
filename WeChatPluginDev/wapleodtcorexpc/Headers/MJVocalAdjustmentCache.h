//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MJVocalAdjustmentCache : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

