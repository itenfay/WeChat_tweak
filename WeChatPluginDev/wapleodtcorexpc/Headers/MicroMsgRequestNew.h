//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface MicroMsgRequestNew : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int ctrlBit; // @dynamic ctrlBit;
@property(retain, nonatomic) SKBuiltinBuffer_t *encryptedContent; // @dynamic encryptedContent;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

