//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, WAPermissionInfo, WAPermissionUserAuthImpl;
@protocol WAPermissionHandlerDelegate;

@interface WAPermissionHandler : NSObject
{
    NSArray *_pluginPermissionInfo;
    NSArray *_abTestPermissionInfo;
    NSString *_appID;
    NSString *_userName;
    unsigned int _debugModeType;
    unsigned int _appVersion;
    NSString *_sessionId;
    int _isolatePluginCount;
    CDUnknownBlockType _permissionInfoCompletionHandler;
    CDUnknownBlockType _permissionPluginInfoCompletionHandler;
    CDUnknownBlockType _permissionABTestInfoCompletionHandler;
    WAPermissionUserAuthImpl *_userAuthImpl;
    _Bool _coldLaunchOriginIsNeedSyncGetPluginPermission;
    _Bool _isFromBackground;
    _Bool _isRestrictedBySecFlag;
    unsigned int _appServiceType;
    unsigned int _enterScene;
    unsigned long long _coldLaunchOriginSyncType;
    id <WAPermissionHandlerDelegate> _delegate;
    NSDictionary *_permissionDict;
    NSMutableArray *_permissionInfos;
    NSString *_pagePath;
    NSDictionary *_dicLaunchParameter;
}

- (void).cxx_destruct;
@property _Bool isRestrictedBySecFlag; // @synthesize isRestrictedBySecFlag=_isRestrictedBySecFlag;
@property _Bool isFromBackground; // @synthesize isFromBackground=_isFromBackground;
@property(retain) NSDictionary *dicLaunchParameter; // @synthesize dicLaunchParameter=_dicLaunchParameter;
@property(retain) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSMutableArray *permissionInfos; // @synthesize permissionInfos=_permissionInfos;
@property(readonly, nonatomic) NSDictionary *permissionDict; // @synthesize permissionDict=_permissionDict;
@property(nonatomic) __weak id <WAPermissionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool coldLaunchOriginIsNeedSyncGetPluginPermission; // @synthesize coldLaunchOriginIsNeedSyncGetPluginPermission=_coldLaunchOriginIsNeedSyncGetPluginPermission;
@property(nonatomic) unsigned long long coldLaunchOriginSyncType; // @synthesize coldLaunchOriginSyncType=_coldLaunchOriginSyncType;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
- (void)onUserTransferAuthDidCompeleteWithJSAPIName:(id)arg1 transferHandler:(CDUnknownBlockType)arg2 result:(id)arg3 scene:(unsigned long long)arg4;
- (void)userAuthFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)userAuthOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)onGetABTestPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (void)onGetPluginPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (void)loadABTestPermissionInfo;
@property(retain) NSArray *abTestPermissionInfo;
- (unsigned int)silentOpenType;
- (_Bool)isSilentOpen;
- (id)getNavAlertTitle;
- (id)getPluginPermissionInfoDict;
- (id)getAllPermissionBytesWithRunningState:(unsigned long long)arg1;
- (id)getALLRunningStatusPermissionMap;
- (void)loadPluginPermissionInfo;
@property(retain) NSArray *pluginPermissionInfo;
- (void)loadPermissionInfo;
@property(retain) WAPermissionInfo *permissionInfo;
- (id)getWeAppBindJumpToUserNameFromAppID:(id)arg1;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isGameApp;
- (void)updateUserAuthInfo:(id)arg1 source:(unsigned long long)arg2;
- (void)resetAuthInfo;
- (void)checkUserAuthWithAppID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(CDUnknownBlockType)arg5 failHandler:(CDUnknownBlockType)arg6 transferHandler:(CDUnknownBlockType)arg7 scene:(unsigned long long)arg8;
- (id)getPermissionDataInTaskRunningState:(unsigned long long)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 inRunningState:(unsigned int)arg2 withPermissionAppId:(id)arg3 byTempPermission:(id)arg4;
- (_Bool)checkRunInMainThread:(id)arg1;
- (_Bool)checkRunMode:(id)arg1 onWebview:(_Bool)arg2 isGameApp:(_Bool)arg3;
- (_Bool)isLastRequestFromBackgroundScene;
- (unsigned long long)permissionTypeForMenuControlByte:(unsigned long long)arg1;
- (long long)updateCostTime;
- (_Bool)shouldShowThirdBusiTips;
- (id)getRuntimeInfo;
- (id)getActionSheetPermissionInfoFromLaunchCGI;
- (id)getPublicResInfoFromLaunchCGI;
- (id)getOpConfig;
- (id)getLaunchAction;
- (void)updateRestrictedFlag:(_Bool)arg1;
- (void)updateLaunchPermissionInfoOnEnterForeground;
- (void)updateSessionId:(id)arg1;
- (void)updatePagePath:(id)arg1;
- (void)updateScene:(unsigned int)arg1 dicLaunchParameter:(id)arg2;
- (void)asyncUpdateWeAppExtraConfigInfo;
- (void)asyncUpdateABTestPermissionInfo:(id)arg1;
- (void)asyncUpdatePluginPermissionInfo:(id)arg1;
- (void)asyncUpdateLaunchPermissionInfo;
- (void)requestLaunchPermssionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)syncGetLaunchPermissionInfoType;
- (void)requestABTestPermssionInfoWithCompletionHandler:(CDUnknownBlockType)arg1 appIDArray:(id)arg2;
- (void)requestPluginPermssionInfoWithCompletionHandler:(CDUnknownBlockType)arg1 pluginIDArray:(id)arg2;
- (_Bool)isSyncGetABTestPermissionInfo:(id)arg1;
- (_Bool)isSyncGetPluginPermissionInfo:(id)arg1;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 sessionId:(id)arg6 pagePath:(id)arg7 externalInfo:(id)arg8 dicLaunchParameter:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

