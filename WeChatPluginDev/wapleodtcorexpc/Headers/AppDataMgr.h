//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppIconItem, NSMutableArray, NSMutableDictionary, NSString, ServiceAppsLogicImpl;

@interface AppDataMgr
{
    _Bool _appDataChecked;
    _Bool _appSettingLoaded;
    NSMutableDictionary *_appSettingMap;
    NSMutableArray *_aryAuthApp;
    _Bool _aryAuthAppLoaded;
    NSMutableArray *_aryAppPersonalInfo;
    _Bool _aryAppPersonalInfoLoader;
    _Bool _appResisterInfoLoaded;
    _Bool _newAppStatus;
    NSMutableArray *_aryInstalledApp;
    NSMutableArray *_aryReceivedApp;
    NSMutableArray *_aryBuiltInApp;
    ServiceAppsLogicImpl *_svcAppsLogicImpl;
    NSMutableArray *_getAppInfoRunningQueue;
    NSMutableArray *_getAppInfoWaitingQueue;
    _Bool _bGetAppInfoListRunning;
    AppIconItem *_updateAppIconRunningItem;
    NSMutableArray *_updateAppIconWaitingQueue;
    _Bool _bUpdateAppIconRunning;
    _Bool _hasMoveFinished;
    NSMutableDictionary *_dictInnerJumpAppIdType;
    NSMutableDictionary *_dictInnerJumpTypeAppId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *appSettingMap; // @synthesize appSettingMap=_appSettingMap;
- (void)onPreQuit;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)structCGI:(id)arg1 withType:(unsigned int)arg2;
- (void)updateAppSettingItemList:(id)arg1;
- (_Bool)makeUrlRequst:(id)arg1 userData:(id)arg2 cdn:(_Bool)arg3;
- (_Bool)needUpdateImageIfUrlChanged;
- (void)handleGetWatermark:(id)arg1;
- (void)handleGetIcon:(id)arg1;
- (_Bool)isUrl:(id)arg1 hasValueAndChangedFromOldUrl:(id)arg2;
- (void)handleGetAppInfoList:(id)arg1;
- (id)updateValue:(id)arg1 newValue:(id)arg2;
- (_Bool)updateAppWatermark:(id)arg1;
- (_Bool)updateAppIcon:(id)arg1;
- (void)updateAppInfo:(id)arg1;
- (id)getInstalledAppInfo:(id)arg1;
- (_Bool)checkRegisterInfo:(id)arg1;
- (void)refreshAppInfoLastUpdateTimeForNewUser;
- (_Bool)loadAppRegisterInfo;
- (void)trimAppRegisterInfo:(id)arg1;
- (void)saveAppRegisterInfo;
- (id)getRegisterDictionary;
- (id)dictionaryToAppRegisterInfo:(id)arg1;
- (id)getRegisterPasteboardName;
- (id)GetPathOfAppWatermark:(id)arg1;
- (id)GetPathOfAppIcon:(id)arg1;
- (void)saveAppPersonalInfo;
- (_Bool)loadAppPersonalInfo;
- (void)saveAuthAppInfo;
- (_Bool)loadAuthAppInfo;
- (id)getPersonalInfoWithAppID:(id)arg1;
- (void)handleGetAppPersonalInfoList:(id)arg1;
- (void)handleGetAuthAppList:(id)arg1;
- (id)getAuthAppList;
- (_Bool)addNeedUpdateAppId:(id)arg1;
- (_Bool)forceUpdateBizAppInfo:(id)arg1;
- (void)forceUpdateBizAppInfoWithAppIDList:(id)arg1;
- (void)forceUpdateAppInfo:(id)arg1;
- (_Bool)updateAppInfo:(id)arg1 appInfoVer:(unsigned int)arg2;
- (void)clearGetAppInfoListRunningQueue;
- (void)checkGetAppInfoListWaitingQueue;
- (void)addGetAppInfoListQueue:(id)arg1;
- (_Bool)checkUpdateAppIconWaitingQueue;
- (_Bool)addUpdateAppIconQueue:(id)arg1 appID:(id)arg2 cmd:(id)arg3;
- (void)updateBizAppInfoWithGameCenter;
- (void)updateBizAppInfoWithAddByUser;
- (id)getAppRegisterInfo:(id)arg1;
- (id)mergeBuiltInAppInfo:(id)arg1;
- (id)mergeValue:(id)arg1 newValue:(id)arg2;
- (_Bool)compareAppID:(id)arg1 withOtherAppID:(id)arg2;
- (id)getAppWatermark:(id)arg1;
- (id)getAppIconRetNilIfNotExist:(id)arg1;
- (id)getAppIcon:(id)arg1;
- (void)markUpdateWatermarkIfNeededWithInfo:(id)arg1;
- (_Bool)receiveAppInfoFromMsg:(id)arg1 name:(id)arg2 version:(int)arg3 isForceUpdate:(_Bool)arg4;
- (_Bool)deleteUninstalledAppByAppID:(id)arg1;
- (_Bool)isAppInstalledPossibly:(id)arg1;
- (id)getAppInstalledArray;
- (void)setServiceAppNotShowNew:(id)arg1;
- (id)getServiceAppArray:(id)arg1;
- (void)addAppByUserMoveToAppSetting;
- (_Bool)isAppDataChecked;
- (_Bool)checkAndUpdateAppData;
- (_Bool)checkAndUpdateAppDataForiOS7Plus:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)saveAppSetting;
- (_Bool)loadAppSetting;
- (void)handleSetAppSetting:(id)arg1;
- (void)handleGetAppSetting:(id)arg1;
- (_Bool)SetAppSetting:(id)arg1 setCmdID:(int)arg2 setCmdValue:(id)arg3;
- (_Bool)UpdateBatchAppSettingItem:(id)arg1;
- (void)onAuthOK;
- (void)doUpdateAppSettingItem;
- (_Bool)isWeSportApp:(id)arg1;
- (void)setAppSettingFlag:(unsigned int)arg1 withAppID:(id)arg2;
- (void)UpdateAppRecvMsgState:(id)arg1 isRecvMsg:(_Bool)arg2;
- (void)UpdateAppAuthState:(id)arg1 isAuth:(_Bool)arg2;
- (_Bool)UpdateAppSettingItem:(id)arg1;
- (void)updateAppAddedByUser:(id)arg1:(_Bool)arg2;
- (void)updateAppSettingFlag:(id)arg1;
- (_Bool)isGeneralApp:(id)arg1;
- (_Bool)isGame:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)isGame:(id)arg1;
- (_Bool)isNeedDetectRequetURL:(id)arg1;
- (_Bool)isCanForward:(id)arg1;
- (id)getOpenID:(id)arg1;
- (_Bool)isOpenIDExist:(id)arg1;
- (_Bool)isAppSettingExist:(id)arg1;
- (void)loadNewAppStatus;
- (void)saveNewAppStatus;
- (void)setNewAppStatus:(_Bool)arg1;
- (_Bool)getNewAppStatus;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (void)mergeBuiltInAppList;
- (void)setShowInShareListSeq:(unsigned int)arg1 withAppID:(id)arg2 andType:(unsigned long long)arg3;
- (void)setIsShowInShareList:(_Bool)arg1 withAppID:(id)arg2;
- (void)save3rdAppSupportContentType:(unsigned long long)arg1 withAppID:(id)arg2;
- (void)convertShareTypeToOpenSDKType:(unsigned long long)arg1 ToOpenSDKType:(long long *)arg2;
- (id)getShareTo3rdSortedAppInfo:(_Bool)arg1 andType:(unsigned long long)arg2;
- (id)keyForDicShowInShareListSeqByType:(unsigned long long)arg1;
- (unsigned long long)getFlagByMessageWrap:(id)arg1;
- (id)getAppIdWithFuncType:(long long)arg1;
- (long long)getFuncTypeWithAppId:(id)arg1;
- (void)initInnerJumpDict;
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

