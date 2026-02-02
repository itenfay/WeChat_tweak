//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WAAppTaskVersionFallBackMarkItem;

@interface WAAppTaskVersionFallBackMgr
{
    NSString *_appid;
    NSString *_username;
    WAAppTaskVersionFallBackMarkItem *_currentLaunchItem;
    NSMutableArray *_markItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *markItems; // @synthesize markItems=_markItems;
@property(retain, nonatomic) WAAppTaskVersionFallBackMarkItem *currentLaunchItem; // @synthesize currentLaunchItem=_currentLaunchItem;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (unsigned int)getLaunchFallbackMinVersionForContact:(id)arg1;
- (void)checkFallbackMinVersionIfValidWithUsername:(id)arg1 appid:(id)arg2;
- (void)markPkgNeedDownloadForUsername:(id)arg1 appid:(id)arg2 needDowndloadInfoDatas:(id)arg3;
- (void)markContactNeedSyncUpdateForUsername:(id)arg1 appid:(id)arg2;
- (void)markStartLaunchUsername:(id)arg1 appid:(id)arg2 instanceId:(id)arg3 openScene:(unsigned long long)arg4 targetAppVersion:(unsigned int)arg5 debugModeType:(unsigned long long)arg6;
- (unsigned int)getFallBackTickGapForUsername:(id)arg1 appid:(id)arg2;
- (void)markCurrentLaunchItemInFallbackList;
- (void)doFallBackLogic:(unsigned long long)arg1 username:(id)arg2 appid:(id)arg3;
- (void)stopTick;
- (void)startTickForUsername:(id)arg1 appid:(id)arg2;
- (void)reset;
- (void)onServiceTerminate;
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

