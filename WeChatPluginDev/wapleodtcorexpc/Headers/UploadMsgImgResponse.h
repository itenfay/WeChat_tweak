//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinString_t;

@interface UploadMsgImgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionFlag; // @dynamic actionFlag;
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinString_t *clientImgId; // @dynamic clientImgId;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;
@property(retain, nonatomic) NSString *fileId; // @dynamic fileId;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

