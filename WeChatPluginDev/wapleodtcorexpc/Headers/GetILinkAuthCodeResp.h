//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData;

@class WXPBGeneratedMessage;

@interface GetILinkAuthCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSData *ilinkAuthCode; // @dynamic ilinkAuthCode;

@end

