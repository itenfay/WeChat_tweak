//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSArray.h>

@interface NSArray (Collection)
+ (id)cartesianProduct:(id)arg1;
+ (id)range:(int)arg1 to:(int)arg2 step:(int)arg3;
+ (id)range:(int)arg1 to:(int)arg2;
+ (id)range:(int)arg1;
+ (id)count:(unsigned long long)arg1 builder:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToArray:(id)arg1 withComparer:(CDUnknownBlockType)arg2;
- (id)permutations;
- (id)crossJoin:(id)arg1;
- (id)distinct:(id)arg1;
- (id)distinct;
- (id)join:(id)arg1;
- (id)diff:(id)arg1;
- (id)minus:(id)arg1;
- (id)union:(id)arg1;
- (id)intersect:(id)arg1;
- (id)split:(long long)arg1;
- (id)chunk:(long long)arg1;
- (id)sumWith:(CDUnknownBlockType)arg1;
- (unsigned long long)countWithTest:(CDUnknownBlockType)arg1;
- (unsigned long long)countKeyPath:(id)arg1;
- (id)min:(id)arg1;
- (id)min;
- (id)max:(id)arg1;
- (id)max;
- (id)avg:(id)arg1;
- (id)avg;
- (id)sum:(id)arg1;
- (id)sum;
- (id)operator:(id)arg1 keypath:(id)arg2;
- (id)toJson;
- (id)toString;
- (id)dictionaryByKVBuilder:(CDUnknownBlockType)arg1;
- (id)deDuplicatedUseLastByKey:(CDUnknownBlockType)arg1;
- (id)implode:(id)arg1;
- (id)set;
- (id)countedSet;
- (id)mapToAssoc:(CDUnknownBlockType)arg1;
- (id)zip:(id)arg1;
- (id)shuffled;
- (id)random:(int)arg1;
- (id)random;
- (id)minObjectByCompare:(CDUnknownBlockType)arg1;
- (id)minObjectFor:(CDUnknownBlockType)arg1;
- (id)minObject;
- (id)maxNumberFor:(CDUnknownBlockType)arg1;
- (id)maxObjectFor:(CDUnknownBlockType)arg1;
- (id)maxObject:(id)arg1;
- (id)maxObject;
- (id)expand:(id)arg1 unique:(_Bool)arg2;
- (id)expand:(id)arg1;
- (id)groupBy:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)groupBy:(id)arg1;
- (id)when:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (id)pipe:(CDUnknownBlockType)arg1;
- (id)reduce:(CDUnknownBlockType)arg1;
- (id)reduce:(CDUnknownBlockType)arg1 carry:(id)arg2;
- (id)pluck:(id)arg1 key:(id)arg2;
- (id)flatten:(id)arg1;
- (id)flatten;
- (id)flatMap:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)finderMap:(CDUnknownBlockType)arg1;
- (id)unique:(id)arg1;
- (id)pop;
- (id)splice:(int)arg1;
- (id)skip:(long long)arg1 take:(long long)arg2;
- (id)take:(long long)arg1;
- (id)slice:(int)arg1;
- (id)reverse;
- (id)sortWithNilAtTheEnd:(id)arg1 ascending:(_Bool)arg2;
- (id)sortWith:(CDUnknownBlockType)arg1;
- (id)sort:(id)arg1 ascending:(_Bool)arg2;
- (id)sort:(id)arg1;
- (id)sort;
- (void)eachWithIndex:(CDUnknownBlockType)arg1;
- (void)each:(CDUnknownBlockType)arg1;
- (id)whereNotNull:(id)arg1;
- (id)whereNotNull;
- (id)whereNull:(id)arg1;
- (id)whereNull;
- (id)whereAny:(id)arg1 like:(id)arg2;
- (id)whereAny:(id)arg1 is:(id)arg2;
- (id)where:(id)arg1 is:(id)arg2;
- (id)where:(id)arg1 like:(id)arg2;
- (_Bool)doesntContain:(CDUnknownBlockType)arg1;
- (_Bool)contains:(CDUnknownBlockType)arg1;
- (id)last:(CDUnknownBlockType)arg1 default:(id)arg2;
- (id)last:(CDUnknownBlockType)arg1;
- (long long)firstIndex:(CDUnknownBlockType)arg1;
- (id)first:(CDUnknownBlockType)arg1 default:(id)arg2;
- (id)firstMap:(CDUnknownBlockType)arg1;
- (id)first:(CDUnknownBlockType)arg1;
- (id)rejectWith:(id)arg1;
- (id)filterWith:(id)arg1;
- (id)reject:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)objectsNotKindsOf:(Class)arg1;
- (id)objectsKindsOf:(Class)arg1;
@end

