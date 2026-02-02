//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveGlobalRewardLevel, ForwardMessageLogicController, MMFinderLiveTaskId, MemoryMappedKV, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSRecursiveLock, NSString, OrderedDictionary, WCFinderLiveAudienceComodityLogReporter;
@protocol OS_dispatch_queue;

@interface MMFinderLiveMgr
{
    _Bool _shouldCheckPaymentJoinGameLiveEnable;
    _Bool _isWeakNetFromMars;
    _Bool _isUseRfxPag;
    unsigned int _comboBatchSize;
    unsigned int _comboBatchTimeoutMs;
    unsigned int _lastRTTFromMars;
    unsigned int _lastNetworkQualityEvaluateTime;
    unsigned int _lastRecordQoSTime;
    FinderLiveGlobalRewardLevel *_currentGlobalRewardLevel;
    NSArray *_giftGroupLabels;
    NSString *_popularGiftGroupLabel;
    NSArray *_packageGiftItemList;
    NSMutableArray *_recentLagTimeStamps;
    NSOperationQueue *_precacheQueue;
    NSRecursiveLock *_lock;
    MemoryMappedKV *_mappedKV;
    OrderedDictionary *_giftsDict;
    NSObject<OS_dispatch_queue> *_workingQueue;
    OrderedDictionary *_thirdAppPrefetchQueue;
    NSString *_currentPrefetchAppId;
    ForwardMessageLogicController *_forwardLogic;
    WCFinderLiveAudienceComodityLogReporter *_finderComodityLogReporter;
    NSString *_lastTeamId;
    MMFinderLiveTaskId *_lastTaskId;
    NSMutableDictionary *_giftGroupLabel2GiftList;
    NSString *_lastNetworkType;
    long long _lastNetworkQuality;
    NSMutableArray *_qosListForReport;
    NSMutableArray *_qosListForNetworkQuality;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUseRfxPag; // @synthesize isUseRfxPag=_isUseRfxPag;
@property(nonatomic) unsigned int lastRecordQoSTime; // @synthesize lastRecordQoSTime=_lastRecordQoSTime;
@property(retain, nonatomic) NSMutableArray *qosListForNetworkQuality; // @synthesize qosListForNetworkQuality=_qosListForNetworkQuality;
@property(retain, nonatomic) NSMutableArray *qosListForReport; // @synthesize qosListForReport=_qosListForReport;
@property(nonatomic) unsigned int lastNetworkQualityEvaluateTime; // @synthesize lastNetworkQualityEvaluateTime=_lastNetworkQualityEvaluateTime;
@property(nonatomic) long long lastNetworkQuality; // @synthesize lastNetworkQuality=_lastNetworkQuality;
@property(retain, nonatomic) NSString *lastNetworkType; // @synthesize lastNetworkType=_lastNetworkType;
@property(nonatomic) unsigned int lastRTTFromMars; // @synthesize lastRTTFromMars=_lastRTTFromMars;
@property(nonatomic) _Bool isWeakNetFromMars; // @synthesize isWeakNetFromMars=_isWeakNetFromMars;
@property(retain, nonatomic) NSMutableDictionary *giftGroupLabel2GiftList; // @synthesize giftGroupLabel2GiftList=_giftGroupLabel2GiftList;
@property(retain, nonatomic) MMFinderLiveTaskId *lastTaskId; // @synthesize lastTaskId=_lastTaskId;
@property(retain, nonatomic) NSString *lastTeamId; // @synthesize lastTeamId=_lastTeamId;
@property(nonatomic) _Bool shouldCheckPaymentJoinGameLiveEnable; // @synthesize shouldCheckPaymentJoinGameLiveEnable=_shouldCheckPaymentJoinGameLiveEnable;
@property(retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *finderComodityLogReporter; // @synthesize finderComodityLogReporter=_finderComodityLogReporter;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSString *currentPrefetchAppId; // @synthesize currentPrefetchAppId=_currentPrefetchAppId;
@property(retain, nonatomic) OrderedDictionary *thirdAppPrefetchQueue; // @synthesize thirdAppPrefetchQueue=_thirdAppPrefetchQueue;
@property(nonatomic) unsigned int comboBatchTimeoutMs; // @synthesize comboBatchTimeoutMs=_comboBatchTimeoutMs;
@property(nonatomic) unsigned int comboBatchSize; // @synthesize comboBatchSize=_comboBatchSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) OrderedDictionary *giftsDict; // @synthesize giftsDict=_giftsDict;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSOperationQueue *precacheQueue; // @synthesize precacheQueue=_precacheQueue;
@property(retain, nonatomic) NSMutableArray *recentLagTimeStamps; // @synthesize recentLagTimeStamps=_recentLagTimeStamps;
@property(retain, nonatomic) NSArray *packageGiftItemList; // @synthesize packageGiftItemList=_packageGiftItemList;
@property(retain, nonatomic) NSString *popularGiftGroupLabel; // @synthesize popularGiftGroupLabel=_popularGiftGroupLabel;
@property(retain, nonatomic) NSArray *giftGroupLabels; // @synthesize giftGroupLabels=_giftGroupLabels;
@property(retain, nonatomic) FinderLiveGlobalRewardLevel *currentGlobalRewardLevel; // @synthesize currentGlobalRewardLevel=_currentGlobalRewardLevel;
- (void)OnCdnDownload:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
@property(readonly, nonatomic) long long currentNetworkQuality;
- (void)evaluateLiveNetworkQuality;
- (id)getLiveQosListForReport;
- (void)recordLiveQoSInfo:(id)arg1 scene:(unsigned int)arg2;
- (unsigned int)getRecentLagCountFromTime:(unsigned long long)arg1;
- (void)recordRecentLagTimeStamp;
- (void)showDisclaimerAlertIfPlatFormShouldShow:(_Bool)arg1 platFormName:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showDisclaimerAlertIfPlatFormShouldShowForProduct:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)useRfxPag;
- (id)getVisibleViewControllerForWCImageFullScreenViewController;
- (id)getTopNavigationControllerForWCImageFullScreenViewController;
- (id)getTopViewControllerForWCImageFullScreenViewController;
- (_Bool)shouldEnableAutoResumeNavigationBarForTranslateImage;
- (void)checkPaymentGameStatus;
- (void)saveLastJoinPaymentGameStatus:(id)arg1 taskId:(id)arg2;
- (id)getDebugGameFrameSetXLabConfigStr;
- (void)setDebugGameFrameSetXLabConfigStr:(id)arg1;
- (id)getGameFrameSetXLabConfig:(_Bool *)arg1;
- (id)getGameFrameSetLayoutConfigs;
- (id)getCurrentViewController;
- (void)viewImageWithURLString:(id)arg1 downloadedImage:(id)arg2 fromView:(id)arg3;
- (id)widgetParametersForPanelBuilder:(CDUnknownBlockType)arg1;
- (id)widgetParametersForAnchor:(id)arg1 ecSource:(id)arg2 entranceMessageInfo:(id)arg3;
- (id)widgetParametersForInitParams:(id)arg1 entranceMessageInfo:(id)arg2;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)arg1;
- (_Bool)shouldUserQuickSendAnimation:(id)arg1;
- (void)updateCurrentGlobalRewardLevel:(id)arg1;
- (void)saveLiveRewardQuotaInfo:(id)arg1;
- (id)getLiveRewardQuotaInfo;
- (unsigned int)getRewardComboTimeout;
- (unsigned int)getRewardNotificationTimeout;
- (unsigned int)getRewardReceivingQueueMaxSize;
- (_Bool)useCdnComMgrToDownloadRewardRes;
- (_Bool)needCheckMd5ForRewardResource;
- (void)printGiftList:(id)arg1;
- (void)printPackageResourceInfo:(id)arg1;
- (void)fetchRewardGiftListWithTaskId:(id)arg1 pullScene:(long long)arg2 freeGiftHandleBlock:(CDUnknownBlockType)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)fetchRewardGiftListWithTaskId:(id)arg1 pullScene:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (unsigned int)getRewardComboBatchTimeoutMs;
- (unsigned int)getRewardComboBatchSize;
- (void)clearLiveGiftItemsCache;
- (id)getLiveGiftItemsByGroupName:(id)arg1;
- (id)getLiveGiftItemsInOrder;
- (id)getJoinFansClubGiftItem;
- (id)getLiveGiftItemWithProductId:(id)arg1;
- (void)loadNewCustomizableBackupResourcesWithItems:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadNewCustomizableComponentValueResourcesWithItems:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadNewCustomizableSelectStylePreviewPagWithItems:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadNewCustomizableSelectStyleThumbnailWithItems:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadNewCustomizableMagicRewardResourceWithItems:(id)arg1;
- (void)loadResourcesForAudienceNewCustomizableGiftsWithItems:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadResourcesForAudienceCustomizableGiftsWithinItems:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadMultiAnimationGiftItemForAttackGift:(id)arg1 rewardItem:(id)arg2 isPreload:(_Bool)arg3;
- (void)loadMultiAnimationGiftItemForPagGift:(id)arg1 rewardItem:(id)arg2 isPreload:(_Bool)arg3;
- (void)loadGiftForegroundPagResource:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadLiveRewardGiftsResIfNeed:(id)arg1 isPreload:(_Bool)arg2;
- (void)loadLiveRewardGiftsResIfNeed:(id)arg1;
- (void)loadLiveRewardGiftsResIfNeedAsync:(id)arg1 isPreload:(_Bool)arg2;
- (void)saveLiveRewardGiftsAsync:(id)arg1;
- (void)checkAndClearInvalidRewardGiftsFiles:(id)arg1;
- (void)deleteAllLiveRewardGiftItemsAsync;
- (void)loadLiveRewardGiftsAsync;
- (_Bool)checkThirdAppPrefetchQueue;
- (void)batchPrefetchThirdApp:(id)arg1 liveId:(id)arg2;
- (void)tryPrefetchThirdApp:(id)arg1 liveId:(id)arg2;
- (void)stopJoinLiveQualityPredict;
- (void)tryStartJoinLiveQualityPredict;
- (void)loadRfxPAGSwitch;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

