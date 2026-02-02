//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PasswordLogic;

@interface VerifyQQPwdMgr
{
    unsigned long long m_lastCanOldWTBufTime;
    PasswordLogic *m_pswLogic;
}

- (void).cxx_destruct;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordFail:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)OnCheckQQ;
- (void)dealloc;
- (id)init;
- (void)unregExt;
- (void)regExt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

