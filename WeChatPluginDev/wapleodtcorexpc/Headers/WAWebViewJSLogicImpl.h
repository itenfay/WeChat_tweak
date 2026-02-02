//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, UIView;
@protocol WAWebViewJSLogicDelegate, YYWebViewInterface;

@interface WAWebViewJSLogicImpl : NSObject
{
    UIView<YYWebViewInterface> *_webView;
    id <WAWebViewJSLogicDelegate> _delegate;
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    _Bool _isUseMd5ForJSAPI;
    _Bool _directInvokeJs;
    _Bool _directInvokeOc;
    NSMutableSet *_lstBaseEvents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *lstBaseEvents; // @synthesize lstBaseEvents=_lstBaseEvents;
@property(readonly, nonatomic) _Bool directInvokeOc; // @synthesize directInvokeOc=_directInvokeOc;
@property(readonly, nonatomic) _Bool directInvokeJs; // @synthesize directInvokeJs=_directInvokeJs;
@property(nonatomic) __weak UIView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WAWebViewJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)printConsoleLog:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (void)performResult:(id)arg1 callid:(unsigned int)arg2;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getEventHandler:(id)arg1;
- (_Bool)canInjectFullWxConfig;
- (id)getInstanceId;
- (unsigned int)getAppType;
- (id)getCurPubResLogic;
- (unsigned int)getCurTaskRunningState;
- (_Bool)isService;
- (id)getWxaExternalInfo;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isDebugAndVConsoleOpen;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)sourceOpenSDKAppID;
- (_Bool)isParentViewControllerDidAppear:(id)arg1;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)_getWAWebViewController;
- (id)getParentViewController;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 errorMessage:(id)arg3;
- (id)getWAContact;
- (id)getAppId;
- (id)fetchPublicResLogic;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(CDUnknownBlockType)arg4 failHandler:(CDUnknownBlockType)arg5 transferHandler:(CDUnknownBlockType)arg6;
- (_Bool)checkRunModeOnWebview:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 withAppId:(id)arg2 byTempPermission:(id)arg3;
- (void)handleJSApiPostMessage:(id)arg1 forWebView:(id)arg2;
- (id)sha1:(id)arg1;
- (void)syncSendEventToJSBridge:(id)arg1 params:(id)arg2 eventId:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)tryInjectDebugConsole;
- (unsigned int)currentPreloadMoment;
- (id)getWebviewPreInjectJSStr:(_Bool)arg1;
- (id)getPubResWebViewSDKContentString;
- (id)extJSOnTarget:(unsigned long long)arg1 atTiming:(unsigned long long)arg2;
- (id)extJSBeforeWebViewPublib;
- (id)getExtJSModels;
- (id)getWebViewLaunchConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

