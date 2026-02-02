//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIView, WCMktTicketListLogicController;

@interface WCMktTicketListViewControler
{
    WCMktTicketListLogicController *_logicController;
    MMTableView *_tableView;
    UIView *_emptyTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktTicketListLogicController *logicController; // @synthesize logicController=_logicController;
- (void)onUseCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)handleCardDataNeedDeleteWithCardData:(id)arg1;
- (void)onDeleteTicketListElemDataSuccWithIndexPath:(id)arg1;
- (void)onTableviewGetTicketHomepageFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)reportTicketDataListWithIndexPath:(id)arg1 reportScene:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateFooterView;
- (void)onTicketItemCellTagBtnClick:(id)arg1;
- (void)makeMedicateBannerCellConetnt:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
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
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rightBarButtonClick;
- (void)handleHeaderRefresh;
- (void)invalidTicketBtnClick;
- (void)setupEmptyView;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
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

