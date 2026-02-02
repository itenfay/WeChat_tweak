//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WACanvasDataSampleMgr, WAThreadSafeMutableDictionary;

@interface WAOpenEventSpeedStatMgr
{
    NSMutableDictionary *m_timeStampCache;
    unsigned long long m_beginTime;
    NSString *m_appid;
    NSString *m_username;
    long long m_version;
    unsigned long long m_appState;
    unsigned long long m_scene;
    NSString *m_sceneNote;
    NSString *m_pagePath;
    unsigned long long m_appServiceType;
    _Bool m_isTriggerDownload;
    _Bool m_isSyncUpdateContact;
    _Bool m_isSyncLaunchCgi;
    _Bool m_isUsePreloadTask;
    _Bool m_isSyncJsApiInfoCgi;
    _Bool m_isSyncABTestInfoCgi;
    unsigned int m_syncUpdateReason;
    unsigned int m_scriptDataSize;
    unsigned int m_packageSize;
    _Bool m_updatedContact;
    _Bool m_usePatch;
    _Bool m_finishShowLoading;
    unsigned long long m_loadingFinishedTimeStampInMs;
    unsigned long long m_preloadPageFrameBeginTime;
    unsigned long long m_preloadPageFrameJSBeginTime;
    unsigned long long m_packageReadyTime;
    unsigned long long m_userScriptInjectedTime;
    unsigned long long m_initReadyTime;
    NSString *m_instanceId;
    unsigned int m_isSplitPluginCode;
    unsigned int m_appTaskDidOpened;
    NSMutableDictionary *m_keyEventSampleConfigs;
    WACanvasDataSampleMgr *canvasSampleMgr;
    unsigned int _sampleType;
    unsigned int _sampleCollectInterval;
    unsigned int _fpsLagWindowSize;
    unsigned int _fpsLagWindowDiff;
    unsigned int _fpsLowThreshold;
    WAThreadSafeMutableDictionary *_dicUsername2InstanceId;
    WAThreadSafeMutableDictionary *_dicAppid2InstanceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *dicAppid2InstanceId; // @synthesize dicAppid2InstanceId=_dicAppid2InstanceId;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *dicUsername2InstanceId; // @synthesize dicUsername2InstanceId=_dicUsername2InstanceId;
@property(nonatomic) unsigned int fpsLowThreshold; // @synthesize fpsLowThreshold=_fpsLowThreshold;
@property(nonatomic) unsigned int fpsLagWindowDiff; // @synthesize fpsLagWindowDiff=_fpsLagWindowDiff;
@property(nonatomic) unsigned int fpsLagWindowSize; // @synthesize fpsLagWindowSize=_fpsLagWindowSize;
@property(nonatomic) unsigned int sampleCollectInterval; // @synthesize sampleCollectInterval=_sampleCollectInterval;
@property(nonatomic) unsigned int sampleType; // @synthesize sampleType=_sampleType;
- (id)getNetTypeString:(unsigned int)arg1;
- (id)getCanvasServerSampleConfigById:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2 baseInfo:(id)arg3;
- (void)requestWeAppExtraConfigWithAppID:(id)arg1 debugModeType:(unsigned int)arg2 appVersion:(unsigned int)arg3 scene:(unsigned int)arg4 isFromBackground:(_Bool)arg5 dicLaunchParameter:(id)arg6;
- (unsigned long long)getBeginTime;
- (void)reportPushWebViewWithUsername:(id)arg1 appid:(id)arg2;
- (void)reportFirstWebViewPushReadyWithUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3;
- (void)reportInjectReadyWithUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 path:(id)arg4 isPreload:(unsigned int)arg5;
- (void)reportInitReadyWithUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 path:(id)arg4 isPreload:(unsigned int)arg5 splashADState:(unsigned int)arg6 canShowLoadingAdvert:(_Bool)arg7 isSkyline:(_Bool)arg8 useRenderingCache:(_Bool)arg9 splashAdClientState:(unsigned int)arg10;
- (void)endWithGameInteractive;
- (void)endWithUserScriptInjected;
- (void)endWithGetUrlReadyForUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 ret:(unsigned int)arg4;
- (void)endWithPackageReadyForUsername:(id)arg1 appid:(id)arg2 appType:(unsigned int)arg3 isPreload:(unsigned int)arg4 isParallelRequest:(_Bool)arg5 isSkyline:(_Bool)arg6;
- (id)getReportId;
- (_Bool)getUsePatch;
- (unsigned int)getPackageSize;
- (unsigned long long)getLaunchTime;
- (void)markUpdateContact:(_Bool)arg1;
- (void)registerInstanceId:(id)arg1 forUsername:(id)arg2 appid:(id)arg3;
- (void)unRegisterInstanceId:(id)arg1;
- (id)getInstanceIdForUsername:(id)arg1 appid:(id)arg2;
- (void)markLaunchProcessDidGetContact:(id)arg1;
- (void)endWhenWeAppTerminateWithUsername:(id)arg1 appid:(id)arg2 instanceId:(id)arg3;
- (void)beginWhenWeAppInitWithUsername:(id)arg1 appid:(id)arg2 extraParams:(id)arg3 hostExtraParams:(id)arg4;
- (void)markTaskInterfereWithAppid:(id)arg1 username:(id)arg2 action:(unsigned long long)arg3;
- (void)reportTaskClosedWith:(id)arg1 username:(id)arg2 task:(id)arg3 reason:(unsigned long long)arg4 subReason:(unsigned int)arg5;
- (void)markTaskClosedWithAppid:(id)arg1 username:(id)arg2 reason:(unsigned long long)arg3 subReason:(unsigned int)arg4;
- (void)markTaskClosedWithAppid:(id)arg1 username:(id)arg2 reason:(unsigned long long)arg3;
- (void)markEventFinishShowLoading:(id)arg1;
- (void)markEventDownloadPackageInfo:(id)arg1 packageSize:(unsigned int)arg2 usePatch:(_Bool)arg3;
- (unsigned long long)markEventEnd:(unsigned long long)arg1 appType:(unsigned int)arg2;
- (void)markEventBegin:(unsigned long long)arg1;
- (void)markEventDealScriptSize:(unsigned int)arg1 appid:(id)arg2 preload:(_Bool)arg3;
- (void)markEventOpenFromPreloadTask:(id)arg1;
- (void)markEventSyncABTestInfoCgi:(id)arg1;
- (void)markEventSyncJsApiInfoCgi:(id)arg1;
- (void)markEventSyncLaunchCgi:(id)arg1;
- (void)markEventSyncUpdateContact:(id)arg1 reason:(unsigned int)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)registerOpenWeAppInfo:(id)arg1 username:(id)arg2 appVersion:(long long)arg3 appState:(unsigned long long)arg4 scene:(unsigned long long)arg5 sceneNote:(id)arg6 isPluginCode:(unsigned int)arg7 appServiceType:(unsigned long long)arg8 pagePath:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

