//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBoxId, MMLiveCommentDataDictCache, MMLiveCommentVMState, MMLiveTaskId, NSArray, NSMutableArray, NSMutableDictionary;

@interface MMLiveCommentData : NSObject
{
    _Bool _selfHasCommitComment;
    _Bool _hasLoadedLocalData;
    _Bool _hasLoadedCachedData;
    _Bool _hasShowProductQuesRecvNotify;
    _Bool _hasCachedAfterExitLive;
    _Bool _isStartScheduleSynchronizeData;
    _Bool _lastHasHistoryMsg;
    _Bool _hasLoadedData;
    _Bool _isCustomAppendData;
    unsigned int _cacheExpireTime;
    MMLiveTaskId *_taskId;
    FinderLiveBoxId *_boxId;
    NSArray *_commentArray;
    NSMutableArray *_tempCommentArray;
    double _currCommentSeq;
    CDUnknownBlockType _synchronizeBlock;
    NSMutableArray *_selfUnCompleteCommentArr;
    NSMutableDictionary *_commentTagDict;
    NSMutableDictionary *_historyCommentTagDict;
    MMLiveCommentDataDictCache *_commentDataCache;
    MMLiveCommentVMState *_commentVMState;
}

+ (_Bool)updateSelfCommentStatusToDB:(unsigned int)arg1 msgLocalID:(unsigned int)arg2 boxId:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveCommentVMState *commentVMState; // @synthesize commentVMState=_commentVMState;
@property(retain, nonatomic) MMLiveCommentDataDictCache *commentDataCache; // @synthesize commentDataCache=_commentDataCache;
@property(nonatomic) _Bool isCustomAppendData; // @synthesize isCustomAppendData=_isCustomAppendData;
@property(nonatomic) _Bool hasLoadedData; // @synthesize hasLoadedData=_hasLoadedData;
@property(nonatomic) _Bool lastHasHistoryMsg; // @synthesize lastHasHistoryMsg=_lastHasHistoryMsg;
@property(nonatomic) _Bool isStartScheduleSynchronizeData; // @synthesize isStartScheduleSynchronizeData=_isStartScheduleSynchronizeData;
@property(retain, nonatomic) NSMutableDictionary *historyCommentTagDict; // @synthesize historyCommentTagDict=_historyCommentTagDict;
@property(retain, nonatomic) NSMutableDictionary *commentTagDict; // @synthesize commentTagDict=_commentTagDict;
@property(retain, nonatomic) NSMutableArray *selfUnCompleteCommentArr; // @synthesize selfUnCompleteCommentArr=_selfUnCompleteCommentArr;
@property(nonatomic) unsigned int cacheExpireTime; // @synthesize cacheExpireTime=_cacheExpireTime;
@property(nonatomic) _Bool hasCachedAfterExitLive; // @synthesize hasCachedAfterExitLive=_hasCachedAfterExitLive;
@property(nonatomic) _Bool hasShowProductQuesRecvNotify; // @synthesize hasShowProductQuesRecvNotify=_hasShowProductQuesRecvNotify;
@property(nonatomic) _Bool hasLoadedCachedData; // @synthesize hasLoadedCachedData=_hasLoadedCachedData;
@property(nonatomic) _Bool hasLoadedLocalData; // @synthesize hasLoadedLocalData=_hasLoadedLocalData;
@property(copy, nonatomic) CDUnknownBlockType synchronizeBlock; // @synthesize synchronizeBlock=_synchronizeBlock;
@property(nonatomic) _Bool selfHasCommitComment; // @synthesize selfHasCommitComment=_selfHasCommitComment;
@property(nonatomic) double currCommentSeq; // @synthesize currCommentSeq=_currCommentSeq;
@property(retain, nonatomic) NSMutableArray *tempCommentArray; // @synthesize tempCommentArray=_tempCommentArray;
@property(retain, nonatomic) NSArray *commentArray; // @synthesize commentArray=_commentArray;
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)getCurrentAppendParam;
- (id)getChatRoomNotifyItem;
- (void)updateCommentWithAppMsgItem:(id)arg1;
- (void)logForRemoveCommentArr:(id)arg1;
@property(readonly, nonatomic) double refreshCommentInterval;
@property(readonly, nonatomic) unsigned int maxCustomRefreshCommentCountOnce;
@property(readonly, nonatomic) unsigned int maxRefreshCommentCountOnce;
- (void)synchronizeAllCommentsFromCache;
- (void)synchronizeCommentFromCache:(id)arg1;
- (void)stopScheduleSynchronize;
- (void)startScheduleSynchronizeCommentFromCache;
- (void)synchronizeCommentFromCacheImmediately;
- (_Bool)hasHistoryComments;
- (void)checkAndUnTagHistoryComments:(id)arg1;
- (_Bool)isHistoryComment:(id)arg1;
- (void)tagHistoryComments:(id)arg1;
- (unsigned long long)synchronizeBackToTempCache:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)appendCommentsFromTempCacheToDisplay:(unsigned long long)arg1 filterSelf:(_Bool)arg2;
- (void)synchronizeBackToTempCache:(id)arg1;
- (void)appendCommentsToTempCache:(id)arg1;
- (void)clearTempCache;
@property(readonly, nonatomic) double maxCommentSeq;
- (void)clearAllComments;
- (id)deleteComment:(double)arg1;
- (unsigned long long)manualSynchronizeCommentsFromTempCache:(unsigned long long)arg1;
- (id)manualRequestCommentsFromCache:(unsigned long long)arg1;
- (id)requestNextCommentItemListWithCount:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)getRemainCommentCount;
- (void)notifyLocalDataLoaded;
- (void)notifyDataLoaded;
- (id)lastCommentItem;
- (long long)indexForCommentItem:(id)arg1;
- (long long)lastIndexForInsert:(id)arg1;
- (unsigned long long)nextIndexForAppend:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSelfHasCommitComment:(_Bool)arg1;
- (_Bool)isContainComment:(id)arg1;
- (void)checkTempCommentCacheOverLimit:(unsigned long long)arg1;
- (void)checkCommentArrayOverLimit:(unsigned long long)arg1;
- (unsigned long long)getCommentArrRemainCntInLimit:(unsigned long long)arg1;
- (void)updateCurrCommentSeqIfNeed:(id)arg1;
- (void)handleCommentSeq:(id)arg1 atIndexes:(id)arg2;
- (void)handleCommentsSeq:(id)arg1;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (id)getCommentArrayFilterSelfCommit:(id)arg1;
- (_Bool)completeUnCompletedComment:(id)arg1;
- (_Bool)updateSelfCommentStatus:(unsigned int)arg1 localClientMsgId:(id)arg2 seq:(unsigned long long)arg3;
- (void)updateSelfCommentInfoIfNeed:(id)arg1;
- (_Bool)completeSelfUnCompleteCommentWithSeq:(unsigned long long)arg1 localClientMsgId:(id)arg2;
- (_Bool)completeSelfUnCompleteComment:(id)arg1;
- (void)appendSelfUnCompleteComments:(id)arg1;
- (id)prependComments:(id)arg1 filterSelfCommit:(_Bool)arg2;
- (id)insertComments:(id)arg1 atIndexes:(id)arg2 filterSelfCommit:(_Bool)arg3;
- (id)appendComments:(id)arg1 filterSelfCommit:(_Bool)arg2;
- (void)configDefaultAttributes;
- (void)createCommentDataCache;
- (id)init;

@end

