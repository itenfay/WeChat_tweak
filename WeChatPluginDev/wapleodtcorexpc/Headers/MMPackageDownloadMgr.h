//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDateFormatter, NSMutableSet, NSString;

@interface MMPackageDownloadMgr
{
    NSMutableSet *m_downliadingPackageLists;
    NSMutableSet *m_freshDownliadingPackageLists;
    NSMutableSet *m_downloadingPackages;
    NSMutableSet *m_cancelDownloadPackages;
    NSDateFormatter *m_dateFormatter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)deletePackage:(unsigned int)arg1 tid:(id)arg2;
- (void)cancelPackage:(unsigned int)arg1 tid:(id)arg2;
- (void)onPackageSynced:(id)arg1;
- (_Bool)downloadPackage:(unsigned int)arg1 tid:(id)arg2 localVersion:(id)arg3;
- (void)onPackageListSynced:(id)arg1;
- (void)downloadPackageList:(unsigned int)arg1 onlyForTid:(id)arg2;
- (void)downloadPackageList:(unsigned int)arg1;
- (void)downloadPackageList:(unsigned int)arg1 fresh:(_Bool)arg2 onlyForTid:(id)arg3;
- (id)getPackageList:(unsigned int)arg1;
- (void)SavePackageListArchive:(id)arg1 packageListArchive:(id)arg2;
- (id)LoadPackageListArchive:(id)arg1;
- (id)getPackageIconPath:(id)arg1 tid:(id)arg2;
- (id)getPackageCachePath:(id)arg1 tid:(id)arg2;
- (id)getPackageBasePath:(id)arg1 tid:(id)arg2;
- (id)getPackageListPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

