//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUISearchBar, NSString, UILabel, UITapGestureRecognizer, UIView, WCFinderContactListViewModel, WCFinderFollowSearchContactViewController, WCFinderRefreshTableFooterView, WCTableView;

@interface WCFinderContactListViewController
{
    _Bool _disableSearch;
    int _finderProfileDefaultJumpTab;
    NSString *_titleFormatString;
    WCTableView *_tableView;
    WCFinderContactListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    MMUISearchBar *_searchBar;
    UIView *_searchContainer;
    WCFinderFollowSearchContactViewController *_searchContactVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFollowSearchContactViewController *searchContactVC; // @synthesize searchContactVC=_searchContactVC;
@property(retain, nonatomic) UIView *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderContactListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int finderProfileDefaultJumpTab; // @synthesize finderProfileDefaultJumpTab=_finderProfileDefaultJumpTab;
@property(retain, nonatomic) NSString *titleFormatString; // @synthesize titleFormatString=_titleFormatString;
@property(nonatomic) _Bool disableSearch; // @synthesize disableSearch=_disableSearch;
- (void)registerYReportSdk;
- (void)onFinderContactListCell:(id)arg1 liveNowViewDidClick:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)didCancelSelectSearchContact;
- (void)setupSearchBar;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)onFinderNotifyFollowCountNeedReload;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderContactListUpdateFollowingCount;
- (void)finderContactListFollowContact:(id)arg1;
- (void)finderContactListUnFollowContact:(id)arg1 index:(unsigned long long)arg2;
- (void)finderContactListViewFetchFailWithErrorCode:(int)arg1;
- (void)finderContactListViewNeedReloadWithContinueFlag:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)openProfileWithContact:(id)arg1;
- (void)clickSearchBar;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)updateTitle;
- (void)onLimitedClicked;
- (void)updateRightBarButtonItems;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
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

