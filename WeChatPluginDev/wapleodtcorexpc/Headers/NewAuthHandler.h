//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, NSString, OpenApiParameter, OpenSDKAuthorizeLoginManager, UINavigationController;

@interface NewAuthHandler
{
    OpenApiParameter *m_parameter;
    UINavigationController *m_oAuthViewController;
    _Bool m_isDoing;
    OpenSDKAuthorizeLoginManager *m_nativeAuthManager;
    MMTipsViewController *m_alertConfirmVC;
    NSString *_m_nsScope;
    NSString *_m_nsState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsState; // @synthesize m_nsState=_m_nsState;
@property(retain, nonatomic) NSString *m_nsScope; // @synthesize m_nsScope=_m_nsScope;
- (void)onIPadOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5;
- (void)onIPadOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onIPadOAuthCancel;
- (void)onNewOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5 iLinkAuthBuffer:(id)arg6;
- (void)onNewOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onNewOAuthDeny;
- (void)onNewOAuthCancel;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (id)limitString:(id)arg1 WithLimitLength:(unsigned int)arg2;
- (void)alertLaunchAppWithUrl:(id)arg1 confirmWording:(id)arg2 appIconUrl:(id)arg3 appNickname:(id)arg4 fromDegrade:(_Bool)arg5;
- (id)appendURLStrWithURLStr:(id)arg1 iLinkAuthBuffer:(id)arg2;
- (void)onOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5 iLinkAuthBuffer:(id)arg6;
- (void)onOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)OnOAuthDeny;
- (void)OnOAuthCancel;
- (void)removeOAuthView;
- (id)createOAuthRequestWithOpenParameter;
- (void)createOAuthView;
- (void)send3rdRespWithErrCode:(int)arg1 errStr:(id)arg2;
- (void)denyAllHandleAndReturn3rdApp;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)delayCancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (id)parseURLParams;
- (void)cancelWechatConnect;
- (void)startIPadOAuthInNativeView;
- (_Bool)isNeedStartIpadOAuth;
- (void)startWechatConnect:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

