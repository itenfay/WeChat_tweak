//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveOperationViewDelegate-Protocol.h"

@class FinderJumpInfo, FinderLiveAppMsgLiveRewardInfo, FinderLiveBriefMusicInfo, FinderLivePromoteInfoListMpArticleInfo, FinderLiveShopWindowAdItem, FinderPaidCollectionInfo, FinderWindowProductInfo, MMFinderLiveAdsItem, MMFinderLiveBannerInfo, MMFinderLiveChooseClarityDataItem, MMFinderLiveConnectMicUser, MMFinderLiveCouponItem, MMFinderLiveCouponView, MMFinderLiveCreateNoticeReporter, MMFinderLiveGameTeamWAGameJumpInfo, MMFinderLiveGoodsItem, MMFinderLiveMusicDataItem, MMFinderLiveOperationView, MMFinderLiveProductPromotePubbleContentView, MMFinderLiveRewardGiftItem, MMFinderLiveScreenshotPosterLogic, MMFinderLiveWebPageSheetParams, MMFinderLiveWinterOlympicOperationView, MMLiveCameraOperationPageSheet, MMLiveKtvUserView, NSArray, NSDictionary, NSString, UINavigationController, UIView, WCFinderContact, WCFinderJumpInfoParams;

@protocol MMFinderLiveOperationViewDelegate <MMLiveOperationViewDelegate>

@optional
- (void)onMMLiveOperationPaidCollectionVisibilyChanged:(_Bool)arg1;
- (void)onMMLiveOperationPaidCollectionButtonClicked:(FinderPaidCollectionInfo *)arg1;
- (void)onMMFinderLiveCouponCardButtonClicked:(MMFinderLiveCouponItem *)arg1 completion:(void (^)(_Bool))arg2;
- (unsigned long long)onMMLiveOperationGetDisplayingLivePauseViewType;
- (void)onMMFinderLiveOperationViewShowKtvUserProfileRequestedByUserView:(MMLiveKtvUserView *)arg1 highlightArea:(struct CGRect)arg2 highlightAreaCornerRadius:(double)arg3;
- (void)onMMFinderLiveOperationViewCreateQuickNoticeRequestedWithReporter:(MMFinderLiveCreateNoticeReporter *)arg1;
- (_Bool)onMMFinderLiveOperationViewRandomMicCapabilityRequested;
- (void)onMMFinderLiveOperationViewRandomMicRequested;
- (void)onMMFinderLiveOperationViewOpenListenWithCompletionBlock:(void (^)(void))arg1;
- (void)onMMFinderLiveOperationViewOpenAnchorFansGroupOperationPanel;
- (void)onMMFinderLiveOperationViewNeedJoinSuperfan;
- (void)onMMFinderLiveOperationViewExitLocalAudioMode;
- (void)modifyFansGroupReserveLiveActionSheetView:(long long)arg1;
- (void)onMMLiveOperationCastingHeaderButtonClicked;
- (void)onMMLiveOperationClarityHeaderButtonClicked;
- (MMFinderLiveChooseClarityDataItem *)onMMLiveOperationGetCurrentChooseClarityDataItem;
- (void)onMMLiveOperationPromotionBannerJumpInfoActionClick:(FinderJumpInfo *)arg1;
- (void)onMMLiveOperationViewCameraOperationPanelWillShow:(MMLiveCameraOperationPageSheet *)arg1;
- (UIView *)onMMLiveOperationStickerEditingActivatorContainerViewRequested;
- (void)onMMLiveOperationShowStickerActionSheetRequestedWithCompletionBlock:(void (^)(_Bool))arg1;
- (void)onMMFinderLiveOperationViewUpdateMicUser:(MMFinderLiveConnectMicUser *)arg1 micMuted:(_Bool)arg2;
- (void)onNotifyGiftNotificationViewClick:(FinderJumpInfo *)arg1 rewardInfo:(FinderLiveAppMsgLiveRewardInfo *)arg2;
- (void)onScreenshotPosterRequestedWithLogic:(MMFinderLiveScreenshotPosterLogic *)arg1;
- (void)onMMLiveOperationScrollEnterSqaureButtonClick:(MMFinderLiveOperationView *)arg1;
- (void)onMMFinderLiveGamePlayOperationPanelClickJump:(FinderJumpInfo *)arg1 params:(WCFinderJumpInfoParams *)arg2;
- (void)onMMFinderLiveGamePlayOperationPanelClickJump:(FinderJumpInfo *)arg1;
- (void)onMMFinderLiveOperationClearScreenChanged:(_Bool)arg1;
- (void)onBuyConcertTicketSuccess;
- (void)onAdFeedbackBannerClick;
- (void)onMMFinderLiveOperationViewMicTalkingStateChanged:(_Bool)arg1;
- (void)onMMFinderLiveOperationBlackListAddOrRemove:(WCFinderContact *)arg1;
- (void)onMMFinderLiveOperationViewCommentTalkButtonDidTap;
- (void)onMMLiveOperationPubbleTipJumpInfoHide:(FinderJumpInfo *)arg1;
- (void)onMMLiveOperationPubbleTipJumpInfoShow:(FinderJumpInfo *)arg1;
- (void)onMMLiveOperationPubbleTipJumpInfoActionClick:(FinderJumpInfo *)arg1;
- (void)onMMLiveOperationConcertGetTicketButtonTapped;
- (void)onInvokeToShowCommentChatRoomCreateGuideView;
- (void)onShareToGroupRequestedByGroupPanel;
- (void)onMMLiveWinterOlympicRoomClickCertButton:(MMFinderLiveWinterOlympicOperationView *)arg1 state:(_Bool)arg2;
- (void)onMMLiveOperationFallbackJumpFromBannerWithParams:(FinderJumpInfo *)arg1;
- (void)onMMLiveOperationPushLiteAppFromBannerWithParams:(FinderJumpInfo *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationPreloadWaApp:(FinderWindowProductInfo *)arg1;
- (void)onMMLiveOperationShowAlertViewTitle:(NSString *)arg1 actionBlock:(void (^)(void))arg2;
- (void)onMMLiveOperationJumpToWebsearchSheetFromBannerWithBannerInfo:(MMFinderLiveBannerInfo *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationJumpToSharePageSheetFromBannerWithBannerInfo:(MMFinderLiveBannerInfo *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationJumpToAdFromBannerWithBannerInfo:(MMFinderLiveBannerInfo *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationJumpToLiveFromBannerWithBannerInfo:(MMFinderLiveBannerInfo *)arg1;
- (void)onMMLiveOperationJumpToMoreLiveViewController:(NSDictionary *)arg1 isMultiMoreLive:(_Bool)arg2;
- (void)onMMLiveOperationCancelPreloadHalfWebViewControllerWithParams:(MMFinderLiveWebPageSheetParams *)arg1;
- (void)onMMLiveOperationBannerPreloadHalfWebViewControllerWithParams:(MMFinderLiveWebPageSheetParams *)arg1 preloadInterval:(unsigned int)arg2 uniqueKey:(NSString *)arg3;
- (void)onMMLiveOperationPushHalfWebViewControllerWithParams:(MMFinderLiveWebPageSheetParams *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationStopPauseTimer;
- (void)onMMLiveOperationPushWebViewController:(NSString *)arg1 fromNavVc:(UINavigationController *)arg2 closeCompletion:(void (^)(void))arg3;
- (void)onMMLiveOperationPushWebViewController:(NSString *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationPushWebViewController:(NSString *)arg1;
- (void)onMMLiveOperationVerifyTimeout:(MMFinderLiveOperationView *)arg1 pauseType:(unsigned long long)arg2;
- (void)onMMLiveOperationVerifyResumeButtonClicked;
- (void)onMMLiveOperationPubbleTipHonCoverActionClick:(NSString *)arg1 closeCompletion:(void (^)(void))arg2;
- (void)onMMLiveOperationPubbleTipArticleActionClick:(FinderLivePromoteInfoListMpArticleInfo *)arg1 alertMsg:(NSString *)arg2;
- (void)onMMLiveOperationAudienceCouponBubbleActionButtonClick:(MMFinderLiveCouponView *)arg1;
- (void)minimizeLiveClick;
- (void)onMMLiveOperationPayButtonClicked;
- (void)onMMLivePaymentTrialCountDown:(unsigned int)arg1;
- (void)onMMLiveOperationPubbleTipAdActionClick:(MMFinderLiveAdsItem *)arg1;
- (void)onMMLiveOperationBackToMiniGameButtonClicked;
- (void)onMMLiveOperationRecordScreen:(MMFinderLiveOperationView *)arg1 pauseType:(unsigned long long)arg2;
- (void)onMMLiveOperationResumeButtonClicked:(MMFinderLiveOperationView *)arg1 pauseType:(unsigned long long)arg2;
- (void)onMMLiveOperationMuteButtonDidClick;
- (void)onMMLiveMusicSettingReportActionType:(long long)arg1 songIdArr:(NSArray *)arg2;
- (void)onMMLiveOperationChangeAppSceneButtonClicked;
- (void)onMMLiveOperationMusicSongChanged:(FinderLiveBriefMusicInfo *)arg1 musicItem:(MMFinderLiveMusicDataItem *)arg2;
- (void)onMMLiveOperationMusicDataItemClicked:(MMFinderLiveMusicDataItem *)arg1 song:(FinderLiveBriefMusicInfo *)arg2;
- (void)onMMLiveOperationAudioOnlyBackgroundImageChangeRequested;
- (void)onMMLiveOperationChangeToPureAudioMode:(_Bool)arg1 completeBlock:(void (^)(void))arg2;
- (void)onMMLiveOperationChooseGameJoinTeamViewBottomDescClick:(NSString *)arg1;
- (void)onMMLiveOperationChooseJoinTeamMode:(unsigned int)arg1 curPayment:(unsigned int)arg2;
- (void)onMMLiveOperationInviteRecjectJoinTeamButtonClick:(NSString *)arg1;
- (void)onMMLiveOperationInviteJoinTeamButtonClick:(NSString *)arg1 launchParam:(NSString *)arg2;
- (void)onMMLiveOperationWAGameTeamUpStartButtonClicked:(MMFinderLiveGameTeamWAGameJumpInfo *)arg1 joinTeamMode:(unsigned int)arg2;
- (void)onMMLiveOperationTeamUpStartButtonClicked:(NSString *)arg1 joinTeamMode:(unsigned int)arg2;
- (void)onMMLiveOperationOpenFansGroupJoinPanel:(MMFinderLiveRewardGiftItem *)arg1 openScene:(unsigned long long)arg2;
- (void)onMMLiveOperationBeforeCreateGameFrameSet;
- (void)onMMLiveOperationGotoBuyGiftPackets;
- (void)onMMLiveOperationSendRedPacket;
- (void)onMMLiveOperationOpenRewardWishList;
- (void)onMMLiveOperationFindMoreLive;
- (void)checkAndCloseHalfScreenView;
- (void)onMMLiveOperationCreateLotteryBtnClicked:(_Bool)arg1;
- (void)onMMLiveOperationLiveGoodsTipViewClickedForAudienceWithAdItem:(FinderLiveShopWindowAdItem *)arg1;
- (void)onMMLiveOperationLiveGoodsBubbleExposeForAudience:(MMFinderLiveProductPromotePubbleContentView *)arg1;
- (void)onMMLiveOperationLiveGoodsTipViewPurchaseBtnClickedForAudience:(FinderWindowProductInfo *)arg1 bubble:(MMFinderLiveProductPromotePubbleContentView *)arg2;
- (void)onMMLiveOperationLiveProductSizeAssistantPanelClicked:(FinderWindowProductInfo *)arg1;
- (void)onMMLiveOperationLiveGoodsTipViewClickedForAudience:(FinderWindowProductInfo *)arg1 bubble:(MMFinderLiveProductPromotePubbleContentView *)arg2;
- (void)onMMLiveOperationOpenRewardInstructionPage;
- (void)onMMLiveOperationLiveShoppingButtonClicked:(MMFinderLiveGoodsItem *)arg1;
- (void)onActionSheetTipsPubbleClickWithName:(NSString *)arg1;
- (void)pushMembershipZoneWithAnchorUserName:(NSString *)arg1;
- (void)onMMLiveOperationViewDidJoinLiveRoom;
- (void)showActionSheetForBottomMore;
@end

