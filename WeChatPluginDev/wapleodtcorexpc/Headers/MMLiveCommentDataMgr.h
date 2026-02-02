//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, SafeMutableDictionary;

@interface MMLiveCommentDataMgr
{
    SafeMutableDictionary *_commentDataDict;
    SafeMutableDictionary *_commentDataCacheDict;
    SafeMutableDictionary *_liveBoxIdRecordDict;
    MMTimer *_cacheTimer;
    unsigned long long _maxCacheCommentCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxCacheCommentCount; // @synthesize maxCacheCommentCount=_maxCacheCommentCount;
@property(retain, nonatomic) MMTimer *cacheTimer; // @synthesize cacheTimer=_cacheTimer;
@property(retain, nonatomic) SafeMutableDictionary *liveBoxIdRecordDict; // @synthesize liveBoxIdRecordDict=_liveBoxIdRecordDict;
@property(retain, nonatomic) SafeMutableDictionary *commentDataCacheDict; // @synthesize commentDataCacheDict=_commentDataCacheDict;
@property(retain, nonatomic) SafeMutableDictionary *commentDataDict; // @synthesize commentDataDict=_commentDataDict;
- (void)updaeCommentWithModel:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (void)updateCommentWithLikeList:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (void)onMMFinderGroupLiveChatBackFillsMessage:(id)arg1 clientMsgId:(id)arg2 backFillSeq:(unsigned long long)arg3 boxId:(id)arg4;
- (void)onPostFinderLiveAppMessageFail:(id)arg1 boxId:(id)arg2 localClientMsgId:(id)arg3 userInfo:(id)arg4 errorType:(int)arg5;
- (void)onPostFinderLiveAppMessageSuccess:(id)arg1 boxId:(id)arg2 serverMsgId:(unsigned long long)arg3 localClientMsgId:(id)arg4 userInfo:(id)arg5;
- (void)resetDatasForCacheAfterExitLive:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (long long)maxCachedLiveCommentDataCount;
- (void)appendBoxId:(id)arg1 forTaskId:(id)arg2;
- (id)createUniqueIdWithTaskId:(id)arg1 boxId:(id)arg2;
- (unsigned long long)maxCommentTempCacheCountForTaskId:(id)arg1 boxId:(id)arg2;
- (unsigned long long)maxCommentCount:(id)arg1;
- (id)getCommentDataWithoutCreatedWithTaskId:(id)arg1 boxId:(id)arg2;
- (id)getCommentDataWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)clearCommentData:(id)arg1 boxId:(id)arg2;
- (_Bool)hasPreloadCachedCommentData:(id)arg1;
- (void)createCommentDataIfNeed:(id)arg1 boxId:(id)arg2;
- (id)getCommentDataWithTaskId:(id)arg1;
- (void)checkBanCommentNotifyMsgFromAppendedComments:(id)arg1 forTaskId:(id)arg2;
- (void)checkSpecificMsgFromAppendedComments:(id)arg1 forTaskId:(id)arg2;
- (unsigned long long)getRemainCommentCntInLimitForTaskId:(id)arg1 boxId:(id)arg2;
- (void)updateSelfHasCommitComment:(_Bool)arg1 forTaskId:(id)arg2;
- (_Bool)checkNeedFilterSelf:(id)arg1 boxId:(id)arg2;
- (id)getLastComment:(double)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (void)deleteComment:(double)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (void)deleteComment:(double)arg1 taskId:(id)arg2;
- (void)appendSelfInvokeAppMsgComment:(id)arg1 forTaskId:(id)arg2;
- (_Bool)appendSelfCommitLiveComment:(id)arg1 forTaskId:(id)arg2 cacheSelfUnCompleted:(_Bool)arg3 boxId:(id)arg4;
- (_Bool)appendSelfCommitLiveComment:(id)arg1 forTaskId:(id)arg2 cacheSelfUnCompleted:(_Bool)arg3;
- (void)logForCommentsUpdate:(id)arg1 taskId:(id)arg2 boxId:(id)arg3 reset:(_Bool)arg4;
- (void)reSetLiveComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 reLoaded:(_Bool)arg4;
- (void)reSetLiveComment:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)synchronizeCommentFromCacheImmediatelyForTaskId:(id)arg1 boxId:(id)arg2;
- (void)notifyLocalDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)notifyDataLoadedForTaskId:(id)arg1 boxId:(id)arg2;
- (void)insertPreLiveComments:(id)arg1 filterSelfCommit:(_Bool)arg2 forTaskId:(id)arg3 boxId:(id)arg4;
- (_Bool)insertLiveCommentImmediately:(id)arg1 atIndex:(unsigned long long)arg2 forTaskId:(id)arg3 boxId:(id)arg4;
- (void)appendLiveCommentImmediately:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)appendLiveCommentImmediately:(id)arg1 forTaskId:(id)arg2;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3 boxId:(id)arg4;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (void)appendLiveCommentWithFrequenceControl:(id)arg1 forTaskId:(id)arg2;
- (id)getMMLiveCommentDataWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)onPurgeCommentDataCache;
- (void)clearCacheTimer;
- (void)initData;
- (void)updateMaxCacheCommentCount;
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

