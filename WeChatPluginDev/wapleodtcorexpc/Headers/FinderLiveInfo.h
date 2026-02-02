//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderBizUserInfo, FinderLiveAnchorCloseLivePageData, FinderLiveAnchorReplaceInfo, FinderLiveCoverInfo, FinderLiveEventInfo, FinderLiveExtInfo, FinderLiveFeedBackInfo, FinderLiveKtvSettingsInfo, FinderLiveLayerShowInfo, FinderLiveMediaSpec, FinderLiveMicInfo, FinderLiveModeInfo, FinderLivePrivilegeInfo, FinderLivePurchaseInfo, FinderLiveReplayInfo, FinderLiveRewardWishListInfo, FinderLiveScreenOrientationInfo, FinderLiveSdkChannelInfo, FinderLiveShopTagInfo, FinderLiveTabInfo, FinderLiveUrlOption, FinderMemberLiveInfo, IntercomMicInfo, LiveConcertInfo, LiveCrowdfundGiftInfo, LiveOnlineInfo, LiveRoomImg, LiveSdkInfo, NSMutableArray, NSString;

@interface FinderLiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAnchorCloseLivePageData *anchorCloselivepageData; // @dynamic anchorCloselivepageData;
@property(retain, nonatomic) FinderLiveAnchorReplaceInfo *anchorReplaceInfo; // @dynamic anchorReplaceInfo;
@property(nonatomic) unsigned int anchorShopTag; // @dynamic anchorShopTag;
@property(nonatomic) unsigned long long anchorStatusFlag; // @dynamic anchorStatusFlag;
@property(nonatomic) unsigned int audiencesAvgSeconds; // @dynamic audiencesAvgSeconds;
@property(nonatomic) unsigned int autoPlayPriority; // @dynamic autoPlayPriority;
@property(retain, nonatomic) FinderBizUserInfo *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) FinderLiveCoverInfo *coverInfo; // @dynamic coverInfo;
@property(retain, nonatomic) LiveCrowdfundGiftInfo *crowdfundGiftInfo; // @dynamic crowdfundGiftInfo;
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(retain, nonatomic) NSMutableArray *entranceAdInfos; // @dynamic entranceAdInfos;
@property(retain, nonatomic) FinderLiveEventInfo *eventInfo; // @dynamic eventInfo;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned long long fansAudiencePercent; // @dynamic fansAudiencePercent;
@property(retain, nonatomic) FinderLiveFeedBackInfo *finderLiveFeedbackInfo; // @dynamic finderLiveFeedbackInfo;
@property(retain, nonatomic) NSString *gameAppid; // @dynamic gameAppid;
@property(nonatomic) unsigned long long heatPromotionAudienceTotalCount; // @dynamic heatPromotionAudienceTotalCount;
@property(nonatomic) unsigned long long heatPromotionNewFansTotalCount; // @dynamic heatPromotionNewFansTotalCount;
@property(nonatomic) unsigned long long heatPromotionPayTotalAmountInCents; // @dynamic heatPromotionPayTotalAmountInCents;
@property(nonatomic) unsigned long long heatValue; // @dynamic heatValue;
@property(retain, nonatomic) IntercomMicInfo *intercomMicInfo; // @dynamic intercomMicInfo;
@property(nonatomic) unsigned int isWxaGame; // @dynamic isWxaGame;
@property(nonatomic) unsigned int ktvPlayerCount; // @dynamic ktvPlayerCount;
@property(retain, nonatomic) FinderLiveKtvSettingsInfo *ktvSettingsInfo; // @dynamic ktvSettingsInfo;
@property(retain, nonatomic) FinderLiveLayerShowInfo *layerShowInfo; // @dynamic layerShowInfo;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(retain, nonatomic) NSMutableArray *liveActivityType; // @dynamic liveActivityType;
@property(retain, nonatomic) NSString *liveBarMsg; // @dynamic liveBarMsg;
@property(nonatomic) unsigned int liveBusinessType; // @dynamic liveBusinessType;
@property(retain, nonatomic) LiveConcertInfo *liveConcertInfo; // @dynamic liveConcertInfo;
@property(nonatomic) unsigned int liveElapsedTime; // @dynamic liveElapsedTime;
@property(retain, nonatomic) FinderLiveExtInfo *liveExtInfo; // @dynamic liveExtInfo;
@property(nonatomic) unsigned int liveFlag; // @dynamic liveFlag;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(retain, nonatomic) NSString *liveHeatValueStr; // @dynamic liveHeatValueStr;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(retain, nonatomic) LiveOnlineInfo *liveOnlineInfo; // @dynamic liveOnlineInfo;
@property(nonatomic) unsigned long long livePermissionFlag; // @dynamic livePermissionFlag;
@property(retain, nonatomic) FinderLivePrivilegeInfo *livePrivilegeInfo; // @dynamic livePrivilegeInfo;
@property(retain, nonatomic) FinderLiveSdkChannelInfo *liveSdkChannelInfo; // @dynamic liveSdkChannelInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @dynamic liveSdkInfo;
@property(retain, nonatomic) FinderLiveShopTagInfo *liveShopTagInfo; // @dynamic liveShopTagInfo;
@property(retain, nonatomic) FinderLiveMediaSpec *liveSpec; // @dynamic liveSpec;
@property(retain, nonatomic) NSString *liveSquareParticipantWording; // @dynamic liveSquareParticipantWording;
@property(nonatomic) unsigned int liveStatus; // @dynamic liveStatus;
@property(nonatomic) unsigned int liveVrType; // @dynamic liveVrType;
@property(nonatomic) unsigned int maxOnlineCount; // @dynamic maxOnlineCount;
@property(retain, nonatomic) FinderMemberLiveInfo *memberLiveInfo; // @dynamic memberLiveInfo;
@property(retain, nonatomic) FinderLiveModeInfo *modeInfo; // @dynamic modeInfo;
@property(retain, nonatomic) NSMutableArray *multiReason; // @dynamic multiReason;
@property(nonatomic) unsigned long long newLikeCnt; // @dynamic newLikeCnt;
@property(nonatomic) unsigned int onlineCnt; // @dynamic onlineCnt;
@property(nonatomic) unsigned int participantCount; // @dynamic participantCount;
@property(nonatomic) unsigned int previewJoinliveDelaySeconds; // @dynamic previewJoinliveDelaySeconds;
@property(retain, nonatomic) FinderLivePurchaseInfo *purchaseInfo; // @dynamic purchaseInfo;
@property(retain, nonatomic) FinderLiveReplayInfo *replayInfo; // @dynamic replayInfo;
@property(nonatomic) unsigned int replayStatus; // @dynamic replayStatus;
@property(retain, nonatomic) NSString *replayUrl; // @dynamic replayUrl;
@property(nonatomic) unsigned long long rewardAudienceCnt; // @dynamic rewardAudienceCnt;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @dynamic rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long rewardTotalAmountInWecoin; // @dynamic rewardTotalAmountInWecoin;
@property(retain, nonatomic) FinderLiveScreenOrientationInfo *screenOrientationInfo; // @dynamic screenOrientationInfo;
@property(nonatomic) unsigned int secondaryDeviceFlag; // @dynamic secondaryDeviceFlag;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) unsigned int spamLiveExtFlag; // @dynamic spamLiveExtFlag;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *statusDesc; // @dynamic statusDesc;
@property(nonatomic) unsigned long long streamPreviewJoinliveControlFlag; // @dynamic streamPreviewJoinliveControlFlag;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;
@property(nonatomic) unsigned int subSourceType; // @dynamic subSourceType;
@property(nonatomic) unsigned int supportFlag; // @dynamic supportFlag;
@property(retain, nonatomic) FinderLiveTabInfo *tabInfo; // @dynamic tabInfo;
@property(nonatomic) unsigned long long totalGmv; // @dynamic totalGmv;
@property(retain, nonatomic) FinderLiveUrlOption *trialUrlOption; // @dynamic trialUrlOption;
@property(retain, nonatomic) LiveRoomImg *voiceLiveImg; // @dynamic voiceLiveImg;
@property(retain, nonatomic) FinderLiveRewardWishListInfo *wishList; // @dynamic wishList;
@property(nonatomic) unsigned int wxaGameVersion; // @dynamic wxaGameVersion;

@end

