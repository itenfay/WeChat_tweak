//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPickLocationViewController, NSString, UIImageView, UILabel, UITableView, WCFinderAddPOIViewController, WCFinderAnimationLoadingView, WCFinderManagePOIViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderManagePOIViewController
{
    _Bool _reloadFlag;
    _Bool _emptyFlag;
    _Bool _showingOtherVC;
    NSString *_finderUsername;
    WCFinderManagePOIViewModel *_viewModel;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateLabel;
    UIImageView *_retryImageView;
    WCFinderAddPOIViewController *_addVC;
    MMPickLocationViewController *_pickLocationViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showingOtherVC; // @synthesize showingOtherVC=_showingOtherVC;
@property(retain, nonatomic) MMPickLocationViewController *pickLocationViewController; // @synthesize pickLocationViewController=_pickLocationViewController;
@property(retain, nonatomic) WCFinderAddPOIViewController *addVC; // @synthesize addVC=_addVC;
@property(nonatomic) _Bool emptyFlag; // @synthesize emptyFlag=_emptyFlag;
@property(nonatomic) _Bool reloadFlag; // @synthesize reloadFlag=_reloadFlag;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderManagePOIViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddVCSelectPOI:(id)arg1;
- (void)onUnbindPOIFailure;
- (void)onUnbindPOISuccess;
- (void)onBindPOIFailure:(int)arg1;
- (void)onBindPOISuccess;
- (void)onBindingPOIListError;
- (void)onBindingPOIListNoMore;
- (void)onBindingPOIListUpdate;
- (void)onAuditingPOIListError;
- (void)onAuditingPOIListNoMore;
- (void)onAuditingPOIListUpdate;
- (void)reloadAllData;
- (void)bindPOIWithIds:(id)arg1;
- (void)updateEmptyState;
- (void)onCancelSeletctedLocation;
- (void)onTapAddButton;
- (id)onGetRightBarButton;
- (void)showPickLocationVC;
- (void)tapAddButton;
- (void)tapBackButton;
- (void)initViews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

