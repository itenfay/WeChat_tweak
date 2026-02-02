//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTS5MigrationInfo, FTSMessageDB, FTSMsgIndexState, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface FTSMsgIndexMgr
{
    NSRecursiveLock *_lock;
    unsigned int _unIndexNewMsgCount;
    NSMutableDictionary *_dicUnIndexMsgCache;
    NSMutableDictionary *_dicSessionMaxId;
    _Bool _hasDeleteTask;
    _Bool _hasMigrationTask;
    NSMutableSet *_newMsgIndexSessions;
    NSMutableSet *_oldMsgIndexSessions;
    FTSMsgIndexState *_indexingState;
    FTS5MigrationInfo *_migrationInfo;
    _Bool m_hasReportMigrationStartIdkey;
    _Bool m_hasReportMigrationEndIdkey;
    _Bool m_needClearAllIndex;
    _Bool _isInitingIndex;
    FTSMessageDB *_ftsMessageDB;
    NSMutableSet *_indexRepairingUsrs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitingIndex; // @synthesize isInitingIndex=_isInitingIndex;
@property(retain) NSMutableSet *indexRepairingUsrs; // @synthesize indexRepairingUsrs=_indexRepairingUsrs;
@property(retain, nonatomic) FTSMessageDB *ftsMessageDB; // @synthesize ftsMessageDB=_ftsMessageDB;
- (void)onFTSMessageDBDidRepairIndexForUsername:(id)arg1 result:(_Bool)arg2;
- (void)onFTSMessageDBWillRepairIndexForUsername:(id)arg1;
- (void)onSessionRebuildFromContact;
- (void)onDidDeleteAllSession;
- (void)onWillDeleteAllSession;
- (void)onImportMessage:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)isSessionUsrValid:(id)arg1 contact:(id)arg2;
- (id)getBatchAddMessage:(_Bool)arg1 finishSessions:(id)arg2;
- (id)migrationInfoPath;
- (void)markMigrationFinish;
- (void)markMigrationStart;
- (_Bool)internalMigrateIndex;
- (_Bool)internalDeleteExpiredIndex;
- (_Bool)internalBuildIndexForOldMsg;
- (_Bool)internalBuildIndexForNewMsg;
- (void)fireMsgIndexingTaskLoop;
- (_Bool)rebuildIndexForSession:(id)arg1;
- (_Bool)haveTaskRunning;
- (id)safeCopyUnIndexMsgCache;
- (void)clearIndexMemCache;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (unsigned int)calAllMemMsgCount;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (void)iFTSClearIndex;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingInit;
- (void)checkIndexInvalid:(id)arg1;
- (id)captureOrUpdateIndexStatus;
- (void)clearIndexStatus:(id)arg1;
- (void)updateIndexStatus:(id)arg1 withLocalId:(unsigned int)arg2;
- (_Bool)canDoIndexing;
- (_Bool)hasNewIndexTask;
- (_Bool)needIndexNewMsgFirst;
- (void)resetIndexState;
- (_Bool)updateToDeleteLocalIds:(id)arg1 usr:(id)arg2;
- (void)doInitMsgSourceState;
- (void)doInitIndexing;
- (void)asyncInitIndex;
- (void)makeSureInitIndexing;
- (_Bool)isValidAccount;
- (id)initWithFTSDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

