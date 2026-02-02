//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface AccountBaseViewController
{
    unsigned int m_uiAccountID;
    NSString *m_unbindOKTip;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSetPwd;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)OnUnBindAccountOK;
- (void)OnUnBindAccountOKConfirm;
- (void)onUnBindAccount;
- (void)prepareToUnbindAccount:(unsigned int)arg1;
- (void)checkUnbindAccount;
- (void)onCheckUnbindFail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

