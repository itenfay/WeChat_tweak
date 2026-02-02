//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MagicPkgInfoDBMgr, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MagicPkgCheckListener
{
    NSMutableSet *_preloadPkgId;
    NSMutableSet *_netscene;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _configChanged;
    MagicPkgInfoDBMgr *_magicDBMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MagicPkgInfoDBMgr *magicDBMgr; // @synthesize magicDBMgr=_magicDBMgr;
- (void)onExptItemListChange;
- (id)getMagicPkgVersion;
- (void)updateMagicPkgVersionStorage:(id)arg1;
- (_Bool)checkHighLevelPkgIntervalTime:(id)arg1;
- (void)setIntervalTime:(id)arg1;
- (_Bool)checkIsIntervalTime:(id)arg1;
- (void)report27831:(id)arg1 pkgInfo:(id)arg2 fileExist:(long long)arg3 scene:(long long)arg4 state:(long long)arg5 errCode:(long long)arg6 isHighLevel:(_Bool)arg7;
- (void)checkMagicPkgWithBoots:(id)arg1 baseId:(id)arg2 isImmediately:(_Bool)arg3 isAutoCheck:(_Bool)arg4 isHighLevel:(_Bool)arg5;
- (void)checkHighLevelMagicPkg:(id)arg1 baseId:(id)arg2 isImmediately:(_Bool)arg3 isAutoCheck:(_Bool)arg4;
- (void)checkMagicPkg:(id)arg1 baseId:(id)arg2 isImmediately:(_Bool)arg3 isAutoCheck:(_Bool)arg4;
- (void)doCleanMagicPkg;
- (void)doUpdateHighLevelMagicPkg;
- (void)doUpdateMagicPkg;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getDBMgr;
- (void)repeatCheckBootsUpdate;
- (void)checkBootsUpdate:(id)arg1;
- (void)checkBootsUpdate;
- (void)processMagicBootsCmdXML:(struct XmlReaderAttr_t *)arg1;
- (void)processMagicBootsCmd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

