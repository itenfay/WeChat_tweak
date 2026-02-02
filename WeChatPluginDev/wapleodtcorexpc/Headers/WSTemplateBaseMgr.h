//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSOperationQueue, NSString, WSTemplatePackageManager, _TtC6WeChat21WSTemplateMgrReporter;

@interface WSTemplateBaseMgr
{
    NSOperationQueue *m_updateResourceQueue;
    NSString *_debugModuleName;
    long long _activeTemplateCount;
    _TtC6WeChat21WSTemplateMgrReporter *_reporter;
    WSTemplatePackageManager *_packageMgr;
}

+ (id)getServiceOfType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WSTemplatePackageManager *packageMgr; // @synthesize packageMgr=_packageMgr;
@property(retain, nonatomic) _TtC6WeChat21WSTemplateMgrReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) long long activeTemplateCount; // @synthesize activeTemplateCount=_activeTemplateCount;
@property(copy, nonatomic) NSString *debugModuleName; // @synthesize debugModuleName=_debugModuleName;
- (unsigned int)getVersionForDevelopH5;
- (_Bool)applyToDevelopH5:(id)arg1;
- (void)onResFinishDownload:(_Bool)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)onResBeginDownloadWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResHasNewWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (_Bool)doTemplateResUpdateWithType:(unsigned int)arg1 subType:(unsigned int)arg2 srcPath:(id)arg3 packageVersion:(unsigned int)arg4;
- (_Bool)doTemplateResUpdateFromPath:(id)arg1 version:(unsigned int)arg2 checkActiveInstance:(_Bool)arg3;
- (_Bool)doTemplateResUpdateFromPath:(id)arg1 version:(unsigned int)arg2;
- (_Bool)doTemplateResUpdate;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)checkPackageVersionUpdate;
@property(nonatomic) unsigned int packageVersion;
- (id)packageVersionCacheKey;
- (id)busineseName;
- (void)reportVersion;
- (void)checkUpdatedPackageValid;
- (void)checkAndRemoveExpiredDevelopH5;
- (id)getTempTemplateResoucePath;
- (id)getPackage:(unsigned long long)arg1;
- (unsigned long long)activePackageType;
- (void)showVersionDescViewWithTitle:(id)arg1;
- (unsigned int)getVersionWithResoucePath:(id)arg1;
- (id)getUpdatedTemplateResoucePath;
- (id)getConfig:(unsigned long long)arg1;
- (id)getConfigData:(unsigned long long)arg1;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (void)removePackage:(unsigned long long)arg1;
- (id)activeTemplateHTMLPath;
- (id)getTemplateHTMLPath:(unsigned long long)arg1;
- (id)getTemplateResourceFolder:(unsigned long long)arg1;
- (unsigned int)activeTemplateVersion;
- (unsigned int)getTemplateVersion:(unsigned long long)arg1;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceSubType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (unsigned int)defaultTemplateZipVersion;
- (id)defaultTemplateZipPath;
- (void)onServiceInit;
- (void)dealloc;
- (void)initRegister;
- (id)init;
- (void)checkResourceWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

