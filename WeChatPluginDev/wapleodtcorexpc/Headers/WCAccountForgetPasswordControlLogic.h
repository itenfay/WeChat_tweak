//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PasswordLogic, WCAccountBindPhoneControlLogic;
@protocol WCAccountForgetPasswordControlLogicDelegate;

@interface WCAccountForgetPasswordControlLogic
{
    _Bool _shouldQueryHasPasswd;
    id <WCAccountForgetPasswordControlLogicDelegate> _delegate;
    PasswordLogic *_passwordLogic;
    WCAccountBindPhoneControlLogic *_bindLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *bindLogic; // @synthesize bindLogic=_bindLogic;
@property(retain, nonatomic) PasswordLogic *passwordLogic; // @synthesize passwordLogic=_passwordLogic;
@property(nonatomic) _Bool shouldQueryHasPasswd; // @synthesize shouldQueryHasPasswd=_shouldQueryHasPasswd;
@property(nonatomic) __weak id <WCAccountForgetPasswordControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)resetBindLogic;
- (void)stopLogic;
- (void)startForgetPasswordLogic;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

