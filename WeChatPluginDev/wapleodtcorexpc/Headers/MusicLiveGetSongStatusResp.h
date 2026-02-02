//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MusicLiveGetSongStatusResp_MusicianInfo, NSString, RingBackDetail;

@interface MusicLiveGetSongStatusResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumName; // @dynamic albumName;
@property(retain, nonatomic) NSString *albumUrl; // @dynamic albumUrl;
@property(retain, nonatomic) NSString *androidDownloadUrl; // @dynamic androidDownloadUrl;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *genre; // @dynamic genre;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(retain, nonatomic) MusicLiveGetSongStatusResp_MusicianInfo *musician; // @dynamic musician;
@property(retain, nonatomic) NSString *publicTime; // @dynamic publicTime;
@property(nonatomic) unsigned long long publicTimeS; // @dynamic publicTimeS;
@property(retain, nonatomic) RingBackDetail *ringBackDetail; // @dynamic ringBackDetail;

@end

