//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPrivacyPolicyControlLogic;

@interface PreEnterShowPrivacyPolicyStep
{
    NSString *m_content;
    WCPrivacyPolicyControlLogic *m_privacyPolicyLogic;
    _Bool m_bSendChoice;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendPrivacyPolicyChoice:(_Bool)arg1;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)startStep;
- (void)dealloc;
- (id)initWithXml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

