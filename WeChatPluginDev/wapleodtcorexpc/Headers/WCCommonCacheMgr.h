//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, WCCommonCacheDB;
@protocol OS_dispatch_queue;

@interface WCCommonCacheMgr
{
    NSObject<OS_dispatch_queue> *_processQueue;
    WCCommonCacheDB *_cacheDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommonCacheDB *cacheDB; // @synthesize cacheDB=_cacheDB;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (_Bool)changeToHardLink:(id)arg1 filePath:(id)arg2 aggregateName:(id)arg3 mediaType:(unsigned int)arg4;
- (void)loadAndDeleteVideoCacheData;
- (void)removeCachesWithFilePath:(id)arg1;
- (void)removeCachesWithAggregateNames:(id)arg1;
- (void)removeCachesWithAggregateName:(id)arg1;
- (_Bool)addCacheWithFileMD5:(id)arg1 filePath:(id)arg2 aggregateName:(id)arg3 mediaType:(unsigned int)arg4;
- (_Bool)linkHitCacheFileWithFileMD5:(id)arg1 targetPath:(id)arg2 mediaType:(unsigned int)arg3 consistentSize:(long long)arg4;
- (_Bool)linkHitCacheFileWithFileMD5:(id)arg1 targetPath:(id)arg2 mediaType:(unsigned int)arg3;
- (id)getCommonCacheWithMD5:(id)arg1;
- (_Bool)isCloseCommonCache;
- (id)getCommonProcessQueue;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

