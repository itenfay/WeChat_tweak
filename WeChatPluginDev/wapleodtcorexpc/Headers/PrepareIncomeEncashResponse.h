//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, InterceptPopUp, NSData, WxPayUserTokenParams;

@class WXPBGeneratedMessage;

@interface PrepareIncomeEncashResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *ctxBuff; // @dynamic ctxBuff;
@property(retain, nonatomic) InterceptPopUp *interceptInfo; // @dynamic interceptInfo;
@property(retain, nonatomic) WxPayUserTokenParams *tokenParams; // @dynamic tokenParams;

@end

