//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveKtvPlayerWaitList, NSMutableArray;

@interface FinderLiveSyncKtvInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int allWaitSongSize; // @dynamic allWaitSongSize;
@property(nonatomic) unsigned int firstSongVersion; // @dynamic firstSongVersion;
@property(retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList; // @dynamic ktvPlayerWaitList;
@property(nonatomic) unsigned int selfWaitSongSize; // @dynamic selfWaitSongSize;
@property(retain, nonatomic) NSMutableArray *songInfoList; // @dynamic songInfoList;
@property(nonatomic) unsigned long long songListVersion; // @dynamic songListVersion;
@property(nonatomic) unsigned int stayTrtcRoomTimeAfterStopSinging; // @dynamic stayTrtcRoomTimeAfterStopSinging;

@end

