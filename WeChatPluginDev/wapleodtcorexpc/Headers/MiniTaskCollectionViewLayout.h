//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol MiniTaskCollectionViewLayoutDelegate;

@interface MiniTaskCollectionViewLayout : UICollectionViewLayout
{
    NSMutableSet *_changedCells;
    id <MiniTaskCollectionViewLayoutDelegate> _delegate;
    double _viewHeight;
    double _normalItemHeight;
    NSMutableDictionary *_itemAttributes;
    NSMutableArray *_headerAttrs;
    NSMutableDictionary *_footerAttrs;
    struct CGSize _normalItemSize;
    struct CGSize _outdateItemSize;
    struct CGSize _scheduleItemSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *footerAttrs; // @synthesize footerAttrs=_footerAttrs;
@property(retain, nonatomic) NSMutableArray *headerAttrs; // @synthesize headerAttrs=_headerAttrs;
@property(retain, nonatomic) NSMutableDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(nonatomic) double normalItemHeight; // @synthesize normalItemHeight=_normalItemHeight;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) struct CGSize scheduleItemSize; // @synthesize scheduleItemSize=_scheduleItemSize;
@property(nonatomic) struct CGSize outdateItemSize; // @synthesize outdateItemSize=_outdateItemSize;
@property(nonatomic) struct CGSize normalItemSize; // @synthesize normalItemSize=_normalItemSize;
@property(nonatomic) __weak id <MiniTaskCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *changedCells; // @synthesize changedCells=_changedCells;
- (_Bool)shouldShowSectionHeader:(long long)arg1;
- (_Bool)isSectionCanLoadMore:(long long)arg1;
- (_Bool)isOutdateSectionEmpty;
- (id)stringFromIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (double)contentHeightForSection:(long long)arg1;
- (struct CGSize)sizeForCellSnapshot;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)calculateLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)preCalculatePropertiesForLayout;
- (void)prepareLayout;
- (id)init;

@end

