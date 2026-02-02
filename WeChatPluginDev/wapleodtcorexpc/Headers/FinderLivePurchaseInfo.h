//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLivePurchaseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int chargeFlag; // @dynamic chargeFlag;
@property(nonatomic) _Bool isPurchased; // @dynamic isPurchased;
@property(nonatomic) unsigned int needGetPaymentItems; // @dynamic needGetPaymentItems;
@property(retain, nonatomic) NSData *paymentBuff; // @dynamic paymentBuff;
@property(retain, nonatomic) NSString *promptWording; // @dynamic promptWording;
@property(nonatomic) unsigned long long purchaseHeat; // @dynamic purchaseHeat;
@property(nonatomic) unsigned int purchaseUserCount; // @dynamic purchaseUserCount;
@property(nonatomic) unsigned int unitPriceInWecoin; // @dynamic unitPriceInWecoin;

@end

