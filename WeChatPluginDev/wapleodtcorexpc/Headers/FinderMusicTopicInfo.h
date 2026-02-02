//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMusicInfo, FinderMusicTopicTagInfo, MusicRelatedRecommendInfo, NSMutableArray, NSString;

@interface FinderMusicTopicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int copyrightMark; // @dynamic copyrightMark;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(nonatomic) unsigned int favAvailableFlag; // @dynamic favAvailableFlag;
@property(nonatomic) unsigned int favFlag; // @dynamic favFlag;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned long long listenSongId; // @dynamic listenSongId;
@property(nonatomic) unsigned int listenSongLikeFlag; // @dynamic listenSongLikeFlag;
@property(retain, nonatomic) NSString *miaojianSdkPrefix; // @dynamic miaojianSdkPrefix;
@property(retain, nonatomic) NSString *musicAudioId; // @dynamic musicAudioId;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;
@property(nonatomic) unsigned int musicSourceType; // @dynamic musicSourceType;
@property(nonatomic) unsigned long long musicTopicId; // @dynamic musicTopicId;
@property(retain, nonatomic) NSString *musicTopicName; // @dynamic musicTopicName;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(nonatomic) unsigned int readCountShowType; // @dynamic readCountShowType;
@property(nonatomic) unsigned int recentReadCount; // @dynamic recentReadCount;
@property(retain, nonatomic) MusicRelatedRecommendInfo *relatedMusic; // @dynamic relatedMusic;
@property(retain, nonatomic) NSMutableArray *singers; // @dynamic singers;
@property(retain, nonatomic) FinderMusicTopicTagInfo *tabInfo; // @dynamic tabInfo;

@end

