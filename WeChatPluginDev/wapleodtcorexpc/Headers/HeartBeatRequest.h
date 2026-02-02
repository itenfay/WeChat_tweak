//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface HeartBeatRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent; // @dynamic blueToothBroadCastContent;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;

@end

