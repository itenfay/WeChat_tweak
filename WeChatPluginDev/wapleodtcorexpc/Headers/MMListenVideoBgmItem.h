//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenSimplePlayableInfo, NSMutableArray, NSString;

@interface MMListenVideoBgmItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (unsigned long long)musicReportType;
- (void)setMusicReportType:(unsigned long long)arg1;
- (int)bgmItemType;
- (id)uniqueId;
- (id)feedId;
- (_Bool)isEqualToMusicData:(id)arg1;
- (id)musicLyricInfos;
- (_Bool)isMusicLiked;
- (id)songAuthorName;
- (id)songName;
- (id)coverUrl;
- (id)musicId;
- (unsigned long long)songDurationInMs;
- (unsigned long long)musicStartTimeInMs;
@property(readonly, copy) NSString *description;
- (id)musicUrl;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *colorList; // @dynamic colorList;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) float emotionScore; // @dynamic emotionScore;
@property(nonatomic) unsigned int fid; // @dynamic fid;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *hitInfo; // @dynamic hitInfo;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(nonatomic) unsigned long long mirBegin; // @dynamic mirBegin;
@property(nonatomic) unsigned long long mirEnd; // @dynamic mirEnd;
@property(nonatomic) unsigned int musicSid; // @dynamic musicSid;
@property(nonatomic) unsigned int musicType; // @dynamic musicType;
@property(nonatomic) int playable; // @dynamic playable;
@property(retain, nonatomic) MMListenSimplePlayableInfo *playableInfo; // @dynamic playableInfo;
@property(retain, nonatomic) NSString *recommendBuf; // @dynamic recommendBuf;
@property(retain, nonatomic) NSString *recommendDesc; // @dynamic recommendDesc;
@property(readonly) Class superclass;
@property(nonatomic) float tempoScore; // @dynamic tempoScore;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

