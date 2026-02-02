//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData;

@class WXPBGeneratedMessage;

@interface WxaRuntimeGetDeeplinkInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *respData; // @dynamic respData;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

