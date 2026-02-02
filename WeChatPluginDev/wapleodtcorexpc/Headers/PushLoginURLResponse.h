//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface PushLoginURLResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent; // @dynamic blueToothBroadCastContent;
@property(retain, nonatomic) NSString *blueToothBroadCastUuid; // @dynamic blueToothBroadCastUuid;
@property(nonatomic) unsigned int checkTime; // @dynamic checkTime;
@property(nonatomic) unsigned int expiredTime; // @dynamic expiredTime;
@property(retain, nonatomic) SKBuiltinBuffer_t *notifyKey; // @dynamic notifyKey;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

