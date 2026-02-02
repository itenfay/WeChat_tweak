//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizBaseCallbackApi, BizCallbackApi, BizEnterStatusInfo, BrandTLExptConfig, BrandTimelineNotifyLogic, ForwardMessageLogicController, MMFlutterViewController, MMScrollActionSheet, NSMutableSet, NSString;
@protocol BrandTLViewControllerProtocol;

@interface FlutterBrandTLApiImplementation : NSObject
{
    _Bool _canShowPersonalCenter;
    BrandTLExptConfig *_exptConfig;
    BizEnterStatusInfo *_enterInfo;
    MMFlutterViewController<BrandTLViewControllerProtocol> *_viewController;
    NSMutableSet *_setFastLoadTemplateType;
    BrandTimelineNotifyLogic *_notifyTipsLogic;
    BizBaseCallbackApi *_flutterApiCallback;
    BizCallbackApi *_bizApiCallback;
    MMScrollActionSheet *_shareActionSheet;
    ForwardMessageLogicController *_forwardMsgLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) BizCallbackApi *bizApiCallback; // @synthesize bizApiCallback=_bizApiCallback;
@property(retain, nonatomic) BizBaseCallbackApi *flutterApiCallback; // @synthesize flutterApiCallback=_flutterApiCallback;
@property(retain, nonatomic) BrandTimelineNotifyLogic *notifyTipsLogic; // @synthesize notifyTipsLogic=_notifyTipsLogic;
@property(retain, nonatomic) NSMutableSet *setFastLoadTemplateType; // @synthesize setFastLoadTemplateType=_setFastLoadTemplateType;
@property(nonatomic) __weak MMFlutterViewController<BrandTLViewControllerProtocol> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool canShowPersonalCenter; // @synthesize canShowPersonalCenter=_canShowPersonalCenter;
@property(retain, nonatomic) BizEnterStatusInfo *enterInfo; // @synthesize enterInfo=_enterInfo;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig; // @synthesize exptConfig=_exptConfig;
- (void)onPersonalizedOperated:(int)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onBrandFlowListCellExposeWithModel:(id)arg1;
- (void)tryPreloadFinderVideoExportId:(id)arg1 nonceId:(id)arg2 objectId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareTolimeLine:(id)arg1;
- (void)shareWithAppMsg:(id)arg1 targetContact:(id)arg2;
- (void)showShareMenuInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preloadFinderDataItemsFinderExportIdList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openFlowListParams:(id)arg1 error:(id *)arg2;
- (void)gotoTingWithUrlsUrls:(id)arg1 sessionId:(long long)arg2 source:(long long)arg3 error:(id *)arg4;
- (id)getNativeBizCreationInfoWithError:(id *)arg1;
- (void)getNetWorkInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestFinderLiveStatsFinder_export_id:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onClickSearchBarWithError:(id *)arg1;
- (void)markLiveBarItemExposuredUserName:(id)arg1 finderId:(id)arg2 error:(id *)arg3;
- (id)isLiveBarItemExposuredUserName:(id)arg1 finderId:(id)arg2 error:(id *)arg3;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)followBizContactInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onLiveTaskUpdateStatus:(id)arg1;
- (void)onBatchBrandLivingStatusChange:(id)arg1;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (void)onGetCacheBrandSubscribeLiveInfo:(id)arg1;
- (void)onGetBrandSubscribeLiveInfo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onResortSuccess:(unsigned long long)arg1 pageActiveAfterResort:(_Bool)arg2;
- (void)onModBrandTimelineMsgArr:(id)arg1;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onDelBrandTimelineMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (void)onInsertMockCanvasModelToRecAtIndex:(long long)arg1 model:(id)arg2;
- (void)onNativeBizCreationInfoChanged:(id)arg1;
- (void)onDeleteRecCanvasCard:(id)arg1;
- (_Bool)isAffModeOpen;
- (void)onNotifyMsgCountChange:(unsigned int)arg1;
- (id)__getCurNotifyTipsInfo;
- (id)genContactInfoFromContact:(id)arg1;
- (id)getContactByUsername:(id)arg1;
- (void)notifyRecycleCardResultRetBuffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRecycleCardListMsgId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveLocalOftenReadInfoInfoBuffer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadLocalOftenReadInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBizFinderLivesInfoUsernameList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveFinderLivesInfoBatchInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBizFinderLivesInfoBizFinderLiveRedDot:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowFinderContactInfo:(id)arg1 error:(id *)arg2;
- (void)openFinderContactInfo:(id)arg1 error:(id *)arg2;
- (void)onMinimizeFinderInfo:(id)arg1 error:(id *)arg2;
- (void)launchBizFinderFeedInfo:(id)arg1 error:(id *)arg2;
- (id)genRecFinderCardDataFromPigeonInfo:(id)arg1;
- (id)isFinderContactFollowFinderUsername:(id)arg1 error:(id *)arg2;
- (void)getContactInfoBatchUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createMagicBrandServiceScene:(long long)arg1 error:(id *)arg2;
- (void)createMagicAdBrandServiceScene:(long long)arg1 error:(id *)arg2;
- (void)onMinimizeArticleInfo:(id)arg1 error:(id *)arg2;
- (void)gotoBizTestUIWithError:(id *)arg1;
- (id)onExpandMsgId:(long long)arg1 error:(id *)arg2;
- (id)deleteByMsgIdMsgId:(long long)arg1 error:(id *)arg2;
- (id)deleteByTalkerUserName:(id)arg1 error:(id *)arg2;
- (void)enterSessionUserName:(id)arg1 error:(id *)arg2;
- (id)getCdnUrlListWithError:(id *)arg1;
- (id)getBizImgCacheDirectoryWithError:(id *)arg1;
- (id)getBizEnterStatusInfoWithError:(id *)arg1;
- (void)markOftenReadAccountExpiredIfNeedUsername:(id)arg1 error:(id *)arg2;
- (void)getOftenReadAccountInfoBatchUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOftenReadAccountInfoUserName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)__getOftenReadAccountInfoUserName:(id)arg1 error:(id *)arg2;
- (id)getContactInfoUserName:(id)arg1 error:(id *)arg2;
- (void)onExposedMsgId:(long long)arg1 userName:(id)arg2 isValidExposed:(_Bool)arg3 publishEnterSession:(_Bool)arg4 error:(id *)arg5;
- (id)getUnReadCountWithError:(id *)arg1;
- (void)resetRedDotWithError:(id *)arg1;
- (void)doSearchWithError:(id *)arg1;
- (id)getNotifyTipsInfoWithError:(id *)arg1;
- (void)onClickNotifyTipsWithError:(id *)arg1;
- (void)setPayStatusUrl:(id)arg1 isPaid:(_Bool)arg2 error:(id *)arg3;
- (id)isPaidUrl:(id)arg1 error:(id *)arg2;
- (void)getMassSendDataLastOrderId:(long long)arg1 initData:(_Bool)arg2 resetData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openOldSessionList:(id)arg1 source:(id)arg2;
- (void)openPersonalCenter:(id)arg1 source:(id)arg2;
- (void)tryPreloadVideoWithItemArray:(id)arg1;
- (void)tryCommonPrefetchWithItemArray:(id)arg1;
- (void)preloadGeneralImpl:(long long)arg1 urlInfoArr:(id)arg2;
- (void)addToGeneralPreloadUrl:(id)arg1 preloadType:(long long)arg2 itemShowType:(long long)arg3 openScene:(long long)arg4 error:(id *)arg5;
- (void)advanceUpdateMPPageDataWithUrlInfoArr:(id)arg1;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 error:(id *)arg4;
- (void)openUrlArticleInfo:(id)arg1 error:(id *)arg2;
- (void)gotoFinderJumpInfo:(id)arg1 error:(id *)arg2;
- (void)launchMiniProgramBundle:(id)arg1 error:(id *)arg2;
- (void)gotoFinderPaywallJumpInfo:(id)arg1 error:(id *)arg2;
- (void)gotoFinderProfileJumpInfo:(id)arg1 error:(id *)arg2;
- (void)gotoSettingUIWithError:(id *)arg1;
- (void)gotoProfileInfo:(id)arg1 error:(id *)arg2;
- (void)gotoOldListSessionId:(long long)arg1 source:(long long)arg2 error:(id *)arg3;
- (void)onScreenShot;
- (void)onViewDidBePoped;
- (void)onViewWillBePushed;
- (void)onMoveToTop;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

