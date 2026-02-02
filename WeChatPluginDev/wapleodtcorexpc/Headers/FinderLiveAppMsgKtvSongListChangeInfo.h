//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveKtvPlayerWaitList, FinderLiveKtvSongInfo, NSMutableArray;

@interface FinderLiveAppMsgKtvSongListChangeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveKtvSongInfo *changeSongInfo; // @dynamic changeSongInfo;
@property(nonatomic) unsigned int firstSongVersion; // @dynamic firstSongVersion;
@property(retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList; // @dynamic ktvPlayerWaitList;
@property(nonatomic) unsigned int modType; // @dynamic modType;
@property(retain, nonatomic) NSMutableArray *songInfoList; // @dynamic songInfoList;
@property(nonatomic) unsigned long long songListVersion; // @dynamic songListVersion;

@end

