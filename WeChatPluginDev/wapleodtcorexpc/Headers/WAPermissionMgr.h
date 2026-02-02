//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WAPermissionMgr
{
    NSMutableDictionary *_reportInfos;
    NSMutableSet *_setParallelPrefetching;
    NSMutableSet *_setWaitingParallelPrefetching;
    NSMutableDictionary *_dicParallelPrefetchResult;
    NSArray *_abTestPermissionInfoList;
    NSArray *_pluginPermissionInfoList;
    _Bool _isFirstTimeCheckPluginPermission;
    _Bool _isFirstTimeCheckABTestPermission;
    unsigned int _debugModeType;
    NSString *_appID;
}

+ (id)dictionayOfJSAPI2PermissionIndex;
+ (unsigned int)getEventThreadMode:(id)arg1;
+ (id)getPermissionByte:(id)arg1;
+ (_Bool)checkJsAPI:(id)arg1 haveRunMode:(unsigned int)arg2;
+ (unsigned int)getPermissionMode:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstTimeCheckABTestPermission; // @synthesize isFirstTimeCheckABTestPermission=_isFirstTimeCheckABTestPermission;
@property(nonatomic) _Bool isFirstTimeCheckPluginPermission; // @synthesize isFirstTimeCheckPluginPermission=_isFirstTimeCheckPluginPermission;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)updateUsageItem:(id)arg1;
- (void)updateAppItem:(id)arg1;
- (id)getPermissionBytesWithAppID:(id)arg1;
- (id)actionSheetInfoFromResponse:(id)arg1;
- (id)runtimeInfoFromResponse:(id)arg1;
- (id)launchActionFromResponse:(id)arg1;
- (void)executeIssueLaunchCmd:(id)arg1;
- (void)processResponseLaunchPermissionInfoWithRequest:(id)arg1 andResponse:(id)arg2 cgiUserInfo:(id)arg3;
- (void)reportGameABTestResponse:(id)arg1;
- (void)reportPluginResponse:(id)arg1;
- (void)reportResponse:(id)arg1;
- (void)onResponseLaunchPermissionInfo:(id)arg1;
- (void)processPluginPermissionInfoAsync;
- (void)processABTestPermissionInfo:(id)arg1;
- (void)processPluginPermissionInfo:(id)arg1;
- (unsigned int)getReportTypeFromRequestType:(unsigned int)arg1;
- (void)setPluginPermissionList:(id)arg1;
- (void)setABTestPermissionList:(id)arg1;
- (id)getABTestPermissionList;
- (id)getPluginPermissionList;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (_Bool)updateLaunchWithResponse:(id)arg1 appId:(id)arg2;
- (id)generateLaunchCGIUserInfo:(id)arg1 debugMode:(unsigned int)arg2 enterScene:(unsigned int)arg3 sessionId:(id)arg4 isFromBackground:(_Bool)arg5 isSilentOpen:(_Bool)arg6 isSheetMode:(_Bool)arg7 isCustomLoading:(_Bool)arg8 migrateFromUsername:(id)arg9;
- (id)tryGetLocalResponseWithUsername:(id)arg1 appid:(id)arg2 inScene:(unsigned int)arg3;
- (_Bool)isIssueLaunchInfoValid:(id)arg1 inScene:(unsigned int)arg2;
- (_Bool)hasValidIssueLaunchForAppid:(id)arg1 username:(id)arg2 scene:(unsigned int)arg3;
- (_Bool)requestLaunchPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 appServiceType:(unsigned int)arg6 sessionId:(id)arg7 pagePath:(id)arg8 isFromBackground:(_Bool)arg9 requestType:(unsigned int)arg10 dicLaunchParameter:(id)arg11 isFromParallelLaunch:(_Bool)arg12;
- (_Bool)requestABTestPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 isFirstTime:(_Bool)arg3 debugModeType:(unsigned int)arg4 appIDArray:(id)arg5 isSilentOpen:(_Bool)arg6 silentOpenType:(unsigned int)arg7 syncType:(int)arg8;
- (_Bool)requestPluginPermissonInfoWithAppID:(id)arg1 userName:(id)arg2 isFirstTime:(_Bool)arg3 isolatePluginCount:(int)arg4 debugModeType:(unsigned int)arg5 pluginIDArray:(id)arg6 scene:(unsigned int)arg7 isSilentOpen:(_Bool)arg8 silentOpenType:(unsigned int)arg9 syncType:(int)arg10;
- (void)requestPureJSApiPermissionWithAppID:(id)arg1 userName:(id)arg2 scene:(unsigned long long)arg3 isSilentOpen:(_Bool)arg4 silentOpenType:(unsigned int)arg5 syncType:(unsigned int)arg6 completion:(CDUnknownBlockType)arg7;
- (id)getPluginPermissionInfoWithAppID:(id)arg1;
- (id)getPermissionBanInfoWithAppID:(id)arg1;
- (id)getPermissionInfoWithUsername:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (void)clearParallelPrefetchInfo;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

