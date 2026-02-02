//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WAPackageDownloadPreConnectLogic;

@interface WAPackageDownloadUrlFetcher
{
    NSMutableArray *_arrFetching;
    NSMutableArray *_arrWaiting;
    NSMutableArray *_arrSeprateCGIInfoData;
    WAPackageDownloadPreConnectLogic *_preConnectLogic;
    NSMutableSet *_setPreFetching;
    NSMutableDictionary *_dicPreFetchResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPreFetchResult; // @synthesize dicPreFetchResult=_dicPreFetchResult;
@property(retain, nonatomic) NSMutableSet *setPreFetching; // @synthesize setPreFetching=_setPreFetching;
@property(retain, nonatomic) WAPackageDownloadPreConnectLogic *preConnectLogic; // @synthesize preConnectLogic=_preConnectLogic;
- (id)getPrefetchCDNPkgDownloadInfoIfHaveForInfoData:(id)arg1;
- (void)handlePrefetchCDNPkgDownloadUrl:(id)arg1;
- (_Bool)checkIfHaveValidPrefetchCDNPkgDownloadUrlForUsername:(id)arg1 appid:(id)arg2 version:(unsigned int)arg3;
- (void)triggerPrefetchCDNPkgDownloadUrlForUsername:(id)arg1 path:(id)arg2 scene:(unsigned int)arg3;
- (_Bool)isUsernameInPreFetchingWithUsername:(id)arg1;
- (id)getPrefetchResultForUsername:(id)arg1;
- (void)removePrefetchInfoForUsername:(id)arg1;
- (void)savePrefetchResult:(id)arg1 forUsername:(id)arg2;
- (void)unmarkPreFetchingForUsername:(id)arg1;
- (void)markPreFetchingForUsername:(id)arg1;
- (id)genPreFetchTokenForUsername:(id)arg1;
- (void)sendDownloadUrlFetcherFail:(id)arg1;
- (_Bool)isMatchInfoData:(id)arg1 andResponseItem:(id)arg2;
- (void)handleGetPkgDownloadUrl:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)arg1;
- (id)fetchNextRequestInfoDatasFromWaitingQueue;
- (void)checkWaitingQueue;
- (void)removeInfoDataTask:(id)arg1;
- (_Bool)checkIsInQueue:(id)arg1 withInfoData:(id)arg2;
- (_Bool)checkIsInWaitingQueue:(id)arg1;
- (_Bool)checkIsInFetchQueue:(id)arg1;
- (void)mainThread_getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1 predownloadScene:(unsigned int)arg2;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)arg1 predownloadScene:(unsigned int)arg2;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)arg1;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1 predownloadScene:(unsigned int)arg2;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1;
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

