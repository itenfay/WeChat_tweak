//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMLimitedModeSetPasswordLogic, MMLimitedModeVerifyPasswordLogic, MMUIButton, MMUILabel, MMUITextField, NSString, WCPayInputView;
@protocol MMLimitedModeIndependentVerifyViewControllerDelegate;

@interface MMLimitedModeIndependentVerifyViewController
{
    double m_fKeyboardHeight;
    MMLimitedModeVerifyPasswordLogic *m_verifyPasswordLogic;
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
    MMUIButton *m_payInputViewButton;
    _Bool m_isShowErrorTip;
    unsigned int _m_verifyScene;
    MMUILabel *m_titleLabel;
    MMUITextField *m_textField;
    MMUIButton *m_forgetPassWordButton;
    MMUILabel *m_forgetPassWordLabel;
    MMUILabel *m_errorLabel;
    id <MMLimitedModeIndependentVerifyViewControllerDelegate> _m_delegate;
    long long _scene;
    CDUnknownBlockType _m_closeBlock;
    WCPayInputView *_payInputView;
    ForwardMessageLogicController *_forwardMsgLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
@property(copy, nonatomic) CDUnknownBlockType m_closeBlock; // @synthesize m_closeBlock=_m_closeBlock;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int m_verifyScene; // @synthesize m_verifyScene=_m_verifyScene;
@property(nonatomic) __weak id <MMLimitedModeIndependentVerifyViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MMUILabel *m_errorLabel; // @synthesize m_errorLabel;
@property(retain, nonatomic) MMUILabel *m_forgetPassWordLabel; // @synthesize m_forgetPassWordLabel;
@property(retain, nonatomic) MMUIButton *m_forgetPassWordButton; // @synthesize m_forgetPassWordButton;
@property(retain, nonatomic) MMUITextField *m_textField; // @synthesize m_textField;
@property(retain, nonatomic) MMUILabel *m_titleLabel; // @synthesize m_titleLabel;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)onVerifyPasswordRetTicket:(id)arg1 needShowAlert:(_Bool)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (double)getkeyboardShowAcceptBtnBottom;
- (double)getkeyboardHideAcceptBtnBottom;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onPayInputViewButtonClick;
- (void)forwardPasswordResetMsg;
- (void)_onChinaForgetPassWord;
- (void)_onOverseaForgetPassWord;
- (void)onForgetPassWord;
- (void)doInputFinishAction;
- (void)onTextFieldContentChange:(id)arg1;
- (void)onBack;
- (void)showErrorLabel:(id)arg1 isShow:(_Bool)arg2;
- (id)getTitleLabelText;
- (id)getTextFieldText;
- (double)getInputViewWidth;
- (void)initUI;
- (void)initData;
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

