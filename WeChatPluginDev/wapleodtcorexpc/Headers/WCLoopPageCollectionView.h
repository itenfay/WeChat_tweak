//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView, WCLoopPageCollectionViewLayout;
@protocol WCLoopPageCollectionViewDataSource, WCLoopPageCollectionViewDelegate;

@interface WCLoopPageCollectionView : UIView
{
    _Bool _forbiddenNextAutoChange;
    id <WCLoopPageCollectionViewDataSource> _datasource;
    id <WCLoopPageCollectionViewDelegate> _delegate;
    UICollectionView *_collectionView;
    WCLoopPageCollectionViewLayout *_collectionLayout;
    unsigned long long _currentIndex;
    NSArray *_cellList;
    NSArray *_cellWidthList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbiddenNextAutoChange; // @synthesize forbiddenNextAutoChange=_forbiddenNextAutoChange;
@property(retain, nonatomic) NSArray *cellWidthList; // @synthesize cellWidthList=_cellWidthList;
@property(retain, nonatomic) NSArray *cellList; // @synthesize cellList=_cellList;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WCLoopPageCollectionViewLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCLoopPageCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCLoopPageCollectionViewDataSource> datasource; // @synthesize datasource=_datasource;
- (double)lastItemWidth;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)updateOffset;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)widthForViewAtIndex:(unsigned long long)arg1;
- (id)viewForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (double)currentIndexCellWidth;
- (double)prevIndexCellWidth;
- (double)prevIndexCellOffsetX;
- (double)nextIndexCellOffsetX;
- (double)currentIndexCellOffsetX;
- (unsigned long long)getLastCellIndex;
- (unsigned long long)getNextCellIndex;
- (unsigned long long)getPrevCellIndex;
- (void)genCellWidthList;
- (void)genCellList;
- (void)reloadData;
- (void)changeToNext;
- (void)layoutOnDidSetup;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

