//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WAPackageUpdateLogic;

@interface WACacheVersionPreCheckerMgr
{
    WAPackageUpdateLogic *_pluginPkgUpdateLogic;
    NSMutableArray *_arrReportUseWeappPlugins;
    NSMutableDictionary *_dicAutoUpdatePluginKey2VersionInfo;
    NSMutableDictionary *_dicWeAppPluginVersion;
    NSMutableDictionary *_checkers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *checkers; // @synthesize checkers=_checkers;
@property(readonly, nonatomic) NSMutableDictionary *dicWeAppPluginVersion; // @synthesize dicWeAppPluginVersion=_dicWeAppPluginVersion;
@property(readonly, nonatomic) NSMutableDictionary *dicAutoUpdatePluginKey2VersionInfo; // @synthesize dicAutoUpdatePluginKey2VersionInfo=_dicAutoUpdatePluginKey2VersionInfo;
@property(readonly, nonatomic) NSMutableArray *arrReportUseWeappPlugins; // @synthesize arrReportUseWeappPlugins=_arrReportUseWeappPlugins;
@property(readonly, nonatomic) WAPackageUpdateLogic *pluginPkgUpdateLogic; // @synthesize pluginPkgUpdateLogic=_pluginPkgUpdateLogic;
- (void)onAppTaskTerminateWithContact:(id)arg1;
- (id)getPreCheckCacheVersionResultForAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (_Bool)checkIsNeedDownloadPkgWithPackageConfig:(id)arg1 pagePath:(id)arg2;
- (void)clearPreCheckCacheVersionResultForAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (void)startParallelDownloadCheckWithCheckerContext:(id)arg1;
- (void)startPreCheckCacheVersionWithCheckerContext:(id)arg1;
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

