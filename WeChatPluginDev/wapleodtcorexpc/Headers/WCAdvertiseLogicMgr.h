//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCAdDB, WCAdDynamicCanvasLogic, WCAdDynamicUpdateLogic, WCAdLoadCanvasLogic, WCAdQrCodeScanLogic, WCAdStatePublishReportData, WCCanvasDynamicDataLoader, WCEliminatedSlotMMKV, WWKFContactOpLogic;
@protocol WCLogicMgrDelegate;

@interface WCAdvertiseLogicMgr
{
    NSMutableArray *arrUpdateItemList;
    _Bool bUpdating;
    unsigned int updateTime;
    id <WCLogicMgrDelegate> m_delegate;
    NSMutableDictionary *adOperationLogicCache;
    NSString *_adDeviceInfo;
    WCCanvasDynamicDataLoader *_dynamicDataLoader;
    NSMutableDictionary *_expressionCanvasJumpInfoDic;
    NSMutableDictionary *_feedMediaHeightCache;
    WCAdDynamicUpdateLogic *_adDynamicUpdateLogic;
    NSMutableSet *_weAppContactLoadedSet;
    NSMutableSet *_weAppPkgLoadedSet;
    NSMutableSet *_consecutiveAdReportedSet;
    NSMutableSet *_onlyContainAdReportedSet;
    WCEliminatedSlotMMKV *_finderEncryptedIdCache;
    NSMutableDictionary *_adDetailUpdateTimeDic;
    NSMutableDictionary *_adAppointmentQueryTimeDic;
    WCAdLoadCanvasLogic *_adLoadCanvasLogic;
    WCAdDB *_adDb;
    WCAdStatePublishReportData *_statePublishReportData;
    WCAdQrCodeScanLogic *_adQrCodeScanLogic;
    WWKFContactOpLogic *_kfContactOpLogic;
    WCAdDynamicCanvasLogic *_adDynamicCanvasLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicCanvasLogic *adDynamicCanvasLogic; // @synthesize adDynamicCanvasLogic=_adDynamicCanvasLogic;
@property(retain, nonatomic) WWKFContactOpLogic *kfContactOpLogic; // @synthesize kfContactOpLogic=_kfContactOpLogic;
@property(retain, nonatomic) WCAdQrCodeScanLogic *adQrCodeScanLogic; // @synthesize adQrCodeScanLogic=_adQrCodeScanLogic;
@property(retain, nonatomic) WCAdStatePublishReportData *statePublishReportData; // @synthesize statePublishReportData=_statePublishReportData;
@property(retain, nonatomic) WCAdDB *adDb; // @synthesize adDb=_adDb;
@property(retain, nonatomic) WCAdLoadCanvasLogic *adLoadCanvasLogic; // @synthesize adLoadCanvasLogic=_adLoadCanvasLogic;
@property(retain, nonatomic) NSMutableDictionary *adAppointmentQueryTimeDic; // @synthesize adAppointmentQueryTimeDic=_adAppointmentQueryTimeDic;
@property(retain, nonatomic) NSMutableDictionary *adDetailUpdateTimeDic; // @synthesize adDetailUpdateTimeDic=_adDetailUpdateTimeDic;
@property(retain, nonatomic) WCEliminatedSlotMMKV *finderEncryptedIdCache; // @synthesize finderEncryptedIdCache=_finderEncryptedIdCache;
@property(retain, nonatomic) NSMutableSet *onlyContainAdReportedSet; // @synthesize onlyContainAdReportedSet=_onlyContainAdReportedSet;
@property(retain, nonatomic) NSMutableSet *consecutiveAdReportedSet; // @synthesize consecutiveAdReportedSet=_consecutiveAdReportedSet;
@property(retain, nonatomic) NSMutableSet *weAppPkgLoadedSet; // @synthesize weAppPkgLoadedSet=_weAppPkgLoadedSet;
@property(retain, nonatomic) NSMutableSet *weAppContactLoadedSet; // @synthesize weAppContactLoadedSet=_weAppContactLoadedSet;
@property(retain, nonatomic) WCAdDynamicUpdateLogic *adDynamicUpdateLogic; // @synthesize adDynamicUpdateLogic=_adDynamicUpdateLogic;
@property(retain, nonatomic) NSMutableDictionary *feedMediaHeightCache; // @synthesize feedMediaHeightCache=_feedMediaHeightCache;
@property(retain, nonatomic) NSMutableDictionary *expressionCanvasJumpInfoDic; // @synthesize expressionCanvasJumpInfoDic=_expressionCanvasJumpInfoDic;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicDataLoader; // @synthesize dynamicDataLoader=_dynamicDataLoader;
@property(retain, nonatomic) NSString *adDeviceInfo; // @synthesize adDeviceInfo=_adDeviceInfo;
@property(nonatomic) __weak id <WCLogicMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)updateOnTimeLineDetailExposure:(id)arg1;
- (void)updateOnTimeLineExposure:(id)arg1;
- (void)reportUpdateAdDetail:(id)arg1 reportScene:(int)arg2 beforeFilter:(_Bool)arg3;
- (_Bool)checkAdDetailUpdateInterval:(id)arg1;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (void)prepareAdDynamicCanvasOnExposure:(id)arg1;
- (id)getAdDynamicCanvasLogic;
- (void)tryToUpdateAdDetailOnAdExposure:(id)arg1;
- (void)notifyAdDataItemChanged:(id)arg1;
- (void)fetchCustomerServiceContactWithUrl:(id)arg1 scene:(int)arg2 entityId:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)onGetWeWorkContactDoneWithContact:(id)arg1 jumpParams:(id)arg2;
- (void)tryToGetContactInfoWithJumpParams:(id)arg1 searchScene:(unsigned long long)arg2 subScene:(int)arg3;
- (void)tryToScanQrCode:(id)arg1 adInfo:(id)arg2 snsId:(id)arg3 scene:(int)arg4 subScene:(int)arg5 showLoading:(_Bool)arg6 scanResultBlock:(CDUnknownBlockType)arg7;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)jumpStatePublish:(id)arg1 adInfo:(id)arg2 snsId:(id)arg3 scene:(int)arg4;
- (void)cleanAdDatabase;
- (id)fetchLocalTimelineAdInfoList:(unsigned int)arg1;
- (void)cleanPullRecordInfo;
- (id)fetchPullRecordList:(unsigned int)arg1;
- (void)setPullRecordInvalid:(id)arg1 isAsync:(_Bool)arg2 snsId:(id)arg3;
- (void)savePullRecordInfo:(id)arg1 sessionKey:(id)arg2 isAsync:(_Bool)arg3;
- (void)tryToPreloadShareCanvasWhenReceiveShare:(id)arg1 canvasScene:(unsigned int)arg2 shouldPreloadRes:(_Bool)arg3;
- (void)tryToPreloadPullCanvas:(id)arg1 fromDetail:(_Bool)arg2;
- (void)loadCanvas:(id)arg1 uxInfo:(id)arg2 canvasScene:(unsigned int)arg3 canvasDynamicInfo:(id)arg4 compatibleMode:(_Bool)arg5 completeBlock:(CDUnknownBlockType)arg6;
- (void)addFinderLiveInfo:(id)arg1 toDic:(id)arg2;
- (id)fetchFinderLiveInfoList:(id)arg1;
- (void)tryToPreloadFinderLive:(id)arg1;
- (id)getFinderFeedObjectIdFromCache:(id)arg1;
- (void)preloadFinderFeed:(id)arg1;
- (void)prefetchFinderObjectId:(id)arg1 nonceId:(id)arg2 finderAdData:(id)arg3;
- (void)addFinderFeedInfo:(id)arg1 toDic:(id)arg2;
- (id)fetchFinderFeedInfoList:(id)arg1;
- (void)tryToPreloadFinderFeed:(id)arg1;
- (void)tryToPrefetchFinderObjectId:(id)arg1;
- (void)handleCustomerServiceSignResponse:(id)arg1;
- (void)openCustomerService:(id)arg1 uxInfo:(id)arg2 inCanvas:(_Bool)arg3 viewController:(id)arg4 showLoading:(_Bool)arg5 completeBlock:(CDUnknownBlockType)arg6;
- (void)openCustomerService:(id)arg1 uxInfo:(id)arg2 inCanvas:(_Bool)arg3 viewController:(id)arg4 showLoading:(_Bool)arg5;
- (void)clearAdOperationLogicForTid:(id)arg1;
- (void)clearAdOperationLogicForTidList:(id)arg1;
- (id)removeConsecutiveAd:(id)arg1;
- (void)updateFinderLiveInfo:(id)arg1;
- (_Bool)checkExistAndSetIfNotExist:(id)arg1 inDataSet:(id)arg2;
- (void)tryToPreloadWeApp:(id)arg1 preloadWeAppPkg:(_Bool)arg2;
- (void)tryToPreloadWeAppForAdCanvas:(id)arg1;
- (void)tryToPreloadWeAppForAdResource:(id)arg1;
- (void)forceUpdateFinderTopicInfo:(id)arg1;
- (void)forceUpdateWeAppLiveInfo:(id)arg1;
- (void)adDynamicUpdate:(id)arg1;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)stopLoadingWithFailText:(id)arg1 fromVC:(id)arg2;
- (void)hideLoadingFromVC:(id)arg1;
- (void)showLoadingAutoHideAfter:(double)arg1 fromVC:(id)arg2;
- (void)showLoadingFromVC:(id)arg1;
- (void)jumpCanvasFromExpression:(id)arg1;
- (void)updateWeAppRelievedBuy:(id)arg1;
- (void)preloadH5OnAdExposure:(id)arg1;
- (void)tryToPreloadCanvasResourceOnAdExposure:(id)arg1;
- (void)handleCommonDynamicUpdateResponse:(id)arg1;
- (void)commonDynamicUpdateWithType:(unsigned int)arg1 params:(id)arg2 dataItem:(id)arg3 aid:(id)arg4 uxinfo:(id)arg5 needSpeedy:(_Bool)arg6;
- (void)handleUpdateAdChainWordingResponse:(id)arg1 dataItem:(id)arg2;
- (void)updateAdChainInfo:(id)arg1;
- (void)handleAdAppointmentResp:(id)arg1 Event:(unsigned int)arg2;
- (void)sendAdAppointmentReqWithUxInfo:(id)arg1 opType:(int)arg2 appointmentId:(unsigned long long)arg3 phoneNumber:(id)arg4 limitQueryFrequency:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)preloadAdResAfterRecvAtFriendMention:(id)arg1;
- (void)sendSubscriptionMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)sendSubscriptionMsg:(id)arg1 aid:(unsigned long long)arg2 appType:(int)arg3 waUsername:(id)arg4;
- (id)getAdOperationLogic:(id)arg1 type:(long long)arg2;
- (void)filterAdOperationLogicsByVisibleSnsIdList:(id)arg1 scene:(unsigned long long)arg2;
- (void)deleteAllAdOperationLogics;
- (void)deleteAdOperationLogic:(id)arg1;
- (void)addAdOperationLogic:(id)arg1 withKey:(id)arg2 type:(long long)arg3;
- (id)genAdOperationLogicKeyBySnsId:(id)arg1 scene:(unsigned long long)arg2;
- (void)handleDoChannelMsgReportResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)doChannelMsgReportContent:(id)arg1 channelId:(id)arg2;
- (void)doChannelMsgReport:(id)arg1 channelId:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkAdUpdateDetailWaitingList;
- (_Bool)responseForSnsADObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)getNetworkType;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3 syncBuffer:(id)arg4 RemindFriendsInfoData:(id)arg5 reportScene:(int)arg6;
- (void)clearFeedMediaHeightCache;
- (void)clearFeedMediaHeightCacheWithItemID:(id)arg1;
- (void)setFeedMediaHeightWithItem:(id)arg1 height:(double)arg2 forWidth:(double)arg3;
- (double)fetchFeedMediaHeightWithItem:(id)arg1 forWidth:(double)arg2;
- (id)fetchDataItemForAtFriendWithDynamicSnsADObject:(id)arg1 remindFriendsInfo:(id)arg2;
- (id)fetchDataItemForAtFriendWithADObject:(id)arg1;
- (id)fetchDataItemWithDynamicSnsADObject:(id)arg1 snsObject:(id)arg2;
- (id)fetchDataItemForDetailWithOriginSnsObject:(id)arg1;
- (id)fetchDataItemForDetailWithSnsADObject:(id)arg1 snsObject:(id)arg2;
- (id)fetchDataItemForTimelineWithADObject:(id)arg1;
- (void)onOperation:(id)arg1 finished:(long long)arg2 context:(id)arg3;
- (_Bool)responseForSnsADObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForSnsADObjectOpRequest:(id)arg1 context:(id)arg2;
- (_Bool)requestForSnsADObjectOpRequest:(id)arg1;
- (void)spanUnInterestAdvertiseReasonListForData:(id)arg1;
- (void)unInterestOpenIMTimeLineDataItem:(id)arg1;
- (void)unInterestAdvertiseDataItem:(id)arg1 dislikeReasonIdList:(id)arg2;
- (_Bool)unLikeAdvertiseDataItem:(id)arg1 source:(int)arg2;
- (_Bool)deleteCommentWithAdvertiseItemID:(id)arg1 commentID:(id)arg2 source:(int)arg3 context:(id)arg4;
- (void)updateDataItemDetail:(id)arg1 source:(int)arg2 RemindFriendsInfoData:(id)arg3;
- (void)updateAdvertiseDataItemDetail:(id)arg1 source:(int)arg2;
- (void)updateAdvertiseDataList:(id)arg1 reportScene:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

