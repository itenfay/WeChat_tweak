//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, FinderLiveKtvSongPlayInfo, NSString;

@interface FinderLiveKtvSongInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *level; // @dynamic level;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @dynamic liveContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) _Bool pause; // @dynamic pause;
@property(retain, nonatomic) FinderLiveKtvSongPlayInfo *playInfo; // @dynamic playInfo;
@property(nonatomic) unsigned int score; // @dynamic score;
@property(nonatomic) unsigned int songAddTime; // @dynamic songAddTime;
@property(nonatomic) unsigned int songConfirmPlayTime; // @dynamic songConfirmPlayTime;
@property(nonatomic) unsigned int songFinishTime; // @dynamic songFinishTime;
@property(retain, nonatomic) NSString *songMid; // @dynamic songMid;
@property(nonatomic) unsigned int songPlayTime; // @dynamic songPlayTime;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

