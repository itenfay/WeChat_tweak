//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TenpayPasswordCtrl, UIColor, UIImage, UIView, WCPayInputView;

@interface WCPayTenpayPasswordCtrlItem
{
    TenpayPasswordCtrl *m_textField;
    UIImage *m_image;
    _Bool _keyboardDisabled;
    WCPayInputView *_payInputView;
    long long _pwdEncryptMode;
    NSString *_pwdNonce;
    UIColor *_numColor;
    UIColor *_numFontColor;
    UIColor *_extendColor;
    UIColor *_pressColor;
    UIColor *_lineColor;
    long long _pwdViewStyle;
    UIView *_keyboardMask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *keyboardMask; // @synthesize keyboardMask=_keyboardMask;
@property(nonatomic) long long pwdViewStyle; // @synthesize pwdViewStyle=_pwdViewStyle;
@property(retain) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain) UIColor *pressColor; // @synthesize pressColor=_pressColor;
@property(retain) UIColor *extendColor; // @synthesize extendColor=_extendColor;
@property(retain) UIColor *numFontColor; // @synthesize numFontColor=_numFontColor;
@property(retain) UIColor *numColor; // @synthesize numColor=_numColor;
@property(nonatomic) _Bool keyboardDisabled; // @synthesize keyboardDisabled=_keyboardDisabled;
@property(retain, nonatomic) NSString *pwdNonce; // @synthesize pwdNonce=_pwdNonce;
@property(nonatomic) long long pwdEncryptMode; // @synthesize pwdEncryptMode=_pwdEncryptMode;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
- (void)showBackgroundImage:(_Bool)arg1;
- (void)updatePwdViewStyle:(long long)arg1;
- (void)setTextFieldServerSalt:(id)arg1;
- (void)setTextFieldSalt;
- (void)autoRemarkKeyBoradType;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (_Bool)onError:(id)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (id)getRsa2048EncryValue:(long long)arg1 salt:(id)arg2 timeStamp:(unsigned long long)arg3 nonceStr:(id)arg4;
- (void)reportSm2PwdError:(id)arg1 sm2HashType:(long long)arg2;
- (void)reportRSAError:(id)arg1 isRSA2048:(_Bool)arg2;
- (id)getSM2EncryptValue:(long long)arg1 timestamp:(unsigned long long)arg2 nonce:(id)arg3;
- (id)getSM2EncryptValue:(long long)arg1 nonce:(id)arg2;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
- (id)getHashData;
- (void)setKeyboardAccessibility:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)initWithYogaNumColor:(id)arg1 numFontColor:(id)arg2 extendColor:(id)arg3 pressColor:(id)arg4 lineColor:(id)arg5;
- (id)initWithImage:(id)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)clearInput;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)initView:(struct CGRect)arg1;
- (void)captureScreenDidChange;
- (void)updatePasswordCtrl;
- (id)getValue;
- (struct CGSize)getSize;
- (long long)getTextLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

