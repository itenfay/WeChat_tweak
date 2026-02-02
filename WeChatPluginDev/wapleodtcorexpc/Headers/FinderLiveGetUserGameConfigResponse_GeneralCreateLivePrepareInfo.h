//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContactLiveInfo, FinderJumpInfo, FinderLiveBackgroundMusicInfo, FinderLiveFanClubInfo, FinderLiveGamePlayTogether, FinderLiveNoticeInfo, FinderLiveQuestEntranceInfo, NSMutableArray, SongListInfo;

@interface FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo; // @dynamic bgMusicInfo;
@property(nonatomic) _Bool canShowPlayTogetherEntrance; // @dynamic canShowPlayTogetherEntrance;
@property(retain, nonatomic) FinderContactLiveInfo *contactLiveInfo; // @dynamic contactLiveInfo;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @dynamic creatorCenterEntrance;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntranceV2; // @dynamic creatorCenterEntranceV2;
@property(retain, nonatomic) FinderLiveFanClubInfo *fanClubInfo; // @dynamic fanClubInfo;
@property(nonatomic) unsigned long long liveFunctionSwitchFlags; // @dynamic liveFunctionSwitchFlags;
@property(nonatomic) unsigned int liveGlobalFlag; // @dynamic liveGlobalFlag;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(nonatomic) unsigned int maxRedpacketChatroomCount; // @dynamic maxRedpacketChatroomCount;
@property(nonatomic) unsigned int maxVisibleChatroomCount; // @dynamic maxVisibleChatroomCount;
@property(nonatomic) unsigned int maxVisibleUserCount; // @dynamic maxVisibleUserCount;
@property(retain, nonatomic) FinderLiveGamePlayTogether *playTogetherInfo; // @dynamic playTogetherInfo;
@property(retain, nonatomic) FinderJumpInfo *playTogetherInfoJumpInfo; // @dynamic playTogetherInfoJumpInfo;
@property(retain, nonatomic) FinderLiveQuestEntranceInfo *questEntranceInfo; // @dynamic questEntranceInfo;
@property(nonatomic) unsigned int redpacketChatroomSelectStatus; // @dynamic redpacketChatroomSelectStatus;
@property(nonatomic) unsigned int shoppingNotAvailable; // @dynamic shoppingNotAvailable;
@property(nonatomic) _Bool showThreeDimensionalViewEntrance; // @dynamic showThreeDimensionalViewEntrance;
@property(retain, nonatomic) SongListInfo *songListInfo; // @dynamic songListInfo;
@property(retain, nonatomic) FinderJumpInfo *threeDimensionalViewEntrance; // @dynamic threeDimensionalViewEntrance;
@property(retain, nonatomic) NSMutableArray *visibilityFileList; // @dynamic visibilityFileList;

@end

