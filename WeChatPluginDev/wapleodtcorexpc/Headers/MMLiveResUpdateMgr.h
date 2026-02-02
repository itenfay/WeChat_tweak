//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface MMLiveResUpdateMgr
{
    NSDictionary *_currentResourceItems;
    NSDictionary *_cleanupResourceItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *cleanupResourceItems; // @synthesize cleanupResourceItems=_cleanupResourceItems;
@property(retain, nonatomic) NSDictionary *currentResourceItems; // @synthesize currentResourceItems=_currentResourceItems;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (id)getDestDirWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (id)getUpZipDirWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)clearResVersionForResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)updateLatestReadyResVersion:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (unsigned int)latestReadyResVersion:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)clearUnusedResourceForResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)cleanupResourceForResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)checkFilesIntegrityWithResBasePath:(id)arg1 manifestPath:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)checkFilesIntegrityWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)checkResourceIntegrityWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)extractResWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (_Bool)checkResUpdateWithScene:(unsigned long long)arg1;
- (void)checkResourcesOnInitialization;
- (void)initializeResourceItems;
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

