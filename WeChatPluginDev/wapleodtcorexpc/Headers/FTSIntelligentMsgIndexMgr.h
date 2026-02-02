//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSIntelligentMessageDB, FTSIntelligentMsgIndexState, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSRecursiveLock, NSString;

@interface FTSIntelligentMsgIndexMgr
{
    NSRecursiveLock *_lock;
    NSRecursiveLock *_insertDbLock;
    unsigned int _unIndexNewMsgCount;
    NSMutableDictionary *_dicUnIndexMsgCache;
    NSMutableDictionary *_dicSessionMaxId;
    _Bool _hasDeleteTask;
    NSMutableSet *_newMsgIndexSessions;
    NSMutableSet *_oldMsgIndexSessions;
    FTSIntelligentMsgIndexState *_indexingState;
    NSOperationQueue *m_priorityBulidQueue;
    _Bool m_isSkipOverCheckAppCpuUsage;
    _Bool _isInitingIndex;
    _Bool _m_isPauseInBackground;
    _Bool _m_isHadreleaseInPauseBackground;
    NSString *m_priorityBulidUserName;
    NSMutableArray *m_arrAppCpuUsage;
    double m_sleepSec;
    double m_appLaunchTime;
    FTSIntelligentMessageDB *_ftsIntelligentMessageDB;
    NSMutableSet *_indexRepairingUsrs;
    NSMutableDictionary *_m_dicUnHadDownLoadMsgCache;
}

- (void).cxx_destruct;
@property _Bool m_isHadreleaseInPauseBackground; // @synthesize m_isHadreleaseInPauseBackground=_m_isHadreleaseInPauseBackground;
@property _Bool m_isPauseInBackground; // @synthesize m_isPauseInBackground=_m_isPauseInBackground;
@property(nonatomic) _Bool isInitingIndex; // @synthesize isInitingIndex=_isInitingIndex;
@property(retain) NSMutableDictionary *m_dicUnHadDownLoadMsgCache; // @synthesize m_dicUnHadDownLoadMsgCache=_m_dicUnHadDownLoadMsgCache;
@property(retain) NSMutableSet *indexRepairingUsrs; // @synthesize indexRepairingUsrs=_indexRepairingUsrs;
@property(retain, nonatomic) FTSIntelligentMessageDB *ftsIntelligentMessageDB; // @synthesize ftsIntelligentMessageDB=_ftsIntelligentMessageDB;
@property _Bool m_isSkipOverCheckAppCpuUsage; // @synthesize m_isSkipOverCheckAppCpuUsage;
@property double m_appLaunchTime; // @synthesize m_appLaunchTime;
@property double m_sleepSec; // @synthesize m_sleepSec;
@property(retain) NSMutableArray *m_arrAppCpuUsage; // @synthesize m_arrAppCpuUsage;
@property(retain) NSString *m_priorityBulidUserName; // @synthesize m_priorityBulidUserName;
- (void)onFTSIntelligentMessageDBDidRepairIndexForUsername:(id)arg1 result:(_Bool)arg2;
- (void)onFTSIntelligentMessageDBWillRepairIndexForUsername:(id)arg1;
- (_Bool)checkAllImageMessageHadBuildIndexCore:(id)arg1;
- (_Bool)checkAllImageMessageHadBuildIndex:(id)arg1;
- (_Bool)checkPriorityImageMessageHadBuildIndexCore:(id)arg1;
- (_Bool)checkPriorityImageMessageHadBuildIndex:(id)arg1;
- (_Bool)checkPriorityHadFinishOperate:(id)arg1;
- (void)cancelPriorityBuildIndexMsgWithUserName:(id)arg1;
- (void)buildIndexForHadDownloadInValidMsgWithUserName:(id)arg1;
- (void)priorityBatchBuildIndexMsgWithUserName:(id)arg1;
- (void)priorityBuildIndexMsgWithUserName:(id)arg1;
- (_Bool)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)arg1 rowidIndexResult:(id)arg2;
- (_Bool)batchInsertMsgToFTSTable:(id)arg1;
- (_Bool)batchInsertIntelligentHadDownloadInValidMsgToFTSTableWithlimitUsrname:(id)arg1 limit:(int)arg2 rowidIndexResult:(id)arg3;
- (_Bool)updateToDeleteIntelligentLocalIds:(id)arg1 usr:(id)arg2;
- (_Bool)isSessionUsrValid:(id)arg1 contact:(id)arg2;
- (id)getBatchAddMessage:(_Bool)arg1 finishSessions:(id)arg2;
- (void)internalDeleteExpiredIndex;
- (void)internalBuildIndexForHadDownloadInValidMsg;
- (void)internalBuildIndexForOldMsg;
- (void)internalBuildIndexForNewMsg;
- (void)releaseInternalMemoryInPauseInBackground;
- (void)fireIntelligentMsgIndexingTaskLoop;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)handelDelOrRevokeMsg:(id)arg1 MsgWrap:(id)arg2 isDeleteAction:(_Bool)arg3;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handelNewHadDownLoadImageMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)safeCopyUnIndexMsgCache;
- (void)clearIndexMemCache;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (unsigned int)calAllMemMsgCount;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (void)iFTSIndexingResumeBackground;
- (void)iFTSIndexingPauseBackground;
- (int)iFTSIndexingCount;
- (void)iFTSClearIndex;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingInit;
- (double)getCongestionSleepSec;
- (_Bool)checkIsCongestionWithCpuUsage:(double)arg1 andTotalMemory:(unsigned long long)arg2 andUserMemory:(unsigned long long)arg3;
- (_Bool)checkCanDoIntelligentInRAM;
- (_Bool)checkCanDoIntelligent;
- (void)checkIndexInvalid:(id)arg1;
- (id)captureOrUpdateIndexStatus;
- (void)clearIndexStatus:(id)arg1;
- (void)updateIndexStatus:(id)arg1 withLocalId:(unsigned int)arg2;
- (_Bool)shouldCancelIndexing;
- (_Bool)canDoIndexing;
- (_Bool)hasNewIndexTask;
- (_Bool)needIndexNewMsgFirst;
- (void)resetIndexState;
- (id)getAllNeedBuildIndexSessionUserNameAr;
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

