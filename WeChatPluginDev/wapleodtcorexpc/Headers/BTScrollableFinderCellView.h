//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecommendFinderHeaderView, BTScrollableFinderCellViewModel, NSArray, NSHashTable, NSString, UICollectionView;
@protocol BTScrollableFinderCellViewDelegate;

@interface BTScrollableFinderCellView
{
    id <BTScrollableFinderCellViewDelegate> _finderCellViewDelegate;
    BTRecommendFinderHeaderView *_headerView;
    UICollectionView *_collectionView;
    NSHashTable *_playingCells;
}

+ (double)headerViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *playingCells; // @synthesize playingCells=_playingCells;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) BTRecommendFinderHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <BTScrollableFinderCellViewDelegate> finderCellViewDelegate; // @synthesize finderCellViewDelegate=_finderCellViewDelegate;
- (void)reportValidRatioExposeEnd:(id)arg1 index:(long long)arg2;
- (void)reportValidRatioExposeStart:(id)arg1 index:(long long)arg2;
- (void)updateLiveCardCellExposeEnd:(id)arg1 index:(long long)arg2;
- (void)updateLiveCardCellExposeStart:(id)arg1 index:(long long)arg2;
- (void)onFinderLivePlayStateChange:(id)arg1 state:(unsigned long long)arg2;
- (void)report21053WithAction:(long long)arg1 viewModel:(id)arg2 index:(long long)arg3 actionTS:(unsigned long long)arg4 extraDic:(id)arg5;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopAllAutoPlayCell;
- (void)checkAutoPlayLiveCard;
- (void)onDisappear;
- (void)checkIfCardExposed;
- (void)onDidDeleteFinderInterestData;
- (void)onDidReceiveFinderInterestData;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)indexForFinderTid:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didHideFinderItemViewWithIndexArr:(id)arg1;
@property(readonly, nonatomic) NSArray *indexesOfValidShowItem;
@property(readonly, nonatomic) NSArray *indexesOfVisibleItem;
- (id)finderItemCellWithIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)setFinderItemCellWithIndex:(long long)arg1 bHighlight:(_Bool)arg2;
- (struct CGRect)convertFinderItemCellFrameWithIndex:(long long)arg1 toView:(id)arg2;
- (void)checkAutoPlay;
- (void)onUpdateViewModel;
- (void)setViewModel:(id)arg1;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTScrollableFinderCellViewModel *viewModel; // @dynamic viewModel;

@end

