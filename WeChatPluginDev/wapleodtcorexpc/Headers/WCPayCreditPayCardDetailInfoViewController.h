//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton;
@protocol WCPayCreditPayCardDetailInfoViewControllerDelegate;

@interface WCPayCreditPayCardDetailInfoViewController
{
    id <WCPayCreditPayCardDetailInfoViewControllerDelegate> m_delegate;
    UIButton *m_footerButton;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onUnBind;
- (void)onOperate;
- (void)reloadNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)addExpiredSection;
- (id)getContactBankFooterView;
- (id)getTableViewHeaderView;
- (void)addEachSection;
- (id)getBillTipWording;
- (void)showBankDetailCell;
- (void)showCreditRightsCell;
- (void)showCreditCardDetailInfoCell;
- (void)showRepayCell;
- (void)showBillAmountCell;
- (void)showUpgradeCell;
- (void)makeCreditUsedCell:(id)arg1;
- (void)onClickExtCell:(id)arg1;
- (void)makeExtCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeCreditCanUseCell:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

