//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMutableDictionary.h>

@class NSMutableArray;

@interface OrderedDictionary : NSMutableDictionary
{
    NSMutableDictionary *dictionary;
    NSMutableArray *array;
    _Bool _disableStrictDebugMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableStrictDebugMode; // @synthesize disableStrictDebugMode=_disableStrictDebugMode;
- (void)updateOrderForKey:(id)arg1 index:(unsigned long long)arg2;
- (void)sortOrderUsingComparator:(CDUnknownBlockType)arg1;
- (void)setObjectAsLastObject:(id)arg1 forKey:(id)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)allKeysInOrder;
- (id)lastKey;
- (id)firstKey;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)reverseKeyEnumerator;
- (id)keyEnumerator;
- (id)allValuesForKeyEnumerator:(id)arg1;
- (id)allValuesInReverseOrder;
- (id)allValuesInOrder;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)dealloc;
- (void)setupWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

