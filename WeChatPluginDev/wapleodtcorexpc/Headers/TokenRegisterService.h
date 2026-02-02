//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, VoIPTokenRegisterObject;

@interface TokenRegisterService
{
    _Bool m_apnsTokenRecovered;
    unsigned int m_apnsTokenEntrance;
    NSString *m_lastRegApnsToken;
    NSData *m_lastRegVoIPToken;
    NSString *m_lastApnsToken;
    VoIPTokenRegisterObject *m_voipRegister;
    VoIPTokenRegisterObject *m_secondTryRegister;
}

- (void).cxx_destruct;
- (void)onVoIPTokenRegisterObjectOk;
- (void)onVoIPTokenRegisterObjectError;
- (void)onAuthOK;
- (void)handleRespForAPNSReport:(id)arg1;
- (void)handleRespForSendToken:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)lastRegVoIPToken;
- (id)lastRegApnsToken;
- (void)reportVoIPPayLoad:(id)arg1;
- (void)createSendVoIPTokenEvent:(id)arg1;
- (void)createSendApnsTokenEvent:(id)arg1;
- (void)recoverApnsToken;
- (void)onVoIPTokenUpdate:(id)arg1;
- (void)onApnsTokenUpdate:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

