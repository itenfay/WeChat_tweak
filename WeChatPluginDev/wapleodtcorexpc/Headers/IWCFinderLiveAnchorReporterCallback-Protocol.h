//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGoodsItem, MMFinderLiveLotteryCreateInfo, MMFinderLiveShopContext, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveTask, NSDictionary, NSString, WCFinderContact;

@protocol IWCFinderLiveAnchorReporterCallback <NSObject>
- (void)onRecordLivePIPAction:(NSDictionary *)arg1;
- (void)onRecordLiveAction:(NSDictionary *)arg1;
- (void)onReportLiveScrollActionSheet:(NSDictionary *)arg1 andTask:(MMFinderLiveTask *)arg2;
- (void)onAnchorAudioRoomLocationAuthAction:(_Bool)arg1 isAuth:(_Bool)arg2;
- (void)onAnchorAudioRoomLocationGuideAction:(unsigned long long)arg1 isShow:(_Bool)arg2 isAuth:(_Bool)arg3;
- (void)onAnchorAudioRoomConnectMicSettingAction:(unsigned long long)arg1 username:(NSString *)arg2;
- (void)onAnchorVisionEffectActionWithDict:(NSDictionary *)arg1;
- (void)onLivePromotingBannerAction:(NSDictionary *)arg1;
- (void)onLiveStickerAction:(NSDictionary *)arg1;
- (void)onAnchorDecorationActionWithDict:(NSDictionary *)arg1;
- (void)onAnchorFloatBarrageAction:(unsigned int)arg1 barrageType:(unsigned int)arg2;
- (void)onAnchorOpenUserProfileAction:(unsigned long long)arg1 withProfileScene:(unsigned long long)arg2 userIdentity:(unsigned long long)arg3 andUserName:(NSString *)arg4;
- (void)onAnchorLiveScrollActionSheet:(NSDictionary *)arg1 andTask:(MMFinderLiveTask *)arg2;
- (void)onAnchorCameraZoomFocusAction:(unsigned long long)arg1;
- (void)onShopSettingsItemClick:(unsigned int)arg1;
- (void)onShopSettingsItemExpose:(unsigned int)arg1;
- (void)onAnchorShareQRCodeAction:(unsigned long long)arg1;
- (void)onAnchorGame3DEntranceAction:(int)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onAnchorForbidPageAction:(int)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onAnchorBeautyExtAction:(unsigned long long)arg1 entry:(int)arg2;
- (void)onAnchorPlayTogetherAction:(unsigned long long)arg1;
- (void)onAnchorTopAreaMsgShow;
- (void)onAnchorLiveFollowMsgNotify:(unsigned int)arg1;
- (void)onAnchorLiveLikeMsgNotify:(unsigned int)arg1;
- (void)onAnchorLiveTrafficRewardAction:(unsigned long long)arg1;
- (void)onLiveAudioModeAction:(unsigned long long)arg1;
- (void)onAnchorFreeMicSwitchUpdated:(_Bool)arg1;
- (void)onAnchorLiveCancelPushPromote:(long long)arg1 extra:(NSString *)arg2 userType:(long long)arg3;
- (void)onAnchorLivePushPromote:(long long)arg1 extra:(NSString *)arg2 userType:(long long)arg3;
- (void)onSetRecommendAction:(NSDictionary *)arg1;
- (void)onPromotionReplaySettingAction:(NSDictionary *)arg1;
- (void)onAnchorLiveGameBehaviorSettingsAction:(NSDictionary *)arg1;
- (void)onAnchorFansGroupNoticeActionType:(long long)arg1 notice:(NSString *)arg2 level:(unsigned long long)arg3 imageUrl:(NSString *)arg4 visibility:(long long)arg5;
- (void)onAnchorLiveFansGroupAction:(long long)arg1;
- (void)onAnchorLiveDropGiftAction:(unsigned long long)arg1;
- (void)onAnchorLiveClapTopicAction:(unsigned long long)arg1 actionResultDictionary:(NSDictionary *)arg2;
- (void)onAnchorLiveClapTopicAction:(unsigned long long)arg1 topic:(NSString *)arg2;
- (void)onAnchorLiveClapModeAction:(unsigned long long)arg1;
- (void)onAnchorLiveWeakNetWithContent:(long long)arg1;
- (void)onAnchorBannerAction:(unsigned long long)arg1 bannerId:(NSString *)arg2;
- (void)onAnchorAction:(unsigned long long)arg1 actionResult:(NSString *)arg2;
- (void)onAnchorAction:(unsigned long long)arg1 actionResults:(NSDictionary *)arg2;
- (void)onAnchorCommentAction:(unsigned long long)arg1;
- (void)onGameLiveAction:(NSDictionary *)arg1;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onScreenSharingAction:(long long)arg1 fileType:(NSString *)arg2 duration:(double)arg3;
- (void)onClapAction;
- (void)onRedPacketAction:(unsigned long long)arg1;
- (void)onAnchorMicFocusingAction:(unsigned long long)arg1 userIndex:(long long)arg2;
- (void)onAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(NSString *)arg2;
- (void)onAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(NSString *)arg2 active:(_Bool)arg3;
- (void)onAnchorMicClose:(NSString *)arg1;
- (void)onAnchorMicAtion:(unsigned long long)arg1 withUsername:(NSString *)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)onMicSwitchAtion:(unsigned long long)arg1;
- (void)onMicAction:(unsigned long long)arg1 withActionResultString:(NSString *)arg2;
- (void)onMicAction:(unsigned long long)arg1 withActionResultValue:(unsigned long long)arg2;
- (void)onMicAtion:(unsigned long long)arg1;
- (void)onOpenEncashPage;
- (void)onGiftRankAction:(unsigned long long)arg1;
- (void)onBeautyResult:(MMLiveTask *)arg1;
- (void)onFilterResult:(MMLiveTask *)arg1;
- (void)onClickOperationView:(unsigned long long)arg1;
- (void)onLotteryAction:(unsigned long long)arg1;
- (void)onLotteryCreate:(MMFinderLiveLotteryCreateInfo *)arg1;
- (void)onOperationLiveShoppingButtonClicked:(MMFinderLiveGoodsItem *)arg1;
- (void)onGoodsItemSelected:(MMFinderLiveGoodsItem *)arg1 sceneNote:(NSString *)arg2 shopContext:(MMFinderLiveShopContext *)arg3;
- (void)onOperateCoupon:(_Bool)arg1;
- (void)onAddGoodsButtonClicked:(MMFinderLiveShopContext *)arg1 withSceneNote:(NSString *)arg2;
- (void)onPromoteStatusChanged:(MMFinderLiveGoodsItem *)arg1 promoteStatus:(_Bool)arg2;
- (void)onCommentTop:(MMLiveTask *)arg1 withContent:(NSString *)arg2;
- (void)onJoinLiveAfterAbnormal:(MMLiveTask *)arg1;
- (void)onProfileViewShow:(unsigned long long)arg1 andContact:(WCFinderContact *)arg2;
- (void)onLotteryTypeSelected:(_Bool)arg1;
- (void)onReportLotteryAction:(unsigned long long)arg1 withResult:(NSString *)arg2;
@end

