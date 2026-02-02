//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinString_t;

@interface ForwardMsgViewInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int appMsgInnerType; // @dynamic appMsgInnerType;
@property(nonatomic) int createTime; // @dynamic createTime;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(nonatomic) int msgId; // @dynamic msgId;
@property(nonatomic) unsigned int msgSeq; // @dynamic msgSeq;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) long long newMsgId; // @dynamic newMsgId;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;

@end

