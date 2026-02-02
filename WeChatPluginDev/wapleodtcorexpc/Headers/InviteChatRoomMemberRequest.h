//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, HistoryInfo, NSMutableArray, NSString, SKBuiltinString_t;

@class WXPBGeneratedMessage;

@interface InviteChatRoomMemberRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *accessApprovalTicket; // @dynamic accessApprovalTicket;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinString_t *chatRoomName; // @dynamic chatRoomName;
@property(retain, nonatomic) HistoryInfo *history; // @dynamic history;
@property(nonatomic) unsigned int inviteScene; // @dynamic inviteScene;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;

@end

