//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveFeedGenericAutoPlayModel;
@protocol WCFinderLiveHomePageBannerSectionViewDelegate;

@interface WCFinderLiveHomePageBannerSectionView
{
    WCFinderLiveFeedGenericAutoPlayModel *_autoPlayModel;
    id <WCFinderLiveHomePageBannerSectionViewDelegate> _delegate;
}

+ (double)viewHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderLiveHomePageBannerSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayModel; // @synthesize autoPlayModel=_autoPlayModel;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)generateCollectionView;
- (void)autoPlayStart;
- (void)autoPlayStop;
- (void)updateWithVM:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

