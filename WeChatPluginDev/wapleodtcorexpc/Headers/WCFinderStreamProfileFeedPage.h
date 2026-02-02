//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString, RichTextView, UICollectionViewDiffableDataSource, WCFinderAnimationLoadingView, WCFinderExtStatsReporter, WCFinderFeedArray, WCFinderFeedStaticCoverCollectionViewCell, WCFinderProfileCollectionListLayout, WCFinderProfileFeedPageHeaderContainerView, WCFinderProfileTagFeedViewModel, WCFinderStreamFooterView;

@interface WCFinderStreamProfileFeedPage
{
    _Bool _showProfilePostFromSnsAlbumEntry;
    _Bool _collectionListButtonAnimationPlayed;
    _Bool _doJustwatchSpliceAnimation;
    NSMutableDictionary *_exposedTimeMap;
    WCFinderProfileTagFeedViewModel *_topicFeedVM;
    WCFinderFeedArray *_displayFeedArray;
    WCFinderStreamFooterView *_footerView;
    NSMutableSet *_exposedTopicIds;
    RichTextView *_stateTipsLabel;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderProfileFeedPageHeaderContainerView *_headerContainer;
    WCFinderProfileCollectionListLayout *_collectionListLayout;
    WCFinderExtStatsReporter *_extStatReporter;
    UICollectionViewDiffableDataSource *_datasource;
    WCFinderFeedStaticCoverCollectionViewCell *_checkJustWatchCell;
    double _lastCellHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool doJustwatchSpliceAnimation; // @synthesize doJustwatchSpliceAnimation=_doJustwatchSpliceAnimation;
@property(nonatomic) double lastCellHeight; // @synthesize lastCellHeight=_lastCellHeight;
@property(nonatomic) __weak WCFinderFeedStaticCoverCollectionViewCell *checkJustWatchCell; // @synthesize checkJustWatchCell=_checkJustWatchCell;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatReporter; // @synthesize extStatReporter=_extStatReporter;
@property(nonatomic) _Bool collectionListButtonAnimationPlayed; // @synthesize collectionListButtonAnimationPlayed=_collectionListButtonAnimationPlayed;
@property(retain, nonatomic) WCFinderProfileCollectionListLayout *collectionListLayout; // @synthesize collectionListLayout=_collectionListLayout;
@property(nonatomic) _Bool showProfilePostFromSnsAlbumEntry; // @synthesize showProfilePostFromSnsAlbumEntry=_showProfilePostFromSnsAlbumEntry;
@property(nonatomic) __weak WCFinderProfileFeedPageHeaderContainerView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) RichTextView *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSMutableSet *exposedTopicIds; // @synthesize exposedTopicIds=_exposedTopicIds;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderFeedArray *displayFeedArray; // @synthesize displayFeedArray=_displayFeedArray;
@property(retain, nonatomic) WCFinderProfileTagFeedViewModel *topicFeedVM; // @synthesize topicFeedVM=_topicFeedVM;
@property(retain, nonatomic) NSMutableDictionary *exposedTimeMap; // @synthesize exposedTimeMap=_exposedTimeMap;
- (id)findVisiableJustWatchItem:(id)arg1 firstVisiableIdx:(long long *)arg2;
- (void)onJustWatchControllerCleanJustWatch;
- (void)checkJustWatchCellForScroll;
- (void)checkJustWatchCellForCellDisplay:(id)arg1;
- (void)scrollToJustWatchFeed:(long long)arg1;
- (void)onEnsurePullableJustWatchDataNeedReplaceFeedArray:(id)arg1;
- (void)onEnsurePullableJustWatchDataCouldDirectScrollToFeed;
- (void)onJustWatchControllerRequiredJumpToFeed:(id)arg1;
- (void)reloadJustWatchFeed;
- (void)onJustWatchControllerRequiredDisplay:(CDUnknownBlockType)arg1;
- (struct CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (void)showPostFromSnsAlbum;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)unExposeTopicInfos;
- (void)exposeTopicInfos;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (void)reportPageScrollDown;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)setupCollectionReportWithCollectionItemButtons:(id)arg1;
- (void)setupCollectionReportWithNextEpisodeBtn:(id)arg1 allEpisodeBtn:(id)arg2 moreBtn:(id)arg3;
- (void)tryShowCollectionHeaderShortcutButton;
- (void)headerContainerClickedCollectionMoreButton:(id)arg1;
- (void)headerContainer:(id)arg1 clickedCollectionItemWithInfo:(id)arg2;
- (void)headerContainerClickedCollectionAllEpisodeButton:(id)arg1;
- (void)headerContainerClickedCollectionNextEpisodeButton:(id)arg1;
- (void)headerContainerExpandChangedChanged:(id)arg1 isExpand:(_Bool)arg2;
- (void)headerContainerViewContentHeightChanged:(id)arg1;
- (void)headerContainerView:(id)arg1 selectedTopic:(id)arg2;
- (void)exposeItemViewDisappear;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)tagListHeight;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (unsigned long long)streamFeedColumnCount;
- (void)tapRetry;
- (void)updateEmptyLoadingView:(_Bool)arg1;
- (_Bool)isSelfProfile;
- (_Bool)canShowPostFromSnsEntry;
- (void)updateStateLabelPosition;
- (void)updateFooterViewState;
- (void)updateTopRefreshState;
- (void)onLoadingStateChanged:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (_Bool)showJustWatchWithContentVM:(id)arg1;
- (void)reportFeedStreamClickSelectedIndexPath:(id)arg1;
- (long long)calcauteMaxVisibleIndex;
- (void)didSelectShortFeedItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)topicFeedVMFetchStateChanged:(id)arg1;
- (void)topicFeedVMRequestDataFaield:(id)arg1;
- (void)topicFeedVMBeginRequestFirstPage:(id)arg1;
- (id)snapshotForFeedArray:(id)arg1;
- (void)triggerLoadMoreWhenFeedChange;
- (void)_onFeedArrayInsertToTop;
- (_Bool)isFeedArrayInsertAllToTop:(id)arg1;
- (void)onFeedArrayChange:(id)arg1 context:(id)arg2;
- (void)setDisplayFeedArray:(id)arg1 animated:(_Bool)arg2;
- (void)_doUpdateHeader;
- (void)setHeaderViewNeedUpdate;
- (void)onCollectionListDataChangedForViewModel:(id)arg1;
- (void)onTopicListChangedForViewModel:(id)arg1;
- (void)preloadVideoFirstFrame;
- (void)setViewModel:(id)arg1;
- (void)updateTagContainerInsets;
- (void)onPageSizeDidChanged;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)registerStreamCellForCollection:(id)arg1;
- (id)layout;
- (id)loadView;
- (void)viewWillApear;
- (void)viewDidAppear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

