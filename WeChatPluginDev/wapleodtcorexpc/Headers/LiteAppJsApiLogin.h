//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WebViewA8KeyLogicImpl;

@interface LiteAppJsApiLogin
{
    _Bool _passAll;
    WebViewA8KeyLogicImpl *_a8keyLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool passAll; // @synthesize passAll=_passAll;
@property(retain, nonatomic) WebViewA8KeyLogicImpl *a8keyLogic; // @synthesize a8keyLogic=_a8keyLogic;
- (_Bool)urlHasPayFragment:(id)arg1;
- (id)addPayFragmentToUrl:(id)arg1;
- (_Bool)isPayLiteAppId:(id)arg1;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8Key:(_Bool)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)getA8Key:(id)arg1 usePreAuth:(_Bool)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

