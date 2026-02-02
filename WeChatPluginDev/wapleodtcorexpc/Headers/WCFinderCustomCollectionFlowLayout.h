//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface WCFinderCustomCollectionFlowLayout : UICollectionViewFlowLayout
{
    _Bool _useDamping;
    struct CGSize _minimumSize;
}

@property(nonatomic) _Bool useDamping; // @synthesize useDamping=_useDamping;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGSize)collectionViewContentSize;

@end

