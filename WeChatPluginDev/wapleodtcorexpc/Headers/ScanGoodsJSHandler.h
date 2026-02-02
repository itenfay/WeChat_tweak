//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableDictionary, NSString;

@interface ScanGoodsJSHandler
{
    unsigned int _enterSessionID;
    unsigned int _tabSessionID;
    unsigned int _scanSessionID;
    ForwardMessageLogicController *_forwardMsgLogic;
    NSMutableDictionary *_forwardUrl2MessageWrapMap;
    NSMutableDictionary *_forwardUrl2UploadTaskMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *forwardUrl2UploadTaskMap; // @synthesize forwardUrl2UploadTaskMap=_forwardUrl2UploadTaskMap;
@property(retain, nonatomic) NSMutableDictionary *forwardUrl2MessageWrapMap; // @synthesize forwardUrl2MessageWrapMap=_forwardUrl2MessageWrapMap;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
@property(nonatomic) unsigned int scanSessionID; // @synthesize scanSessionID=_scanSessionID;
@property(nonatomic) unsigned int tabSessionID; // @synthesize tabSessionID=_tabSessionID;
@property(nonatomic) unsigned int enterSessionID; // @synthesize enterSessionID=_enterSessionID;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onMpTemplateResponseFail:(unsigned int)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3;
- (void)onMpTemplateResponseSuccess:(unsigned int)arg1 content:(id)arg2;
- (void)onSelectShareChat:(id)arg1;
- (void)handleJSAPIShowShareMenu:(id)arg1;
- (void)handleJSAPIUpdateShareData:(id)arg1;
- (unsigned long long)getLocalJSBusinessType;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (id)jsEventsNeedRegister;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

