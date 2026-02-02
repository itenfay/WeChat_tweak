//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, MMLiveCommentDataDictCache, MMLiveCommentDataItem, MMTimer, NSMutableArray, NSMutableDictionary, NSString;
@protocol MMFinderLiveSFBarrageViewModelDelegate;

@interface MMFinderLiveSFBarrageViewModel : NSObject
{
    _Bool _isStartBarrage;
    _Bool _isStartLandscapeBarrage;
    _Bool _enableFaceDetectMask;
    id <MMFinderLiveSFBarrageViewModelDelegate> _actionDelegate;
    MMTimer *_triggerTimer;
    NSMutableArray *_reusedCellList;
    MMFinderLiveTaskId *_finderLiveTaskId;
    NSMutableArray *_floatCommentDataCache;
    MMLiveCommentDataDictCache *_floatCommentDataDictCache;
    NSMutableDictionary *_floatBarrageTagDict;
    NSMutableArray *_landscapePublicCommentDataCache;
    MMLiveCommentDataDictCache *_landscapePublicCommentDataDictCache;
    NSMutableDictionary *_landscapePublicBarrageTagDict;
    NSMutableArray *_landscapeBoxCommentDataCache;
    MMLiveCommentDataDictCache *_landscapeBoxCommentDataDictCache;
    NSMutableDictionary *_landscapeBoxBarrageTagDict;
    MMLiveCommentDataItem *_lastDisplayLandscapeCommentItem;
    NSMutableArray *_availableCellList;
    NSMutableArray *_reRunCellList;
}

+ (id)filterFloatingBarrageItems:(id)arg1;
+ (id)supportedLandscapeBarrageMsgSubTypeList;
+ (id)supportedLandscapeBarrageMsgTypeList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reRunCellList; // @synthesize reRunCellList=_reRunCellList;
@property(retain, nonatomic) NSMutableArray *availableCellList; // @synthesize availableCellList=_availableCellList;
@property(retain, nonatomic) MMLiveCommentDataItem *lastDisplayLandscapeCommentItem; // @synthesize lastDisplayLandscapeCommentItem=_lastDisplayLandscapeCommentItem;
@property(retain, nonatomic) NSMutableDictionary *landscapeBoxBarrageTagDict; // @synthesize landscapeBoxBarrageTagDict=_landscapeBoxBarrageTagDict;
@property(retain, nonatomic) MMLiveCommentDataDictCache *landscapeBoxCommentDataDictCache; // @synthesize landscapeBoxCommentDataDictCache=_landscapeBoxCommentDataDictCache;
@property(retain, nonatomic) NSMutableArray *landscapeBoxCommentDataCache; // @synthesize landscapeBoxCommentDataCache=_landscapeBoxCommentDataCache;
@property(retain, nonatomic) NSMutableDictionary *landscapePublicBarrageTagDict; // @synthesize landscapePublicBarrageTagDict=_landscapePublicBarrageTagDict;
@property(retain, nonatomic) MMLiveCommentDataDictCache *landscapePublicCommentDataDictCache; // @synthesize landscapePublicCommentDataDictCache=_landscapePublicCommentDataDictCache;
@property(retain, nonatomic) NSMutableArray *landscapePublicCommentDataCache; // @synthesize landscapePublicCommentDataCache=_landscapePublicCommentDataCache;
@property(retain, nonatomic) NSMutableDictionary *floatBarrageTagDict; // @synthesize floatBarrageTagDict=_floatBarrageTagDict;
@property(retain, nonatomic) MMLiveCommentDataDictCache *floatCommentDataDictCache; // @synthesize floatCommentDataDictCache=_floatCommentDataDictCache;
@property(retain, nonatomic) NSMutableArray *floatCommentDataCache; // @synthesize floatCommentDataCache=_floatCommentDataCache;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) _Bool enableFaceDetectMask; // @synthesize enableFaceDetectMask=_enableFaceDetectMask;
@property(retain, nonatomic) NSMutableArray *reusedCellList; // @synthesize reusedCellList=_reusedCellList;
@property(retain, nonatomic) MMTimer *triggerTimer; // @synthesize triggerTimer=_triggerTimer;
@property(nonatomic) _Bool isStartLandscapeBarrage; // @synthesize isStartLandscapeBarrage=_isStartLandscapeBarrage;
@property(nonatomic) _Bool isStartBarrage; // @synthesize isStartBarrage=_isStartBarrage;
@property(nonatomic) __weak id <MMFinderLiveSFBarrageViewModelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)clearDisplayedFloatCommentItems;
- (void)clearExpiredFloatCommentItems:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long maxBarrageCacheCount;
- (void)clearCommentDataItems:(id)arg1 fromListCache:(id)arg2 dictCache:(id)arg3 record:(id)arg4;
- (_Bool)checkOverLimitForListCache:(id)arg1 dictCache:(id)arg2 record:(id)arg3;
- (void)clearBarrageItems:(id)arg1 fromRecord:(id)arg2;
- (void)addBarrageItems:(id)arg1 toRecord:(id)arg2;
- (id)filterSelfLocalCommitFromBarrageArray:(id)arg1;
- (id)getBarrageArrayFilterRepeatAndInvalid:(id)arg1 fromRecord:(id)arg2;
- (_Bool)tryAddBarrageDataItems:(id)arg1 toListCache:(id)arg2 toDictCache:(id)arg3 toRecord:(id)arg4;
- (void)onFinderLiveFloatingDataItemsUpdate:(id)arg1 taskId:(id)arg2;
- (_Bool)currEnableFaceDetectMask;
- (_Bool)updateEnableFaceDetectMask:(_Bool)arg1;
- (_Bool)isCurrentHasData;
- (double)getBarrageCellCurrentAlpha;
- (_Bool)updateBarrageCommentSeq:(unsigned long long)arg1 withLocalClientMsgId:(id)arg2 boxId:(id)arg3;
- (id)getBarrageCommentItemWithSeq:(unsigned long long)arg1 boxId:(id)arg2;
- (_Bool)isBarrageCellInReusedList:(id)arg1;
- (void)updateReusedCellListWithRemovedCell:(id)arg1;
- (id)getNextBarrageCommentItemList;
- (void)tryUpdateCellList;
- (unsigned long long)commentDataCacheCount;
- (void)clearBarrageDataItemForCell:(id)arg1;
- (void)onBarrageCellCancelDisplay:(id)arg1;
- (void)onBarrageCellEndDisplay:(id)arg1;
- (void)onAvailableCellBeUsed:(id)arg1;
- (void)onBarrageCellReRunned:(id)arg1;
- (id)getToReRunCellList;
- (unsigned long long)getToReRunCellCount;
- (void)addToReRunBarrageCell:(id)arg1 front:(_Bool)arg2;
- (id)getAvailableCell;
- (id)getAvailableCellList;
- (unsigned long long)availableCellCount;
- (void)updateTriggerTimerState;
- (double)triggerInterval;
- (void)stopTriggerTimer;
- (void)continueTriggerTimer;
- (void)startTriggerTimer;
- (void)stopBarrage;
- (void)startBarrage;
@property(readonly, nonatomic) unsigned long long currCommentItemSynchronizeCntOnce;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)getReusedCellWithCommentDataItem:(id)arg1;
- (void)onTriggerCallback;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (void)onFinderLiveCommentDataItemsUpdate:(id)arg1 taskId:(id)arg2 boxId:(id)arg3;
- (id)filterUnSupportedLandacapeBarrageDataItems:(id)arg1;
- (void)clearLandscapeBarrageDatas;
- (id)requestRecentLoadedBoxCommentItemList:(unsigned long long)arg1 boxId:(id)arg2;
- (id)requestRecentLoadedPublicCommentItemList:(unsigned long long)arg1;
- (_Bool)trySynchronizeRecentCommentDataItems;
- (_Bool)enableStartLandscapeBarrage;
- (_Bool)stopLandscapeBarrage;
- (_Bool)startLandscapeBarrage;
- (_Bool)updateLandscapeBarrageStartState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

