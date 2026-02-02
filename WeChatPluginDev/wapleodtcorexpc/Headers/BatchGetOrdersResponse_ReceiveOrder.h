//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BatchGetOrdersResponse_ReceiveOrder : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) long long amount; // @dynamic amount;
@property(nonatomic) long long receiveTime; // @dynamic receiveTime;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *senderUsername; // @dynamic senderUsername;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

