//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetEmotionListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int category; // @dynamic category;
@property(retain, nonatomic) SKBuiltinBuffer_t *emotionListBuf; // @dynamic emotionListBuf;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqBuf; // @dynamic reqBuf;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *setKey; // @dynamic setKey;

@end

