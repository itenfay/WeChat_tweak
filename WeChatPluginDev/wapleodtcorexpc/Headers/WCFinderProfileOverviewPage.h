//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCFinderCollectionViewDataSource, WCFinderFeedStaticCoverCollectionViewCell, WCFinderStreamFooterView;

@interface WCFinderProfileOverviewPage
{
    unsigned long long _refreshTime;
    WCFinderStreamFooterView *_footerView;
    NSMutableDictionary *_exposeObjectMap;
    WCFinderCollectionViewDataSource *_dataSource;
    WCFinderFeedStaticCoverCollectionViewCell *_checkedJustWatchCell;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderFeedStaticCoverCollectionViewCell *checkedJustWatchCell; // @synthesize checkedJustWatchCell=_checkedJustWatchCell;
@property(retain, nonatomic) WCFinderCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableDictionary *exposeObjectMap; // @synthesize exposeObjectMap=_exposeObjectMap;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
- (void)reportPageScrollDown;
- (void)tapRetry;
- (id)_findCellIdentifierForFeedTid:(id)arg1 snapshot:(id)arg2;
- (id)findCurrentDisplayedJustWatchItem:(id)arg1;
- (id)findVisiableJustWatchItem;
- (void)checkJustWatchCellOnScroll;
- (void)checkJustWatchCellDisplay:(id)arg1 cell:(id)arg2;
- (_Bool)tryScrollToJustWatchFeed;
- (void)updateTopRefreshState:(id)arg1;
- (void)onLoadingStateChanged:(id)arg1;
- (void)onEnsurePullableJustWatchDataNeedReplaceFeedArray:(id)arg1;
- (void)onEnsurePullableJustWatchDataCouldDirectScrollToFeed;
- (void)onJustWatchControllerRequiredJumpToFeed:(id)arg1;
- (void)onJustWatchControllerCleanJustWatch;
- (void)afterPageLoadedJustWatchControllerRequiredDisplay:(CDUnknownBlockType)arg1;
- (void)onJustWatchControllerRequiredDisplay:(CDUnknownBlockType)arg1;
- (struct CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (void)onItemUnExpose:(id)arg1;
- (void)onItemExpose:(id)arg1;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)setupAllBtnRerpot:(id)arg1 section:(id)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)checkLoadMore;
- (void)updateStateView;
- (void)scrollToJustWatchItem:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (id)indexPathForAnimator:(id)arg1;
- (id)indexPathForFeedTid:(id)arg1;
- (void)sectionCtrl:(id)arg1 onClickFeed:(id)arg2;
- (void)sectionCtrl:(id)arg1 requestScrollToSection:(id)arg2 item:(id)arg3;
- (void)sectionCtrl:(id)arg1 requestReloadItems:(id)arg2;
- (void)sectionCtrl:(id)arg1 requestReloadSection:(id)arg2;
- (void)sectionCtrlRequestReloadSelf:(id)arg1;
- (void)sectionCtrlRequestRelayout:(id)arg1;
- (void)sectionCtrlRequestReloadData:(id)arg1;
- (void)sectionCtrlReloadStatusView:(id)arg1;
- (void)sectionCtrl:(id)arg1 requestJumpToTab:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sectionCtrl:(id)arg1 requestCellForSection:(id)arg2 identifier:(id)arg3;
- (id)sectionCtrlFetchVisiableIndexPaths:(id)arg1;
- (void)onClickBottomMore:(id)arg1;
- (void)onSectionHeaderClickAll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSetion:(long long)arg3 position:(long long)arg4;
- (long long)collectionView:(id)arg1 layout:(id)arg2 seperatorForSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)displayTitleForSection:(id)arg1;
- (id)innerSupplementaryViewForIndexPath:(id)arg1 elementKind:(id)arg2 secInfo:(id)arg3;
- (id)supplementaryViewForIndexPath:(id)arg1 elementKind:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)innerCellForSec:(id)arg1 indexPath:(id)arg2;
- (id)displayCellForIndexPath:(id)arg1 identifier:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)cellIdentForPath:(id)arg1;
- (id)secIdentForSection:(long long)arg1;
- (void)onOverviewpageMoreFeedFeedChanged:(id)arg1;
- (void)onOverviewpageMoreFeedTopPullFinish:(id)arg1;
- (void)onOverviewpageSectionElementCountChanged:(long long)arg1;
- (void)onOverviewpageFetchStateChanged:(id)arg1;
- (void)onOverviewpage:(id)arg1 sectionDidUpdate:(id)arg2;
- (id)findJustWatchCellItem:(id)arg1 tid:(id)arg2;
- (void)onOverviewpageSectionsChanged:(id)arg1 forPageLoadFinish:(_Bool)arg2;
- (void)preloadVideoFirstFrame;
- (void)sectionCtrlPreloadVisibleVideo:(id)arg1;
- (id)overPageForSectonCtrl:(id)arg1;
- (id)loadView;
- (void)setViewModel:(id)arg1;
- (id)currentDisplayCtrls;
- (id)createDiffSnapshot;
- (void)pageSizeDidChanged;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillApear;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

