//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WCPaySendC2CMessageJSApiLogicControl
{
    JSEvent *m_jsEvent;
    NSString *m_setInUrl;
    NSString *m_toUser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSendC2CSecureMessageResponseStatus:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (_Bool)DoSendC2CSecureMessageTo:(id)arg1;
- (_Bool)PickUserToSendSecureMessage;
- (_Bool)OnDoSendC2CSecureMessage;
- (_Bool)OnDoCheckWCPayJsApi;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1 SetInUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

