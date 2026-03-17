//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

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

