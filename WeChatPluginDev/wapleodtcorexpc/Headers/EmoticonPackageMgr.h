//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonDataDB, EmoticonSortSetting, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EmoticonPackageMgr
{
    _Bool _isInstallingTusiji;
    EmoticonDataDB *m_oEmoticonPackageDB;
    NSRecursiveLock *_m_oLock;
    EmoticonSortSetting *_m_sortSetting;
    NSMutableDictionary *_m_packageDownloadStatusCacheDic;
}

+ (id)getEmoticonPackageImageByPid:(id)arg1 style:(unsigned long long)arg2;
+ (id)packageImageFromLightModeName:(id)arg1 darkModeName:(id)arg2 style:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInstallingTusiji; // @synthesize isInstallingTusiji=_isInstallingTusiji;
@property(retain) NSMutableDictionary *m_packageDownloadStatusCacheDic; // @synthesize m_packageDownloadStatusCacheDic=_m_packageDownloadStatusCacheDic;
@property(retain, nonatomic) EmoticonSortSetting *m_sortSetting; // @synthesize m_sortSetting=_m_sortSetting;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) EmoticonDataDB *m_oEmoticonPackageDB; // @synthesize m_oEmoticonPackageDB;
- (id)PreProcessServerUpdateList:(id)arg1;
- (_Bool)addPackageList:(id)arg1;
- (_Bool)installPackageAtPath:(id)arg1 withName:(id)arg2 withPid:(id)arg3 iconUrl:(id)arg4;
- (_Bool)installDirPath:(id)arg1 pid:(id)arg2 count:(unsigned long long *)arg3;
- (_Bool)unzipPackageAtPath:(id)arg1 withPid:(id)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEmoticonPackageDownLoaded:(id)arg1;
- (_Bool)isEmoticonPackagePurchased:(id)arg1;
- (_Bool)isUserFollowingDesigner:(id)arg1;
- (id)getDesignerIPSetKey:(id)arg1;
- (id)getDesignerUin:(id)arg1;
- (id)getDesignerPids:(id)arg1;
- (id)getNeedUpdateDesignerPids;
- (id)getDistinctDesignerUin;
- (id)getSortEmoticonPackageListWithDownloadedTusiji;
- (id)getSortEmoticonPackageListWithTusiji:(_Bool)arg1 withCustom:(_Bool)arg2;
- (void)saveSort:(id)arg1;
- (id)getTusijiPackage;
- (id)getCameraPackage;
- (id)getCustomPackage;
- (id)getEmoticonPackageList;
- (_Bool)updateSilently:(id)arg1 count:(unsigned int)arg2;
- (_Bool)updateSilently:(id)arg1 downloadStatus:(unsigned int)arg2;
- (void)notifyPackageListChangedWithPid:(id)arg1;
- (_Bool)update:(id)arg1 designerIPSetKey:(id)arg2;
- (_Bool)update:(id)arg1 designerUin:(id)arg2;
- (_Bool)update:(id)arg1 count:(unsigned int)arg2;
- (_Bool)update:(id)arg1 payStatus:(unsigned int)arg2;
- (_Bool)deleteEmoticonSilentlyByPid:(id)arg1 needRemoveFile:(_Bool)arg2;
- (_Bool)deleteEmoticonPackageWithoutUploadByPid:(id)arg1;
- (_Bool)addEmoticonPackageSilently:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (_Bool)addEmoticonPackage:(id)arg1 name:(id)arg2 payStatus:(unsigned int)arg3 downloadStatus:(unsigned int)arg4 iconUrl:(id)arg5;
- (void)tryInstallTusiji;
- (void)HardcodePackage;
- (void)hardcodeTusiji;
- (void)initLocalList;
- (_Bool)isIPMergeEnabled;
- (void)setIPMergeEnabledTo:(_Bool)arg1;
- (_Bool)isIPMergeTipsShowed;
- (void)setIPMergeTipsShowStatusTo:(_Bool)arg1;
- (_Bool)isCacheStatusDownloadedForPid:(id)arg1;
- (_Bool)isDBStatusDownloadedForPid:(id)arg1;
- (_Bool)updateCacheDownloadStatusForPid:(id)arg1;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

