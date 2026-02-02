//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface AddMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinString_t *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) SKBuiltinBuffer_t *imgBuf; // @dynamic imgBuf;
@property(nonatomic) unsigned int imgStatus; // @dynamic imgStatus;
@property(nonatomic) int msgId; // @dynamic msgId;
@property(nonatomic) unsigned int msgSeq; // @dynamic msgSeq;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) long long newMsgId; // @dynamic newMsgId;
@property(retain, nonatomic) NSString *pushContent; // @dynamic pushContent;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;

@end

