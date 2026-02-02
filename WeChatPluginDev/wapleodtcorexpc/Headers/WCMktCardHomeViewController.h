//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, WCMktCardHomeLogicController;

@interface WCMktCardHomeViewController
{
    WCMktCardHomeLogicController *_logicController;
    MMTableView *_tableView;
    NSString *_currentSelectCardDetailMerchantID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentSelectCardDetailMerchantID; // @synthesize currentSelectCardDetailMerchantID=_currentSelectCardDetailMerchantID;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktCardHomeLogicController *logicController; // @synthesize logicController=_logicController;
- (void)registerYReportSdk;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onUseCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)handleMerchantInfoUpdateWithCardData:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onTableViewNeedRefresh;
- (void)onUpdateTopCellWithIndexPath:(id)arg1;
- (void)onUpdateStoreElemDataSuccWithIndexPath:(id)arg1;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)storeCellClickSortrule;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)arg1;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)arg1 mchID:(id)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)arg1;
- (void)scrollToRowWithIndexPath:(id)arg1;
- (void)rightBarButtonClick;
- (void)updateRightBarButton;
- (void)updateFooterView;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)faqButtonClick;
- (void)handleHeaderRefresh;
- (void)setupEmptyView:(id)arg1;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

