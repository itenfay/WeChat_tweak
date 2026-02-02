//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface EmojiUploadInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *emojiBuffer; // @dynamic emojiBuffer;
@property(retain, nonatomic) NSString *externXml; // @dynamic externXml;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) int newXmlFlag; // @dynamic newXmlFlag;
@property(retain, nonatomic) NSString *report; // @dynamic report;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) int totalLen; // @dynamic totalLen;
@property(nonatomic) int type; // @dynamic type;

@end

