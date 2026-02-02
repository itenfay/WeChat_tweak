//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (StoryShuffling)
- (void)shuffle;
- (id)syncQueue;
- (void)threadSafeRemoveAllObjects;
- (void)threadSafeRemoveFirstObject;
- (id)threadSafeFirstObject;
- (void)threadSafeRemoveObject:(id)arg1;
- (void)threadSafeAddObject:(id)arg1;
- (void)threadSafeSyncAddObject:(id)arg1;
- (void)sc_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)sc_sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sc_sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)removeFirstObject;
- (id)firstObject;
- (void)safeReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)safeRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)safeRemoveObject:(id)arg1;
- (void)safeAddObject:(id)arg1;
- (void)safeRemoveObjectsInRange:(struct _NSRange)arg1;
- (void)removeFirstObject;
- (id)firstObject;
- (void)safeReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)safeRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)safeRemoveObject:(id)arg1;
- (void)safeAddObject:(id)arg1;
- (void)safeAddObjectsFromArray:(id)arg1;
- (id)initWithNullableArray:(id)arg1;
@end

