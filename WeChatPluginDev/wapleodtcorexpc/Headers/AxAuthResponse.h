//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, HostAlgoList, SKBuiltinBuffer_t;

@interface AxAuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientSessionKey; // @dynamic clientSessionKey;
@property(retain, nonatomic) HostAlgoList *hostAlgoListResp; // @dynamic hostAlgoListResp;
@property(retain, nonatomic) SKBuiltinBuffer_t *serverSessionKey; // @dynamic serverSessionKey;

@end

