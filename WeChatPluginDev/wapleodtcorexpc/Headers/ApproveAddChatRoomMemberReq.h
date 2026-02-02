//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ApproveAddChatRoomMemberReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long approvenewmsgid; // @dynamic approvenewmsgid;
@property(retain, nonatomic) NSString *inviterusername; // @dynamic inviterusername;
@property(retain, nonatomic) NSString *roomname; // @dynamic roomname;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSMutableArray *username; // @dynamic username;

@end

