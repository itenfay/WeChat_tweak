//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WAConfigSystemSetting : NSObject
{
    NSDictionary *_dicSetting;
}

- (void).cxx_destruct;
- (id)getCurLangWordingFromDic:(id)arg1;
- (id)wxaCommUseSetting;
- (id)tradeGuaranteeMenuSetting;
- (id)ageAppropriateSetting;
- (id)packageManager;
- (id)httpSetting;
- (id)syncVersionSetting;
- (id)dataPipeMaxWaitTime;
- (id)feedbackDarkIconUrl;
- (id)feedbackLightIconUrl;
- (id)complaintDarkIconUrl;
- (id)complaintLightIconUrl;
- (id)complaintMenuWording;
- (id)feedbackMenuWording;
- (id)commUseWording;
- (id)usePackageConfirmSubDescScopeList;
- (unsigned int)widgetImageFlowLimitMaxSize;
- (unsigned int)widgetImageFlowLimitDuration;
- (unsigned int)deadThreadBanDuration;
- (unsigned int)deadThreadMaxTimeToLive;
- (id)openUrlByExtBrowserDomain;
- (double)loadingWeakNetDelayDuration;
- (unsigned int)bluetoothBackgroundTimeoutWithoutConnectionInSeconds;
- (unsigned int)getValidStarNumberLimitation;
- (unsigned int)defaultStarNumberLimitation;
- (unsigned int)starNumberLimitation;
- (unsigned int)batchAttrSyncFreqPeriodSeconds;
- (unsigned int)attrSyncFreqPeriodSeconds;
- (unsigned int)defaultAttrSyncForceUpdateTime;
- (unsigned int)attrSyncForceUpdateTime;
- (unsigned long long)singleWxaFileStorageCleanMbThreshold;
- (unsigned long long)globalWxaFileStorageCleanMbThreshold;
- (unsigned long long)globalStorageMaxSize;
- (unsigned long long)globalStorageItemMaxSize;
- (unsigned long long)defaultLocalStorageItemMaxSize;
- (unsigned long long)localStorageItemMaxSize;
- (unsigned long long)defaultCacheTotalFileMaxSize;
- (unsigned long long)cacheTotalFileMaxSize;
- (_Bool)containSyncLaunchScene:(unsigned int)arg1;
- (id)defaultSyncLaunchSceneList;
- (id)syncLaunchSceneList;
- (_Bool)reloadTaskWithScene:(unsigned int)arg1 homePath:(_Bool)arg2;
- (unsigned int)memoryWarningInterval;
- (unsigned int)defaultFetchTaskBarItemInterval;
- (unsigned int)gameAppMaxRunningCount;
- (unsigned int)defaultAppMaxRunningCount;
- (unsigned int)appMaxBackgroundLaunchBluetoothCount;
- (unsigned int)appMaxBackgroundBluetoothCount;
- (unsigned int)appMaxBackgroundLocationUpdatingCount;
- (unsigned int)appMaxRunningCount;
- (id)cdnPreConnectURL;
- (id)defaultCDNBaseURL;
- (id)cdnBaseURL;
- (unsigned int)performanceIndexReportGapInSeconds;
- (id)memoryWarningReleasePolicies;
- (unsigned int)mainFrameTaskItemLineCount;
- (unsigned int)wxDataMaxDataSizeInKB;
- (unsigned int)wxDataMaxRequestConcurrent;
- (unsigned int)packageSweeperClientStorageMinMB;
- (unsigned int)packageSweeperClientStorageMaxPercent;
- (unsigned int)packageSweeperWithoutContactOutdatedDuration;
- (unsigned int)packageSweeperCheckInterval;
- (long long)gamePerfCollectInterval;
- (double)gamePerfCollectSamplePercentage;
- (unsigned int)defaultPullVersionMaxCountPerRequest;
- (id)preDownloadUserNameBlackList;
- (id)preDownloadWalletWhiteList;
- (id)syncVersionPredownloadList;
- (unsigned int)pullVersionMaxCountPerRequest;
- (unsigned int)defaultPullVersionMaxCount;
- (unsigned int)pullVersionMaxCount;
- (unsigned int)defaultPullVersionWxaUsageLastInterval;
- (unsigned int)contactExpireInterval;
- (unsigned int)pullVersionWxaUsageLastInterval;
- (unsigned int)defaultSyncVersionInterval;
- (unsigned int)syncVersionInterval;
- (unsigned int)invalidContactFreqBlockSeconds;
- (id)subContextImgDomainList;
- (unsigned int)nativeBufferQueueLimitByte;
- (unsigned int)nativeBufferSizeLimitByte;
- (unsigned int)defaultAppServiceMaxDataSize;
- (unsigned int)appServiceMaxDataSize;
- (id)ageAppropriateIcon:(id)arg1;
- (double)whiteScreenDetectThreshold;
- (unsigned long long)gameDownloadFileMaxSize;
- (unsigned long long)defaultDownloadFileMaxSize;
- (unsigned long long)downloadFileMaxSize;
- (unsigned int)downloadFileMaxTimeoutMS;
- (unsigned int)uploadFileMaxTimeoutMS;
- (unsigned int)webSocketMaxTimeoutMS;
- (unsigned int)requestMaxTimeoutMS;
- (id)defaultPreloadHttpHeaderReferer;
- (id)defaultHttpHeaderReferer;
- (id)httpHeaderReferer;
- (id)httpHeaderWhiteList;
- (id)httpHeaderBlackList;
- (id)httpHeaderMode;
- (id)initWithSetting:(id)arg1;

@end

