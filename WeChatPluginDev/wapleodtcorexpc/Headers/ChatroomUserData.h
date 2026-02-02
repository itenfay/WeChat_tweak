//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AccountIdentityInfo, JumpInfo, LbsInfo, NSString, TagInfo, UserRole;

@interface ChatroomUserData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *avatar; // @dynamic avatar;
@property(nonatomic) _Bool canAtAll; // @dynamic canAtAll;
@property(nonatomic) _Bool canBeAt; // @dynamic canBeAt;
@property(nonatomic) _Bool canBeKicked; // @dynamic canBeKicked;
@property(nonatomic) _Bool canKickMember; // @dynamic canKickMember;
@property(retain, nonatomic) NSString *chatroomName; // @dynamic chatroomName;
@property(retain, nonatomic) JumpInfo *createAccountJumpInfo; // @dynamic createAccountJumpInfo;
@property(retain, nonatomic) NSString *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) JumpInfo *h5ProfileJumpInfo; // @dynamic h5ProfileJumpInfo;
@property(retain, nonatomic) AccountIdentityInfo *indentity; // @dynamic indentity;
@property(nonatomic) _Bool isAuthorized; // @dynamic isAuthorized;
@property(nonatomic) _Bool isRobot; // @dynamic isRobot;
@property(nonatomic) _Bool isSelf; // @dynamic isSelf;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) LbsInfo *lbsInfo; // @dynamic lbsInfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int role; // @dynamic role;
@property(nonatomic) unsigned int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) TagInfo *tagInfo; // @dynamic tagInfo;
@property(retain, nonatomic) UserRole *userRole; // @dynamic userRole;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

