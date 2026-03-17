//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSDictionary, NSString, WAApptaskPublicResLogic, WAContact, WAJSEventHandler_BaseEvent, WxaExternalInfo;

@protocol WAJSEventHandlerContextDelegate <NSObject>
- (WAJSEventHandler_BaseEvent *)getEventHandler:(NSString *)arg1;
- (NSString *)sourceOpenSDKAppID;
- (id)GetWebViewPluginByName:(NSString *)arg1;
- (unsigned long long)getEnvironmentType;
- (NSString *)getCurrentPageQuery;
- (NSString *)getCurrentPageRelativePath;
- (NSString *)getCurrentPagePath;
- (NSString *)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (MMUIViewController *)getParentViewController;
- (WAContact *)getWAContact;
- (void)endWithResult:(NSDictionary *)arg1 handler:(WAJSEventHandler_BaseEvent *)arg2;
- (NSString *)getAppId;

@optional
- (void)sendResultBeforeEnd:(NSDictionary *)arg1 resultType:(long long)arg2 handler:(WAJSEventHandler_BaseEvent *)arg3;
- (WAApptaskPublicResLogic *)getCurPubResLogic;
- (unsigned int)getCurTaskRunningState;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isDebugAndVConsoleOpen;
- (void)printConsoleLog:(NSString *)arg1;
- (void)sendEventToInvokeEnv:(NSString *)arg1 dicParams:(NSDictionary *)arg2;
- (_Bool)isParentViewControllerDidAppear:(WAJSEventHandler_BaseEvent *)arg1;
- (WxaExternalInfo *)getWxaExternalInfo;
- (_Bool)isService;
- (id)GetWeAppPluginByName:(NSString *)arg1;
- (unsigned int)getAppType;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
@end

