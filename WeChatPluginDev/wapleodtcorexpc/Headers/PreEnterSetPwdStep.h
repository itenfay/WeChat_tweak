//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString, PasswordLogic;

@interface PreEnterSetPwdStep
{
    CMessageWrap *m_wrapMsg;
    PasswordLogic *m_setPasswdLogic;
}

- (void).cxx_destruct;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)showSetPasswordView;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)startStep;
- (id)initWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

