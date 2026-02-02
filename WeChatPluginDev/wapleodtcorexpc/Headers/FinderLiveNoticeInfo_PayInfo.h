//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLivePaymentSetting, NSData;

@interface FinderLiveNoticeInfo_PayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool hasPurchase; // @dynamic hasPurchase;
@property(nonatomic) _Bool isPay; // @dynamic isPay;
@property(nonatomic) unsigned int needGetPaymentItems; // @dynamic needGetPaymentItems;
@property(retain, nonatomic) NSData *paymentBuff; // @dynamic paymentBuff;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @dynamic paymentSetting;
@property(nonatomic) unsigned int price; // @dynamic price;
@property(nonatomic) unsigned int purchaseUserCount; // @dynamic purchaseUserCount;

@end

