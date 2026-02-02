//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RealNameAuthInfo, WecoinTaxCutEntranceInfo;

@interface WCCoinEncashParameter
{
    unsigned long long _businessId;
    long long _incomeBalance;
    WecoinTaxCutEntranceInfo *_taxCutInfo;
    RealNameAuthInfo *_authInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RealNameAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo; // @synthesize taxCutInfo=_taxCutInfo;
@property(nonatomic) long long incomeBalance; // @synthesize incomeBalance=_incomeBalance;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;

@end

