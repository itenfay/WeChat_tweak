//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCPayPwdCtrlPanelView;
@protocol WCPayPayPwdViewControllerDelegate;

@interface WCPayPayPwdViewController
{
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id <WCPayPayPwdViewControllerDelegate> m_delegate;
    long long _vcTag;
    long long _pwdEncryptMode;
    NSString *_pwdNonce;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pwdNonce; // @synthesize pwdNonce=_pwdNonce;
@property(nonatomic) long long pwdEncryptMode; // @synthesize pwdEncryptMode=_pwdEncryptMode;
@property(nonatomic) long long vcTag; // @synthesize vcTag=_vcTag;
- (void)setNavigationBarTitle:(id)arg1 Stype:(unsigned long long)arg2;
- (void)becomeInputViewFirstResponse;
- (void)resignInputViewFirstResponse;
- (void)clearPwdInput;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setFooterBtnTitle:(id)arg1;
- (void)showSecondPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(_Bool)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 fromError:(_Bool)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 WithTip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2;
- (void)setPwdCtrlPasswordTextFieldEncryptModeAndNonce:(id)arg1;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(_Bool)arg3;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (void)leftBarButtonClick;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (id)init;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setTitle:(id)arg1;

@end

