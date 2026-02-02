//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKPwdInputViewOnEndEnterPasswordCallback, MMKPwdInputViewOnPasswordChangeCallback, NSString, UIView, WCPayTenpayPasswordCtrlItem;
@protocol MMKImage;

@interface KindaPwdInputView
{
    unsigned int _solfEncryptVersion;
    WCPayTenpayPasswordCtrlItem *_m_passwordTextField;
    UIView *_m_view;
    id <MMKImage> _m_image;
    MMKPwdInputViewOnEndEnterPasswordCallback *_m_editEndCallBack;
    MMKPwdInputViewOnPasswordChangeCallback *_m_editChangeCallBack;
    long long _pwdStyle;
    long long _pwdEncryptMode;
    NSString *_pwdNonce;
    long long _pwdTimestamp;
    NSString *_solfEncryptSalt;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int solfEncryptVersion; // @synthesize solfEncryptVersion=_solfEncryptVersion;
@property(retain, nonatomic) NSString *solfEncryptSalt; // @synthesize solfEncryptSalt=_solfEncryptSalt;
@property(nonatomic) long long pwdTimestamp; // @synthesize pwdTimestamp=_pwdTimestamp;
@property(retain, nonatomic) NSString *pwdNonce; // @synthesize pwdNonce=_pwdNonce;
@property(nonatomic) long long pwdEncryptMode; // @synthesize pwdEncryptMode=_pwdEncryptMode;
@property(nonatomic) long long pwdStyle; // @synthesize pwdStyle=_pwdStyle;
@property(retain, nonatomic) MMKPwdInputViewOnPasswordChangeCallback *m_editChangeCallBack; // @synthesize m_editChangeCallBack=_m_editChangeCallBack;
@property(retain, nonatomic) MMKPwdInputViewOnEndEnterPasswordCallback *m_editEndCallBack; // @synthesize m_editEndCallBack=_m_editEndCallBack;
@property(retain, nonatomic) id <MMKImage> m_image; // @synthesize m_image=_m_image;
@property(retain, nonatomic) UIView *m_view; // @synthesize m_view=_m_view;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_passwordTextField; // @synthesize m_passwordTextField=_m_passwordTextField;
- (long long)getPwdTimestamp;
- (long long)sm2HashType;
- (void)setEncryptSoftSaltAndVersion:(id)arg1 version:(int)arg2;
- (long long)getPwdEncryptMode;
- (id)getPwdNonce;
- (void)setKeepKeyboardOnClearFocus:(_Bool)arg1;
- (_Bool)getKeyboardDisabled;
- (void)setKeyboardDisabled:(_Bool)arg1;
- (id)getEncryptValue;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)setFocusUIPageListener:(id)arg1;
- (void)setFocusModalListener:(id)arg1;
- (long long)getPwdStyle;
- (void)setOnPasswordChangeCallback:(id)arg1;
- (void)setOnEndEnterPasswordCallback:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (_Bool)getAutoRemarkKeyBoradType;
- (void)setAutoRemarkKeyBoradType:(_Bool)arg1;
- (_Bool)getChearInput;
- (void)setChearInput:(_Bool)arg1;
- (id)getHashData;
- (void)setHashData:(id)arg1;
- (long long)getTextLength;
- (void)setTextLength:(long long)arg1;
- (id)getView;
- (void)setBackgroundColor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

