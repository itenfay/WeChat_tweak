//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMapTable, NSMutableDictionary, NSString, UICollectionView, WCFinderFeedFlowView, WCFinderLiveHomePageTabLiveStreamSectionViewModel, WCFinderTabPageView;
@protocol WCFinderLiveHomePageTabLiveStreamSectionDelegate;

@interface WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell
{
    WCFinderLiveHomePageTabLiveStreamSectionViewModel *_vm;
    id <WCFinderLiveHomePageTabLiveStreamSectionDelegate> _delegate;
    WCFinderTabPageView *_tabPageView;
    NSMutableDictionary *_pageAdapterDict;
    NSMapTable *_flowViewsCache;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *flowViewsCache; // @synthesize flowViewsCache=_flowViewsCache;
@property(retain, nonatomic) NSMutableDictionary *pageAdapterDict; // @synthesize pageAdapterDict=_pageAdapterDict;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(nonatomic) __weak id <WCFinderLiveHomePageTabLiveStreamSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderLiveHomePageTabLiveStreamSectionViewModel *vm; // @synthesize vm=_vm;
- (void)preloadWithTabInfo:(id)arg1 pullType:(unsigned long long)arg2;
- (void)preloadTabPage:(id)arg1 loadNearbyTab:(_Bool)arg2;
- (void)checkPreloadIfNeeded;
- (void)reloadCityTabPage;
- (void)onLocationAuthorizationStatusUpdated;
- (id)currentSelectTabInfo;
- (void)onContainerSectionVMDisAppear;
- (void)onContainerSectionVMHomePageDeleteTid:(id)arg1;
- (void)onContainerSectionVMHomePageResetState;
- (void)autoPlayStart;
- (void)autoPlayStop;
@property(readonly, nonatomic) WCFinderFeedFlowView *curFeedFlowView;
- (id)curPageAdapter;
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)onLiveHomePageAggregationTabLiveStreamCheckAutoPlay:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamNeedAutoPlay:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 forwardAction:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 switchSubTabFrom:(unsigned long long)arg2 toSubTabId:(unsigned long long)arg3;
- (void)onLiveHomePageAggregationTabLiveStreamFirstPageFinish:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 aggregationCellClickJumpThemeTemplate:(id)arg2 entryBuffer:(id)arg3 jumpBypass:(id)arg4;
- (_Bool)shouldLiveHomePageAggregationTabLiveStreamHandleSelectAction:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 aggregationCellClickJumpLive:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3 indexPath:(id)arg4;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)arg1 jumpToTabInfo:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStreamDidScrollToTop:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamDidEndScrolling:(id)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamScrollDidScroll:(id)arg1;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
- (void)checkRecoverTabPagesContentOffsetExceptCurrenTabPage;
- (void)finderTabPageViewWillSwitchPage:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)scrollToTop;
- (_Bool)canLocationAuthorizationViewShow:(unsigned long long)arg1;
- (void)selectTabId:(unsigned long long)arg1;
- (void)jumpToTabInfo:(id)arg1;
- (void)checkLocationAuthorize;
- (void)updateWithVM:(id)arg1;
- (void)initViewsIfNeeded;
- (void)layoutSubviews;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

