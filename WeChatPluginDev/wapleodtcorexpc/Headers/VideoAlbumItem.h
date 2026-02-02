//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, VideoAlbumItem_BattleInfo, VideoAlbumItem_ExternInfo, VideoAlbumItem_GameInfo, VideoAlbumItem_LeaderBoardInfo, VideoAlbumItem_MixTagInfo, VideoAlbumItem_UserBattleInfo, VideoAlbumItem_VideoInfo, VideoAlbumItem_VideoJumpInfo;

@interface VideoAlbumItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) VideoAlbumItem_BattleInfo *battleInfo; // @dynamic battleInfo;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) VideoAlbumItem_ExternInfo *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) NSMutableArray *feedTagList; // @dynamic feedTagList;
@property(retain, nonatomic) NSString *feedUrl; // @dynamic feedUrl;
@property(retain, nonatomic) NSString *feedbackUrl; // @dynamic feedbackUrl;
@property(retain, nonatomic) VideoAlbumItem_GameInfo *game; // @dynamic game;
@property(nonatomic) _Bool isNew; // @dynamic isNew;
@property(nonatomic) _Bool isOnBoard; // @dynamic isOnBoard;
@property(nonatomic) _Bool isOwner; // @dynamic isOwner;
@property(nonatomic) _Bool isPublish; // @dynamic isPublish;
@property(nonatomic) _Bool isSaveCloud; // @dynamic isSaveCloud;
@property(retain, nonatomic) VideoAlbumItem_VideoJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) VideoAlbumItem_LeaderBoardInfo *leaderboardInfo; // @dynamic leaderboardInfo;
@property(retain, nonatomic) VideoAlbumItem_MixTagInfo *mixTagInfo; // @dynamic mixTagInfo;
@property(retain, nonatomic) VideoAlbumItem_UserBattleInfo *ownerInfo; // @dynamic ownerInfo;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSMutableArray *tagList; // @dynamic tagList;
@property(nonatomic) unsigned int userVideoType; // @dynamic userVideoType;
@property(retain, nonatomic) VideoAlbumItem_VideoInfo *video; // @dynamic video;
@property(retain, nonatomic) NSString *videoId; // @dynamic videoId;
@property(nonatomic) unsigned int wonderfulVideoType; // @dynamic wonderfulVideoType;
@property(retain, nonatomic) NSMutableArray *wxfriendsTeamMateList; // @dynamic wxfriendsTeamMateList;

@end

