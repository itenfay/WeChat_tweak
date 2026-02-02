//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, NSTimer, UICollectionView, UIImageView, UILabel, UITapGestureRecognizer, WCFinderExtStatsReporter, WCFinderNearbyViewModel, WCFinderStreamFooterView, WCFinderStreamHeaderView, WCFinderStreamLayout, WCFinderStreamLiveCollectionViewCell;
@protocol WCFinderNearbyViewControllerDelegate;

@interface WCFinderNearbyViewController
{
    _Bool _isSelected;
    _Bool _hasAppear;
    _Bool _hasReportCreateEvent;
    id <WCFinderNearbyViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    WCFinderStreamFooterView *_refreshFooterView;
    WCFinderStreamHeaderView *_refreshHeaderView;
    WCFinderStreamLayout *_streamLayout;
    WCFinderNearbyViewModel *_viewModel;
    unsigned long long _footerRefreshState;
    unsigned long long _headerRefreshState;
    NSMutableDictionary *_exposeTimeDict;
    NSTimer *_systemSettingTimer;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    WCFinderStreamLiveCollectionViewCell *_livingCell;
    unsigned long long _enterTime;
    WCFinderExtStatsReporter *_extStatsReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatsReporter; // @synthesize extStatsReporter=_extStatsReporter;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) WCFinderStreamLiveCollectionViewCell *livingCell; // @synthesize livingCell=_livingCell;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSTimer *systemSettingTimer; // @synthesize systemSettingTimer=_systemSettingTimer;
@property(retain, nonatomic) NSMutableDictionary *exposeTimeDict; // @synthesize exposeTimeDict=_exposeTimeDict;
@property(nonatomic) _Bool hasReportCreateEvent; // @synthesize hasReportCreateEvent=_hasReportCreateEvent;
@property(nonatomic) _Bool hasAppear; // @synthesize hasAppear=_hasAppear;
@property(nonatomic) unsigned long long headerRefreshState; // @synthesize headerRefreshState=_headerRefreshState;
@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(retain, nonatomic) WCFinderNearbyViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderStreamLayout *streamLayout; // @synthesize streamLayout=_streamLayout;
@property(retain, nonatomic) WCFinderStreamHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) WCFinderStreamFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak id <WCFinderNearbyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)onNearbyRelatedTriggerUnLikeAction:(id)arg1;
- (void)finderLiveSectionTableViewCell:(id)arg1 endExposeLiveContentVM:(id)arg2;
- (void)finderLiveSectionTableViewCell:(id)arg1 didExposeLiveContentVM:(id)arg2;
- (void)finderLiveSectionTableViewCellFetchMoreLiveList:(id)arg1;
- (void)onDidExposeLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)onDidSelectLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)jumpToSettingDidClick:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)nearByLiveDataFetchFinish:(_Bool)arg1;
- (void)nearByLiveDataNoMore;
- (void)nearByLiveDataRefreshData;
- (void)nearByLiveDataChanged;
- (void)resetCollectionVewInset;
- (void)resetRefreshOffset;
- (void)resetRefreshStateNormal;
- (void)nearByNextPageAppendData:(id)arg1;
- (void)nearByDataSourceChanged;
- (void)nearByLocalDataFetchScuccess;
- (void)nearBySourceNoMoreData:(unsigned long long)arg1;
- (void)nearByDataSourceFetchError:(unsigned long long)arg1;
- (void)nearByDataPullLoadingFinish:(unsigned long long)arg1;
- (void)nearByDataSourceLocalEmpty;
- (void)nearByLocationServiceAuthorizationChanged:(_Bool)arg1;
- (void)refreshHeaderBackAnimationWithCompletion:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void)onNearbyFlowViewIndexChanged:(long long)arg1;
- (void)onTriggerUnLikeAction:(id)arg1;
- (void)onClickPrivateMsgAction:(id)arg1;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (_Bool)streamRefreshHeaderDataSourceIsLoading:(id)arg1;
- (void)streamRefreshHeaderDidTriggerRefresh:(id)arg1;
- (void)fetchNextPage;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)refreshHeadOnScrolltoTop;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)reloadDataWrap;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (CDUnknownBlockType)iconGeneratorWithName:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)preloadVideoFirstFrame;
- (void)onFeedFlowViewEnterBackground;
- (void)onFeedFlowViewEnterForeground;
- (void)autoPlayLiveCell;
- (void)pourStateIntoPool:(id)arg1;
- (void)exposeLiveSectionWithContentVM:(id)arg1 endExpose:(_Bool)arg2;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)onDataEmptyState:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)setupLayoutAndCollectionView;
- (void)forceUpdateData;
- (void)clearStateTipsView;
- (void)updateViewWillDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)exposeMarkRead:(id)arg1 duration:(unsigned long long)arg2;
- (void)exposeItemViewAppear;
- (void)exposeItemViewDisappear;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (void)updateViewDidAppear;
- (_Bool)shouldInteractivePop;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willDisappear;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

