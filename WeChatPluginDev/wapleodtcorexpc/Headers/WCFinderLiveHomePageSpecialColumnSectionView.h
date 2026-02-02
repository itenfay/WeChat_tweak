//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveFeedGenericAutoPlayModel, WCFinderLiveHomePageFooterView, WCFinderLiveHomePageRecommendGuideFooterView;
@protocol WCFinderLiveHomePageSpecialColumnSectionViewDelegate;

@interface WCFinderLiveHomePageSpecialColumnSectionView
{
    WCFinderLiveFeedGenericAutoPlayModel *_autoPlayModel;
    id <WCFinderLiveHomePageSpecialColumnSectionViewDelegate> _delegate;
    double _beginTouchPosX;
    WCFinderLiveHomePageRecommendGuideFooterView *_recommendGuideView;
    WCFinderLiveHomePageFooterView *_footerView;
}

+ (double)defaultCellWidth;
+ (double)viewHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderLiveHomePageRecommendGuideFooterView *recommendGuideView; // @synthesize recommendGuideView=_recommendGuideView;
@property(nonatomic) double beginTouchPosX; // @synthesize beginTouchPosX=_beginTouchPosX;
@property(nonatomic) __weak id <WCFinderLiveHomePageSpecialColumnSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayModel; // @synthesize autoPlayModel=_autoPlayModel;
- (void)onShowConcertTicketAction:(id)arg1;
- (void)onHomePageNoticeAction:(_Bool)arg1 feedVM:(id)arg2;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMFetchFailWithErroCode:(long long)arg1;
- (void)onContainerSectionVMNoMoreData;
- (void)onContainerSectionVMFetchNextPageData:(id)arg1;
- (void)onContainerSectionVMRefreshAllData:(id)arg1;
- (_Bool)isEnableFooterTrigerLoading:(id)arg1;
- (void)didClickFooterRefresh:(id)arg1;
- (void)onRecommendGuideClickAction:(id)arg1;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)onRelatedLiveCellForwardAction:(id)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 feedVM:(id)arg3 withContainerId:(unsigned long long)arg4 indexPath:(id)arg5;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)generateCollectionView;
- (void)hideJumper:(_Bool)arg1;
- (void)checkAdjustOffset;
- (_Bool)isJumperShowing;
- (void)handlePan:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopWithIndexPath:(id)arg1;
- (void)_startPlayWithIndexPath:(id)arg1;
- (void)autoPlayStart;
- (void)autoPlayStop;
- (void)reloadData;
- (void)resetState;
- (void)dealloc;
- (void)checkAddJumper;
- (void)updateWithVM:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubViews_onFrameChanged;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

