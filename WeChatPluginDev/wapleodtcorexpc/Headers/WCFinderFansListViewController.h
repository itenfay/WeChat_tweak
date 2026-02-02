//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUISearchBar, NSString, UILabel, UITapGestureRecognizer, WCFinderContact, WCFinderFansListVCParams, WCFinderFansListViewModel, WCFinderFollowSearchContactViewController, WCFinderRefreshTableFooterView, WCTableView;

@interface WCFinderFansListViewController
{
    int _fromCommentScene;
    WCTableView *_tableView;
    WCFinderFansListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    MMUISearchBar *_searchBar;
    WCFinderContact *_selectContact;
    WCFinderFollowSearchContactViewController *_searchContactVC;
    WCFinderFansListVCParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFansListVCParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderFollowSearchContactViewController *searchContactVC; // @synthesize searchContactVC=_searchContactVC;
@property(retain, nonatomic) WCFinderContact *selectContact; // @synthesize selectContact=_selectContact;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderFansListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
- (void)registerYReportSdk;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)didCancelSelectSearchContact;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFansListFetchFailWithErrorCode:(int)arg1;
- (void)finderFansListViewModelNeedReloadDataWithContinueFlag:(_Bool)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)clickSearchBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)updateTitle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

