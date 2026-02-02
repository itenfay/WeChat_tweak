//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UITableView, WCFinderAnimationLoadingView, WCFinderPOIFavListViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderPOIFavListViewController
{
    WCFinderPOIFavListViewModel *_viewModel;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UIButton *_retryButton;
    UILabel *_emptyLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderPOIFavListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onPOIFavListTableViewCellClickedWithFavPOIItem:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)adjustDataLoadState;
- (void)onPOIFavListViewModelDataChanged;
- (void)onPOIFavListViewModelFetchDataFail;
- (void)onPOIFavListViewModelNoMoreData;
- (void)reportCellEventWithFavItem:(id)arg1 event:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onRetryBtnClicked;
- (int)commentScene;
- (struct CGPoint)tipsCenterPoint;
- (void)hideEmptyLabel;
- (void)showEmptyLabel;
- (void)hideRetryButton;
- (void)showRetryButton;
- (void)hideLoading;
- (void)showLoading;
- (void)updateUI;
- (void)setupUI;
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

