//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SKBuiltinBuffer_t;

@interface HardDeviceAuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int blockTimeout; // @dynamic blockTimeout;
@property(nonatomic) unsigned int cacheTimeout; // @dynamic cacheTimeout;
@property(nonatomic) unsigned int cryptMethod; // @dynamic cryptMethod;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuffer; // @dynamic keyBuffer;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionKey; // @dynamic sessionKey;

@end

