//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface MMWebJsWAPkgMgr
{
    MemoryMappedKV *_mappedKV;
}

+ (_Bool)isAppIdInWhiteList:(id)arg1;
+ (unsigned int)codePkgDownloadInterval;
+ (id)getBuiltInBasePkgInfo:(id)arg1;
+ (id)getPkgInfoWithInfoData:(id)arg1;
+ (id)getPkgInfoWithAppId:(id)arg1;
+ (id)getValidMetaPkgWithAppId:(id)arg1 builtInPkgPath:(id)arg2;
+ (id)tryGetDebugPkgWithAppId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (_Bool)isAppSupportFrameSetWithRegexp:(id)arg1 appId:(id)arg2 path:(id)arg3;
- (_Bool)isAppSupportFrameSet:(id)arg1 appId:(id)arg2 path:(id)arg3;
- (_Bool)isPubLibUsable:(id)arg1;
- (_Bool)isCurrentPubLib:(id)arg1 matchesWith:(id)arg2;
- (void)markDownloadPkgUsableWithInfoData:(id)arg1;
- (id)lastUsablePkgWithAppId:(id)arg1;
- (void)clearConfigKV;
- (void)handlePrefetchGetPkg:(id)arg1 filePath:(id)arg2;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(_Bool)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (void)trigerPreDownloadPkgWithUsername:(id)arg1 appId:(id)arg2 scene:(unsigned long long)arg3;
- (void)trigerCanvasCardBasicLibPkg:(unsigned long long)arg1;
- (id)getValidMetaPkgWithAppId:(id)arg1 localResName:(id)arg2;
- (id)getValidAppConfigPkgWithAppId:(id)arg1 localResName:(id)arg2;
- (id)getCanvasCardBasicLibPkg;
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

