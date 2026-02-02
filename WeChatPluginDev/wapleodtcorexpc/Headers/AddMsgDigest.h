//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinString_t;

@interface AddMsgDigest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinString_t *chatRoomId; // @dynamic chatRoomId;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) SKBuiltinString_t *digestContent; // @dynamic digestContent;
@property(nonatomic) unsigned int isAted; // @dynamic isAted;
@property(nonatomic) unsigned int msgSeq; // @dynamic msgSeq;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int unDeliverCount; // @dynamic unDeliverCount;

@end

