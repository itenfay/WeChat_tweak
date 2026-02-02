//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTagTextField, MMTitleView, NSString, UIImageView, UILabel, UITableView, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderMoreLiveSearchHistoryView, WCFinderRefreshTableFooterView, WCFinderSearchContactViewModel;

@interface WCFinderMoreLiveSearchContactViewController
{
    _Bool _hideHistoryView;
    MMTagTextField *_navSearchTextField;
    MMTitleView *_titleView;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderMoreLiveSearchHistoryView *_historyListView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    WCFinderSearchContactViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderMoreLiveSearchHistoryView *historyListView; // @synthesize historyListView=_historyListView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMTagTextField *navSearchTextField; // @synthesize navSearchTextField=_navSearchTextField;
@property(nonatomic) _Bool hideHistoryView; // @synthesize hideHistoryView=_hideHistoryView;
- (void)registerYReportSdk;
- (void)onFinderSearchContactCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)onDeleteSearchRecord:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)doSearchAction:(id)arg1;
- (void)onHistoryViewSelectSearchRecord:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onFinderSearchContactReload:(id)arg1;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultEmpty;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)onTapClearButton;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)onTextFieldChanged:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)setupHistoryListView;
- (void)configTableView;
- (void)initNaviBar;
- (void)willDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

