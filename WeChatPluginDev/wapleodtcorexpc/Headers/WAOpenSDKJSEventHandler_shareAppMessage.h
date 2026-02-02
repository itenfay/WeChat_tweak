//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAShareAppMessageCommonParamsModel, WAShareAppMessageContextModel, WAShareAppMessageForwardLogicControllerComponent;

@interface WAOpenSDKJSEventHandler_shareAppMessage
{
    WAShareAppMessageContextModel *_shareContextModel;
    WAShareAppMessageCommonParamsModel *_paramsModel;
    WAShareAppMessageForwardLogicControllerComponent *_forwardLogicControllerComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAShareAppMessageForwardLogicControllerComponent *forwardLogicControllerComponent; // @synthesize forwardLogicControllerComponent=_forwardLogicControllerComponent;
@property(retain, nonatomic) WAShareAppMessageCommonParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(retain, nonatomic) WAShareAppMessageContextModel *shareContextModel; // @synthesize shareContextModel=_shareContextModel;
- (void)reportForwardMsg:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (id)viewControllerForForwardLogicControllerToShow:(id)arg1;
- (void)shareMsg:(id)arg1 toContacts:(id)arg2 forNativeWeApp:(_Bool)arg3;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

