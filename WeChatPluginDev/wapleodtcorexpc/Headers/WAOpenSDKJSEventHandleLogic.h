//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAContactGetter;

@interface WAOpenSDKJSEventHandleLogic : NSObject
{
    long long _apiFrom;
    WAContactGetter *_contactGetter;
    NSMutableArray *_jsapiEvents;
    NSMutableArray *_WAJSAPIEventsPool;
    NSMutableArray *_WAJSAPIAuthPool;
}

+ (_Bool)_WAJSEventParamsIsCancel:(id)arg1 handlerClassString:(id)arg2;
+ (long long)convertToQRCodeStateWithResultType:(long long)arg1;
+ (_Bool)_WAJSAPIMustRunInMainThread:(id)arg1;
+ (Class)convertNameToWAJSAPIClass:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *WAJSAPIAuthPool; // @synthesize WAJSAPIAuthPool=_WAJSAPIAuthPool;
@property(retain, nonatomic) NSMutableArray *WAJSAPIEventsPool; // @synthesize WAJSAPIEventsPool=_WAJSAPIEventsPool;
@property(retain, nonatomic) NSMutableArray *jsapiEvents; // @synthesize jsapiEvents=_jsapiEvents;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(nonatomic) long long apiFrom; // @synthesize apiFrom=_apiFrom;
- (_Bool)needDelayPopSourceVcInQRCodeModeWithHandler:(id)arg1;
- (id)containerVCForWAOpenSDKTransferAuthAdapter:(id)arg1;
- (void)onWAOpenSDKTransferAuthAdapter:(id)arg1 confirmAuthRequestDidComplete:(_Bool)arg2;
- (void)onWAOpenSDKTransferAuthAdapter:(id)arg1 authDidFailWithErrMsg:(id)arg2;
- (void)onWAOpenSDKTransferAuthAdapterUserDidReject:(id)arg1;
- (void)onWAOpenSDKTransferAuthAdapterUserDidAccept:(id)arg1;
- (void)onWAOpenSDKJSAPIContextAdapter:(id)arg1 sendResultBeforeEnd:(id)arg2 resultType:(long long)arg3 handler:(id)arg4;
- (void)handleOpenSDKWithTicketResult:(id)arg1 eventContext:(id)arg2;
- (void)onWAOpenSDKJSAPIContextAdapter:(id)arg1 endWithResult:(id)arg2 handler:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateRuntimeQrcode:(unsigned int)arg1 respData:(id)arg2 invokeContext:(id)arg3;
- (void)sendRespToOpenApiMgr:(id)arg1;
- (void)endWithResult:(id)arg1 eventHandler:(id)arg2 transitiveData:(id)arg3 context:(id)arg4;
- (void)endWithResult:(id)arg1 eventHandler:(id)arg2;
- (void)sendQRResult:(id)arg1 qrState:(long long)arg2 transitiveData:(id)arg3 context:(id)arg4;
- (void)sendQRResult:(id)arg1 qrState:(long long)arg2 eventHandler:(id)arg3;
- (void)handleEvent:(id)arg1 argsDic:(id)arg2 eventContext:(id)arg3 jsapiType:(id)arg4 transitiveData:(id)arg5;
- (Class)getJsapiClass:(id)arg1;
- (_Bool)handleOpenSDKJSEventWithUserName:(id)arg1 orAppId:(id)arg2 invokeData:(id)arg3 invokeContext:(id)arg4;
- (void)handleAuthAndRunJSEventWithAppId:(id)arg1 invokeData:(id)arg2 invokeContext:(id)arg3;
- (void)handleOpenSDKJSEventWithAppId:(id)arg1 invokeData:(id)arg2 transferScene:(unsigned long long)arg3 invokeContext:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

