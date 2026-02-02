//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface MMWebDebugPkgMgr
{
    MemoryMappedKV *_mappedKV;
}

+ (_Bool)isDebugPkgABtestOpen;
+ (id)arrSessionCommonDebugPkgDescItem;
+ (id)arrCommonDebugPkgDescItem;
+ (id)dicCmmonAppId2Desc;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (id)__pkgFilePathForAppId:(id)arg1;
- (id)__pkgDirPath;
- (void)clearAllDebugPkgInfo;
- (void)clearDebugPkgInfo:(id)arg1;
- (id)getCanvasBizDebugPkgWithAppId:(id)arg1 errMsg:(id *)arg2;
- (id)getCanvasBaseDebugPkgWithAppId:(id)arg1 errMsg:(id *)arg2;
- (id)getDebugPkgWithAppId:(id)arg1 errMsg:(id *)arg2;
- (id)getCanvasDebugPath:(id)arg1;
- (_Bool)setDebugPkgWithData:(id)arg1 appId:(id)arg2;
- (_Bool)setDebugPkgWithPath:(id)arg1 appId:(id)arg2 errMsg:(id *)arg3;
- (void)setDebugPkgManualSwitchOpen:(_Bool)arg1;
- (_Bool)isDebugPkgManualSwitchOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

