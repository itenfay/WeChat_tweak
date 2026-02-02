//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITapGestureRecognizer, WCFinderContact, WCFinderMembershipFansListViewModel, WCFinderRefreshTableFooterView, WCTableView;

@interface WCFinderMembershipFansListViewController
{
    WCTableView *_tableView;
    WCFinderMembershipFansListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderContact *_selectedContact;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    unsigned long long _fansCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderMembershipFansListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
- (void)onMembershipFansListViewModelFetchFailWithErrorCode:(int)arg1;
- (void)onMembershipFansListViewModelNeedReloadDataWithContinueFlag:(_Bool)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)updateTitle;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1 fansCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

