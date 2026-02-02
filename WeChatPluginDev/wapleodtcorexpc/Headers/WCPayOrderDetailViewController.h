//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSIndexPath, NSString, UIButton, WCBaseKeyboardToolBar, WCPayBindedCardPikerItem, WCPayTenpayPasswordCtrlItem;
@protocol WCPayOrderDetailViewControllerDelegate;

@interface WCPayOrderDetailViewController
{
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    WCPayBindedCardPikerItem *m_cardTypeItem;
    id <WCPayOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsError;
    NSIndexPath *m_selectItemIndex;
    _Bool bSelectedBalance;
    _Bool bUserSelected;
    MMUILabel *detailEnsureLabel;
}

- (void).cxx_destruct;
- (void)callDelegatePay;
- (double)calBalanceCellHeightWithForbidWord;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clearPwdInput;
- (void)OnWCPayOrderDetailViewClickedCoupous;
- (void)OnWCPayOrderDetailViewHeightChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)OnSelectedNewCard;
- (void)OnSelectedBalance;
- (void)OnChooseCard:(id)arg1;
- (void)OnChooseNewCard:(id)arg1;
- (void)onNext;
- (void)OnAddCardToSharedFavInfo;
- (void)OnAddPayCard;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeNewCardInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBalanceInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isNoCardOrBalanceDisable;
- (_Bool)isNeedAutoNext;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnCancel;
- (void)OnComfireEnsureAlert;
- (void)reloadPayTableView;
- (void)reloadBindTableView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

