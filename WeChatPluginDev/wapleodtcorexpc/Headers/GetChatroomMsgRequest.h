//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinString_t;

@interface GetChatRoomMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinString_t *chatroomId; // @dynamic chatroomId;
@property(nonatomic) unsigned int clearFlag; // @dynamic clearFlag;
@property(nonatomic) unsigned int filterSeq; // @dynamic filterSeq;
@property(nonatomic) unsigned int msgSeq; // @dynamic msgSeq;
@property(nonatomic) unsigned int needCount; // @dynamic needCount;
@property(nonatomic) unsigned int upDownFlag; // @dynamic upDownFlag;
@property(nonatomic) unsigned int webSeqBlockFlag; // @dynamic webSeqBlockFlag;

@end

