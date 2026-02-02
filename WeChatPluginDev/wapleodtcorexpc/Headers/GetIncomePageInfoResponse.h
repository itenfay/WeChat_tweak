//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CoinBanner, LiteappJumpInfo, NSString, RealNameAuthInfo, WecoinTaxCutEntranceInfo;

@interface GetIncomePageInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RealNameAuthInfo *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) CoinBanner *banner; // @dynamic banner;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool encashButtonValid; // @dynamic encashButtonValid;
@property(retain, nonatomic) LiteappJumpInfo *encashInterceptJumpInfo; // @dynamic encashInterceptJumpInfo;
@property(retain, nonatomic) NSString *encashLimitWording; // @dynamic encashLimitWording;
@property(nonatomic) long long incomeBalance; // @dynamic incomeBalance;
@property(retain, nonatomic) NSString *incomeBillUrl; // @dynamic incomeBillUrl;
@property(nonatomic) long long pendingIncomeBalance; // @dynamic pendingIncomeBalance;
@property(retain, nonatomic) NSString *qaUrl; // @dynamic qaUrl;
@property(retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo; // @dynamic taxCutInfo;

@end

