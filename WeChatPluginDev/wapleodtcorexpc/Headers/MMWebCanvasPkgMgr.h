//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebCanvasBasePkgInfo, MMWebCanvasBizPkgInfo, MemoryMappedKV, NSString;

@interface MMWebCanvasPkgMgr
{
    MemoryMappedKV *_mappedKV;
    MMWebCanvasBasePkgInfo *_builtInBasePkgInfo;
    MMWebCanvasBizPkgInfo *_builtInBizPkgInfo;
}

+ (id)bizPkgAppId;
+ (id)basePkgAppId;
- (void).cxx_destruct;
- (void)reportMonitorIdKey:(unsigned int)arg1;
- (id)mappedKV;
- (void)resetMappedKv;
- (id)__bizPkgAppId;
- (id)__bizPkgUsername;
- (id)__basePkgAppId;
- (id)__basePkgUsername;
- (void)handleNewPkgWithInfoData:(id)arg1;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(_Bool)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (id)builtInBizPkgInfo;
- (void)prefetchBizPkg;
- (unsigned long long)isBizPkgInfoUsable:(id)arg1 pGetPkgInfoIfUsable:(id *)arg2;
- (id)getBizPkgInfo;
- (id)builtInBasePkgInfo;
- (void)prefetchBasePkg;
- (unsigned long long)isBasePkgInfoUsable:(id)arg1 pGetPkgInfoIfUsable:(id *)arg2;
- (id)getBasePkgInfo;
- (id)getPkgInfo:(_Bool)arg1;
- (void)prefetchBaseAndBizPkgWithScene:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

