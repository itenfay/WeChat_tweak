//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApiScopeConfirmWindow, NSArray, NSDictionary, NSString, WADataPipePerformance, WAJSContextPlugin_userAccount;

@interface WAJSEventHandler_login
{
    NSString *_appID;
    NSArray *_arrConfirmScope;
    JSApiScopeConfirmWindow *_confirmWindow;
    _Bool _requestInQueue;
    unsigned int _cgiEventId;
    NSDictionary *_dicInputParam;
    WADataPipePerformance *_performance;
    WAJSContextPlugin_userAccount *_userAccountInstance;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cgiEventId; // @synthesize cgiEventId=_cgiEventId;
@property(nonatomic) __weak WAJSContextPlugin_userAccount *userAccountInstance; // @synthesize userAccountInstance=_userAccountInstance;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appID;
@property(retain, nonatomic) WADataPipePerformance *performance; // @synthesize performance=_performance;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)closeConfirmWindow;
- (void)showConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onConfirmResponse:(id)arg1;
- (void)confirmRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)endWithTimeout;
- (void)onLoginResponse:(id)arg1;
- (void)loginRequestWithAppID:(id)arg1 scope:(id)arg2;
- (id)genResultDic:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onUserAccountJSEventEnd;
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

