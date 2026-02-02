//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ApplePayMerchantInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int applePayLaterAvailability; // @dynamic applePayLaterAvailability;
@property(retain, nonatomic) NSString *applePayMerchantId; // @dynamic applePayMerchantId;
@property(retain, nonatomic) NSString *appliactionData; // @dynamic appliactionData;
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) NSString *couponCode; // @dynamic couponCode;
@property(retain, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property(retain, nonatomic) NSMutableArray *merchantCapabilities; // @dynamic merchantCapabilities;
@property(retain, nonatomic) NSMutableArray *paymentSummaryItems; // @dynamic paymentSummaryItems;
@property(retain, nonatomic) NSMutableArray *supportedCountries; // @dynamic supportedCountries;
@property(retain, nonatomic) NSMutableArray *supportedNetworks; // @dynamic supportedNetworks;
@property(nonatomic) _Bool supportsCouponCode; // @dynamic supportsCouponCode;

@end

