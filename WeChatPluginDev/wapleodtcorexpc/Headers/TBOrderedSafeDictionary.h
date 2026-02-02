//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TBOrderedSafeDictionary : NSObject
{
    NSMutableArray *_pairs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (id)init;
- (_Bool)containsKey:(id)arg1;
- (void)removeAllObjects;
- (id)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, copy) NSArray *allKeys;
@property(readonly, copy) NSArray *allValues;
- (id)pairForKey:(id)arg1;
- (id)constructPairWithKey:(id)arg1 value:(id)arg2;

@end

