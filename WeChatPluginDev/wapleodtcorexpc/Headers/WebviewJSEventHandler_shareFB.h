//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSShareFBLogicHelper, NSDictionary, NSString;

@interface WebviewJSEventHandler_shareFB
{
    JSShareFBLogicHelper *m_jsShareFBHelper;
    NSDictionary *m_eventParamsDic;
}

- (void).cxx_destruct;
- (id)getViewController;
- (void)OnFacebookBinded;
- (void)onBindFacebook;
- (void)onJSShareFBFailedWithError:(int)arg1 msg:(id)arg2;
- (void)onJSShareFBFinished;
- (void)onJSShareFBSharing;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)showConfirmView;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

