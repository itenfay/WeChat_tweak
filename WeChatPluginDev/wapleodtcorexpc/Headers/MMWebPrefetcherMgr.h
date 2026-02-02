//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPrefetcherGameCenterJSContext, MMWebJsBasePkgInfo, MMWebOptimizationPrefetcher, MMWebPrefecherJsEngine, MMWebPrefetcherPkgDownloadTask, MemoryMappedKV, NSMutableArray, NSString, NSURLSession;

@interface MMWebPrefetcherMgr
{
    MMWebPrefecherJsEngine *_jsEngine;
    MMWebOptimizationPrefetcher *_resourcePrefetcher;
    NSMutableArray *_downloadTaskArr;
    MMWebJsBasePkgInfo *_prefecherBasePkg;
    NSURLSession *_urlSession;
    MMPrefetcherGameCenterJSContext *_gameSingletonContext;
    MemoryMappedKV *_pkgFrequencyMappedKV;
    MMWebPrefetcherPkgDownloadTask *_adPkgDownloadTask;
    MemoryMappedKV *_exptMappedKV;
}

+ (unsigned int)codePkgDownloadInterval;
+ (unsigned int)firstMainCellExposedDelaySec;
+ (unsigned int)mainCellExposedInterval;
+ (_Bool)isPkgDownloadUsePreDownloadEnable;
+ (_Bool)isGameCenterSwitchOpen;
+ (_Bool)isTimelineADPrefetcherOpen;
+ (_Bool)isWebPrefetcherSingletonVmEnable;
+ (_Bool)isWebPrefetcherOpen;
+ (id)gameCenterIdentifierForUrl:(id)arg1;
+ (id)getValidPkgInfoWithAppID:(id)arg1 userName:(id)arg2 localResName:(id)arg3;
+ (void)downloadReportForBizScene:(long long)arg1 subBizScene:(long long)arg2 ResType:(long long)arg3 ResUrlorAppId:(id)arg4 Action:(long long)arg5 isUsingNewJvm:(_Bool)arg6;
+ (void)stepReportForBizScene:(long long)arg1 subBizScene:(long long)arg2 url:(id)arg3 step:(unsigned int)arg4 isUsingNewJvm:(_Bool)arg5;
+ (void)stepReportForBizScene:(long long)arg1 subBizScene:(long long)arg2 url:(id)arg3 step:(unsigned int)arg4;
+ (void)adOperateReport:(unsigned int)arg1;
+ (void)contextReport:(unsigned int)arg1;
+ (void)workflowMonitorFor:(unsigned int)arg1;
+ (void)stateMonitorFor:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *exptMappedKV; // @synthesize exptMappedKV=_exptMappedKV;
@property(retain, nonatomic) MMWebPrefetcherPkgDownloadTask *adPkgDownloadTask; // @synthesize adPkgDownloadTask=_adPkgDownloadTask;
@property(retain, nonatomic) MemoryMappedKV *pkgFrequencyMappedKV; // @synthesize pkgFrequencyMappedKV=_pkgFrequencyMappedKV;
@property(retain, nonatomic) MMPrefetcherGameCenterJSContext *gameSingletonContext; // @synthesize gameSingletonContext=_gameSingletonContext;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) MMWebJsBasePkgInfo *prefecherBasePkg; // @synthesize prefecherBasePkg=_prefecherBasePkg;
@property(retain, nonatomic) NSMutableArray *downloadTaskArr; // @synthesize downloadTaskArr=_downloadTaskArr;
@property(retain, nonatomic) MMWebOptimizationPrefetcher *resourcePrefetcher; // @synthesize resourcePrefetcher=_resourcePrefetcher;
@property(retain, nonatomic) MMWebPrefecherJsEngine *jsEngine; // @synthesize jsEngine=_jsEngine;
- (void)setupURLSession;
- (void)doPrefetchWebResIfNeedForUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(_Bool)arg5 httpHeader:(id)arg6 config:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)tryStartWebPrefechWithUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(_Bool)arg5 httpHeader:(id)arg6 config:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)dispatchMainCellExposedEventWithScene:(long long)arg1;
- (void)dispatchEventToAdContext:(id)arg1 extraData:(id)arg2;
- (void)releaseEngine;
- (void)setupEngine;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)setAdTestInfoWithInt:(int)arg1 key:(id)arg2;
- (void)setAdTestInfoWithStr:(id)arg1 key:(id)arg2;
- (void)setAdTestInfoWithStr:(id)arg1;
- (id)getTestAdInfo;
- (id)mappedKV;
- (id)gameCenterJSContext;
- (void)onGameCenterUrlEntrenceExposedWithUrl:(id)arg1 scene:(unsigned int)arg2;
- (void)releaseGameCenterContext;
- (void)trigerDownloadPkgWithAppId:(id)arg1 username:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)trigerPrefetchADPrefetcherPkg;
- (void)trigerPrefetchBasePrefetcherPkg;
- (id)getValidCodePkgPathWithAppId:(id)arg1;
- (id)frequencyMappedKV;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

