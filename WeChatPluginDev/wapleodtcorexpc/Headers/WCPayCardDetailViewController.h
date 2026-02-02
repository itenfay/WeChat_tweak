//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIView, WCActionSheet;
@protocol WCPayCardDetailViewControllerDelegate;

@interface WCPayCardDetailViewController
{
    UIButton *m_footerButton;
    WCActionSheet *m_actionSheet;
    id <WCPayCardDetailViewControllerDelegate> m_delegate;
    UIView *m_overseasCardView;
    UIView *tenpayTelView;
    unsigned int _patternLockLogicTag;
}

- (void).cxx_destruct;
- (void)startUnbind;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (void)onAlertViewStartUnbind;
- (void)onAlertViewUnbindBtn;
- (void)onAlertViewPatternLockSetup;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)showRepayCell;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)CardDetailExpireUnbindCard;
- (void)onOperate;
- (void)initOverseasCardDetailView;
- (void)viewDidLoad;
- (void)initTenpayTelView;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (void)onBankPhone;
- (void)refreshViewWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

