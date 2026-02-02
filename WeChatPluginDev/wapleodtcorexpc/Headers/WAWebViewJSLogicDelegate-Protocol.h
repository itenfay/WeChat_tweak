//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSString, WAApptaskPublicResLogic, WAContact, WAJSInvoker, WAPermissionResult, WATransferJSAPIRuntimeModel, WAWebViewController, WAWebViewPluginScheduler, WxaExternalInfo;

@protocol WAWebViewJSLogicDelegate <NSObject>

@optional
- (void)webviewApiResult:(WAJSInvoker *)arg1;
- (NSMutableArray *)extJSModels;
- (WAWebViewController *)getWAWebViewController;
- (void)didFinishInjectPubLibJSWithFileName:(NSString *)arg1 length:(unsigned int)arg2 beginTime:(unsigned int)arg3 endTime:(unsigned int)arg4 engineType:(unsigned int)arg5 useCodeCache:(_Bool)arg6;
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned int)arg2;
- (_Bool)isAppLaunchFirstWebview;
- (_Bool)canInjectFullWxConfig;
- (WAApptaskPublicResLogic *)getCurPubResLogic;
- (unsigned int)getCurTaskRunningState;
- (unsigned int)webViewPreloadMoment;
- (_Bool)isPreloadWebView;
- (WxaExternalInfo *)getWxaExternalInfo;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isOpenDebugAndVConsole;
- (NSString *)getInstanceId;
- (WAContact *)getWAContact;
- (unsigned int)getAppServiceType;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 permissionAppID:(NSString *)arg2 model:(WATransferJSAPIRuntimeModel *)arg3 handler:(void (^)(void))arg4 failHandler:(void (^)(NSString *, unsigned int))arg5 transferHandler:(void (^)(NSDictionary *))arg6;
- (_Bool)checkRunModeOnWebview:(NSString *)arg1;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 withAppId:(NSString *)arg2 byTempPermission:(NSArray *)arg3;
- (WAWebViewPluginScheduler *)getPluginScheduler;
- (NSString *)getCurrentAppId;
- (WAApptaskPublicResLogic *)fetchPublicResLogic;
@end

