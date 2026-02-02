//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewLayout.h>

@class MMLivePivotFooterView, NSString;
@protocol MMLivePivotViewDelegate;

@interface MMLivePivotView : UICollectionViewLayout
{
    unsigned long long _recommendationLoadingState;
    unsigned long long _historyLoadingState;
    id <MMLivePivotViewDelegate> _delegate;
    MMLivePivotFooterView *_footerView;
    MMLivePivotFooterView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLivePivotFooterView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMLivePivotFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <MMLivePivotViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long historyLoadingState; // @synthesize historyLoadingState=_historyLoadingState;
@property(nonatomic) unsigned long long recommendationLoadingState; // @synthesize recommendationLoadingState=_recommendationLoadingState;
- (id)footerLayoutAttributesAfterNumberOfCells:(unsigned long long)arg1 cellSize:(struct CGSize)arg2;
- (id)skeletonLayoutAttributesAtIndexPath:(id)arg1 cellSize:(struct CGSize)arg2;
- (id)headerLayoutAttributesWithCellSize:(struct CGSize)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGSize)cellSize;
- (id)getContainerWindow;
@property(readonly, nonatomic) _Bool useSkeleton;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

