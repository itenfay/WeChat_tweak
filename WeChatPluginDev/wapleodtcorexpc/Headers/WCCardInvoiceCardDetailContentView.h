//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCShareCardInvoiceHeaderView;
@protocol WCCardInvoiceCardContentViewDelegate;

@interface WCCardInvoiceCardDetailContentView
{
    _Bool _bUserHasClickUnfoldBtn;
    _Bool _bIsShareCardMode;
    id <WCCardInvoiceCardContentViewDelegate> _delegte;
    WCShareCardInvoiceHeaderView *_invoiceCardHeaderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCShareCardInvoiceHeaderView *invoiceCardHeaderView; // @synthesize invoiceCardHeaderView=_invoiceCardHeaderView;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(nonatomic) __weak id <WCCardInvoiceCardContentViewDelegate> delegte; // @synthesize delegte=_delegte;
- (void)realOpenTinyAppWithUsername:(id)arg1 path:(id)arg2;
- (void)realOpenUrl:(id)arg1;
- (double)getTableViewCellSumHeight;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onClickFlatBtn:(id)arg1;
- (double)calcDetailTableCellHeight;
- (void)makeDetailTableCell:(id)arg1;
- (void)makeCellBottomLineWithRowType:(id)arg1 withIndexPath:(id)arg2 withCell:(id)arg3 withCellContentHeight:(double)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onInvoiceCardViewApplyBtnClick;
- (void)reloadContentData;
- (id)createItemDetailView;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(_Bool)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

