//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveRewardGiftExtInfo, MMFinderLiveCommomQueue, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMLiveRewardGiftSelectionView, MMLiveRewardQuotaSheetView, NSData, NSMutableDictionary, NSString, WCFinderContact;
@protocol MMFinderLiveGiftSendMoreBubbleHosting, MMFinderLiveRewardSendingLogicForOperationDelegate, MMFinderLiveRewardSendingLogicForReceivingDelegate;

@interface MMFinderLiveRewardSendingLogic : NSObject
{
    _Bool _skipRewardQuotaCheck;
    _Bool _wecoinBalanceUpdated;
    unsigned int _lastComboGiftCount;
    unsigned int _lastCanRequestRewardComboGiftCount;
    unsigned int _lastMultiAnimationComboGiftCount;
    MMLiveRewardGiftSelectionView *_rewardGiftSelectionView;
    id <MMFinderLiveRewardSendingLogicForReceivingDelegate> _receivingDelegate;
    id <MMFinderLiveRewardSendingLogicForOperationDelegate> _operationDelegate;
    CDUnknownBlockType _rewardClickCallback;
    CDUnknownBlockType _rewardComboCompletion;
    CDUnknownBlockType _rewardComboUpdateCallback;
    CDUnknownBlockType _rewardComboLongPressFinishedCallback;
    id <MMFinderLiveGiftSendMoreBubbleHosting> _sendingMoreBubbleView;
    MMLiveRewardQuotaSheetView *_rewardQuotaSheetView;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_currentGiftItem;
    WCFinderContact *_currentRewardRecipientContact;
    FinderLiveRewardGiftExtInfo *_currentRewardExtInfo;
    NSString *_currentComboId;
    unsigned long long _currentGiftCount;
    unsigned long long _lastComboCreatetimeInMs;
    long long _currentBalance;
    NSMutableDictionary *_rewardComboId2RewardRequests;
    NSMutableDictionary *_rewardComboId2ConsumeSuccessCount;
    MMFinderLiveCommomQueue *_rewardPrepareQueue;
    MMFinderLiveRewardGiftItem *_currentRandomRealGiftItem;
    NSData *_currentRewardPrepareBuf;
    unsigned long long _nextFlowSignHistoryRewardQuota;
    NSMutableDictionary *_comboId2RewardPrepareBufArray;
    unsigned long long _currentSendMoreBubbleHost;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentSendMoreBubbleHost; // @synthesize currentSendMoreBubbleHost=_currentSendMoreBubbleHost;
@property(retain, nonatomic) NSMutableDictionary *comboId2RewardPrepareBufArray; // @synthesize comboId2RewardPrepareBufArray=_comboId2RewardPrepareBufArray;
@property(nonatomic) unsigned long long nextFlowSignHistoryRewardQuota; // @synthesize nextFlowSignHistoryRewardQuota=_nextFlowSignHistoryRewardQuota;
@property(nonatomic) unsigned int lastMultiAnimationComboGiftCount; // @synthesize lastMultiAnimationComboGiftCount=_lastMultiAnimationComboGiftCount;
@property(retain, nonatomic) NSData *currentRewardPrepareBuf; // @synthesize currentRewardPrepareBuf=_currentRewardPrepareBuf;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *currentRandomRealGiftItem; // @synthesize currentRandomRealGiftItem=_currentRandomRealGiftItem;
@property(retain, nonatomic) MMFinderLiveCommomQueue *rewardPrepareQueue; // @synthesize rewardPrepareQueue=_rewardPrepareQueue;
@property(retain, nonatomic) NSMutableDictionary *rewardComboId2ConsumeSuccessCount; // @synthesize rewardComboId2ConsumeSuccessCount=_rewardComboId2ConsumeSuccessCount;
@property(retain, nonatomic) NSMutableDictionary *rewardComboId2RewardRequests; // @synthesize rewardComboId2RewardRequests=_rewardComboId2RewardRequests;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long currentBalance; // @synthesize currentBalance=_currentBalance;
@property(nonatomic) unsigned long long lastComboCreatetimeInMs; // @synthesize lastComboCreatetimeInMs=_lastComboCreatetimeInMs;
@property(nonatomic) unsigned int lastCanRequestRewardComboGiftCount; // @synthesize lastCanRequestRewardComboGiftCount=_lastCanRequestRewardComboGiftCount;
@property(nonatomic) unsigned int lastComboGiftCount; // @synthesize lastComboGiftCount=_lastComboGiftCount;
@property(nonatomic) _Bool skipRewardQuotaCheck; // @synthesize skipRewardQuotaCheck=_skipRewardQuotaCheck;
@property(nonatomic) unsigned long long currentGiftCount; // @synthesize currentGiftCount=_currentGiftCount;
@property(retain, nonatomic) NSString *currentComboId; // @synthesize currentComboId=_currentComboId;
@property(retain, nonatomic) FinderLiveRewardGiftExtInfo *currentRewardExtInfo; // @synthesize currentRewardExtInfo=_currentRewardExtInfo;
@property(retain, nonatomic) WCFinderContact *currentRewardRecipientContact; // @synthesize currentRewardRecipientContact=_currentRewardRecipientContact;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *currentGiftItem; // @synthesize currentGiftItem=_currentGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak MMLiveRewardQuotaSheetView *rewardQuotaSheetView; // @synthesize rewardQuotaSheetView=_rewardQuotaSheetView;
@property(retain, nonatomic) id <MMFinderLiveGiftSendMoreBubbleHosting> sendingMoreBubbleView; // @synthesize sendingMoreBubbleView=_sendingMoreBubbleView;
@property(copy, nonatomic) CDUnknownBlockType rewardComboLongPressFinishedCallback; // @synthesize rewardComboLongPressFinishedCallback=_rewardComboLongPressFinishedCallback;
@property(copy, nonatomic) CDUnknownBlockType rewardComboUpdateCallback; // @synthesize rewardComboUpdateCallback=_rewardComboUpdateCallback;
@property(copy, nonatomic) CDUnknownBlockType rewardComboCompletion; // @synthesize rewardComboCompletion=_rewardComboCompletion;
@property(copy, nonatomic) CDUnknownBlockType rewardClickCallback; // @synthesize rewardClickCallback=_rewardClickCallback;
@property(nonatomic) __weak id <MMFinderLiveRewardSendingLogicForOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) __weak id <MMFinderLiveRewardSendingLogicForReceivingDelegate> receivingDelegate; // @synthesize receivingDelegate=_receivingDelegate;
@property(retain, nonatomic) MMLiveRewardGiftSelectionView *rewardGiftSelectionView; // @synthesize rewardGiftSelectionView=_rewardGiftSelectionView;
- (id)liveTask;
- (void)cleanRewardPrepareBufArray:(id)arg1;
- (void)removeRewardPrepareBufArray:(id)arg1 currentComboId:(id)arg2;
- (void)addRewardPrepareBufArray:(id)arg1 currentComboId:(id)arg2;
- (void)handleGiftPrepareRespWithComboId:(id)arg1 prepareModel:(id)arg2;
- (void)handleAsyncExtraValueItemUpdated:(id)arg1 forRewardAppMsgInfo:(id)arg2;
- (void)handleLocalSendSuccessRewardAppMsgInfo:(id)arg1;
- (void)replaceRealGiftItem:(id)arg1 localRewardAppMsgInfo:(id)arg2;
- (id)createLocalSendAppMsgInfoWithComboId:(id)arg1 rewardProductCount:(unsigned int)arg2 rewardGiftItem:(id)arg3 rewardGiftExtInfo:(id)arg4 giftRandomItemList:(id)arg5;
- (id)genRewardUniqueID:(id)arg1;
- (_Bool)isRewardGiftSelectionViewShow;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)delayOpenNewRewardGiftSelectionViewAfterBuyCoin;
- (void)buyCoinSuccess:(id)arg1;
- (void)chargeCoinWithFromPage:(id)arg1 rechargeScene:(unsigned int)arg2;
- (long long)getRemainRewardRequestCount:(id)arg1;
- (void)removeRewardRequestWithComboId:(id)arg1 requestId:(id)arg2;
- (void)addRewardRequest:(id)arg1;
- (void)sendNewLiveRewardRequest:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 comboFinished:(_Bool)arg4 currentRewardExtInfo:(id)arg5 rewardRecipientContact:(id)arg6 prepareBuffer:(id)arg7 targetSendMoreBubbleHost:(unsigned long long)arg8 successCompletion:(CDUnknownBlockType)arg9;
- (void)onFinderLiveDidGetBalance:(unsigned long long)arg1;
- (_Bool)showFlowSignSheetIfHistoryRewardExceedLimitWithCurrentGift:(id)arg1 countIncrease:(unsigned long long)arg2 sourceSendMoreBubbleHost:(unsigned long long)arg3;
- (_Bool)showVerifySheetIfExceedRewardQuotaWithCurrentGift:(id)arg1 countIncrease:(unsigned long long)arg2 sourceSendMoreBubbleHost:(unsigned long long)arg3;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;
- (void)onMMLiveRewardQuotaSheetViewSettingButtonClicked:(id)arg1;
- (void)onMMLiveRewardQuotaSheetViewActionButtonClicked:(id)arg1;
- (void)onBuyCoin:(id)arg1 rechargeScene:(unsigned int)arg2;
- (void)onNeedBuyCoin:(id)arg1 currentBalance:(long long)arg2;
- (void)onSendingRewardGiftDirectly:(id)arg1 rewardExtInfo:(id)arg2 comboGiftCount:(unsigned int)arg3 currentBalance:(long long)arg4 wecoinBalanceUpdated:(_Bool)arg5 targetSendMoreBubbleHost:(unsigned long long)arg6;
- (_Bool)onSelectRewardGift:(id)arg1 rewardExtInfo:(id)arg2 currentBalance:(long long)arg3 wecoinBalanceUpdated:(_Bool)arg4 skipRewardQuotaCheck:(_Bool)arg5 targetSendMoreBubbleHost:(unsigned long long)arg6;
- (void)onSendingGiftBatchFinishWithExtraInfo:(id)arg1;
- (void)delayCallOnSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 delayInterval:(double)arg4 sourceHost:(unsigned long long)arg5;
- (void)onSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onSendingGiftBatchUpdate:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 fromLongPress:(_Bool)arg4 sourceHost:(unsigned long long)arg5;
- (void)onLongPressSendingGiftFinished:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (id)mergeRandomGiftPrepareBuf:(id)arg1;
- (void)mergeRewardPrepareModel:(id)arg1 realRewardProductIdsCompletion:(CDUnknownBlockType)arg2 randomGiftPrepareBufCompeltion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isSendingGiftToOtherAudience;
- (_Bool)isSendingExtraPKValueGift;
- (void)sendRewardPrepareForRandomExtraValueGift:(id)arg1 comboGiftCount:(unsigned long long)arg2 prepareRewardProductCount:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRewardPrepareForAttackGift:(id)arg1 comboGiftCount:(unsigned long long)arg2 prepareRewardProductCount:(unsigned int)arg3 attackFinderUsernameList:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendRewardPrepareForRandomGift:(id)arg1 comboGiftCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendNewLiveRewardRequestWithPagAnimation:(id)arg1;
- (void)dimissRewardGiftSelectionView;
- (void)dismissLiveRewardQuotaSheetViewForExitLive;
- (void)showLiveRewardQuotaSheetViewForGift:(id)arg1 rewardQuota:(unsigned long long)arg2 rewardExtInfo:(id)arg3 currentBalance:(long long)arg4 wecoinBalanceUpdated:(_Bool)arg5 needFaceVerify:(_Bool)arg6 sourceSendMoreBubbleHost:(unsigned long long)arg7 confirmedCallback:(CDUnknownBlockType)arg8;
- (id)openNewRewardGiftSelectionView:(_Bool)arg1 packageSelectGiftItem:(id)arg2 autoSelectGiftItem:(_Bool)arg3 viewDelegate:(id)arg4;
- (id)openNewRewardGiftSelectionView:(_Bool)arg1 preferredGiftId:(id)arg2 sendingHint:(id)arg3 viewDelegate:(id)arg4;
- (void)endCurrentSendingCombo;
- (void)onExitLive;
- (void)preloadWecoinSDK;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1 sendingMoreBubbleView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

