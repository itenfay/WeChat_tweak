//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApiScopeConfirmWindow, NSString;

@interface WebviewJSEventHandler_login
{
    _Bool _isRunning;
    NSString *_appID;
    NSString *_state;
    JSApiScopeConfirmWindow *_confirmWindow;
}

- (void).cxx_destruct;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)closeConfirmWindow;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)stopLoading;
- (void)startLoading:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onConfirmResponse:(id)arg1;
- (void)confirmRequestWithAppID:(id)arg1 scope:(id)arg2 state:(id)arg3;
- (void)onLoginResponse:(id)arg1;
- (void)loginRequestWithAppID:(id)arg1 scope:(id)arg2 state:(id)arg3 url:(id)arg4;
- (void)endCancel;
- (void)endOKWithData:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1;
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

