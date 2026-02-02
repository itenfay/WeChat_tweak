//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderShopCouponInfo_AcquireInfo, FinderShopCouponInfo_Condition, FinderShopCouponInfo_CouponPromoteMoneyOffExtraInfo, FinderWindowProductInfo, NSString;

@interface FinderShopCouponInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *typeWording;

// Remaining properties
@property(retain, nonatomic) FinderShopCouponInfo_AcquireInfo *acquireInfo; // @dynamic acquireInfo;
@property(retain, nonatomic) NSString *anchorCouponHintWording; // @dynamic anchorCouponHintWording;
@property(retain, nonatomic) FinderWindowProductInfo *associatedProduct; // @dynamic associatedProduct;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(nonatomic) unsigned int clickButtonAction; // @dynamic clickButtonAction;
@property(nonatomic) unsigned int clickButtonStyle; // @dynamic clickButtonStyle;
@property(retain, nonatomic) FinderShopCouponInfo_Condition *condition; // @dynamic condition;
@property(retain, nonatomic) NSString *couponDescInfo; // @dynamic couponDescInfo;
@property(retain, nonatomic) NSString *couponHeadWording; // @dynamic couponHeadWording;
@property(retain, nonatomic) NSString *couponId; // @dynamic couponId;
@property(nonatomic) unsigned long long couponMinimum; // @dynamic couponMinimum;
@property(retain, nonatomic) NSString *couponName; // @dynamic couponName;
@property(nonatomic) unsigned int couponPromoteType; // @dynamic couponPromoteType;
@property(nonatomic) unsigned int couponSourceType; // @dynamic couponSourceType;
@property(nonatomic) unsigned int couponStatus; // @dynamic couponStatus;
@property(retain, nonatomic) NSString *couponTypeWording; // @dynamic couponTypeWording;
@property(nonatomic) unsigned long long couponValue; // @dynamic couponValue;
@property(retain, nonatomic) NSString *discountWording; // @dynamic discountWording;
@property(retain, nonatomic) NSString *expiredWording; // @dynamic expiredWording;
@property(nonatomic) unsigned long long expiryTimestamp; // @dynamic expiryTimestamp;
@property(nonatomic) unsigned int isSingle; // @dynamic isSingle;
@property(retain, nonatomic) FinderShopCouponInfo_CouponPromoteMoneyOffExtraInfo *moneyOffInfo; // @dynamic moneyOffInfo;
@property(nonatomic) unsigned int remainCouponCount; // @dynamic remainCouponCount;
@property(retain, nonatomic) NSString *sourceMerchantName; // @dynamic sourceMerchantName;
@property(retain, nonatomic) NSString *stockId; // @dynamic stockId;
@property(nonatomic) unsigned int stockStatus; // @dynamic stockStatus;
@property(retain, nonatomic) NSString *tailBackgroundUrl; // @dynamic tailBackgroundUrl;
@property(nonatomic) unsigned int taskType; // @dynamic taskType;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

