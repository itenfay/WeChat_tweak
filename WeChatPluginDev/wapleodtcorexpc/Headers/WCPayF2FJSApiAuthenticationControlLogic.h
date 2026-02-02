//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPayF2FJSAPIAuthenCgi;

@interface WCPayF2FJSApiAuthenticationControlLogic
{
    JSEvent *_jsEvent;
    WCPayF2FJSAPIAuthenCgi *_jsapiAuthenCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayF2FJSAPIAuthenCgi *jsapiAuthenCgi; // @synthesize jsapiAuthenCgi=_jsapiAuthenCgi;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)onGetWCPayF2FJSAPIAuthenCgiResp:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

