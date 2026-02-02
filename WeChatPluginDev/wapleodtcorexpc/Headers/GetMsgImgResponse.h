//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface GetMsgImgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

