//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSString, UIButton, UIView, WCMktCouponHomeLogicController;

@interface WCMktCouponHomeViewController
{
    WCMktCouponHomeLogicController *_logicController;
    MMTableView *_tableView;
    MMUILabel *_headerContentLabel;
    UIButton *_headerContentCoverBtn;
    UIView *_emptyView;
    NSString *_currentSelectCardDetailMerchantID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentSelectCardDetailMerchantID; // @synthesize currentSelectCardDetailMerchantID=_currentSelectCardDetailMerchantID;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIButton *headerContentCoverBtn; // @synthesize headerContentCoverBtn=_headerContentCoverBtn;
@property(retain, nonatomic) MMUILabel *headerContentLabel; // @synthesize headerContentLabel=_headerContentLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktCouponHomeLogicController *logicController; // @synthesize logicController=_logicController;
- (void)onUseCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)handleMerchantInfoUpdateWithCardData:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onTableViewNeedUpdateSortContent;
- (void)onTableViewNeedUpdateWithIndexPath:(id)arg1;
- (void)onTableViewNeedShowLoading;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)setupEmptyView;
- (void)rightBarButtonClick;
- (void)updateRightBarButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sortRuleCoverBtnClick;
- (void)handleHeaderRefresh;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)arg1;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)arg1 mchID:(id)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)arg1;
- (void)scrollToRowWithIndexPath:(id)arg1;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)forceUseSortByAcceptTime;
- (void)updateFooterView;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
- (id)navigationBarBackgroundColor;
- (_Bool)useBlackStatusbar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

