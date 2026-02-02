//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, WCMktCardHomeLogicControllerV2;

@interface WCMktCardHomeViewControllerV2
{
    WCMktCardHomeLogicControllerV2 *_logicController;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktCardHomeLogicControllerV2 *logicController; // @synthesize logicController=_logicController;
- (void)registerYReportSdk;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedReloadCellWithIndexPath:(id)arg1;
- (void)onTableViewNeedDeleteWithIndexPath:(id)arg1;
- (void)onTableViewNeedRefresh;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rightBarButtonClick;
- (void)handleHeaderRefresh;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupEmptyView:(id)arg1;
- (id)genTableFooterView;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFooterView;
- (void)updateRightBarButton;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
- (id)navigationBarBackgroundColor;
- (_Bool)useBlackStatusbar;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

