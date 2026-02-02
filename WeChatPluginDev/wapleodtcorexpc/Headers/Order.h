//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AfterSalesInfo, DeliveryInfo, EcWxaInfo, NSData, NSMutableArray, NSString, PriceInfo, SellerInfo, SrcInfo, UserInfo;

@interface Order : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AfterSalesInfo *afterSaleInfo; // @dynamic afterSaleInfo;
@property(retain, nonatomic) UserInfo *buyer; // @dynamic buyer;
@property(nonatomic) unsigned long long closeTime; // @dynamic closeTime;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) DeliveryInfo *deliveryInfo; // @dynamic deliveryInfo;
@property(retain, nonatomic) NSMutableArray *evaluationInfos; // @dynamic evaluationInfos;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSMutableArray *notes; // @dynamic notes;
@property(retain, nonatomic) NSMutableArray *orderCouponcodeInfo; // @dynamic orderCouponcodeInfo;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(retain, nonatomic) NSMutableArray *orderProductCommissionInfo; // @dynamic orderProductCommissionInfo;
@property(retain, nonatomic) NSMutableArray *orderProductInfo; // @dynamic orderProductInfo;
@property(retain, nonatomic) EcWxaInfo *orderWxaInfo; // @dynamic orderWxaInfo;
@property(retain, nonatomic) NSMutableArray *payInfo; // @dynamic payInfo;
@property(retain, nonatomic) PriceInfo *priceInfo; // @dynamic priceInfo;
@property(retain, nonatomic) UserInfo *referrer; // @dynamic referrer;
@property(retain, nonatomic) NSString *rootOrderId; // @dynamic rootOrderId;
@property(retain, nonatomic) SellerInfo *sellerInfo; // @dynamic sellerInfo;
@property(retain, nonatomic) SrcInfo *srcInfo; // @dynamic srcInfo;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(nonatomic) unsigned long long updateTime; // @dynamic updateTime;

@end

