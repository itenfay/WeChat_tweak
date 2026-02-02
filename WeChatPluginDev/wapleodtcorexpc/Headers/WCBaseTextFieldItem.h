//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCUITextField;

@interface WCBaseTextFieldItem
{
    WCUITextField *m_textField;
    int m_iMaxInputLen;
    _Bool m_bRealLen;
    _Bool m_bTextFieldHasBecomeFirstResponder;
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setRealLen:(_Bool)arg1;
- (void)setMaxRealStringLen:(int)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setSecureTextEntry:(_Bool)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (id)getTextField;
- (void)resignFirstResponder;
- (void)onKeyboardDidHide;
- (void)resignFirstResponderWithCompletion:(CDUnknownBlockType)arg1;
- (void)_becomeFristResponderOnce;
- (void)becomeFirstResponderOnce;
- (void)becomeFirstResponder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setRestrictShareMenu:(_Bool)arg1;
- (void)setEnable:(_Bool)arg1;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

