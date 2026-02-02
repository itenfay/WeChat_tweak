//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveGetBalanceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long consumeQuotaBalance; // @dynamic consumeQuotaBalance;
@property(retain, nonatomic) NSString *consumeQuotaVerifyUrl; // @dynamic consumeQuotaVerifyUrl;
@property(nonatomic) unsigned long long historyConsumeQuotaBalance; // @dynamic historyConsumeQuotaBalance;
@property(nonatomic) unsigned long long wecoinBalance; // @dynamic wecoinBalance;

@end

