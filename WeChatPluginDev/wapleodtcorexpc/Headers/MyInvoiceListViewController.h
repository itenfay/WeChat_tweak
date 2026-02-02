//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InvoiceFooterView, MyInvoiceData, NSMutableArray, NSString, PasswordLogic, UIView;
@protocol MyInvoiceListViewControllerDelegate;

@interface MyInvoiceListViewController
{
    PasswordLogic *m_passwordLogic;
    int m_enWCAddressAddressListScene;
    UIView *m_oLastLongPressView;
    NSMutableArray *m_invoiceDataArr;
    int m_scene;
    MyInvoiceData *m_selectInvoice;
    id <MyInvoiceListViewControllerDelegate> _delegate;
    InvoiceFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) InvoiceFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <MyInvoiceListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDelInvoiceRet:(_Bool)arg1 andGroupId:(long long)arg2;
- (void)OnEditInvoiceData:(id)arg1;
- (void)OnAddNewInvoiceData:(id)arg1 ofGroupId:(long long)arg2;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnPress:(id)arg1;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)gotoInfoOfInvoice:(id)arg1;
- (void)accessoryButtonTappedForRowWithIndexPath:(id)arg1 Cell:(id)arg2;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (void)gotoInvoiceDetail:(id)arg1;
- (void)selectActionCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeNewCell:(id)arg1 cellInfo:(id)arg2;
- (void)InvoiceAdd;
- (void)refreshViewWithInvoiceDataArr:(id)arg1;
- (void)resetDefautSelect;
- (double)getCellHeightForInvoice:(id)arg1;
- (id)getInvoiceCopiedString:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)setupWithInvoiceDataArr:(id)arg1 fromScene:(int)arg2;
- (void)dealloc;
- (void)viewDidBeInteractivePoped;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onNext;
- (void)MyInvoiceBack;
- (void)initNavigationBar;
- (void)initPasswordLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

