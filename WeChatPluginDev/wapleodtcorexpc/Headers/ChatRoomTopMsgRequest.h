//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ChatRoomTopMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatRoomName; // @dynamic chatRoomName;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientBuf; // @dynamic clientBuf;
@property(nonatomic) unsigned int msgCreateTime; // @dynamic msgCreateTime;
@property(retain, nonatomic) NSString *msgStrId; // @dynamic msgStrId;
@property(retain, nonatomic) NSString *msgSummary; // @dynamic msgSummary;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *msgUserName; // @dynamic msgUserName;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int op; // @dynamic op;

@end

