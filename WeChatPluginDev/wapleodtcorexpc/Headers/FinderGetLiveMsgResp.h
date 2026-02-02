//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderGetLiveMsgResp_LiveIntercomMicInfo, FinderGetLiveMsgResp_LiveMsgClientConfig, FinderLiveAudienceEventInfo, FinderLiveBadgeInfo, FinderLiveCheerInfo, FinderLiveContact, FinderLiveExtFlag, FinderLiveFanClubInfo, FinderLiveGameData, FinderLiveInfo, FinderLiveMicInfo, FinderLiveModModifyLiveCoverImageResponse, FinderLiveModeInfo, FinderLiveNoticeBubbleInfo, FinderLivePreloadInfo, FinderLivePromoteExtInfo, FinderLiveRealnameLikeBubbleInfo, FinderLiveUserQuitLiveGuideInfo, NSData, NSMutableArray, OnQualityChangeInfo;

@interface FinderGetLiveMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *anchorContact; // @dynamic anchorContact;
@property(retain, nonatomic) NSMutableArray *appMsgList; // @dynamic appMsgList;
@property(retain, nonatomic) FinderLiveAudienceEventInfo *audienceEventInfo; // @dynamic audienceEventInfo;
@property(nonatomic) unsigned long long backendAnchorStatusFlag; // @dynamic backendAnchorStatusFlag;
@property(retain, nonatomic) FinderLiveBadgeInfo *badgeInfo; // @dynamic badgeInfo;
@property(retain, nonatomic) NSMutableArray *badgeInfos; // @dynamic badgeInfos;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveCheerInfo *cheerInfo; // @dynamic cheerInfo;
@property(retain, nonatomic) FinderGetLiveMsgResp_LiveMsgClientConfig *clientConfig; // @dynamic clientConfig;
@property(nonatomic) unsigned long long curLikeCnt; // @dynamic curLikeCnt;
@property(nonatomic) unsigned int curOnlineCount; // @dynamic curOnlineCount;
@property(nonatomic) unsigned int curParticipantCount; // @dynamic curParticipantCount;
@property(retain, nonatomic) NSMutableArray *disableExtraSyncCmds; // @dynamic disableExtraSyncCmds;
@property(retain, nonatomic) NSMutableArray *enableExtraSyncCmds; // @dynamic enableExtraSyncCmds;
@property(retain, nonatomic) FinderLiveFanClubInfo *fanClubInfo; // @dynamic fanClubInfo;
@property(retain, nonatomic) NSData *getLiveOnlineMemberBuf; // @dynamic getLiveOnlineMemberBuf;
@property(nonatomic) _Bool isFanClubMember; // @dynamic isFanClubMember;
@property(nonatomic) _Bool isFanClubSuperFans; // @dynamic isFanClubSuperFans;
@property(nonatomic) unsigned int isHistoryMsg; // @dynamic isHistoryMsg;
@property(nonatomic) _Bool isNeverJoinFanclub; // @dynamic isNeverJoinFanclub;
@property(nonatomic) unsigned int ktvPlayerCount; // @dynamic ktvPlayerCount;
@property(nonatomic) unsigned int liveCloseFlag; // @dynamic liveCloseFlag;
@property(nonatomic) unsigned int liveClosePageDelayMs; // @dynamic liveClosePageDelayMs;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo; // @dynamic liveCoverImgModifyInfo;
@property(nonatomic) unsigned int liveExtFlag; // @dynamic liveExtFlag;
@property(retain, nonatomic) FinderLiveExtFlag *liveExtFlagInfo; // @dynamic liveExtFlagInfo;
@property(retain, nonatomic) FinderLiveGameData *liveGameData; // @dynamic liveGameData;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(nonatomic) unsigned int liveInfoEnableFlag; // @dynamic liveInfoEnableFlag;
@property(retain, nonatomic) FinderGetLiveMsgResp_LiveIntercomMicInfo *liveIntercomInfo; // @dynamic liveIntercomInfo;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(nonatomic) unsigned int liveMicInfoEnableFlag; // @dynamic liveMicInfoEnableFlag;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) FinderLiveModeInfo *modeInfo; // @dynamic modeInfo;
@property(retain, nonatomic) NSMutableArray *msgList; // @dynamic msgList;
@property(nonatomic) unsigned int nextRetryInterval; // @dynamic nextRetryInterval;
@property(retain, nonatomic) FinderLiveNoticeBubbleInfo *noticeBubbleInfo; // @dynamic noticeBubbleInfo;
@property(retain, nonatomic) NSMutableArray *notifyExtraSyncCmds; // @dynamic notifyExtraSyncCmds;
@property(retain, nonatomic) OnQualityChangeInfo *onQualityChangeInfo; // @dynamic onQualityChangeInfo;
@property(retain, nonatomic) NSMutableArray *onlineContacts; // @dynamic onlineContacts;
@property(nonatomic) unsigned int pkCloseFlag; // @dynamic pkCloseFlag;
@property(retain, nonatomic) FinderLivePromoteExtInfo *promoteExtInfo; // @dynamic promoteExtInfo;
@property(retain, nonatomic) FinderLiveRealnameLikeBubbleInfo *realnameLikeBubbleInfo; // @dynamic realnameLikeBubbleInfo;
@property(retain, nonatomic) NSMutableArray *templateInfoList; // @dynamic templateInfoList;
@property(retain, nonatomic) FinderLiveUserQuitLiveGuideInfo *userQuitLiveGuideInfo; // @dynamic userQuitLiveGuideInfo;

@end

