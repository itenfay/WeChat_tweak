//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdminInfo, ChatroomNotice, JumpInfo, NSMutableArray, NSString;

@interface ChatroomData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AdminInfo *adminInfo; // @dynamic adminInfo;
@property(nonatomic) unsigned int allowUserNum; // @dynamic allowUserNum;
@property(retain, nonatomic) NSString *announcement; // @dynamic announcement;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *applicationQuestion; // @dynamic applicationQuestion;
@property(retain, nonatomic) JumpInfo *applyJumpInfo; // @dynamic applyJumpInfo;
@property(nonatomic) _Bool canChat; // @dynamic canChat;
@property(nonatomic) _Bool canJoin; // @dynamic canJoin;
@property(nonatomic) _Bool canOnlooker; // @dynamic canOnlooker;
@property(retain, nonatomic) NSString *chatroomIcon; // @dynamic chatroomIcon;
@property(retain, nonatomic) JumpInfo *chatroomMemberJumpInfo; // @dynamic chatroomMemberJumpInfo;
@property(retain, nonatomic) NSString *chatroomName; // @dynamic chatroomName;
@property(retain, nonatomic) JumpInfo *chatroomProfileJumpInfo; // @dynamic chatroomProfileJumpInfo;
@property(retain, nonatomic) NSMutableArray *chatroomTagList; // @dynamic chatroomTagList;
@property(nonatomic) unsigned int chatroomType; // @dynamic chatroomType;
@property(nonatomic) _Bool isPrivate; // @dynamic isPrivate;
@property(nonatomic) unsigned int kickOutType; // @dynamic kickOutType;
@property(retain, nonatomic) ChatroomNotice *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *reportStr; // @dynamic reportStr;
@property(nonatomic) unsigned int roomMemberNum; // @dynamic roomMemberNum;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(retain, nonatomic) NSMutableArray *ruleList; // @dynamic ruleList;
@property(nonatomic) _Bool topChatroom; // @dynamic topChatroom;
@property(nonatomic) unsigned int userChatroomRelation; // @dynamic userChatroomRelation;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

