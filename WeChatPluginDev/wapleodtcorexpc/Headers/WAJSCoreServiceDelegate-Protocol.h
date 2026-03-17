//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, WAJSCoreService, WAPermissionResult, WATransferJSAPIRuntimeModel, WAWebViewController;

@protocol WAJSCoreServiceDelegate <NSObject>
- (NSString *)currentAppearance;
- (unsigned long long)currentLaunchMode;
- (NSMutableArray *)extJSModels;
- (_Bool)isSilentOpenOnlyService;
- (_Bool)isSilentOpen;
- (_Bool)isNativeWeApp;
- (_Bool)reportPerformance;
- (void)triggerStrictBanMode:(NSString *)arg1;
- (_Bool)checkServiceRunInMainThread:(NSString *)arg1;
- (_Bool)checkWebViewRunMode:(NSString *)arg1;
- (_Bool)checkServiceRunMode:(NSString *)arg1;
- (NSDictionary *)getPermissionDict;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 permissionAppID:(NSString *)arg2 model:(WATransferJSAPIRuntimeModel *)arg3 handler:(void (^)(void))arg4 failHandler:(void (^)(NSString *, unsigned int))arg5 transferHandler:(void (^)(NSDictionary *))arg6 fromAppService:(WAJSCoreService *)arg7;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 fromAppService:(WAJSCoreService *)arg2 withAppId:(NSString *)arg3 byTempPermission:(NSArray *)arg4;

@optional
- (NSString *)bindingChatUsername;
- (_Bool)isRunningInTransparentBackgroud;
- (_Bool)shouldReportPubLibCoverage;
- (void)service:(WAJSCoreService *)arg1 didFailEvaluateJS:(NSString *)arg2 withError:(NSString *)arg3;
- (NSDictionary *)getSystemInfo;
- (NSDictionary *)getServerModeInfo;
- (void)onLibWorkerCreatedWithType:(NSString *)arg1;
- (WAWebViewController *)getWebViewByID:(unsigned long long)arg1;
- (_Bool)hasWebViewId:(unsigned long long)arg1;
- (unsigned int)getPreloadType;
@end

