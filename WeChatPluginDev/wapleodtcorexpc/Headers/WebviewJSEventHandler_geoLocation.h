//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, LocationRetriever, NSString;

@interface WebviewJSEventHandler_geoLocation
{
    long long m_geoLocationType;
    LocationRetriever *_locationRetriever;
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)startRetrieverAddress;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

