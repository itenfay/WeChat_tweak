//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface SetPwdResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey; // @dynamic autoAuthKey;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;

@end

