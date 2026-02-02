//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAPackageSweeperRegisterationMark, WAThreadSafeMutableDictionary;

@interface WAPackageSweeperLogic : NSObject
{
    _Bool _enteredForeground;
    unsigned int _processStartTime;
    unsigned int _processEndTime;
    unsigned long long _processStartTimeInMs;
    unsigned long long _processEndTimeInMs;
    WAThreadSafeMutableDictionary *_sweeperIgnoreVersionMapDic;
    WAPackageSweeperRegisterationMark *_registerationMark;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPackageSweeperRegisterationMark *registerationMark; // @synthesize registerationMark=_registerationMark;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *sweeperIgnoreVersionMapDic; // @synthesize sweeperIgnoreVersionMapDic=_sweeperIgnoreVersionMapDic;
@property(nonatomic) unsigned long long processEndTimeInMs; // @synthesize processEndTimeInMs=_processEndTimeInMs;
@property(nonatomic) unsigned long long processStartTimeInMs; // @synthesize processStartTimeInMs=_processStartTimeInMs;
@property(nonatomic) unsigned int processEndTime; // @synthesize processEndTime=_processEndTime;
@property(nonatomic) unsigned int processStartTime; // @synthesize processStartTime=_processStartTime;
@property(nonatomic) _Bool enteredForeground; // @synthesize enteredForeground=_enteredForeground;
- (id)fetchWhiteListUsernameList;
- (_Bool)isPackageShouldIgnoredInRegisteredMarkByAppid:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isPackageShouldIgnoredInRegisteredMapByAppid:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isPackageShouldIgnoredByAppid:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isPackageShouldIgnored:(id)arg1;
- (void)saveRegisteredMark;
- (void)loadRegisteredMark;
- (void)registerAutoExpirationIgnoreAppid:(id)arg1 aboveVersion:(unsigned long long)arg2 duration:(unsigned int)arg3;
- (void)registerIgnoreAppid:(id)arg1 aboveVersion:(unsigned long long)arg2;
- (id)weappPkgPathListToClean;
- (id)cachePathListInTmpToClean;
- (id)cachePathListInUsrStoreAndStorageToClean;
- (unsigned long long)sweepWeAppPkg;
- (unsigned long long)sweepTmpData;
- (unsigned long long)sweepUsrStoreAndStorageData;
- (void)sweepXnetCacheWithAppid:(id)arg1;
- (unsigned long long)sweepXnetCache;
- (unsigned long long)sweepPrefetchData;
- (unsigned long long)preGetWeAppPkgWhiteListSize;
- (unsigned long long)preGetXnetCacheSize;
- (unsigned long long)preGetWeAppPkgSize;
- (unsigned long long)preGetWeAppCacheSize;
- (unsigned long long)sweepWeAppCache;
- (id)getPublicDataSweeperInfoWithPreDownloadSweeperInfo:(id)arg1;
- (id)getSweeperInfoForContact:(id)arg1;
- (id)getWASweeperInfo;
- (unsigned long long)fileSizeForPath:(id)arg1;
- (void)checkAndClearVideoCache;
- (void)checkAndClearUsrStoreSpace;
- (void)checkAndClearInvalidateCodeCmd;
- (void)checkAndClearInvalidateContactCmd;
- (void)checkAndClearInvalidateResourceCmd;
- (void)checkAndClearPluginDevPkg;
- (void)checkRenderCacheLocalStorage;
- (void)checkAndClearXnetCache;
- (void)checkAndClearByteCodeCache;
- (void)checkAndClearRenderCache;
- (void)checkAndClearPubRes;
- (_Bool)isPluginCodePath:(id)arg1;
- (void)scanAndCleanInvalidNotifyInfo;
- (void)checkAndClearPkgDownloadCachesFile;
- (void)scanAndCleanInvalidModuleInfoData;
- (void)scanAndCleanInvalidEncryptInfoData;
- (void)scanAndCleanInvalidNormalInfoData;
- (void)scanAndCleanInvalidInfoData;
- (void)scanAndCleanDebugPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseModulePkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseEncryptPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseNormalPkgForAppId:(id)arg1;
- (void)scanAndCleanReleasePkgForAppId:(id)arg1;
- (void)scanAndCleanDebugDir;
- (void)scanAndCleanReleaseDir;
- (void)sweepContactAndDatas:(id)arg1;
- (void)sweepBackupContactForUsername:(id)arg1;
- (void)sweepCodecacheDataForAppID:(id)arg1;
- (id)codecacheDetailForFilePath:(id)arg1;
- (void)sweepStorageDataForAppID:(id)arg1;
- (void)sweepLocalPkgWithUsername:(id)arg1 appid:(id)arg2 debugType:(unsigned long long)arg3 isForce:(_Bool)arg4;
- (void)sweepLocalPkgWithContactNewLogic:(id)arg1 debugType:(unsigned long long)arg2 force:(_Bool)arg3;
- (void)sweepLocalPkgWithContact:(id)arg1 debugType:(unsigned long long)arg2 force:(_Bool)arg3;
- (unsigned int)sweepLocalPkgUnderVersion:(id)arg1 version:(long long)arg2 forAppid:(id)arg3;
- (void)sweepNormalPkgUnderVersion:(unsigned long long)arg1 forAppid:(id)arg2;
- (void)sweepLocalPluginCodeLru:(unsigned long long)arg1;
- (void)checkLocalStorage;
- (void)checkToSweepContactAndDatas:(id)arg1;
- (void)sweepLowerVersionPkgAndContactIfNeededForContacts:(id)arg1;
- (void)sweepOutDatedEncryptPkg;
- (void)sweepOutDatedModulePkg;
- (void)sweepOutDatedNormalPkgForContacts:(id)arg1;
- (void)sweepInvalidPkgAndInfoData;
- (void)saveCheckPointTime;
- (_Bool)isCurrentTimeReachCheckPoint;
- (void)reportCheckAction;
- (void)reportCacheDetail;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)sweepLocalPkg;
- (void)sweepLocalPkgWhenEnterBackgroundNewLogic;
- (void)enterForeground;
- (void)sweepLocalPkgWhenEnterBackground;
- (id)init;

@end

