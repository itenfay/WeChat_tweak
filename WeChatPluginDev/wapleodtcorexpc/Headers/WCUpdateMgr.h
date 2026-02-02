//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSBundle, NSObject, NSString, WCUpdateInfo;
@protocol OS_dispatch_queue;

@interface WCUpdateMgr
{
    NSBundle *_resourceBundle;
    NSBundle *_languageBundle;
    NSBundle *_defaultLanguageBundle;
    WCUpdateInfo *_pInfo;
    NSObject<OS_dispatch_queue> *_queue;
    struct VMConfigure _vmConfig;
}

+ (_Bool)verifyDiretory:(id)arg1;
+ (_Bool)shouldTrace;
+ (void)immediateRenameUpdate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dummy;
- (id)getUpdatePID;
- (void)cleanOldOne;
- (_Bool)unzipBundleUpdates;
- (_Bool)unzipDownloadUpdates:(id)arg1 to:(id)arg2;
- (_Bool)unzipDownloadUpdates:(id)arg1;
- (_Bool)_loadBundleWithoutCheck:(id)arg1;
- (void)setNewClientVersionInUserDefault:(unsigned int)arg1;
- (void)clearNewClientVersionInUserDefault;
- (unsigned int)newClientVersion;
- (_Bool)loadMainUpdateBundle;
- (void)onExptItemListChange;
- (void)onLanguageChange;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)exitForNewUpdateSuspend;
- (void)exitForNewUpdateBackground;
- (void)tryRenameTmpUpdateDataDir;
- (void)registerUpdate:(unsigned long long)arg1;
- (void)tryRegisterUpdate;
- (void)onPResDeleteFinish;
- (void)onPResUpdateFinish:(unsigned long long)arg1 updateType:(unsigned long long)arg2;
- (void)cleanUpdateHelper;
- (void)forceUpdate:(unsigned int)arg1;
- (void)forceCleanUpdate;
- (_Bool)loadBundle:(id)arg1 withIDKey:(const struct BundleLoadIDKey *)arg2;
- (_Bool)loadBundleWithoutIDKeyReport:(id)arg1;
- (_Bool)loadPluginInBundle:(id)arg1 withIDKey:(const struct BundleLoadIDKey *)arg2;
- (_Bool)loadPluginInBundle:(id)arg1;
- (void)loadAndExecute;
- (void)registerExtension;
- (void)onServiceInit;
- (id)getFlutterUpdateInfo;
- (_Bool)verifyFlutter;
- (id)getPluginPathInBundle:(id)arg1;
- (id)getPluginPathInUpdate:(id)arg1;
- (id)getStringForDefault:(id)arg1 defaultTo:(id)arg2;
- (id)getStringForCurLanguage:(id)arg1 defaultTo:(id)arg2;
- (id)getBundleResource:(id)arg1 ext:(id)arg2;
- (id)svgFileFullPathWithNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (_Bool)loadResource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

