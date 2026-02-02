//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetContactResponse : WXPBGeneratedMessage
{
    int retMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int contactCount; // @dynamic contactCount;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
@property(retain, nonatomic) NSMutableArray *ret; // @dynamic ret;
@property(retain, nonatomic) NSMutableArray *sendMsgTicketList; // @dynamic sendMsgTicketList;
@property(retain, nonatomic) NSMutableArray *verifyUserValidTicketList; // @dynamic verifyUserValidTicketList;

@end

