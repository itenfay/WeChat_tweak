//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCoCertRewardInfo, FinderContactLiveInfo, FinderJumpInfo, FinderLiveAnchorQuestEntrance, FinderLiveBackgroundMusicInfo, FinderLiveErrorPage, FinderLiveFanClubInfo, FinderLiveFeedbackEntranceInfo, FinderLiveGuideInfo, FinderLiveKtvResourceAtmosphereBg, FinderLiveKtvResourceReverb, FinderLiveKtvSettingsInfo, FinderLiveMicInfo, FinderLiveModModifyLiveCoverImageResponse, FinderLivePromotionEntrance, FinderLivePromptInfo, FinderLiveQuestEntranceInfo, FinderLiveStickerBubble, FinderLiveStickerFont, FinderLiveStreamDecor, FinderLiveTagInfo, FinderLiveUserAttrUserSetting, FinderObject, FinderRecoverLiveInfo, GameLiveJoinTeamSettingInfo, LiveRoomImg, LiveWeappJumpInfo, NSData, NSMutableArray, NSString, OtherConfigItems, SongListInfo, SpamRisk;

@interface FinderCreateLivePrepareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAnchorQuestEntrance *anchorQuestEntrance; // @dynamic anchorQuestEntrance;
@property(retain, nonatomic) FinderJumpInfo *applyEligibilityJumpInfo; // @dynamic applyEligibilityJumpInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo; // @dynamic bgMusicInfo;
@property(retain, nonatomic) FinderCoCertRewardInfo *cocertRewardInfo; // @dynamic cocertRewardInfo;
@property(retain, nonatomic) FinderContactLiveInfo *contactLiveInfo; // @dynamic contactLiveInfo;
@property(retain, nonatomic) NSData *createLiveroomPrepareInfo; // @dynamic createLiveroomPrepareInfo;
@property(retain, nonatomic) NSData *createliveToken; // @dynamic createliveToken;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @dynamic creatorCenterEntrance;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntranceV2; // @dynamic creatorCenterEntranceV2;
@property(retain, nonatomic) FinderLiveErrorPage *errorPage; // @dynamic errorPage;
@property(retain, nonatomic) FinderLiveFanClubInfo *fanClubInfo; // @dynamic fanClubInfo;
@property(retain, nonatomic) FinderLiveFeedbackEntranceInfo *feedbackEntranceInfo; // @dynamic feedbackEntranceInfo;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *fullTagInfo; // @dynamic fullTagInfo;
@property(retain, nonatomic) GameLiveJoinTeamSettingInfo *gameLiveJoinTeamSettingInfo; // @dynamic gameLiveJoinTeamSettingInfo;
@property(retain, nonatomic) NSMutableArray *gestureList; // @dynamic gestureList;
@property(retain, nonatomic) NSMutableArray *gestureOpenTagIdList; // @dynamic gestureOpenTagIdList;
@property(retain, nonatomic) FinderLiveGuideInfo *guideInfo; // @dynamic guideInfo;
@property(retain, nonatomic) FinderLiveKtvResourceAtmosphereBg *ktvResourceAb; // @dynamic ktvResourceAb;
@property(retain, nonatomic) FinderLiveKtvResourceReverb *ktvResourceRb; // @dynamic ktvResourceRb;
@property(retain, nonatomic) FinderLiveKtvSettingsInfo *ktvSettingsInfo; // @dynamic ktvSettingsInfo;
@property(retain, nonatomic) FinderLiveTagInfo *lastTagInfo; // @dynamic lastTagInfo;
@property(retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo; // @dynamic liveCoverImgModifyInfo;
@property(nonatomic) unsigned long long liveFunctionSwitchFlags; // @dynamic liveFunctionSwitchFlags;
@property(nonatomic) unsigned int liveGlobalFlag; // @dynamic liveGlobalFlag;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(retain, nonatomic) NSMutableArray *liveModeControlInfo; // @dynamic liveModeControlInfo;
@property(retain, nonatomic) LiveRoomImg *liveRoomImg; // @dynamic liveRoomImg;
@property(nonatomic) unsigned int maxRedpacketChatroomCount; // @dynamic maxRedpacketChatroomCount;
@property(nonatomic) unsigned int maxVisibleChatroomCount; // @dynamic maxVisibleChatroomCount;
@property(nonatomic) unsigned int maxVisibleUserCount; // @dynamic maxVisibleUserCount;
@property(retain, nonatomic) NSMutableArray *newLiveNoticeListInfo; // @dynamic newLiveNoticeListInfo;
@property(retain, nonatomic) FinderJumpInfo *opPromotionLiteappInfo; // @dynamic opPromotionLiteappInfo;
@property(retain, nonatomic) LiveWeappJumpInfo *opPromotionMiniappInfo; // @dynamic opPromotionMiniappInfo;
@property(retain, nonatomic) OtherConfigItems *otherConfigItems; // @dynamic otherConfigItems;
@property(retain, nonatomic) NSMutableArray *packageList; // @dynamic packageList;
@property(retain, nonatomic) FinderLivePromotionEntrance *promotionEntrance; // @dynamic promotionEntrance;
@property(retain, nonatomic) LiveWeappJumpInfo *promotionMiniappInfo; // @dynamic promotionMiniappInfo;
@property(retain, nonatomic) FinderLivePromptInfo *promptInfo; // @dynamic promptInfo;
@property(retain, nonatomic) NSMutableArray *questActivities; // @dynamic questActivities;
@property(retain, nonatomic) FinderLiveQuestEntranceInfo *questEntranceInfo; // @dynamic questEntranceInfo;
@property(nonatomic) unsigned int randomMicMatchInterval; // @dynamic randomMicMatchInterval;
@property(retain, nonatomic) FinderRecoverLiveInfo *recoverLiveInfo; // @dynamic recoverLiveInfo;
@property(retain, nonatomic) FinderObject *recoverLiveObject; // @dynamic recoverLiveObject;
@property(nonatomic) int redpacketChatroomSelectStatus; // @dynamic redpacketChatroomSelectStatus;
@property(nonatomic) unsigned int shoppingNotAvailable; // @dynamic shoppingNotAvailable;
@property(retain, nonatomic) SongListInfo *songListInfo; // @dynamic songListInfo;
@property(retain, nonatomic) SpamRisk *spamRiskInfo; // @dynamic spamRiskInfo;
@property(retain, nonatomic) FinderLiveStickerBubble *stickerBubble; // @dynamic stickerBubble;
@property(retain, nonatomic) FinderLiveStickerFont *stickerFont; // @dynamic stickerFont;
@property(retain, nonatomic) FinderLiveStreamDecor *streamDecor; // @dynamic streamDecor;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @dynamic userSetting;
@property(retain, nonatomic) NSMutableArray *visibilityFileList; // @dynamic visibilityFileList;

@end

