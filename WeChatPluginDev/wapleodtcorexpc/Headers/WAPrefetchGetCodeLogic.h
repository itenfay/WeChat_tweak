//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAPrefetchGetCodeLogic
{
    NSMutableArray *_arrRequestingCmd;
    NSMutableArray *_arrWaitingCmd;
    NSMutableDictionary *_dicDownloadConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicDownloadConfig; // @synthesize dicDownloadConfig=_dicDownloadConfig;
@property(retain, nonatomic) NSMutableArray *arrWaitingCmd; // @synthesize arrWaitingCmd=_arrWaitingCmd;
@property(retain, nonatomic) NSMutableArray *arrRequestingCmd; // @synthesize arrRequestingCmd=_arrRequestingCmd;
- (void)markRequestDidFailedCmd:(id)arg1 infoData:(id)arg2;
- (_Bool)isCmdReachMaxRetryCount:(id)arg1;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (_Bool)startDownloadPkgWithAppInfoData:(id)arg1 CDNURL:(id)arg2 CDNURLWithZstd:(id)arg3 patchURL:(id)arg4;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)arg1 forInfoData:(id)arg2;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)arg1 zstdUrl:(id)arg2 patchUrl:(id)arg3 forInfoData:(id)arg4;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)getPrefetchId;
- (void)checkWaitingQueue;
- (void)saveLocalData;
- (void)removeCmd:(id)arg1;
- (void)removeWaitingCmd:(id)arg1;
- (void)removeDownloadingCmd:(id)arg1;
- (void)removeDownloadingCmdForInfoData:(id)arg1;
- (id)getDownloadSpeedForRequestKey:(id)arg1 scene:(unsigned int)arg2;
- (id)getDownloadSpeedArrayForScene:(unsigned int)arg1;
- (void)cancelPreDownLoadAppPkgForRequestKey:(id)arg1 scene:(unsigned int)arg2;
- (void)cancelDownloadForScene:(unsigned int)arg1;
- (_Bool)isAppInfoDataInDownloadingCode:(id)arg1;
- (_Bool)isNetworkTypeBetter2G:(unsigned int)arg1;
- (_Bool)isNetworkTypeBetter3G:(unsigned int)arg1;
- (_Bool)isNetworkTypeBetter4G:(unsigned int)arg1;
- (_Bool)checkCurrentNetworkValidForCmd:(id)arg1;
- (unsigned int)getNetworkType;
- (id)getRequestingCmdForAppInfoData:(id)arg1;
- (void)addCmdIntoWaitingQueue:(id)arg1;
- (void)addCmdIntoRequestingQueue:(id)arg1;
- (unsigned long long)checkLocalVersion:(id)arg1;
- (void)elimilateCmdFromWaitingQueueWhichPkgVersionLowerThanTargetCmd:(id)arg1;
- (_Bool)enqueueCheck:(id)arg1;
- (void)startGetCodeWithCmd:(id)arg1;
- (_Bool)executeGetCodeCmd:(id)arg1;
- (void)resumeLocalData;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (_Bool)isEnableDownloadResumptionForKey:(id)arg1;
- (void)enableDownloadResumptionForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

