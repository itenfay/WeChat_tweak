//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SKBuiltinBuffer_t;

@interface HeartBeatResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent; // @dynamic blueToothBroadCastContent;
@property(nonatomic) unsigned int nextTime; // @dynamic nextTime;
@property(nonatomic) unsigned int selector; // @dynamic selector;

@end

