//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, EncashResultPageInfo, RetryInfo, WecoinTaxReConfirmHalfPageInfo;

@class WXPBGeneratedMessage;

@interface EncashIncomeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) EncashResultPageInfo *resultPageInfo; // @dynamic resultPageInfo;
@property(retain, nonatomic) RetryInfo *retryInfo; // @dynamic retryInfo;
@property(retain, nonatomic) WecoinTaxReConfirmHalfPageInfo *taxReconfirmInfo; // @dynamic taxReconfirmInfo;

@end

