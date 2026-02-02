//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface RevokeMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int indexOfRequest; // @dynamic indexOfRequest;
@property(nonatomic) unsigned int newClientMsgId; // @dynamic newClientMsgId;
@property(retain, nonatomic) NSString *revokeTicket; // @dynamic revokeTicket;
@property(nonatomic) unsigned int svrMsgId; // @dynamic svrMsgId;
@property(nonatomic) unsigned long long svrNewMsgId; // @dynamic svrNewMsgId;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

