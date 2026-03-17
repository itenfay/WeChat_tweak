//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, RetryInfo;

@class WXPBGeneratedMessage;

@interface ConsumeWecoinResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) RetryInfo *retryInfo; // @dynamic retryInfo;
@property(nonatomic) long long wecoinBalance; // @dynamic wecoinBalance;

@end

