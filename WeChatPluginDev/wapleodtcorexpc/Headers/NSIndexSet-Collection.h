//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (Collection)
+ (id)indexSetFromCollectionChange:(id)arg1;
- (unsigned long long)maxIndex;
- (unsigned long long)minIndex;
- (id)sc_symmetricDifferenceWithRange:(struct _NSRange)arg1;
- (id)sc_relativeComplementInRange:(struct _NSRange)arg1;
- (id)sc_intersectionWithRange:(struct _NSRange)arg1;
- (id)sc_unionWithRange:(struct _NSRange)arg1;
- (_Bool)sc_intersectsWith:(id)arg1;
- (id)sc_symmetricDifferenceWith:(id)arg1;
- (id)sc_relativeComplementIn:(id)arg1;
- (id)sc_intersectionWith:(id)arg1;
- (id)sc_unionWith:(id)arg1;
@end

