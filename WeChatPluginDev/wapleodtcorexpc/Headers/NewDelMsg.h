//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NewDelMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) int msgId; // @dynamic msgId;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(nonatomic) long long newMsgId; // @dynamic newMsgId;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

