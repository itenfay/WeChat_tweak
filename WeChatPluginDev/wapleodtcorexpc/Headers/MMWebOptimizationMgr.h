//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebOptimJSContextTaskMgr, MMWebOptimizationPrefetcher, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, WCEliminatedSlotMMKV;
@protocol OS_dispatch_queue;

@interface MMWebOptimizationMgr
{
    NSMutableArray *_arrA8keyLiteWaitingQueue;
    NSMutableArray *_a8keyLiteTaskReqQueue;
    NSMutableSet *_setRequestingDomainString;
    NSObject<OS_dispatch_queue> *_doDNSWorkQueue;
    WCEliminatedSlotMMKV *_webControlDataSlotKv;
    WCEliminatedSlotMMKV *_domainControlDataSlotKv;
    WCEliminatedSlotMMKV *_domainPreDNSResultSlotKv;
    WCEliminatedSlotMMKV *_prefetchDomainInfoSlowKv;
    WCEliminatedSlotMMKV *_redirectInfoSlotKv;
    WCEliminatedSlotMMKV *_prefetchIdentifierSlotKv;
    WCEliminatedSlotMMKV *_webPrefetcherIdSlotKv;
    WCEliminatedSlotMMKV *_urlParamsFilterInfoSlotKv;
    WCEliminatedSlotMMKV *_prefetchInfoSlotKv;
    MMWebOptimizationPrefetcher *_resourcePrefetcher;
    MMWebOptimJSContextTaskMgr *_jsContextManager;
    NSMutableDictionary *_shouldWaitNotifyDic;
}

+ (_Bool)canApplyWebOptimizationWithDataItem:(id)arg1;
+ (_Bool)canApplyWebOptimizationWithMessageWrap:(id)arg1;
+ (_Bool)hasMPWhiteListPrefix:(id)arg1;
+ (_Bool)isMPDomainURL:(id)arg1;
+ (unsigned int)covertSceneToOption:(unsigned int)arg1;
+ (_Bool)isPrefetchTakeOverByKaraEnableWithScene:(unsigned int)arg1;
+ (_Bool)isWebPrefetchEnableWithOption:(unsigned int)arg1;
+ (_Bool)isWebPrefetchEnable;
+ (long long)webPrefetchSupportOptions;
+ (_Bool)isWebCheckPerformanceEnable;
+ (_Bool)isWebPreDoDNSEnable;
+ (_Bool)isWebGetA8keyLiteEnableWithOption:(unsigned int)arg1;
+ (_Bool)isWebGetA8keyLiteEnable;
+ (long long)webGetA8keyLiteSupportOptions;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *shouldWaitNotifyDic; // @synthesize shouldWaitNotifyDic=_shouldWaitNotifyDic;
@property(retain, nonatomic) MMWebOptimJSContextTaskMgr *jsContextManager; // @synthesize jsContextManager=_jsContextManager;
@property(retain, nonatomic) MMWebOptimizationPrefetcher *resourcePrefetcher; // @synthesize resourcePrefetcher=_resourcePrefetcher;
@property(retain, nonatomic) WCEliminatedSlotMMKV *prefetchInfoSlotKv; // @synthesize prefetchInfoSlotKv=_prefetchInfoSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *urlParamsFilterInfoSlotKv; // @synthesize urlParamsFilterInfoSlotKv=_urlParamsFilterInfoSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *webPrefetcherIdSlotKv; // @synthesize webPrefetcherIdSlotKv=_webPrefetcherIdSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *prefetchIdentifierSlotKv; // @synthesize prefetchIdentifierSlotKv=_prefetchIdentifierSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *redirectInfoSlotKv; // @synthesize redirectInfoSlotKv=_redirectInfoSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *prefetchDomainInfoSlowKv; // @synthesize prefetchDomainInfoSlowKv=_prefetchDomainInfoSlowKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *domainPreDNSResultSlotKv; // @synthesize domainPreDNSResultSlotKv=_domainPreDNSResultSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *domainControlDataSlotKv; // @synthesize domainControlDataSlotKv=_domainControlDataSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *webControlDataSlotKv; // @synthesize webControlDataSlotKv=_webControlDataSlotKv;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *doDNSWorkQueue; // @synthesize doDNSWorkQueue=_doDNSWorkQueue;
@property(retain, nonatomic) NSMutableSet *setRequestingDomainString; // @synthesize setRequestingDomainString=_setRequestingDomainString;
@property(retain, nonatomic) NSMutableArray *a8keyLiteTaskReqQueue; // @synthesize a8keyLiteTaskReqQueue=_a8keyLiteTaskReqQueue;
@property(retain, nonatomic) NSMutableArray *arrA8keyLiteWaitingQueue; // @synthesize arrA8keyLiteWaitingQueue=_arrA8keyLiteWaitingQueue;
- (id)urlStringWithoutFragmentFromOriginalUrlString:(id)arg1;
- (void)async_reportA8keyLiteSupportLinkOpen:(id)arg1 scene:(unsigned int)arg2 canHandleByKara:(_Bool)arg3;
- (id)requestUrlWithUrlString:(id)arg1 webPrefetcherId:(id)arg2;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(_Bool *)arg7 forceUrl:(id *)arg8 canKaraHandle:(_Bool)arg9 useOfflineCache:(_Bool)arg10 config:(id)arg11;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(_Bool *)arg7 forceUrl:(id *)arg8 canKaraHandle:(_Bool)arg9 config:(id)arg10;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(_Bool *)arg7 forceUrl:(id *)arg8 config:(id)arg9;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(_Bool *)arg7 forceUrl:(id *)arg8;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(_Bool *)arg7;
- (void)clearAllPreAuthControlData;
- (void)clearAllPagePrefetchCacheData;
- (void)clearAllPrefetchData;
- (void)doFetchControlDataForUrlParams:(id)arg1;
- (void)doPrefetchControlDataForWCDataItems:(id)arg1 scene:(unsigned int)arg2 fromKara:(_Bool)arg3;
- (void)doPrefetchControlDataForWCDataItems:(id)arg1 scene:(unsigned int)arg2;
- (void)doPrefetchControlDataForMessageWraps:(id)arg1 scene:(unsigned int)arg2 fromKara:(_Bool)arg3;
- (void)doPrefetchControlDataForMessageWraps:(id)arg1 scene:(unsigned int)arg2;
- (id)redirectInfoForUrlString:(id)arg1;
- (void)setRedirectInfo:(id)arg1;
- (id)prefetchDomainInfoWithUrls:(id)arg1;
- (id)prefetchResInfoForUrlString:(id)arg1;
- (void)setPrefetchDomainInfoArr:(id)arg1;
- (void)setDnsResult:(id)arg1 forDomain:(id)arg2;
- (void)setDomainControlData:(id)arg1 forDomain:(id)arg2;
- (void)setDomainControlDataArr:(id)arg1;
- (id)domainControlDataForDomain:(id)arg1;
- (void)clearWebControlDataSlotKv;
- (void)setAuthControlData:(id)arg1 forURL:(id)arg2;
- (void)setAuthControlDataArr:(id)arg1;
- (id)prefetchJsApiControlBytesForUrl:(id)arg1;
- (id)authControlDataForUrlString:(id)arg1;
- (_Bool)hasCacheDnsResultForDomain:(id)arg1;
- (_Bool)hasAllowanceAsyncA8KeyForUrlString:(id)arg1 andGetNewRespUrlString:(id *)arg2 andWebPrefetcherId:(id)arg3 andGetPrefetchResult:(id *)arg4;
- (id)tryGetWebFirstScreenOptimazationExtInfoForKeyUrlString:(id)arg1 webPrefetcherId:(id)arg2;
- (void)initSlotKV;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (id)mainThread_filterDoDNSParamsListToDomainList:(id)arg1;
- (_Bool)canUrlGetA8keyLite:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)isUrlInA8keyLiteWhiteList:(id)arg1;
- (id)mainThread_filterA8KeyLiteParamsList:(id)arg1;
- (void)handlePrefetchDomainInfos:(id)arg1 liteUrlResults:(id)arg2;
- (id)dicForPrefetchDomainInfo:(id)arg1;
- (void)handleLiteUrlResult:(id)arg1;
- (void)handleA8keyLiteTaskWithSuccess:(_Bool)arg1 result:(id)arg2 arrA8KeyLiteParams:(id)arg3;
- (id)prefetchDomainInfoWithLiteParams:(id)arg1;
- (void)mainThread_requestGet8KeyLiteWithReqParams:(id)arg1;
- (_Bool)isUrlInReqQueue:(id)arg1;
- (void)mainThread_checkA8KeyLiteWaitingQueue;
- (void)mainThread_pushA8KeyLiteQueue:(id)arg1;
- (_Bool)isWebGetA8KeyLiteEnableWithParams:(id)arg1;
- (_Bool)isWebGetA8KeyLiteEnableWithScene:(unsigned int)arg1;
- (void)batchGetA8KeyLiteForUrlParams:(id)arg1;
- (void)batchDoDNSForUrlParams:(id)arg1;
- (void)batchFetchControlDataForUrlParams:(id)arg1;
- (void)onServiceClearA8KeyLite;
- (void)onServiceInitA8KeyLite;
- (_Bool)isWebRedirectPrefetchEnable;
- (void)doGameCenterPrefetcher:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)isLowQualityNetworkCondition;
- (_Bool)isWebPrefetchEnableWithScene:(unsigned int)arg1;
- (void)doPrefetchWebResIfNeedForUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(_Bool)arg5 httpHeader:(id)arg6 config:(id)arg7;
- (void)removePrefetchIdentifierForUrlIfHave:(id)arg1;
- (void)setUrlForWebPrefetcherId:(id)arg1 url:(id)arg2;
- (void)setPrefetchIdentifierForUrl:(id)arg1 identifier:(id)arg2;
- (void)clearAllPreloadCacheData;
- (void)asyncClearCacheIfExistWithUrlString:(id)arg1;
- (void)clearCacheIfExistWithUrlString:(id)arg1;
- (_Bool)hasPrefetchingTaskWithUrlString:(id)arg1;
- (id)getPrefetchResultWithUrl:(id)arg1;
- (void)prefetchWebResIfNeedForUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(_Bool)arg5 httpHeader:(id)arg6;
- (void)prefetchWebResIfNeedForUrlWithResult:(id)arg1 canRedirect:(_Bool)arg2;
- (void)setShouldWaitPrefetchNotify:(_Bool)arg1 url:(id)arg2;
- (_Bool)shouldWaitPrefetchNotifyForUrl:(id)arg1;
- (id)getUrlForWebPrefetcherId:(id)arg1;
- (id)getPrefetchIdentifierForUrl:(id)arg1;
- (void)onServiceClearDataPrefetch;
- (void)onServiceInitPrefetch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

