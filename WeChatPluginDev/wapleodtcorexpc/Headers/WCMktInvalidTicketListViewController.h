//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIView, WCMktInvalidTicketListLogicController;

@interface WCMktInvalidTicketListViewController
{
    WCMktInvalidTicketListLogicController *_logicController;
    MMTableView *_tableView;
    UIView *_emptyTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktInvalidTicketListLogicController *logicController; // @synthesize logicController=_logicController;
- (void)onInvalidTicketItemCellTagBtnClick:(id)arg1;
- (void)onDeleteInvalidListElemDataSuccWithIndexPath:(id)arg1;
- (void)onTableviewGetInvalidTicketHomepageFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)reportInvalidTicketListDataWithIndexPath:(id)arg1 reportScene:(unsigned int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleHeaderRefresh;
- (void)setupDeleteAllBtn;
- (void)setupEmptyView;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
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

