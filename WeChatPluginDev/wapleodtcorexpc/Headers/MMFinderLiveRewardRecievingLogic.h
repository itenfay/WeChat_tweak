//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardComboPriorityQueue, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveResourceFetcherLegacyApiAdapter, MMLiveRewardGiftRecievingAnimationView, MMTimer, NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary;

@interface MMFinderLiveRewardRecievingLogic : NSObject
{
    MMLiveRewardGiftRecievingAnimationView *_recievingAnimationView;
    MMFinderLiveTaskId *_taskId;
    OrderedDictionary *_displayingComboObjects;
    OrderedDictionary *_closeWaitComboObjects;
    NSMutableArray *_waitingRewardAppMsgInfo;
    NSMutableDictionary *_comboIdToComboObjectDict;
    MMFinderLiveRewardComboPriorityQueue *_rewardRecievingComboObjectQueue;
    MMFinderLiveRewardComboPriorityQueue *_rewardRecievingComboObjectSerialDisplayQueue;
    MMFinderLiveRewardComboPriorityQueue *_interactionRecievingComboObjectSerialDisplayQueue;
    NSMutableDictionary *_multiRecipientComboPriorityQueueDict;
    NSMutableDictionary *_multiRecipientPKAttackGiftComboPriorityQueueDict;
    NSMutableDictionary *_comboIdToRewardGiftRandonItemArray;
    NSMutableArray *_giftAnimationPlayCommandsQueue;
    MMLiveResourceFetcherLegacyApiAdapter *_adHocResourceDownloadMgr;
    MMTimer *_scheduleTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(retain, nonatomic) MMLiveResourceFetcherLegacyApiAdapter *adHocResourceDownloadMgr; // @synthesize adHocResourceDownloadMgr=_adHocResourceDownloadMgr;
@property(retain, nonatomic) NSMutableArray *giftAnimationPlayCommandsQueue; // @synthesize giftAnimationPlayCommandsQueue=_giftAnimationPlayCommandsQueue;
@property(retain, nonatomic) NSMutableDictionary *comboIdToRewardGiftRandonItemArray; // @synthesize comboIdToRewardGiftRandonItemArray=_comboIdToRewardGiftRandonItemArray;
@property(retain, nonatomic) NSMutableDictionary *multiRecipientPKAttackGiftComboPriorityQueueDict; // @synthesize multiRecipientPKAttackGiftComboPriorityQueueDict=_multiRecipientPKAttackGiftComboPriorityQueueDict;
@property(retain, nonatomic) NSMutableDictionary *multiRecipientComboPriorityQueueDict; // @synthesize multiRecipientComboPriorityQueueDict=_multiRecipientComboPriorityQueueDict;
@property(retain, nonatomic) MMFinderLiveRewardComboPriorityQueue *interactionRecievingComboObjectSerialDisplayQueue; // @synthesize interactionRecievingComboObjectSerialDisplayQueue=_interactionRecievingComboObjectSerialDisplayQueue;
@property(retain, nonatomic) MMFinderLiveRewardComboPriorityQueue *rewardRecievingComboObjectSerialDisplayQueue; // @synthesize rewardRecievingComboObjectSerialDisplayQueue=_rewardRecievingComboObjectSerialDisplayQueue;
@property(retain, nonatomic) MMFinderLiveRewardComboPriorityQueue *rewardRecievingComboObjectQueue; // @synthesize rewardRecievingComboObjectQueue=_rewardRecievingComboObjectQueue;
@property(retain, nonatomic) NSMutableDictionary *comboIdToComboObjectDict; // @synthesize comboIdToComboObjectDict=_comboIdToComboObjectDict;
@property(retain, nonatomic) NSMutableArray *waitingRewardAppMsgInfo; // @synthesize waitingRewardAppMsgInfo=_waitingRewardAppMsgInfo;
@property(retain, nonatomic) OrderedDictionary *closeWaitComboObjects; // @synthesize closeWaitComboObjects=_closeWaitComboObjects;
@property(retain, nonatomic) OrderedDictionary *displayingComboObjects; // @synthesize displayingComboObjects=_displayingComboObjects;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveRewardGiftRecievingAnimationView *recievingAnimationView; // @synthesize recievingAnimationView=_recievingAnimationView;
- (void)onFinderLive:(id)arg1 pauseLiveWithRoleType:(long long)arg2;
- (void)onFinderLive:(id)arg1 liveInteractionGiftPlayStart:(id)arg2 renderType:(long long)arg3;
- (void)onFinderLive:(id)arg1 liveInteractionGiftPlayEnd:(id)arg2 renderType:(long long)arg3;
- (void)onGetFinderLiveGiftAnimationPlayCommandWithTaskId:(id)arg1 playCommand:(id)arg2;
- (void)onGetFinderLiveRewardAppMsgWithTaskId:(id)arg1 rewardAppMsgInfo:(id)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)onGetNextAnimationWithComboId:(id)arg1 animationIndex:(unsigned long long)arg2;
- (void)onDismissRewardDisplayWithComboId:(id)arg1;
- (void)onUpdateLastDisplayGiftCountWithComboId:(id)arg1 lastDisplayGiftCount:(unsigned int)arg2;
- (unsigned int)onGetLastDisplayGiftCountWithComboId:(id)arg1;
- (id)onPeekNextPKAttackRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onRetrivePKAttackRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onPeekNextInteractionRewardAppMsgInfoForSerialDisplay;
- (id)onRetriveInteractionRewardAppMsgInfoForSerialDisplay;
- (id)onPeekGiftAnimationPlayCommand;
- (id)onDequeueGiftAnimationPlayCommand;
- (id)onPeekNextRewardAppMsgInfoForSerialDisplay;
- (id)onRetriveRewardAppMsgInfoForSerialDisplay;
- (id)onPeekNextRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onRetriveRewardAppMsgInfoForDisplayWithRewardRecipient:(id)arg1;
- (id)onRetriveRewardAppMsgInfoForDisplay;
- (unsigned long long)giftItemRealResourceMemoryCacheOptions:(id)arg1;
- (id)giftItemRealResourceUrl:(id)arg1 isLandscape:(_Bool)arg2;
- (id)giftItemRealResourceMd5:(id)arg1 isLandscape:(_Bool)arg2;
- (id)giftItemRealResourceId:(id)arg1;
- (void)tryEnqueueAnchorCustomizeRewardAfterCustomStyleResourceLoaded:(id)arg1 notifyProcessNextGiftCombo:(_Bool)arg2;
- (void)tryEnqueueNewCustomizeRewardAfterCheckMagicEngineResourceLoaded:(id)arg1 notifyProcessNextGiftCombo:(_Bool)arg2;
- (void)tryEnqueueNewRewardAfterCheckOtherLoadedIfNeeded:(id)arg1 notifyProcessNextGiftCombo:(_Bool)arg2;
- (void)tryEnqueueNewRewardAfterCheckFullPagLoaded:(id)arg1 notifyProcessNextGiftCombo:(_Bool)arg2;
- (void)onAsyncExtraValueItemUpdated:(id)arg1 forRewardAppMsgInfo:(id)arg2;
- (_Bool)onRecieveLocalSendSuccessRewardAppMsgInfo:(id)arg1;
- (void)addComboIdToRewardGiftRandonItemArray:(id)arg1 giftRandomItemArr:(id)arg2;
- (_Bool)isAnchorInteractiveGift:(id)arg1;
- (void)downloadInteractionGiftAnimationFileIfNeed:(id)arg1;
- (void)downloadLandscapeAnimationPagFileIfNeed:(id)arg1;
- (void)downloadAnimationPagFileIfNeed:(id)arg1 notifyProcessNext:(_Bool)arg2;
- (id)getComboRewardAppMsgInfo:(id)arg1;
- (id)getDisplayingComboObjectWithComboId:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)loadAdHocResourceWithUri:(id)arg1 md5Hash:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadAdHocResourcesForGiftAnimationPlayCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enqueueGiftAnimationPlayCommand:(id)arg1;
- (void)enqueueNewRewardAppMsgInfo:(id)arg1;
- (void)removePKAttackGiftComboPriorityQueueForUserName:(id)arg1;
- (id)getPKAttackGiftComboPriorityQueueForUserName:(id)arg1;
- (void)removeComboPriorityQueueForUserName:(id)arg1;
- (id)getComboPriorityQueueForUserName:(id)arg1;
- (void)setupComparatorForComboPriorityQueue:(id)arg1;
- (void)setupComboObjectPriorityQueue;
- (void)scheduleGiftBatch;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)autoScheduleTriggerGiftForTest;
- (void)stopScheduleTimer;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1 recievingAnimationView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

