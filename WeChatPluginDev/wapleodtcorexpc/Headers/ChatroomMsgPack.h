//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MsgContent, MsgOptions, NSString;

@interface ChatroomMsgPack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int channelId; // @dynamic channelId;
@property(retain, nonatomic) NSString *cliMsgId; // @dynamic cliMsgId;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) MsgContent *msgContent; // @dynamic msgContent;
@property(retain, nonatomic) MsgOptions *msgOptions; // @dynamic msgOptions;
@property(nonatomic) int msgSubType; // @dynamic msgSubType;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) long long sendTime; // @dynamic sendTime;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

