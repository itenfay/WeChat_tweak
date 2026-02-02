//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayJumpC2CMessageJsapiLogic;

@interface WAJSEventHandler_jumpToWCPayMessage
{
    WCPayJumpC2CMessageJsapiLogic *_m_jumpC2CMessageJsapiLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayJumpC2CMessageJsapiLogic *m_jumpC2CMessageJsapiLogic; // @synthesize m_jumpC2CMessageJsapiLogic=_m_jumpC2CMessageJsapiLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

