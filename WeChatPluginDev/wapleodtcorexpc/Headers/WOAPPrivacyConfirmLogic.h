//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString, UIViewController, WOAPObject;

@interface WOAPPrivacyConfirmLogic
{
    CDUnknownBlockType _completionBlock;
    UIViewController *_viewController;
    MMWebViewController *_privacyWebView;
    WOAPObject *_requestObj;
}

+ (_Bool)isNeedPrivacyConfirm;
+ (void)setForcePrivacyConfirmRequirement;
- (void).cxx_destruct;
@property(retain, nonatomic) WOAPObject *requestObj; // @synthesize requestObj=_requestObj;
@property(retain, nonatomic) MMWebViewController *privacyWebView; // @synthesize privacyWebView=_privacyWebView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)bizStringFromWOAPObjectType:(long long)arg1;
- (void)completionPrivacyConfirmLogicWithResult:(long long)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onWebViewClickClose;
- (void)showPrivacyViewController;
- (void)handleSetGDRPAuthResponse:(id)arg1;
- (void)handleGetGDRPAuthResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)reqeustSetGDPRPrivacyConfirmState:(id)arg1;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

