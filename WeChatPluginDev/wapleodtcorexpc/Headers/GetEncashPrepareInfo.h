//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiteappJumpInfo, NSString, RealNameAuthInfo, WecoinTaxCutEntranceInfo;

@interface GetEncashPrepareInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RealNameAuthInfo *authInfo; // @dynamic authInfo;
@property(nonatomic) unsigned int businessId; // @dynamic businessId;
@property(retain, nonatomic) LiteappJumpInfo *encashInterceptJumpInfo; // @dynamic encashInterceptJumpInfo;
@property(nonatomic) long long incomeBalance; // @dynamic incomeBalance;
@property(retain, nonatomic) NSString *incomeBillUrl; // @dynamic incomeBillUrl;
@property(nonatomic) long long pendingIncomeBalance; // @dynamic pendingIncomeBalance;
@property(retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo; // @dynamic taxCutInfo;

@end

