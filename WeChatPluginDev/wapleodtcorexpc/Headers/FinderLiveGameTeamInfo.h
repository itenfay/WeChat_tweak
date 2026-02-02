//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGameTeamInfo_FinderGameLiveAppInfo, FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo, FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo, FinderLiveGameTeamInfo_GameTeamUpInfoForAnchor, FinderLiveGameTeamInfo_GameTeamUpInfoForAndience, FinderLiveGameTeamInfo_StartLiveGuide, FinderLiveGameTeamInfo_WeappJumpInfo, NSString;

@interface FinderLiveGameTeamInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool audienceIsFanClubMember; // @dynamic audienceIsFanClubMember;
@property(retain, nonatomic) NSString *bubbleInfo; // @dynamic bubbleInfo;
@property(retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveAppInfo *gameAppInfo; // @dynamic gameAppInfo;
@property(retain, nonatomic) NSString *gameDesc; // @dynamic gameDesc;
@property(retain, nonatomic) FinderLiveGameTeamInfo_GameTeamUpInfoForAnchor *gameTeamupInfoForAnchor; // @dynamic gameTeamupInfoForAnchor;
@property(retain, nonatomic) FinderLiveGameTeamInfo_GameTeamUpInfoForAndience *gameTeamupInfoForAudience; // @dynamic gameTeamupInfoForAudience;
@property(nonatomic) unsigned int inTeamingUp; // @dynamic inTeamingUp;
@property(retain, nonatomic) NSString *joinGameButtonText; // @dynamic joinGameButtonText;
@property(retain, nonatomic) NSString *launchParam; // @dynamic launchParam;
@property(retain, nonatomic) FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo *panelInfo; // @dynamic panelInfo;
@property(retain, nonatomic) NSString *rankDesc; // @dynamic rankDesc;
@property(retain, nonatomic) NSString *reddotId; // @dynamic reddotId;
@property(retain, nonatomic) FinderLiveGameTeamInfo_StartLiveGuide *startLiveGuide; // @dynamic startLiveGuide;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *teamupGiftBackgroundColor; // @dynamic teamupGiftBackgroundColor;
@property(retain, nonatomic) NSString *teamupGiftDesc; // @dynamic teamupGiftDesc;
@property(retain, nonatomic) NSString *teamupGiftIcon; // @dynamic teamupGiftIcon;
@property(retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *teamupGiftJumpInfo; // @dynamic teamupGiftJumpInfo;
@property(nonatomic) unsigned int teamupGiftReddot; // @dynamic teamupGiftReddot;
@property(nonatomic) unsigned int teamupGiftStatus; // @dynamic teamupGiftStatus;
@property(retain, nonatomic) NSString *teamupGiftWordingColor; // @dynamic teamupGiftWordingColor;
@property(retain, nonatomic) NSString *teamupMemberDesc; // @dynamic teamupMemberDesc;
@property(retain, nonatomic) NSString *teamupMemberDescForAging; // @dynamic teamupMemberDescForAging;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *wxaExtraJoinInfo; // @dynamic wxaExtraJoinInfo;
@property(retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *wxaJumpInfo; // @dynamic wxaJumpInfo;

@end

