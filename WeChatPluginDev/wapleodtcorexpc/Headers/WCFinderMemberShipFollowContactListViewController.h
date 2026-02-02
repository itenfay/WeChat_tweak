//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITapGestureRecognizer, WCFinderMemberShipFollowContactListViewModel, WCFinderMembershipContact, WCFinderRefreshTableFooterView, WCTableView;

@interface WCFinderMemberShipFollowContactListViewController
{
    WCTableView *_tableView;
    WCFinderMemberShipFollowContactListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderMembershipContact *_selectedContact;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderMembershipContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderMemberShipFollowContactListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
- (void)onFinderMemberShipBecomeMember;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onMembershipFollowContactListViewModelFetchFailWithErrorCode:(int)arg1;
- (void)onMembershipFollowContactListViewModelNeedReloadDataWithContinueFlag:(_Bool)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)updateTitle;
- (void)configureTableView;
- (void)bindPageReport;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

