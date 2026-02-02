//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray, NSIndexPath;

@interface WCFinderCarouselLayout : UICollectionViewFlowLayout
{
    NSArray *_layoutAttrbutes;
    NSIndexPath *_lockedCurrentIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *lockedCurrentIndexPath; // @synthesize lockedCurrentIndexPath=_lockedCurrentIndexPath;
@property(retain, nonatomic) NSArray *layoutAttrbutes; // @synthesize layoutAttrbutes=_layoutAttrbutes;
- (void)updateLayoutAttributes:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 atCardPos:(long long)arg2 animationProgress:(double)arg3;
- (id)indexPathsOfVisibleItemsWithContentOffset:(struct CGPoint)arg1;
- (void)adjustContentOffset;
- (double)carouselVisibleDistance;
- (double)itemWidthAtIndexPath:(id)arg1;
- (long long)itemCount;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;
- (id)delegate;

@end

