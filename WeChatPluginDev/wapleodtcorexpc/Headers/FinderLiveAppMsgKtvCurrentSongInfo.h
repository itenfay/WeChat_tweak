//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveKtvSongInfo;

@interface FinderLiveAppMsgKtvCurrentSongInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int firstSongVersion; // @dynamic firstSongVersion;
@property(retain, nonatomic) FinderLiveKtvSongInfo *nextSongInfo; // @dynamic nextSongInfo;
@property(retain, nonatomic) FinderLiveKtvSongInfo *songInfo; // @dynamic songInfo;

@end

