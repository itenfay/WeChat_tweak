//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BypSyncKeyBuff, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface BypSyncService
{
    _Bool _syncPaused;
    _Bool _enableBypSync;
    int _syncingScene;
    int _lastSyncScene;
    int _retryCount;
    NSSet *_allKnownSelectors;
    BypSyncKeyBuff *_syncBuff;
    NSMutableArray *_syncingSelectors;
    NSMutableSet *_needSyncSelectors;
    unsigned long long _firstAuthTime;
}

+ (id)parseMsgWrapFromBypSyncItem:(id)arg1;
+ (_Bool)IsSupportMsgItemTypeWithSyncKeyType:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long firstAuthTime; // @synthesize firstAuthTime=_firstAuthTime;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool enableBypSync; // @synthesize enableBypSync=_enableBypSync;
@property(retain, nonatomic) NSMutableSet *needSyncSelectors; // @synthesize needSyncSelectors=_needSyncSelectors;
@property(nonatomic) int lastSyncScene; // @synthesize lastSyncScene=_lastSyncScene;
@property(nonatomic) int syncingScene; // @synthesize syncingScene=_syncingScene;
@property(retain, nonatomic) NSMutableArray *syncingSelectors; // @synthesize syncingSelectors=_syncingSelectors;
@property(retain, nonatomic) BypSyncKeyBuff *syncBuff; // @synthesize syncBuff=_syncBuff;
@property(retain, nonatomic) NSSet *allKnownSelectors; // @synthesize allKnownSelectors=_allKnownSelectors;
@property(nonatomic) _Bool syncPaused; // @synthesize syncPaused=_syncPaused;
- (void)NotifyCheckSelector;
- (void)onAuthOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isSyncBufferEqualsFrom:(id)arg1 toBuffer:(id)arg2;
- (id)mergeSyncBuffer:(id)arg1 newBuffer:(id)arg2;
- (void)onSyncFailed;
- (void)onSyncSuccessedWithResponse:(id)arg1;
- (void)tryRetrySync;
- (void)createSyncEventWithSelectors:(id)arg1 scene:(int)arg2;
- (_Bool)isSyncing;
- (void)checkQueue;
- (id)descStringForSyncBuffer:(id)arg1;
- (void)saveSyncKeyBuff;
- (id)syncBufferFilePath;
- (void)syncWithSelectors:(id)arg1 syncAll:(_Bool)arg2 scene:(int)arg3;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)syncWithNotifyData:(id)arg1;
- (void)updateAllKnownSelectors:(id)arg1;
- (void)updatePayBypSyncSelectorEnabled:(_Bool)arg1;
- (void)startSyncFinder;
- (void)config;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

