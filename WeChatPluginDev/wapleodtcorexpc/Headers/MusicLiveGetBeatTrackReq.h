//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMVInfo_FinderMVSongInfo, NSString;

@interface MusicLiveGetBeatTrackReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *dataUrl; // @dynamic dataUrl;
@property(retain, nonatomic) NSString *singer; // @dynamic singer;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *songid; // @dynamic songid;
@property(retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo; // @dynamic songinfo;
@property(nonatomic) unsigned int timeLengthMs; // @dynamic timeLengthMs;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

