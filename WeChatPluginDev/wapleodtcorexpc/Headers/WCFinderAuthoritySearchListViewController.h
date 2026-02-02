//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUISearchBar, NSArray, NSString, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderRefreshTableFooterView;
@protocol WCFinderAuthorityListViewModelProtocol, WCFinderShieldOtherLiedSearchFeedViewControllerDelegate;

@interface WCFinderAuthoritySearchListViewController
{
    id <WCFinderShieldOtherLiedSearchFeedViewControllerDelegate> _delegate;
    UIView *_navigationView;
    MMUISearchBar *_searchBar;
    MMUILabel *_cancelSearchLabel;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    id <WCFinderAuthorityListViewModelProtocol> _viewModel;
    NSArray *_searchResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) id <WCFinderAuthorityListViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *cancelSearchLabel; // @synthesize cancelSearchLabel=_cancelSearchLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) __weak id <WCFinderShieldOtherLiedSearchFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDataFetchFinish;
- (void)viewModelSearchResultRequestNextPageFailed:(id)arg1 errorMsg:(id)arg2;
- (void)viewModelSearchResultHasNoMoreData:(id)arg1;
- (void)configStatusTips:(id)arg1;
- (void)viewModel:(id)arg1 onSearchResultUpdated:(id)arg2;
- (int)feedViewControllerScene;
- (void)doThrottleSearch;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearchAction:(id)arg1;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)clickQuitAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onFinderSearchContactReload:(id)arg1;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultEmpty;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)onTextFieldChanged:(id)arg1;
- (void)configTableView;
- (void)initNaviBar;
- (void)willDisappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

