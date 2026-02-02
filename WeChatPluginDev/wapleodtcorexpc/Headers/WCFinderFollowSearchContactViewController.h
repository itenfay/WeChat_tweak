//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUISearchBar, NSString, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderRefreshTableFooterView;
@protocol WCFinderFollowSearchContactViewControllerDelegate, WCFinderSearchContactViewModelProtocol;

@interface WCFinderFollowSearchContactViewController
{
    _Bool _hideHistoryView;
    id <WCFinderFollowSearchContactViewControllerDelegate> _delegate;
    UIView *_navigationView;
    MMUISearchBar *_searchBar;
    MMUILabel *_cancelSearchLabel;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    id <WCFinderSearchContactViewModelProtocol> _viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WCFinderSearchContactViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *cancelSearchLabel; // @synthesize cancelSearchLabel=_cancelSearchLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) _Bool hideHistoryView; // @synthesize hideHistoryView=_hideHistoryView;
@property(nonatomic) __weak id <WCFinderFollowSearchContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderSearchContactCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)clickQuitAction;
- (void)openProfileWithContact:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)showCommentProfileViewWithContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTableViewHeaderWithTitle:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
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

