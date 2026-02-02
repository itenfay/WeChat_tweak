//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse;

@class WXPBGeneratedMessage;

@interface GetIncomeBalanceResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) long long balance; // @dynamic balance;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;

@end

