//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface RecommendedMusicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (unsigned long long)musicReportType;
- (void)setMusicReportType:(unsigned long long)arg1;
- (id)uniqueId;
- (_Bool)isEqualToMusicData:(id)arg1;
- (id)musicLyricInfos;
- (_Bool)isMusicLiked;
- (_Bool)playable;
- (unsigned long long)songDurationInMs;
- (id)songAuthorName;
- (id)coverUrl;
- (id)musicId;
@property(readonly, copy) NSString *description;
- (int)finderMusicType;
- (unsigned long long)finderMusicId;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *colorList; // @dynamic colorList;
@property(nonatomic) _Bool containFullVer; // @dynamic containFullVer;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) float emotionScore; // @dynamic emotionScore;
@property(nonatomic) unsigned int fid; // @dynamic fid;
@property(nonatomic) unsigned int fullDuration; // @dynamic fullDuration;
@property(retain, nonatomic) NSString *fullLyric; // @dynamic fullLyric;
@property(retain, nonatomic) NSString *fullMusicUrl; // @dynamic fullMusicUrl;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *hitInfo; // @dynamic hitInfo;
@property(nonatomic) int isLike; // @dynamic isLike;
@property(nonatomic) unsigned long long listenId; // @dynamic listenId;
@property(retain, nonatomic) NSMutableArray *lyrics; // @dynamic lyrics;
@property(retain, nonatomic) NSString *miaojianMusicId; // @dynamic miaojianMusicId;
@property(nonatomic) unsigned int musicSid; // @dynamic musicSid;
@property(nonatomic) unsigned int musicType; // @dynamic musicType;
@property(retain, nonatomic) NSString *musicUrl; // @dynamic musicUrl;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(retain, nonatomic) NSString *playUrl; // @dynamic playUrl;
@property(retain, nonatomic) NSString *recommendDesc; // @dynamic recommendDesc;
@property(nonatomic) unsigned int showLyric; // @dynamic showLyric;
@property(retain, nonatomic) NSMutableArray *singerName; // @dynamic singerName;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(readonly) Class superclass;
@property(nonatomic) float tempoScore; // @dynamic tempoScore;

@end

