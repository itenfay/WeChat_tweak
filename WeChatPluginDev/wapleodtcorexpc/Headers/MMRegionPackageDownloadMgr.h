//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, Package;

@interface MMRegionPackageDownloadMgr
{
    Package *_cachedPackage;
    unsigned int uiInterval;
}

- (void).cxx_destruct;
- (void)updateVersion:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)getVersionFilePath;
- (id)getRegionFilePathForLang:(id)arg1;
- (id)getTmpRegionFilePathForLang:(id)arg1;
- (id)getRegionFilePath;
- (id)getRegionRootPath;
- (void)checkResouce;
- (_Bool)shoulCheckUpadte;
- (void)checkUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

