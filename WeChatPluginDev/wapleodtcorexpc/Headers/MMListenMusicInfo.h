//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenMusicInfo_DescByAuthor, MMListenMusicInfo_GenreInfo, MMListenMusicInfo_UserShare, MMListenSingerInfo_JumpInfo, NSMutableArray, NSString;

@interface MMListenMusicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isChannelMusic;
- (_Bool)canPlayCompletely;
- (id)singerList;
- (id)clientStandardizeSingerName;

// Remaining properties
@property(retain, nonatomic) NSString *albumCategoryId; // @dynamic albumCategoryId;
@property(nonatomic) unsigned long long albumFeedId; // @dynamic albumFeedId;
@property(retain, nonatomic) NSString *albumId; // @dynamic albumId;
@property(retain, nonatomic) NSString *albumName; // @dynamic albumName;
@property(retain, nonatomic) NSString *albumUrl; // @dynamic albumUrl;
@property(retain, nonatomic) NSMutableArray *backgroundContents; // @dynamic backgroundContents;
@property(retain, nonatomic) NSString *clickPlayToast; // @dynamic clickPlayToast;
@property(retain, nonatomic) MMListenMusicInfo_DescByAuthor *descByAuthor; // @dynamic descByAuthor;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSString *genre; // @dynamic genre;
@property(retain, nonatomic) MMListenMusicInfo_GenreInfo *genreInfo; // @dynamic genreInfo;
@property(retain, nonatomic) NSString *identification; // @dynamic identification;
@property(nonatomic) _Bool isFromWechat; // @dynamic isFromWechat;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) _Bool isPublishingLater; // @dynamic isPublishingLater;
@property(nonatomic) _Bool isTry; // @dynamic isTry;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(nonatomic) unsigned long long mirBegin; // @dynamic mirBegin;
@property(nonatomic) unsigned long long mirEnd; // @dynamic mirEnd;
@property(retain, nonatomic) NSString *musicAppid; // @dynamic musicAppid;
@property(retain, nonatomic) NSString *musicDataUrl; // @dynamic musicDataUrl;
@property(retain, nonatomic) NSString *musicGetlinkMid; // @dynamic musicGetlinkMid;
@property(retain, nonatomic) NSString *musicWeburl; // @dynamic musicWeburl;
@property(nonatomic) unsigned long long mvFeedId; // @dynamic mvFeedId;
@property(retain, nonatomic) NSMutableArray *otherSingerList; // @dynamic otherSingerList;
@property(retain, nonatomic) NSString *publicTime; // @dynamic publicTime;
@property(nonatomic) unsigned long long publicTimeS; // @dynamic publicTimeS;
@property(retain, nonatomic) NSString *singer; // @dynamic singer;
@property(retain, nonatomic) NSString *singerCategoryId; // @dynamic singerCategoryId;
@property(nonatomic) unsigned long long singerFeedId; // @dynamic singerFeedId;
@property(retain, nonatomic) NSString *singerId; // @dynamic singerId;
@property(retain, nonatomic) MMListenSingerInfo_JumpInfo *singerJumpInfo; // @dynamic singerJumpInfo;
@property(retain, nonatomic) NSString *singerPic; // @dynamic singerPic;
@property(retain, nonatomic) NSString *songId; // @dynamic songId;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *songTitle; // @dynamic songTitle;
@property(nonatomic) int songVersion; // @dynamic songVersion;
@property(retain, nonatomic) NSString *titleExtraDesc; // @dynamic titleExtraDesc;
@property(retain, nonatomic) NSString *unplayableReasonToast; // @dynamic unplayableReasonToast;
@property(retain, nonatomic) MMListenMusicInfo_UserShare *userShare; // @dynamic userShare;
@property(nonatomic) int vip; // @dynamic vip;

@end

