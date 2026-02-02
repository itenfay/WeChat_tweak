//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MusicLiveSearchMusicRespInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumCoverUrl; // @dynamic albumCoverUrl;
@property(nonatomic) unsigned int audioType; // @dynamic audioType;
@property(nonatomic) unsigned int durationMs; // @dynamic durationMs;
@property(retain, nonatomic) NSString *identification; // @dynamic identification;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(retain, nonatomic) NSString *mid; // @dynamic mid;
@property(retain, nonatomic) NSString *musicAppid; // @dynamic musicAppid;
@property(retain, nonatomic) NSString *musicDataUrl; // @dynamic musicDataUrl;
@property(retain, nonatomic) NSString *musicWeburl; // @dynamic musicWeburl;
@property(retain, nonatomic) NSString *singerHitInfo; // @dynamic singerHitInfo;
@property(retain, nonatomic) NSMutableArray *singerNames; // @dynamic singerNames;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *songNameHitInfo; // @dynamic songNameHitInfo;

@end

