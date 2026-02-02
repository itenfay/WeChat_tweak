//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CSetting, CSettingExt, CUpdateInfo, NSRecursiveLock, NSString, SyncBufferInfo;

@interface AccountStorageMgr
{
    NSRecursiveLock *m_oLock;
    SyncBufferInfo *m_oSyncBufferInfo;
    NSString *m_nsDocPath;
    _Bool m_testMemoryInvalid;
    _Bool m_testPhysicalInvalid;
    _Bool m_testSettingInvalid;
    CSetting *m_oSetting;
    CSettingExt *m_oSettingExt;
    CUpdateInfo *m_oUpdateInfo;
}

- (void).cxx_destruct;
- (void)internalRemoveSyncBuffer;
- (id)internalReadSyncBuffer;
- (_Bool)internalWriteSyncBuffer:(id)arg1;
- (_Bool)saveSvrSyncBufferKey:(id)arg1;
- (id)loadSvrSyncBufferKey;
- (id)syncBufferMMKV;
- (void)clearSyncBuffer;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)GetSyncBuffer;
- (_Bool)SaveSyncBuffer:(id)arg1;
- (_Bool)MergeAndSaveSyncBuffer:(id)arg1;
- (id)GetUpdateInfo;
- (void)SaveUpdateInfo;
- (void)LoadUpdateInfo;
- (void)SaveSettingExt;
- (void)LoadSettingExt;
- (void)MainThreadSaveSetting;
- (void)DirectSaveSetting;
- (void)LoadSetting;
- (_Bool)ValidForSettingInfo;
- (_Bool)ValidForMemorySyncBuffer;
- (_Bool)ValidForPhysicalSyncBuffer;
- (void)ResetMemorySyncBuffer;
- (void)dealloc;
- (void)closeResource;
- (id)init;
@property(copy, nonatomic) CUpdateInfo *m_oUpdateInfo; // @synthesize m_oUpdateInfo;
@property(copy, nonatomic) CSettingExt *m_oSettingExt; // @synthesize m_oSettingExt;
@property(readonly, nonatomic) CSetting *m_oSetting; // @synthesize m_oSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

