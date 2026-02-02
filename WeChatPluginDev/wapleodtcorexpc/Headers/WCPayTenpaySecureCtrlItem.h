//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TenpaySecureCtrl;

@interface WCPayTenpaySecureCtrlItem
{
    TenpaySecureCtrl *m_textField;
    int m_eEncryptType;
    _Bool m_bTextFieldHasBecomeFirstResponder;
    NSString *m_nsUserCredType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TenpaySecureCtrl *m_textField; // @synthesize m_textField;
@property(retain, nonatomic) NSString *m_nsUserCredType; // @synthesize m_nsUserCredType;
- (void)onKeyboardDidHide;
- (void)resignFirstResponderWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)autoRemarkKeyBoradType;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (void)appendString:(id)arg1;
- (void)setMaxInputLen:(int)arg1;
- (_Bool)onError:(id)arg1;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (void)tenpayCtrlShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setInputWhiteListChar:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setSecureTextEntry:(_Bool)arg1;
- (void)setEncryptType:(int)arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)onEndEditor;
- (void)_becomeFristResponderOnce;
- (void)becomeFirstResponderOnce;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;
- (void)setEnable:(_Bool)arg1;
- (id)getValue;
- (id)getValueWithEncryptType:(int)arg1;
- (void)setKeyboardUseID:(_Bool)arg1;
- (void)setFormatBankCard;
- (_Bool)isUserIDNum:(unsigned int)arg1;
- (_Bool)isBankCardNum;
- (_Bool)isPhoneNum;
- (long long)getTextLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

