//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BalanceMobileInfo, NSString, UIView, WCPayBindCardInfo;
@protocol WCPayBindedCardListViewControllerDelegate;

@interface WCPayBindedCardListViewController
{
    WCPayBindCardInfo *selectedPayCardInfo;
    id <WCPayBindedCardListViewControllerDelegate> m_delegate;
    _Bool bSelectedNewCardToResetPwd;
    _Bool bViewDidBePoped;
    NSString *nsUsedNewCardWording;
    NSString *nsHeaderTips;
    UIView *tenpayTelView;
    BalanceMobileInfo *_selectedMobileInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BalanceMobileInfo *selectedMobileInfo; // @synthesize selectedMobileInfo=_selectedMobileInfo;
- (id)getCardInfoWith:(id)arg1;
- (id)getSelectedMobileInfo:(id)arg1;
- (_Bool)checkBankCanShow:(id)arg1;
- (_Bool)isMobileInfoAvailble:(id)arg1;
- (id)checkBankAvailable:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)verifyByCardNumber;
- (void)onBankPhone;
- (void)onUpdateBankPhoneNumber;
- (void)OnSelectNewCard;
- (void)OnSelectMoblieInfo:(id)arg1;
- (void)leftBarButtonDone;
- (void)initKFTelView;
- (void)setHeaderTips:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setNewCardControlWording:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)noResetMobileForDigitalCert;
- (void)makeMobileCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadCardListView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)getMobileInfos;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

