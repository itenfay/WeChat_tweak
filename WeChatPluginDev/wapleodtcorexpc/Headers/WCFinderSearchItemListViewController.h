//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderCustomPaging, WCFinderCustomPanelSheet, WCFinderEventHeaderActionHandler, WCFinderFeedListView, WCFinderSearchArrowTitleView, WCFinderSearchHistoryListView, WCFinderSearchListViewModel, WCFinderSearchTitleView, WCFinderShareCustomTransition;

@interface WCFinderSearchItemListViewController
{
    WCFinderSearchTitleView *_customTitleView;
    WCFinderSearchArrowTitleView *_arrowTitleView;
    WCFinderFeedListView *_feedListView;
    unsigned long long _firstViewOffset;
    WCFinderSearchListViewModel *_viewModel;
    NSString *_traceId;
    WCFinderSearchHistoryListView *_historyListView;
    WCFinderCustomPaging *_customPagingHelper;
    long long _playFeedbackSection;
    WCFinderEventHeaderActionHandler *_headerActionHeandler;
    WCFinderCustomPanelSheet *_headerEventSheet;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak WCFinderCustomPanelSheet *headerEventSheet; // @synthesize headerEventSheet=_headerEventSheet;
@property(retain, nonatomic) WCFinderEventHeaderActionHandler *headerActionHeandler; // @synthesize headerActionHeandler=_headerActionHeandler;
@property(nonatomic) long long playFeedbackSection; // @synthesize playFeedbackSection=_playFeedbackSection;
@property(retain, nonatomic) WCFinderCustomPaging *customPagingHelper; // @synthesize customPagingHelper=_customPagingHelper;
@property(retain, nonatomic) WCFinderSearchHistoryListView *historyListView; // @synthesize historyListView=_historyListView;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) WCFinderSearchListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderSearchArrowTitleView *arrowTitleView; // @synthesize arrowTitleView=_arrowTitleView;
@property(retain, nonatomic) WCFinderSearchTitleView *customTitleView; // @synthesize customTitleView=_customTitleView;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)registerYReportSdk;
- (int)refCommentScene;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onDeleteSearchRecord:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)onClickCleanButton:(id)arg1;
- (void)onSelectSearchRecord:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onClickArrowTitleView:(id)arg1;
- (void)onFinderSearchListEventInfoChanged;
- (void)onFinderSearchListQueryTextChanged;
- (void)onFinderSearchListBeginSearch;
- (void)autoScrollToNextFeed;
- (void)updateLoadingStatus:(_Bool)arg1;
- (void)dataProviderFetchFailed:(id)arg1;
- (void)dataProvider:(id)arg1 removeAtIdx:(long long)arg2;
- (void)dataProvider:(id)arg1 appendDataToRange:(struct _NSRange)arg2;
- (id)finderFeedListView:(id)arg1 nextMediaIndexPath:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)tryPlayPageFeedBack;
- (void)updateSplitViewCell;
- (void)setupAllSplitCellNeedUpdateAgain;
- (void)finderFeedListView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)animatedDisplayBannerView:(long long)arg1;
- (void)updateCurrentDisplayVM;
- (void)customPagingDidEndDecelerating;
- (_Bool)isCustomPagingSplitView:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)finderFeedListViewBeginDecelerating:(id)arg1;
- (void)finderFeedListView:(id)arg1 scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)finderFeedListView:(id)arg1 willBeginDraging:(id)arg2;
- (id)splitLayoutVMAtSection:(long long)arg1;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)navigationCleanButtonColor;
- (id)navigationItemSearchIconTineColor;
- (id)navigationItemCustomTineColor;
- (void)customChangeNavigationBarColor;
- (void)onTextFieldChanged:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initNaviBar:(_Bool)arg1;
- (void)setupHistoryListView;
- (void)configureTableView;
- (id)navigationBarBackgroundColor;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

