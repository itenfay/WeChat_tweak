//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUISearchBar, NSString, UILabel, UITapGestureRecognizer, UIView, WCFinderMentionSearchViewController, WCFinderMentionUserViewModel, WCFinderRefreshTableFooterView, WCTableView;
@protocol WCFinderMentionUserListViewControllerDelegate;

@interface WCFinderMentionUserListViewController
{
    id <WCFinderMentionUserListViewControllerDelegate> _delegate;
    WCTableView *_tableView;
    WCFinderMentionUserViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    MMUISearchBar *_searchBar;
    UIView *_searchContainer;
    WCFinderMentionSearchViewController *_searchViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMentionSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) UIView *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderMentionUserViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderMentionUserListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)didCancelSelectSearchContact;
- (void)didSelectSearchContact:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderContactListUpdateFinished;
- (void)finderContactListFollowContact:(id)arg1;
- (void)finderContactListUnFollowContact:(id)arg1 index:(unsigned long long)arg2;
- (void)finderContactListViewFetchFailWithErrorCode:(int)arg1;
- (void)finderContactListViewNeedReloadWithContinueFlag:(_Bool)arg1;
- (id)getTableViewHeaderWithTitle:(id)arg1 section:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectedMentionFollowListCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)clickSearchBar:(id)arg1;
- (void)initSearchBar;
- (void)configureTableView;
- (void)onClickCloseLeftItem;
- (void)updateNavigationBarView;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)layoutComponents;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

