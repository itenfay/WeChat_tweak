//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderGroupLiveChatBoxId, MMFinderLiveTaskId, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSRecursiveLock, NSString, OrderedDictionary, WCFinderGroupLiveChatSaveToLocalManager;
@protocol OS_dispatch_source;

@interface MMFinderGroupLiveChatManager
{
    _Bool _isFetchingData;
    _Bool _isDataFetchedAfterSwitch;
    _Bool _isStart;
    _Bool _isFetchingReddotData;
    _Bool _isPauseFetchReddot;
    _Bool _isStopFetchingCommentData;
    unsigned int _nextIntervalMs;
    unsigned int _redPointNextIntervalMs;
    WCFinderGroupLiveChatSaveToLocalManager *_saveToLocalManager;
    NSMutableArray *_boxIdList;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderGroupLiveChatBoxId *_boxId;
    NSRecursiveLock *_lock;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_lastBufferDict;
    NSMutableSet *_hasLoadedHistoryCache;
    OrderedDictionary *_cacheChatHistoryDict;
    NSMutableDictionary *_tempClientIdAndSeqDict;
    unsigned long long _boxStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long boxStatus; // @synthesize boxStatus=_boxStatus;
@property(nonatomic) _Bool isStopFetchingCommentData; // @synthesize isStopFetchingCommentData=_isStopFetchingCommentData;
@property(nonatomic) _Bool isPauseFetchReddot; // @synthesize isPauseFetchReddot=_isPauseFetchReddot;
@property(nonatomic) _Bool isFetchingReddotData; // @synthesize isFetchingReddotData=_isFetchingReddotData;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) NSMutableDictionary *tempClientIdAndSeqDict; // @synthesize tempClientIdAndSeqDict=_tempClientIdAndSeqDict;
@property(nonatomic) unsigned int redPointNextIntervalMs; // @synthesize redPointNextIntervalMs=_redPointNextIntervalMs;
@property(retain, nonatomic) OrderedDictionary *cacheChatHistoryDict; // @synthesize cacheChatHistoryDict=_cacheChatHistoryDict;
@property(retain, nonatomic) NSMutableSet *hasLoadedHistoryCache; // @synthesize hasLoadedHistoryCache=_hasLoadedHistoryCache;
@property(retain, nonatomic) NSMutableDictionary *lastBufferDict; // @synthesize lastBufferDict=_lastBufferDict;
@property(nonatomic) _Bool isDataFetchedAfterSwitch; // @synthesize isDataFetchedAfterSwitch=_isDataFetchedAfterSwitch;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) unsigned int nextIntervalMs; // @synthesize nextIntervalMs=_nextIntervalMs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MMFinderGroupLiveChatBoxId *boxId; // @synthesize boxId=_boxId;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSMutableArray *boxIdList; // @synthesize boxIdList=_boxIdList;
@property(retain, nonatomic) WCFinderGroupLiveChatSaveToLocalManager *saveToLocalManager; // @synthesize saveToLocalManager=_saveToLocalManager;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (id)currentBoxIdLastBuffer;
- (id)currentLastBufferDictPath;
- (id)currentGroupLivePath;
- (_Bool)checkCurrentBoxIdHasLoadHistoryMsg;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (void)removeTempPostMsgItemWithClientMsgId:(id)arg1;
- (void)addTempPostMsgItemWithClientMsgId:(id)arg1 item:(id)arg2;
- (void)updateTempPostMsgItemWithClientMsgId:(id)arg1 item:(id)arg2;
- (long long)updateLikeCountWithMsg:(id)arg1 seq:(unsigned long long)arg2;
- (long long)updateIsLike:(_Bool)arg1 likeCount:(unsigned int)arg2 seq:(unsigned long long)arg3 clientMsgId:(id)arg4;
- (long long)updateIsLike:(_Bool)arg1 seq:(unsigned long long)arg2;
- (void)removeAllCache;
- (void)trimMsgList;
- (void)removeCacheInRange:(struct _NSRange)arg1;
- (unsigned long long)updateItem:(id)arg1 clientMsgId:(id)arg2;
- (unsigned long long)updateOrAddItem:(id)arg1;
- (_Bool)updateOrAdd:(unsigned long long)arg1 historyItem:(id)arg2;
- (void)saveToLocal;
- (id)transferToBoxIdListFromFinderLiveBoxIdList:(id)arg1;
- (void)fetchReddotFromRemote;
- (void)pauseReddotSchedule;
- (void)stopReddotSchedule;
- (void)scheduleFetchLiveBoxReddot:(_Bool)arg1;
- (void)scheduleFetchLiveBoxReddot;
- (void)notifyRedPointMessage:(id)arg1;
- (void)handleFetchLiveRedPointSuccess:(id)arg1 nextIntervalMs:(unsigned int)arg2;
- (void)fetchLiveRedPoint:(id)arg1;
- (void)notifyUpdateMessageItems:(id)arg1;
- (void)notifyLocalMessagesLoaded;
- (void)notifyMessagesSuccessLoaded;
- (void)notifyMessagesLoaded;
- (void)notifyMessage:(id)arg1 needClearMsg:(_Bool)arg2 boxId:(id)arg3 isLocalMessage:(_Bool)arg4;
- (void)transferToChatHistoryAppMsgList:(id)arg1 isInitial:(_Bool)arg2 boxId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (double)randomNextFetchRedDotTimeInterval;
- (double)nextFetchRedDotTimeInterval;
- (double)randomFetchTimeInterval;
- (double)nextFetchTimeInterval;
- (void)fetchCommentFromRemote;
- (void)stopSchedule;
- (void)scheduleFetchLiveFriendsBoxLiveMsg:(_Bool)arg1;
- (void)scheduleFetchLiveFriendsBoxLiveMsg;
- (void)handleTransferToChatHistoryUpdateAppMsgListCompletion:(_Bool)arg1 updateMessageItems:(id)arg2;
- (void)handleTransferToChatHistoryAppMsgListCompletion:(_Bool)arg1 chatRoomItemDict:(id)arg2 needClearMsg:(_Bool)arg3 boxId:(id)arg4;
- (void)fetchLiveGetFriendBoxLiveMsg:(id)arg1 lastBuffer:(id)arg2;
- (id)tranferToLiveCommentDataItemsFromFinderLiveAppMsgDict:(id)arg1 forTaskId:(id)arg2 searchSeqNum:(id)arg3;
- (void)clear;
- (void)reset;
- (void)makeGroupLiveChatRoomComment:(id)arg1 pageModel:(id)arg2;
- (void)makeGroupLiveChatRoomReddot;
- (void)switchBoxId:(id)arg1 pageModel:(id)arg2;
- (void)setup;
- (void)startLiveWithTaskId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

