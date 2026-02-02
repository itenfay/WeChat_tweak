//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, TenpayPasswordCtrl;
@protocol UITextInput;

@interface LiteAppSafePasswordKeyboard : UIView
{
    _Bool _disableDarkMode;
    TenpayPasswordCtrl *_tenpayPasswordCtrl;
    id <UITextInput> _flutterInputView;
    long long _pwdEncryptMode;
    NSString *_pwdNonce;
    long long _pwdTimestamp;
    unsigned long long _appUuid;
    unsigned long long _nodeId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long nodeId; // @synthesize nodeId=_nodeId;
@property(nonatomic) unsigned long long appUuid; // @synthesize appUuid=_appUuid;
@property(nonatomic) long long pwdTimestamp; // @synthesize pwdTimestamp=_pwdTimestamp;
@property(retain, nonatomic) NSString *pwdNonce; // @synthesize pwdNonce=_pwdNonce;
@property(nonatomic) long long pwdEncryptMode; // @synthesize pwdEncryptMode=_pwdEncryptMode;
@property(retain, nonatomic) id <UITextInput> flutterInputView; // @synthesize flutterInputView=_flutterInputView;
@property(retain, nonatomic) TenpayPasswordCtrl *tenpayPasswordCtrl; // @synthesize tenpayPasswordCtrl=_tenpayPasswordCtrl;
- (void)setDisableDarkMode:(_Bool)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;
- (void)passwordInputComplete;
- (void)reportSm2PwdError:(id)arg1 sm2HashType:(long long)arg2;
- (id)getPasswordHash;
- (id)getEncryptPassword;
- (void)setAppUuId:(unsigned long long)arg1;
- (void)setKeyboardAccessibility:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (unsigned long long)getFlutterInputViewTextLen;
- (void)visitSubviewsOfView:(id)arg1 vistor:(CDUnknownBlockType)arg2;
- (long long)getTextLength;
- (void)captureScreenDidChange;
- (void)updatePasswordCtrl;
- (void)updateInterfaceStyle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

