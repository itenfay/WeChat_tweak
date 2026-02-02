//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSDictionary, NSString, WADataPipePerformance, WAJSContextPlugin_userAccount, WAUserAuthorizeLogic;
@protocol IWATransferProxyImplProtocol;

@interface WAJSEventHandler_operateWXData
{
    NSString *_appID;
    NSData *_data;
    WAUserAuthorizeLogic *_authLogic;
    _Bool _requestInQueue;
    unsigned int _cgiEventId;
    NSDictionary *_dicInputParam;
    WADataPipePerformance *_performance;
    WAJSContextPlugin_userAccount *_userAccountInstance;
    id <IWATransferProxyImplProtocol> _transferBridge;
    NSDictionary *_jsapiParams;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cgiEventId; // @synthesize cgiEventId=_cgiEventId;
@property(copy) NSDictionary *jsapiParams; // @synthesize jsapiParams=_jsapiParams;
@property(retain, nonatomic) id <IWATransferProxyImplProtocol> transferBridge; // @synthesize transferBridge=_transferBridge;
@property(nonatomic) __weak WAJSContextPlugin_userAccount *userAccountInstance; // @synthesize userAccountInstance=_userAccountInstance;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appID;
@property(retain, nonatomic) WADataPipePerformance *performance; // @synthesize performance=_performance;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (unsigned int)wxDataMaxDataSizeInBytes;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (id)getCurrentViewController;
- (void)showConfirmView:(id)arg1;
- (void)continueShowConfirmView:(id)arg1;
- (void)fillClientInfo:(id)arg1 fromPerformance:(id)arg2;
- (void)fillPerformace:(id)arg1 fromCgiProfile:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onResponseConfirm:(id)arg1;
- (void)requestConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3 avatarId:(unsigned int)arg4 sessionId:(id)arg5 avatarOpt:(unsigned int)arg6 acceptProtocol:(_Bool)arg7;
- (void)onResponseData:(id)arg1;
- (void)requestDataWithAppID:(id)arg1 data:(id)arg2 isImportant:(_Bool)arg3 keepAlive:(_Bool)arg4 useQuic:(_Bool)arg5 needShowPrivacyProtectInfo:(_Bool)arg6;
- (void)endCancel;
- (void)endOKWithData:(id)arg1;
- (void)endWithTimeout;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2 errNo:(unsigned int)arg3;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1;
- (void)endWithResult:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

