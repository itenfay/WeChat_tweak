//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface GetContactRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *antispamTicket; // @dynamic antispamTicket;
@property(nonatomic) unsigned int antispamTicketCount; // @dynamic antispamTicketCount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinString_t *chatRoomAccessVerifyTicket; // @dynamic chatRoomAccessVerifyTicket;
@property(retain, nonatomic) NSMutableArray *fromChatRoom; // @dynamic fromChatRoom;
@property(nonatomic) unsigned int fromChatRoomCount; // @dynamic fromChatRoomCount;
@property(nonatomic) unsigned int getContactScene; // @dynamic getContactScene;
@property(nonatomic) unsigned int userCount; // @dynamic userCount;
@property(retain, nonatomic) NSMutableArray *userNameList; // @dynamic userNameList;

@end

