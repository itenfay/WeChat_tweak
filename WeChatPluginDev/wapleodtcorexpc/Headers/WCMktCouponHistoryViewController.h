//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIView, WCMktCouponHistoryLogicController;

@interface WCMktCouponHistoryViewController
{
    WCMktCouponHistoryLogicController *_logicController;
    MMTableView *_tableView;
    UIView *_emptyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktCouponHistoryLogicController *logicController; // @synthesize logicController=_logicController;
- (void)onDeleteCouponHistoryListElemDataSuccWithIndexPath:(id)arg1;
- (void)onTableviewGetCouponHomepageFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)rightBarButtonClick;
- (void)updateNavigationBar;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateFooterView;
- (void)handleHeaderRefresh;
- (void)setupEmptyView;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

