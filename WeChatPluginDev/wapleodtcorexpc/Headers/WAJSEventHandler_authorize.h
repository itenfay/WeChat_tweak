//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WAAlertModel, WADataPipePerformance, WAJSContextPlugin_userAccount, WAUserAuthorizeLogic;
@protocol IWATransferProxyImplProtocol;

@interface WAJSEventHandler_authorize
{
    NSString *_appID;
    WAUserAuthorizeLogic *_authLogic;
    _Bool _requestInQueue;
    _Bool _showedModal;
    NSDictionary *_dicInputParam;
    WADataPipePerformance *_performance;
    WAJSContextPlugin_userAccount *_userAccountInstance;
    WAAlertModel *_alertModel;
    id <IWATransferProxyImplProtocol> _transferBridge;
    NSDictionary *_jsapiParams;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showedModal; // @synthesize showedModal=_showedModal;
@property(copy) NSDictionary *jsapiParams; // @synthesize jsapiParams=_jsapiParams;
@property(retain, nonatomic) id <IWATransferProxyImplProtocol> transferBridge; // @synthesize transferBridge=_transferBridge;
@property(retain, nonatomic) WAAlertModel *alertModel; // @synthesize alertModel=_alertModel;
@property(nonatomic) __weak WAJSContextPlugin_userAccount *userAccountInstance; // @synthesize userAccountInstance=_userAccountInstance;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appID;
@property(retain, nonatomic) WADataPipePerformance *performance; // @synthesize performance=_performance;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void)showConfirmView;
- (void)continueShowConfirmView;
- (void)stopLoading;
- (void)startLoading:(id)arg1;
- (void)endCancel;
- (void)endOK;
- (void)endWithTimeout;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2 errNo:(int)arg3;
- (void)endErrorWithMessage:(id)arg1 errNo:(int)arg2;
- (void)endWithResult:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmInconsistent:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmEnd:(_Bool)arg1 response:(id)arg2;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(id)arg1 errNo:(int)arg2;
- (id)getCurrentViewController;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

