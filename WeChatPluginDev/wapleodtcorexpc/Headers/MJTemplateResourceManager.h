//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MJTemplateResourceManager
{
    NSObject<OS_dispatch_queue> *_operationQueue;
    MemoryMappedKV *_mmkv;
}

- (void).cxx_destruct;
- (void)cleanResourceFilesForResType:(unsigned int)arg1;
- (void)cleanMMKVFile;
- (void)cleanAllResourceFiles;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)consumeResourcePackageIfNeededWithResType:(unsigned int)arg1;
- (void)consumeResourcePackageIfNeededWithResType:(unsigned int)arg1 resSubtype:(unsigned int)arg2;
- (void)checkUnmergedResourceFilesWithResType:(unsigned int)arg1;
- (void)mergeResourceFilesIfNeededWithResType:(unsigned int)arg1 resSubtype:(unsigned int)arg2;
- (void)updateResourceTargetVersion:(unsigned int)arg1 withResType:(unsigned int)arg2 resSubtype:(unsigned int)arg3;
- (_Bool)shouldMergeResourceWithResType:(unsigned int)arg1 resSubtype:(unsigned int)arg2 targetVersion:(unsigned int)arg3;
@property(readonly, copy, nonatomic) NSString *cameraResourceDirectory;
@property(readonly, copy, nonatomic) NSString *albumResourceDirectory;
@property(readonly, nonatomic) unsigned int cameraResType;
@property(readonly, nonatomic) unsigned int albumResType;
@property(readonly, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)initResourceManager;
- (id)init;
- (unsigned long long)MMCleanCacheMgr_cleanCache;
- (unsigned long long)MMCleanCacheMgr_evaluateCacheSize;
- (id)safeStringWithString:(id)arg1;
- (id)safeJSONStringWithObject:(id)arg1;
- (void)reportResourceCachedStateWithResType:(unsigned int)arg1;
- (void)reportResourceCachedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

