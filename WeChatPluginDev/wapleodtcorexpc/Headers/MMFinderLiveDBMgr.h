//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, WCTDatabase, WCTTable;
@protocol OS_dispatch_queue;

@interface MMFinderLiveDBMgr
{
    WCTDatabase *_db;
    WCTTable *_historyListTable;
    WCTTable *_liveTrialRecordTable;
    WCTTable *_replayWatchHistoryTable;
    WCTTable *_adVideoWatchStatusTable;
    WCTTable *_replayStopgapPreloadTable;
    WCTTable *_gestureTable;
    WCTTable *_noticePosterStylesTable;
    WCTTable *_stickersTable;
    WCTTable *_liveSnsAdLiveStreamInfoTable;
    WCTTable *_beautyResourcePackageRecordsTable;
    WCTTable *_questionAndAnswerMsgRecordsTable;
    WCTTable *_uhpLiveBadgesTable;
    NSObject<OS_dispatch_queue> *_cleanQueue;
}

+ (_Bool)isLowEnd;
+ (double)_finderLiveCacheValidDate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cleanQueue; // @synthesize cleanQueue=_cleanQueue;
@property(retain, nonatomic) WCTTable *uhpLiveBadgesTable; // @synthesize uhpLiveBadgesTable=_uhpLiveBadgesTable;
@property(retain, nonatomic) WCTTable *questionAndAnswerMsgRecordsTable; // @synthesize questionAndAnswerMsgRecordsTable=_questionAndAnswerMsgRecordsTable;
@property(retain, nonatomic) WCTTable *beautyResourcePackageRecordsTable; // @synthesize beautyResourcePackageRecordsTable=_beautyResourcePackageRecordsTable;
@property(retain, nonatomic) WCTTable *liveSnsAdLiveStreamInfoTable; // @synthesize liveSnsAdLiveStreamInfoTable=_liveSnsAdLiveStreamInfoTable;
@property(retain, nonatomic) WCTTable *stickersTable; // @synthesize stickersTable=_stickersTable;
@property(retain, nonatomic) WCTTable *noticePosterStylesTable; // @synthesize noticePosterStylesTable=_noticePosterStylesTable;
@property(retain, nonatomic) WCTTable *gestureTable; // @synthesize gestureTable=_gestureTable;
@property(retain, nonatomic) WCTTable *replayStopgapPreloadTable; // @synthesize replayStopgapPreloadTable=_replayStopgapPreloadTable;
@property(retain, nonatomic) WCTTable *adVideoWatchStatusTable; // @synthesize adVideoWatchStatusTable=_adVideoWatchStatusTable;
@property(retain, nonatomic) WCTTable *replayWatchHistoryTable; // @synthesize replayWatchHistoryTable=_replayWatchHistoryTable;
@property(retain, nonatomic) WCTTable *liveTrialRecordTable; // @synthesize liveTrialRecordTable=_liveTrialRecordTable;
@property(retain, nonatomic) WCTTable *historyListTable; // @synthesize historyListTable=_historyListTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void)cleanExpiredSearchHistory;
- (void)cleanExpiredFinderLiveSnsAdStreamLiveInfo;
- (void)_cleanOthersTableRunPauseableTransaction;
- (void)cleanOthersTableRunPauseableTransaction;
- (void)cleanExpiredData;
- (void)willRecoverDatabase;
- (id)dbPath;
- (void)closeDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)createLiveAdStatusTable;
- (void)setupTable;
- (void)openDB;
- (_Bool)clearMsgRecords;
- (_Bool)clearExpiredMsgRecords;
- (_Bool)deleteMsgRecordWithId:(id)arg1;
- (_Bool)updateMsgRecord:(id)arg1;
- (id)getMsgRecordWithId:(id)arg1;
- (void)beginDeletingStaleBeautyResourcePackageRecords;
- (_Bool)upsertBeautyResourcePackageRecord:(id)arg1;
- (id)beautyResourcePackageRecordWithId:(id)arg1;
- (_Bool)updateSnsAdLiveStreamInfo:(id)arg1;
- (id)getSnsAdLiveStreamInfoWithLiveId:(id)arg1 exportId:(id)arg2;
- (id)uhpLiveBadgeInstanceWithId:(id)arg1;
- (_Bool)upsertUhpLiveBadgeInstance:(id)arg1;
- (_Bool)clearStickerRecords;
- (_Bool)deleteStickerRecordWithInstanceId:(id)arg1;
- (_Bool)upsertStickerRecord:(id)arg1;
- (id)getStickerRecords;
- (_Bool)setNoticePosterStyles:(id)arg1 version:(unsigned int)arg2;
- (unsigned int)cachedNoticePosterStylesVersion;
- (id)getNoticePosterStyles;
- (_Bool)deleteGestureRecordWithId:(unsigned int)arg1;
- (_Bool)updateGestureRecord:(id)arg1;
- (id)getGestureRecordWithId:(unsigned int)arg1;
- (id)getGestureRecords;
- (void)updateReplayStopgapPreloadRecord:(id)arg1;
- (id)getReplayStopgapPreloadRecordForLiveId:(unsigned long long)arg1;
- (void)updateLiveAdWatchTs:(unsigned long long)arg1 adId:(id)arg2;
- (_Bool)checkIsLiveAdWatched:(unsigned long long)arg1 adId:(id)arg2;
- (void)updateLiveReplayWatchHistoryRecordForLiveId:(unsigned long long)arg1 lastExitTime:(unsigned int)arg2;
- (id)getReplayWatchHistoryForLiveId:(unsigned long long)arg1;
- (void)updateLiveTrialRecord:(unsigned long long)arg1 remainTime:(unsigned int)arg2 trialEndTime:(unsigned int)arg3 trialLimitTime:(unsigned int)arg4;
- (id)getLiveTrialRecord:(unsigned long long)arg1;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (id)getLocalSearchHistory;
- (_Bool)addSearchContent:(id)arg1;
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

