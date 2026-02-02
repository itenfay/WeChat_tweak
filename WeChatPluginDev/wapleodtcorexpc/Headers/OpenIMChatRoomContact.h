//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, OpenIMChatRoomData, OpenIMChatRoomMemberData;

@interface OpenIMChatRoomContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int bitMask; // @dynamic bitMask;
@property(nonatomic) unsigned int bitVal; // @dynamic bitVal;
@property(retain, nonatomic) OpenIMChatRoomData *chatRoom; // @dynamic chatRoom;
@property(nonatomic) unsigned int chatRoomNotify; // @dynamic chatRoomNotify;
@property(nonatomic) unsigned int contactType; // @dynamic contactType;
@property(retain, nonatomic) OpenIMChatRoomMemberData *memberData; // @dynamic memberData;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(nonatomic) unsigned int svrChatroomVersion; // @dynamic svrChatroomVersion;
@property(nonatomic) unsigned int svrMemberVersion; // @dynamic svrMemberVersion;

@end

