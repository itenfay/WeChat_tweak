//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SoterSignHelper, SoterUpdateMPAuthKeyCgi;

@interface WAJSEventHandler_startSoterAuthentication
{
    SoterSignHelper *_m_soterSignHelper;
    SoterUpdateMPAuthKeyCgi *_m_cgi;
    unsigned long long _m_authMode;
    NSString *_m_challenge;
    NSString *_m_authContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_authContent; // @synthesize m_authContent=_m_authContent;
@property(retain, nonatomic) NSString *m_challenge; // @synthesize m_challenge=_m_challenge;
@property(nonatomic) unsigned long long m_authMode; // @synthesize m_authMode=_m_authMode;
@property(retain, nonatomic) SoterUpdateMPAuthKeyCgi *m_cgi; // @synthesize m_cgi=_m_cgi;
@property(retain, nonatomic) SoterSignHelper *m_soterSignHelper; // @synthesize m_soterSignHelper=_m_soterSignHelper;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)endEventUserCancelWithChallenge:(id)arg1;
- (void)endEventWithChallenge:(id)arg1;
- (void)endEventWithSignedResult;
- (id)resultJsonWithChallenge:(id)arg1;
- (void)endEventWithErrorCode:(int)arg1 errorMsg:(id)arg2 useMode:(unsigned long long)arg3 resultJson:(id)arg4 resultSignature:(id)arg5;
- (unsigned long long)authModeStrToNum:(id)arg1;
- (id)authModeToStr:(unsigned long long)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

