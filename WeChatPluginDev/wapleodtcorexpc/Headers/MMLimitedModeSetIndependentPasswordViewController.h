//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUITextField, NSString, WCPayInputView;

@interface MMLimitedModeSetIndependentPasswordViewController
{
    double m_fKeyboardHeight;
    _Bool _isShowErrorTip;
    _Bool _showRepeatWrongTips;
    unsigned int _m_setLimitedModePwdType;
    unsigned int _m_verifyScene;
    MMUILabel *m_titleLabel;
    MMUITextField *m_textField;
    MMUILabel *m_descLabel;
    MMUIButton *m_goToWechatPassWordButton;
    NSString *_ticket;
    long long _scene;
    WCPayInputView *_payInputView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool showRepeatWrongTips; // @synthesize showRepeatWrongTips=_showRepeatWrongTips;
@property(nonatomic) unsigned int m_verifyScene; // @synthesize m_verifyScene=_m_verifyScene;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned int m_setLimitedModePwdType; // @synthesize m_setLimitedModePwdType=_m_setLimitedModePwdType;
@property(nonatomic) _Bool isShowErrorTip; // @synthesize isShowErrorTip=_isShowErrorTip;
@property(retain, nonatomic) MMUIButton *m_goToWechatPassWordButton; // @synthesize m_goToWechatPassWordButton;
@property(retain, nonatomic) MMUILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) MMUITextField *m_textField; // @synthesize m_textField;
@property(retain, nonatomic) MMUILabel *m_titleLabel; // @synthesize m_titleLabel;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (double)getkeyboardShowAcceptBtnBottom;
- (double)getkeyboardHideAcceptBtnBottom;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onPayInputViewButtonClick;
- (void)onGoToWechatPassWord;
- (void)doInputFinishAction;
- (void)onTextFieldContentChange:(id)arg1;
- (void)onBack;
- (_Bool)isShowDesclabel;
- (_Bool)isShowGoToWechatPassWordButton;
- (id)getTextFieldText;
- (double)getInputViewWidth;
- (id)getDescLabelText;
- (id)getTitleLabelText;
- (void)initUI;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(_Bool)arg1;
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

