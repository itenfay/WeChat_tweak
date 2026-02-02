//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveActivityTask, MMFinderLiveActivityTaskId, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface MMFinderLiveOlyBarragePubbleMgr : NSObject
{
    _Bool _isLayoutCalculating;
    _Bool _isEnableDisplayBarrage;
    _Bool _hasNotifyDisplay;
    int _currExposeIndex;
    MMFinderLiveActivityTaskId *_taskId;
    NSMutableArray *_pendingBarrageDataItemList;
    NSMutableArray *_friendBarragePubbleCellFrameList;
    NSMutableArray *_strangerBarragePubbleCellFrameList;
    NSMutableArray *_tempFriendBarragePubbleCellFrameList;
    long long _tempFriendBarrageLastIndex;
    NSMutableArray *_tempStrangerBarragePubbleCellFrameList;
    long long _tempStrangerBarrageLastIndex;
    NSMutableOrderedSet *_lastExposeFriendBarragePubbleCellFrameSet;
    NSMutableOrderedSet *_lastExposeStrangerBarragePubbleCellFrameSet;
    NSMutableOrderedSet *_reusedBarragePubbleCellSet;
    NSMutableSet *_barrageIdSet;
    NSMutableSet *_barrageUniqueIdSet;
    unsigned long long _maxPendingBarrageItemCnt;
    unsigned long long _barrageLayoutCalculatePerCnt;
    double _barrageLayoutCalculateFrequence;
    unsigned long long _maxCacheBarrageCellFrameCnt;
    unsigned long long _maxTempCacheBarrageCellFrameCnt;
    unsigned long long _maxReuseBarragePubbleCellCacheCnt;
    unsigned long long _notifyBarrageDisplayMinCnt;
    double _friendBarragePubbleCellPercent;
    double _strangerBarragePubbleCellPercent;
    unsigned long long _friendBarragePubbleExposeContinueTimes;
    unsigned long long _strangerBarragePubbleExposeContinueTimes;
}

- (void).cxx_destruct;
@property(nonatomic) int currExposeIndex; // @synthesize currExposeIndex=_currExposeIndex;
@property(nonatomic) _Bool hasNotifyDisplay; // @synthesize hasNotifyDisplay=_hasNotifyDisplay;
@property(nonatomic) _Bool isEnableDisplayBarrage; // @synthesize isEnableDisplayBarrage=_isEnableDisplayBarrage;
@property(nonatomic) _Bool isLayoutCalculating; // @synthesize isLayoutCalculating=_isLayoutCalculating;
@property(nonatomic) unsigned long long strangerBarragePubbleExposeContinueTimes; // @synthesize strangerBarragePubbleExposeContinueTimes=_strangerBarragePubbleExposeContinueTimes;
@property(nonatomic) unsigned long long friendBarragePubbleExposeContinueTimes; // @synthesize friendBarragePubbleExposeContinueTimes=_friendBarragePubbleExposeContinueTimes;
@property(nonatomic) double strangerBarragePubbleCellPercent; // @synthesize strangerBarragePubbleCellPercent=_strangerBarragePubbleCellPercent;
@property(nonatomic) double friendBarragePubbleCellPercent; // @synthesize friendBarragePubbleCellPercent=_friendBarragePubbleCellPercent;
@property(nonatomic) unsigned long long notifyBarrageDisplayMinCnt; // @synthesize notifyBarrageDisplayMinCnt=_notifyBarrageDisplayMinCnt;
@property(nonatomic) unsigned long long maxReuseBarragePubbleCellCacheCnt; // @synthesize maxReuseBarragePubbleCellCacheCnt=_maxReuseBarragePubbleCellCacheCnt;
@property(nonatomic) unsigned long long maxTempCacheBarrageCellFrameCnt; // @synthesize maxTempCacheBarrageCellFrameCnt=_maxTempCacheBarrageCellFrameCnt;
@property(nonatomic) unsigned long long maxCacheBarrageCellFrameCnt; // @synthesize maxCacheBarrageCellFrameCnt=_maxCacheBarrageCellFrameCnt;
@property(nonatomic) double barrageLayoutCalculateFrequence; // @synthesize barrageLayoutCalculateFrequence=_barrageLayoutCalculateFrequence;
@property(nonatomic) unsigned long long barrageLayoutCalculatePerCnt; // @synthesize barrageLayoutCalculatePerCnt=_barrageLayoutCalculatePerCnt;
@property(nonatomic) unsigned long long maxPendingBarrageItemCnt; // @synthesize maxPendingBarrageItemCnt=_maxPendingBarrageItemCnt;
@property(retain, nonatomic) NSMutableSet *barrageUniqueIdSet; // @synthesize barrageUniqueIdSet=_barrageUniqueIdSet;
@property(retain, nonatomic) NSMutableSet *barrageIdSet; // @synthesize barrageIdSet=_barrageIdSet;
@property(retain, nonatomic) NSMutableOrderedSet *reusedBarragePubbleCellSet; // @synthesize reusedBarragePubbleCellSet=_reusedBarragePubbleCellSet;
@property(retain, nonatomic) NSMutableOrderedSet *lastExposeStrangerBarragePubbleCellFrameSet; // @synthesize lastExposeStrangerBarragePubbleCellFrameSet=_lastExposeStrangerBarragePubbleCellFrameSet;
@property(retain, nonatomic) NSMutableOrderedSet *lastExposeFriendBarragePubbleCellFrameSet; // @synthesize lastExposeFriendBarragePubbleCellFrameSet=_lastExposeFriendBarragePubbleCellFrameSet;
@property(nonatomic) long long tempStrangerBarrageLastIndex; // @synthesize tempStrangerBarrageLastIndex=_tempStrangerBarrageLastIndex;
@property(retain, nonatomic) NSMutableArray *tempStrangerBarragePubbleCellFrameList; // @synthesize tempStrangerBarragePubbleCellFrameList=_tempStrangerBarragePubbleCellFrameList;
@property(nonatomic) long long tempFriendBarrageLastIndex; // @synthesize tempFriendBarrageLastIndex=_tempFriendBarrageLastIndex;
@property(retain, nonatomic) NSMutableArray *tempFriendBarragePubbleCellFrameList; // @synthesize tempFriendBarragePubbleCellFrameList=_tempFriendBarragePubbleCellFrameList;
@property(retain, nonatomic) NSMutableArray *strangerBarragePubbleCellFrameList; // @synthesize strangerBarragePubbleCellFrameList=_strangerBarragePubbleCellFrameList;
@property(retain, nonatomic) NSMutableArray *friendBarragePubbleCellFrameList; // @synthesize friendBarragePubbleCellFrameList=_friendBarragePubbleCellFrameList;
@property(retain, nonatomic) NSMutableArray *pendingBarrageDataItemList; // @synthesize pendingBarrageDataItemList=_pendingBarrageDataItemList;
@property(retain, nonatomic) MMFinderLiveActivityTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onFinderLiveOlyBarrageDataItemsUpdate:(id)arg1 taskId:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
- (void)cacheBarragePubbleCellForReuse:(id)arg1;
- (void)configReuseCallbackForBarragePubbleCell:(id)arg1;
- (id)getNextReusedOlyBarragePubbleCell;
- (id)innerGetNextPubbleCellListWithCellFrameList:(id)arg1;
- (unsigned long long)supplyStrangerPubbleCellFrameFromTempForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (id)prepareStrangerPubbleCellFrameForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (unsigned long long)supplyFriendPubbleCellFrameFromTempForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (id)prepareFriendPubbleCellFrameForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (void)clearExposedStrangerPubbleCellFrame;
- (void)clearExposedFriendPubbleCellFrame;
- (void)clearExposedBarragePubbleCellFrame;
- (unsigned long long)getNextTempBarragePubbleDisplayIndex:(unsigned long long)arg1 tempCacheList:(id)arg2;
- (id)randSortPubbleCellFrameList:(id)arg1;
- (void)addExposeIndex;
- (id)innerGetNextPubbleCellFrameListWithTravelCount:(unsigned long long)arg1;
- (void)notifyBarrageDisplay;
- (void)limitBarragePubbleCellFrameTempCache:(id)arg1;
- (void)synchronizePubbleCellFrameToTempFromStrangerCache:(id)arg1;
- (void)synchronizePubbleCellFrameToTempFromFriendCache:(id)arg1;
- (void)limitBarragePubbleCellFrameStrangerCache;
- (void)limitBarragePubbleCellFrameFriendCache;
- (void)cacheBarrageCellFrame:(id)arg1;
- (void)invokeBarragePubbleLayoutCalculating;
- (void)startBarragePubbleLayoutCalculating;
- (void)limitPendingBarrageDataItemList;
- (id)getBarrageDataItemListFilterRepeatBarrages:(id)arg1;
- (void)deleteBarragesInBarrageUniqueIdSetWithDeleteNotifyMsg:(id)arg1;
- (void)deleteBarragesInBarrageCellFrameSet:(id)arg1 withDeleteNotifyMsg:(id)arg2;
- (void)deleteBarragesInBarrageCellFrameList:(id)arg1 withDeleteNotifyMsg:(id)arg2;
- (void)deleteBarragesInPendingBarrageWithDeleteNotifyMsg:(id)arg1;
- (void)deleteBarrages:(id)arg1;
- (void)filterBarrages:(id)arg1 forBarrages:(id)arg2;
- (void)logForValidDataItemList:(id)arg1;
- (void)addDataItemList:(id)arg1;
- (void)enableDisplayBarrage;
- (void)unableDisplayBarrage;
- (id)getNextBarragePubbleListWithTravelCount:(unsigned long long)arg1;
- (void)registerExtensions;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

