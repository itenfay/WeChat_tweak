//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLifeJumpInfo, NSString;

@interface ChatUserInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) NSString *avatar; // @dynamic avatar;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) GameLifeJumpInfo *profileJumpInfo; // @dynamic profileJumpInfo;
@property(nonatomic) unsigned int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

