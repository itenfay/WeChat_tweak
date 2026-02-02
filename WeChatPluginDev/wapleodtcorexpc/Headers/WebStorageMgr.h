//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WebStorageDb;

@interface WebStorageMgr
{
    WebStorageDb *_storageDb;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebStorageDb *storageDb; // @synthesize storageDb=_storageDb;
- (id)getAllFile:(id)arg1;
- (id)getAllGlobalConfig;
- (id)getAllConfig;
- (_Bool)cleanFileAndConfig:(id)arg1 Key:(id)arg2 FilePath:(id)arg3;
- (_Bool)cleanDirAndConfig:(id)arg1 DirPath:(id)arg2;
- (void)tryKickOutForAllAppId;
- (void)tryKickOut:(id)arg1;
- (void)tryKickOutExpireFile;
- (void)kickOutStrategy:(id)arg1;
- (_Bool)setStorage:(id)arg1 Key:(id)arg2 Value:(id)arg3 WeightStr:(id)arg4 ExpireTime:(long long)arg5;
- (_Bool)clearStorage:(id)arg1 Key:(id)arg2;
- (_Bool)clearAllStorage:(id)arg1;
- (id)getStorage:(id)arg1 Key:(id)arg2;
- (_Bool)checkIfSizeExceed:(id)arg1 NeedSize:(unsigned long long)arg2;
- (long long)getMaxSize:(id)arg1;
- (long long)getAllMaxSize;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

