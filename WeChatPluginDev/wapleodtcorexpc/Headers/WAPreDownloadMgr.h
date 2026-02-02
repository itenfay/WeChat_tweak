//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAPreDownloadMgr
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicAppID2PreDownloadHandler;
    NSMutableDictionary *_dicAppID2PreResUrls;
    NSMutableDictionary *_dicUrl2PreResResult;
    NSMutableDictionary *_dicAppID2CoverImageURL;
    NSString *_appId;
    NSNumber *__hasDownloadedFileNum;
    NSNumber *__hasDownloadedSubPackageNum;
    NSNumber *__bothDownloadedFileNum;
    NSMutableDictionary *_moduleCacheVersionCheckers;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *moduleCacheVersionCheckers; // @synthesize moduleCacheVersionCheckers=_moduleCacheVersionCheckers;
@property(retain) NSNumber *_bothDownloadedFileNum; // @synthesize _bothDownloadedFileNum=__bothDownloadedFileNum;
@property(retain) NSNumber *_hasDownloadedSubPackageNum; // @synthesize _hasDownloadedSubPackageNum=__hasDownloadedSubPackageNum;
@property(retain) NSNumber *_hasDownloadedFileNum; // @synthesize _hasDownloadedFileNum=__hasDownloadedFileNum;
- (void)downloadPkgForAppid:(id)arg1 username:(id)arg2 debugModeType:(unsigned int)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)startUpTime;
- (void)beforeInjectUserScript:(unsigned long long)arg1;
- (void)joinMainScene;
- (void)clearCoverImage:(id)arg1;
- (id)getCoverImageURL:(id)arg1;
- (void)setCoverImageURL:(id)arg1 appID:(id)arg2;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)clearAllPreResources;
- (void)clearAllDownloadHandler;
- (void)clear;
- (void)clearWithAppID:(id)arg1;
- (void)clearPreResourcesWithAppID:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (id)getDownloadHandler:(id)arg1;
- (_Bool)isDownloadingOrPreDownloaded:(id)arg1 url:(id)arg2;
- (void)removeUrl:(id)arg1 url:(id)arg2;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(_Bool)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 context:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)downloadFileNoCheck:(id)arg1 appId:(id)arg2 appVersion:(unsigned int)arg3;
- (void)preDownloadFilesNoCheck:(id)arg1 appId:(id)arg2 appVersion:(unsigned int)arg3;
- (void)downloadFile:(id)arg1 url:(id)arg2 context:(id)arg3 contact:(id)arg4;
- (void)downloadSubPackage:(id)arg1 pkgconfig:(id)arg2 module:(id)arg3 instanceId:(id)arg4;
- (void)downloadPreResources:(id)arg1 pkgconfig:(id)arg2 reses:(id)arg3 subpkgs:(id)arg4 instanceId:(id)arg5;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (void)initStatis;
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

