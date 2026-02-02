//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAppMsgOption, MusicLiveMsg, NSString;

@interface MusicLiveMsgPack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *climsgid; // @dynamic climsgid;
@property(nonatomic) unsigned int createtime; // @dynamic createtime;
@property(retain, nonatomic) NSString *fromHeadimgurl; // @dynamic fromHeadimgurl;
@property(retain, nonatomic) NSString *fromNickname; // @dynamic fromNickname;
@property(nonatomic) unsigned int isMyPost; // @dynamic isMyPost;
@property(retain, nonatomic) MusicLiveMsg *msg; // @dynamic msg;
@property(nonatomic) unsigned long long msgid; // @dynamic msgid;
@property(nonatomic) unsigned long long mvId; // @dynamic mvId;
@property(retain, nonatomic) NSString *mvPostNickname; // @dynamic mvPostNickname;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(retain, nonatomic) FinderLiveAppMsgOption *option; // @dynamic option;
@property(retain, nonatomic) NSString *songid; // @dynamic songid;

@end

