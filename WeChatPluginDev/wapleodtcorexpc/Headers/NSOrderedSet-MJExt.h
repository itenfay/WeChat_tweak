//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (MJExt)
- (id)mj_safeObjectAtIndex:(unsigned long long)arg1;
- (id)mj_symmetricDifferenceWithOrderedSet:(id)arg1;
- (id)mj_relativeComplementInOrderedSet:(id)arg1;
- (id)mj_intersectionWithOrderedSet:(id)arg1;
- (id)mj_unionWithOrderedSet:(id)arg1;
- (id)sc_symmetricDifferenceWithOrderedSet:(id)arg1;
- (id)sc_relativeComplementInOrderedSet:(id)arg1;
- (id)sc_intersectionWithOrderedSet:(id)arg1;
- (id)sc_unionWithOrderedSet:(id)arg1;
@end

