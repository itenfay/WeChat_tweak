//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EcProductCard_CouponInfo, EcProductCard_DescWordInfo, EcProductCard_GuaranteeInfo, EcProductCard_LimitDiscountInfo, EcProductCard_ShowBoxPictureInfo, NSData, NSString;

@interface EcProductCard_ShowBoxItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, nonatomic) EcProductCard_ShowBoxPictureInfo *pictureInfo;
@property(readonly, nonatomic) EcProductCard_GuaranteeInfo *guaranteeInfo;
@property(readonly, nonatomic) EcProductCard_DescWordInfo *descWordInfo;
@property(readonly, nonatomic) EcProductCard_LimitDiscountInfo *limitDiscountInfo;
@property(readonly, nonatomic) EcProductCard_CouponInfo *couponInfo;

// Remaining properties
@property(retain, nonatomic) NSString *extraReportData; // @dynamic extraReportData;
@property(nonatomic) unsigned int showBoxElementContextType; // @dynamic showBoxElementContextType;
@property(retain, nonatomic) NSData *showBoxItem; // @dynamic showBoxItem;
@property(retain, nonatomic) NSString *showBoxItemJson; // @dynamic showBoxItemJson;
@property(nonatomic) unsigned int showBoxItemType; // @dynamic showBoxItemType;

@end

