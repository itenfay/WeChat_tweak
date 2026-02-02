//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenMusicStory_JumpInfo, MMListenUserInfo, NSMutableArray, NSString;

@interface MMListenMusicStory : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *abstract; // @dynamic abstract;
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) MMListenUserInfo *authorInfo; // @dynamic authorInfo;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(retain, nonatomic) NSMutableArray *feedbackInfos; // @dynamic feedbackInfos;
@property(retain, nonatomic) NSString *headImg; // @dynamic headImg;
@property(retain, nonatomic) MMListenMusicStory_JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *storyListenId; // @dynamic storyListenId;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

