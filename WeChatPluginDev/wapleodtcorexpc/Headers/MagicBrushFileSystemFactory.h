//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSMapTable, NSString;

@interface MagicBrushFileSystemFactory
{
    NSMapTable *_mBizFsMap;
    NSMapTable *_mPublicServiceFsMap;
    MemoryMappedKV *_mmkv;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) NSMapTable *mPublicServiceFsMap; // @synthesize mPublicServiceFsMap=_mPublicServiceFsMap;
@property(retain, nonatomic) NSMapTable *mBizFsMap; // @synthesize mBizFsMap=_mBizFsMap;
- (id)getMBWxaFileSystem:(id)arg1 bizName:(id)arg2;
- (unsigned int)getBizFsOpenTime:(id)arg1;
- (_Bool)getBizFsState:(id)arg1;
- (void)setFSLifeState:(id)arg1 state:(_Bool)arg2;
- (void)destroyBizPkgFileSystem:(id)arg1;
- (id)getOrCreatePublicServiceFileSystem:(id)arg1 pkgPath:(id)arg2 assetsFS:(id)arg3 bizNameSet:(id)arg4;
- (id)getOrCreateBizFileSystem:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (id)publicServiceGetOrCreateBizFileSystem:(id)arg1;
- (id)getBizFileSystemWithCustom:(id)arg1 pkgPath:(id)arg2 customName:(id)arg3 prefix:(id)arg4;
- (void)removePublicServiceFsMap:(id)arg1;
- (void)addPublicServiceFsMap:(id)arg1 bizFileSystem:(id)arg2;
- (void)removeBizFsMap:(id)arg1;
- (void)addBizFsMap:(id)arg1 bizFileSystem:(id)arg2;
- (void)dealloc;
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

