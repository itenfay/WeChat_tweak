//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveStarterStruct;

@interface WCFinderLiveStarterReporter : NSObject
{
    WCFinderLiveStarterStruct *_bean;
    _Bool _isFrontCamera;
    unsigned long long _enterUITimeMs;
    unsigned long long _ruleType;
    unsigned long long _coverType;
    NSString *_description;
    NSString *_poiJson;
    _Bool _hadCancelTimer;
}

+ (id)_LogStrFromReportStruct:(id)arg1 actionType:(unsigned long long)arg2 actionJSON:(id)arg3 connectCount:(unsigned long long)arg4 connectTime:(unsigned long long)arg5 chnlExtra:(id)arg6;
+ (unsigned long long)getFinderProfileLiveEntranceId;
+ (void)setFinderProfileLiveEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getWAGameLiveEntranceId;
+ (void)setWAGameLiveEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getGroupFinderLiveEntranceId;
+ (void)setGroupFinderLiveEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getEntranceId;
+ (void)setEntranceId:(unsigned long long)arg1;
+ (unsigned long long)getStartEntrance;
+ (void)setStartEntrance:(unsigned long long)arg1;
+ (unsigned long long)getStartSourceScene;
+ (void)setStartSourceScene:(unsigned long long)arg1;
+ (unsigned long long)getStartVisiableCount;
+ (void)setChatRoomContactIdList:(id)arg1 ContactUsernameList:(id)arg2;
+ (void)reportLiveAfterAbnormal:(id)arg1;
+ (void)reportProfileMenuLiveBtnClick;
+ (void)reportProfileLiveBtnClick;
+ (void)reportProfileLiveBtnExpose;
+ (void)realReportStartLiveStep:(unsigned long long)arg1 entrance:(unsigned long long)arg2 entranceId:(unsigned long long)arg3 stepExtInfo:(id)arg4;
+ (void)reportStartLiveStep:(unsigned long long)arg1 stepExtInfo:(id)arg2;
+ (void)reportSimpleStartLiveStep:(unsigned long long)arg1;
+ (void)reportStartFinalResultWith:(unsigned long long)arg1;
+ (void)reportStartPrecheckResultWith:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_logStrWithActionType:(unsigned long long)arg1 actionJSON:(id)arg2 connectCount:(unsigned long long)arg3 connectTime:(unsigned long long)arg4 chnlExtra:(id)arg5;
- (void)reportLiveStarterMinimizeEvent:(unsigned long long)arg1;
- (void)reportLiveStickerOperation:(id)arg1;
- (void)reportRedDotEventWithDict:(id)arg1;
- (void)reportLiveStarterOperation:(id)arg1;
- (void)reportLiveAudioModeAction:(unsigned long long)arg1;
- (void)reportCommonButtonAction:(unsigned long long)arg1 event:(unsigned long long)arg2 customParameterMap:(id)arg3;
- (void)reportBeautyExtAction:(unsigned long long)arg1 entry:(int)arg2;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 reportData:(id)arg3;
- (void)reportPromoteAction:(long long)arg1 actionType:(long long)arg2 extra:(id)arg3 userType:(long long)arg4;
- (void)reportFansGroupNoticeEditAction:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)reportFansGroupAction:(long long)arg1;
- (void)reportMiniGameAction:(unsigned long long)arg1 result:(id)arg2;
- (void)reportMuteMicAction:(long long)arg1;
- (void)reportGameLiveToFinderActionType:(unsigned long long)arg1;
- (void)reportGameLiveOperationAction:(unsigned long long)arg1 activityid:(id)arg2 params:(id)arg3;
- (void)reportFinderLiveNewAnchorTaskWithType:(unsigned int)arg1 style:(unsigned int)arg2 anchorTaskId:(id)arg3 targetIndex:(unsigned int)arg4;
- (void)reportFinderRecordLiveAction:(unsigned long long)arg1;
- (void)reportFinderLiveToGameActionType:(unsigned long long)arg1 params:(id)arg2;
- (void)reportFinderLiveToGameActionType:(unsigned long long)arg1;
- (void)reportFinderLiveSetRecommend:(id)arg1;
- (void)reportFinderLiveToGamePayActionType:(id)arg1;
- (void)reportBGMusicAction:(long long)arg1 musicIdArr:(id)arg2;
- (id)replaceCommaToSemicolon:(id)arg1;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2 withSceneNote:(id)arg3 reportExtraInfo:(id)arg4;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2 withSceneNote:(id)arg3;
- (void)reportCommerce:(unsigned long long)arg1 productId:(unsigned long long)arg2;
- (void)reportShopSettingsItemClick:(unsigned int)arg1;
- (void)reportShopSettingsItemExpose:(unsigned int)arg1;
- (void)onLotteryTypeSelected:(_Bool)arg1;
- (void)onFinderLiveGoodsItemSelected:(id)arg1 sceneNote:(id)arg2 shopContext:(id)arg3;
- (void)onFinderLiveAddGoodsButtonClicked:(id)arg1 withSceneNote:(id)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 productIds:(id)arg2;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 productId:(unsigned long long)arg2;
- (void)reportStartResult:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
- (id)getBeautyResultString;
- (id)getBeautyVisionEffectResultString;
- (id)getBeautyDecorationResultString;
- (void)reportMMLiveStartFinishedResult:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
- (void)reportMMLiveStartFinishedStream:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
- (void)reportCancelTimer;
- (void)reportLikeSwitch:(_Bool)arg1;
- (void)reportGiftSwitch:(_Bool)arg1;
- (void)reportMicSwitch:(_Bool)arg1;
- (void)reportEditGameLiveCover:(unsigned long long)arg1;
- (void)reportEditCover:(unsigned long long)arg1;
- (void)reportEditCoverActionSheet:(long long)arg1;
- (void)reportMakeupActionWithType:(id)arg1 makeupDetail:(id)arg2;
- (void)reportMakeupFilterActionWithType:(long long)arg1 makeupType:(id)arg2 makeupValue:(float)arg3 makeupFilterVaule:(float)arg4 filterType:(id)arg5 filterValue:(float)arg6;
- (void)reportBeautyContainerActionWithType:(unsigned long long)arg1;
- (void)reportCommerce;
- (void)repoortRedPacketRoomSelect:(unsigned long long)arg1;
- (void)repoortSwitchLiveModeWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)repoortLiveNoticeReminderWithActionType:(unsigned long long)arg1 actionDic:(id)arg2;
- (void)repoortLiveThemeGuideWithActionDic:(id)arg1;
- (void)reportRule:(unsigned long long)arg1;
- (void)reportStartLive:(unsigned long long)arg1;
- (void)reportEnterLiveStarterVC:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

