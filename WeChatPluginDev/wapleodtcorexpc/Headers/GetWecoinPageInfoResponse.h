//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CoinBanner, NSString, WecoinNewUserTips, WecoinSubscriptionListEntrance;

@interface GetWecoinPageInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CoinBanner *banner; // @dynamic banner;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) long long incomeBalance; // @dynamic incomeBalance;
@property(retain, nonatomic) NSString *incomeBillUrl; // @dynamic incomeBillUrl;
@property(nonatomic) _Bool newUserDiscount; // @dynamic newUserDiscount;
@property(retain, nonatomic) WecoinNewUserTips *newUserTips; // @dynamic newUserTips;
@property(retain, nonatomic) NSString *qaUrl; // @dynamic qaUrl;
@property(nonatomic) _Bool showIncome; // @dynamic showIncome;
@property(retain, nonatomic) WecoinSubscriptionListEntrance *subscriptionListEntrance; // @dynamic subscriptionListEntrance;
@property(nonatomic) long long wecoinBalance; // @dynamic wecoinBalance;
@property(retain, nonatomic) NSString *wecoinBillUrl; // @dynamic wecoinBillUrl;

@end

