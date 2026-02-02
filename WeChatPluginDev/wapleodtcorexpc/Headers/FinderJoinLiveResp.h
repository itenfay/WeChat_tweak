//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CommentRelatedInfo, EcPromoterInfo, FinderBizUserInfo, FinderJoinLiveRespExtend, FinderJoinLiveResp_FlashSaleInfo, FinderJoinLiveResp_PromotingInfo, FinderJoinLiveResp_SyncExtraInfoConfig, FinderJoinLiveTips, FinderJumpInfo, FinderLiveAdInfo, FinderLiveAudienceEventInfo, FinderLiveAutoSwipeInfo, FinderLiveBackgroundMusicInfo, FinderLiveBulletin, FinderLiveCheerInfo, FinderLiveContact, FinderLiveErrorPage, FinderLiveExtFlag, FinderLiveFanClubInfo, FinderLiveGameData, FinderLiveGameInfo, FinderLiveGamePlayTogether, FinderLiveHotCommentAnimationInfoList, FinderLiveInfo, FinderLiveInternalPageInfo, FinderLiveMandatoryReplaceInfo, FinderLiveMicInfo, FinderLiveModModifyLiveCoverImageResponse, FinderLiveModeInfo, FinderLivePackageExtInfo, FinderLivePromoteExtInfo, FinderLivePromoteMsgInfo, FinderLiveRealnameLikeInfo, FinderLiveRecommendPreloadInfo, FinderLiveResourcePreloadInfo, FinderLiveRewardQuotaSwitchInfo, FinderLiveRoleAndPermissionList, FinderLiveShopWindowProductItem, FinderLiveStreamDecor, FinderLiveUserAttrUserSetting, FinderLiveUserInfo, FinderLocation, FinderWxAppInfo, GameLiveJumpInfo, GameRankSwitchInfo, GeneralGameLiveInfo, JoinLiveInvisiableSwitchInfo, LiveRoomImg, LiveSdkInfo, LiveWeappJumpInfo, NSData, NSMutableArray, NSString, SongListInfo;

@interface FinderJoinLiveResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *aliasInfo; // @dynamic aliasInfo;
@property(nonatomic) unsigned long long anchorLiveExtFlag; // @dynamic anchorLiveExtFlag;
@property(nonatomic) unsigned long long anchorLiveroomFunctionSwitch; // @dynamic anchorLiveroomFunctionSwitch;
@property(nonatomic) unsigned int anchorShopTag; // @dynamic anchorShopTag;
@property(nonatomic) unsigned int anchorSwitchFlag; // @dynamic anchorSwitchFlag;
@property(retain, nonatomic) FinderLiveAudienceEventInfo *audienceEventInfo; // @dynamic audienceEventInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo; // @dynamic bgMusicInfo;
@property(retain, nonatomic) FinderBizUserInfo *bizUserInfo; // @dynamic bizUserInfo;
@property(retain, nonatomic) FinderLiveBulletin *bulletin; // @dynamic bulletin;
@property(retain, nonatomic) FinderLiveCheerInfo *cheerInfo; // @dynamic cheerInfo;
@property(retain, nonatomic) CommentRelatedInfo *commentRelatedInfo; // @dynamic commentRelatedInfo;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @dynamic creatorCenterEntrance;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntranceV2; // @dynamic creatorCenterEntranceV2;
@property(nonatomic) unsigned int currentAliasRoleType; // @dynamic currentAliasRoleType;
@property(retain, nonatomic) NSMutableArray *disableExtraSyncCmds; // @dynamic disableExtraSyncCmds;
@property(retain, nonatomic) EcPromoterInfo *ecPromoterInfo; // @dynamic ecPromoterInfo;
@property(retain, nonatomic) NSString *ecSource; // @dynamic ecSource;
@property(nonatomic) unsigned int enableCheerSpecialEffect; // @dynamic enableCheerSpecialEffect;
@property(retain, nonatomic) NSMutableArray *enableExtraSyncCmds; // @dynamic enableExtraSyncCmds;
@property(retain, nonatomic) FinderLiveErrorPage *errorPage; // @dynamic errorPage;
@property(retain, nonatomic) FinderLiveFanClubInfo *fanClubInfo; // @dynamic fanClubInfo;
@property(retain, nonatomic) NSString *finderJoinliveTraceBuffer; // @dynamic finderJoinliveTraceBuffer;
@property(retain, nonatomic) FinderJoinLiveResp_FlashSaleInfo *flashSaleInfo; // @dynamic flashSaleInfo;
@property(retain, nonatomic) GameLiveJumpInfo *gameLiveJumpInfo; // @dynamic gameLiveJumpInfo;
@property(retain, nonatomic) FinderLiveGamePlayTogether *gamePlayTogetherInfo; // @dynamic gamePlayTogetherInfo;
@property(retain, nonatomic) GameRankSwitchInfo *gameRankSwitch; // @dynamic gameRankSwitch;
@property(retain, nonatomic) FinderJumpInfo *gameThreeDimensionalEntrance; // @dynamic gameThreeDimensionalEntrance;
@property(retain, nonatomic) GeneralGameLiveInfo *generalGameLiveInfo; // @dynamic generalGameLiveInfo;
@property(nonatomic) _Bool isAssistantRole; // @dynamic isAssistantRole;
@property(nonatomic) _Bool isFanClubMember; // @dynamic isFanClubMember;
@property(nonatomic) _Bool isFanClubSuperFans; // @dynamic isFanClubSuperFans;
@property(nonatomic) _Bool isForceUseServerNickname; // @dynamic isForceUseServerNickname;
@property(nonatomic) unsigned int joinLiveFlag; // @dynamic joinLiveFlag;
@property(retain, nonatomic) JoinLiveInvisiableSwitchInfo *joinliveInvisiableSwitch; // @dynamic joinliveInvisiableSwitch;
@property(nonatomic) unsigned int keepAliveRefreshInterval; // @dynamic keepAliveRefreshInterval;
@property(retain, nonatomic) FinderLiveAdInfo *liveAdInfo; // @dynamic liveAdInfo;
@property(retain, nonatomic) FinderLiveAutoSwipeInfo *liveAutoSwipeInfo; // @dynamic liveAutoSwipeInfo;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo; // @dynamic liveCoverImgModifyInfo;
@property(retain, nonatomic) NSString *liveDescription; // @dynamic liveDescription;
@property(retain, nonatomic) FinderJumpInfo *liveEligibilityJumpInfo; // @dynamic liveEligibilityJumpInfo;
@property(nonatomic) unsigned int liveExtFlag; // @dynamic liveExtFlag;
@property(retain, nonatomic) FinderLiveExtFlag *liveExtFlagInfo; // @dynamic liveExtFlagInfo;
@property(nonatomic) unsigned long long liveFunctionSwitchFlags; // @dynamic liveFunctionSwitchFlags;
@property(retain, nonatomic) FinderLiveGameData *liveGameData; // @dynamic liveGameData;
@property(retain, nonatomic) FinderLiveGameInfo *liveGameInfo; // @dynamic liveGameInfo;
@property(retain, nonatomic) FinderLiveHotCommentAnimationInfoList *liveHotCommentAnimation; // @dynamic liveHotCommentAnimation;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderLiveInternalPageInfo *liveInternalPageInfo; // @dynamic liveInternalPageInfo;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(retain, nonatomic) LiveRoomImg *liveRoomImg; // @dynamic liveRoomImg;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @dynamic liveSdkInfo;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) FinderLiveMandatoryReplaceInfo *mandatoryReplaceInfo; // @dynamic mandatoryReplaceInfo;
@property(retain, nonatomic) FinderLiveModeInfo *modeInfo; // @dynamic modeInfo;
@property(retain, nonatomic) NSString *muteStatusContent; // @dynamic muteStatusContent;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *newPromoteInfo; // @dynamic newPromoteInfo;
@property(nonatomic) unsigned long long nextAliasModAvailableTime; // @dynamic nextAliasModAvailableTime;
@property(retain, nonatomic) FinderJumpInfo *notificationmsgTriggerLiteappInfo; // @dynamic notificationmsgTriggerLiteappInfo;
@property(retain, nonatomic) FinderJumpInfo *opPromotionLiteappInfo; // @dynamic opPromotionLiteappInfo;
@property(retain, nonatomic) LiveWeappJumpInfo *opPromotionMiniappInfo; // @dynamic opPromotionMiniappInfo;
@property(retain, nonatomic) FinderLivePackageExtInfo *packageExtInfo; // @dynamic packageExtInfo;
@property(retain, nonatomic) FinderLivePromoteExtInfo *promoteExtInfo; // @dynamic promoteExtInfo;
@property(retain, nonatomic) FinderJoinLiveResp_PromotingInfo *promotingInfo; // @dynamic promotingInfo;
@property(retain, nonatomic) FinderLiveShopWindowProductItem *promotingProduct; // @dynamic promotingProduct;
@property(retain, nonatomic) LiveWeappJumpInfo *promotionMiniappInfo; // @dynamic promotionMiniappInfo;
@property(retain, nonatomic) FinderLiveRealnameLikeInfo *realnameLikeInfo; // @dynamic realnameLikeInfo;
@property(retain, nonatomic) FinderLiveRecommendPreloadInfo *recommendPreloadInfo; // @dynamic recommendPreloadInfo;
@property(retain, nonatomic) NSString *redpacketCliBuff; // @dynamic redpacketCliBuff;
@property(retain, nonatomic) NSMutableArray *redpacketReferChatroomIdList; // @dynamic redpacketReferChatroomIdList;
@property(retain, nonatomic) FinderLiveResourcePreloadInfo *resourcePreloadInfo; // @dynamic resourcePreloadInfo;
@property(retain, nonatomic) FinderJoinLiveRespExtend *respExtend; // @dynamic respExtend;
@property(retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *rewardQuotaSwitch; // @dynamic rewardQuotaSwitch;
@property(retain, nonatomic) FinderLiveRoleAndPermissionList *roleAndPermissionList; // @dynamic roleAndPermissionList;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @dynamic selfContact;
@property(nonatomic) unsigned int shoppingNotAvailable; // @dynamic shoppingNotAvailable;
@property(retain, nonatomic) SongListInfo *songListInfo; // @dynamic songListInfo;
@property(retain, nonatomic) FinderLiveStreamDecor *streamDecor; // @dynamic streamDecor;
@property(retain, nonatomic) FinderJumpInfo *switchHideIdentityJumpInfo; // @dynamic switchHideIdentityJumpInfo;
@property(retain, nonatomic) FinderJoinLiveResp_SyncExtraInfoConfig *syncExtraInfoConfig; // @dynamic syncExtraInfoConfig;
@property(retain, nonatomic) NSMutableArray *templateInfoList; // @dynamic templateInfoList;
@property(retain, nonatomic) FinderJoinLiveTips *tips; // @dynamic tips;
@property(retain, nonatomic) FinderLiveUserInfo *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @dynamic userSetting;
@property(retain, nonatomic) NSString *verifyInfoBuf; // @dynamic verifyInfoBuf;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopInfo; // @dynamic wxaShopInfo;

@end

