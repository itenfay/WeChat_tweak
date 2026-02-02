//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMResPackageMgr
{
    NSMutableDictionary *m_resMap;
}

- (void).cxx_destruct;
- (id)pathForResNamed:(id)arg1 withPID:(id)arg2;
- (void)onPackageCancelFinish:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)cancelResPackageDownload:(id)arg1;
- (void)downloadResPackage:(id)arg1;
- (_Bool)isResPackageReady:(id)arg1;
- (_Bool)createDirIfNotExist:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

