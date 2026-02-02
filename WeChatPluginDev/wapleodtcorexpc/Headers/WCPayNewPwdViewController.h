//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIView, WCPayTenpayPasswordCtrlItem;
@protocol WCPayNewPwdViewControllerDelegate;

@interface WCPayNewPwdViewController
{
    id <WCPayNewPwdViewControllerDelegate> m_delegate;
    _Bool _isLogicStop;
    _Bool _isUseFaceId;
    _Bool _canUseBiotricAuth;
    unsigned long long _authType;
    NSString *_vcPwdTitle;
    NSString *_vcPwdTips;
    NSString *_vcBiotricTitle;
    NSString *_vcTouchIdTips;
    NSString *_vcFaceIdTips;
    UIView *_verifyPasswordView;
    UIView *_verifyBiotricView;
    UIView *_currentView;
    UIButton *_footerButton;
    UILabel *_pwdDetailLabel;
    UILabel *_bioDetailLabel;
    UIButton *_changeToBiotricAuthBtn;
    UIButton *_changeToPwdAuthBtn;
    NSString *_seChallenge;
    WCPayTenpayPasswordCtrlItem *_passwordTextField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) NSString *seChallenge; // @synthesize seChallenge=_seChallenge;
@property(nonatomic) _Bool canUseBiotricAuth; // @synthesize canUseBiotricAuth=_canUseBiotricAuth;
@property(nonatomic) _Bool isUseFaceId; // @synthesize isUseFaceId=_isUseFaceId;
@property(retain, nonatomic) UIButton *changeToPwdAuthBtn; // @synthesize changeToPwdAuthBtn=_changeToPwdAuthBtn;
@property(retain, nonatomic) UIButton *changeToBiotricAuthBtn; // @synthesize changeToBiotricAuthBtn=_changeToBiotricAuthBtn;
@property(retain, nonatomic) UILabel *bioDetailLabel; // @synthesize bioDetailLabel=_bioDetailLabel;
@property(retain, nonatomic) UILabel *pwdDetailLabel; // @synthesize pwdDetailLabel=_pwdDetailLabel;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *verifyBiotricView; // @synthesize verifyBiotricView=_verifyBiotricView;
@property(retain, nonatomic) UIView *verifyPasswordView; // @synthesize verifyPasswordView=_verifyPasswordView;
@property(retain, nonatomic) NSString *vcFaceIdTips; // @synthesize vcFaceIdTips=_vcFaceIdTips;
@property(retain, nonatomic) NSString *vcTouchIdTips; // @synthesize vcTouchIdTips=_vcTouchIdTips;
@property(retain, nonatomic) NSString *vcBiotricTitle; // @synthesize vcBiotricTitle=_vcBiotricTitle;
@property(retain, nonatomic) NSString *vcPwdTips; // @synthesize vcPwdTips=_vcPwdTips;
@property(retain, nonatomic) NSString *vcPwdTitle; // @synthesize vcPwdTitle=_vcPwdTitle;
@property(nonatomic) _Bool isLogicStop; // @synthesize isLogicStop=_isLogicStop;
@property(nonatomic) unsigned long long authType; // @synthesize authType=_authType;
- (void)animateToPwdCtrl;
- (void)clearPwdInput;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)showVerifyBiotricCtrl;
- (void)showVerifyPwdCtrl;
- (void)updateAuthView:(id)arg1 pwdTips:(id)arg2 biotricTitle:(id)arg3 touchIdTips:(id)arg4 faceIdTips:(id)arg5 canUseBiotricAuth:(_Bool)arg6 challenge:(id)arg7;
- (void)onBiotricAuthNext;
- (void)updateBiotricCtrlWithTitle:(id)arg1 touchTips:(id)arg2 faceidTips:(id)arg3;
- (void)onChangeToPwdAuth;
- (void)onChangeToBiotricAuth;
- (void)updatePwdCtrlWithTitle:(id)arg1 tips:(id)arg2;
- (void)onCancelVerify;
- (void)initNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateSwitchBiotricLabel:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

