//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDynamicColor, MMKSecureEditTextOnTextChangedCallback, NSString, TenpaySecureCtrl;

@interface KindaSecureEditText
{
    TenpaySecureCtrl *_m_textField;
    MMDynamicColor *_m_textColor;
    MMDynamicColor *_m_tintColor;
    NSString *_m_defaultValue;
    long long _m_encryptType;
    MMKSecureEditTextOnTextChangedCallback *_m_onTextChangedCallback;
    long long _keyboardType;
}

- (void).cxx_destruct;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) MMKSecureEditTextOnTextChangedCallback *m_onTextChangedCallback; // @synthesize m_onTextChangedCallback=_m_onTextChangedCallback;
@property(nonatomic) long long m_encryptType; // @synthesize m_encryptType=_m_encryptType;
@property(retain, nonatomic) NSString *m_defaultValue; // @synthesize m_defaultValue=_m_defaultValue;
@property(retain, nonatomic) MMDynamicColor *m_tintColor; // @synthesize m_tintColor=_m_tintColor;
@property(retain, nonatomic) MMDynamicColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(retain, nonatomic) TenpaySecureCtrl *m_textField; // @synthesize m_textField=_m_textField;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (void)tenpayCtrlShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setIsCommonText:(_Bool)arg1;
- (_Bool)getIsCommonText;
- (_Bool)isCardFromatValid:(int)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (long long)getEncryptType;
- (void)setEncryptType:(long long)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (id)getDefaultValue;
- (void)setDefaultValue:(id)arg1;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (long long)getClearButtonMode;
- (void)setClearButtonMode:(long long)arg1;
- (id)getTintColor;
- (void)setTintColor:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getText;
- (void)setText:(id)arg1;
- (id)getHint;
- (void)setHint:(id)arg1;
- (long long)getKeyboardType;
- (void)setTextSize:(float)arg1;
- (id)getView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

