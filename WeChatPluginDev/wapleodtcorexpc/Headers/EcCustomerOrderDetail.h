//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddressInfo, DetailLink, NSMutableArray, NSString, NoteInfo, PayInfo, PriceInfo, SalesFinderInfo, ShopInfo, SimpleDeliveryInfo;

@interface EcCustomerOrderDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int afterSalesState; // @dynamic afterSalesState;
@property(retain, nonatomic) AddressInfo *customerAddressInfo; // @dynamic customerAddressInfo;
@property(retain, nonatomic) NoteInfo *customerNote; // @dynamic customerNote;
@property(retain, nonatomic) DetailLink *customerServiceDetailLink; // @dynamic customerServiceDetailLink;
@property(retain, nonatomic) SimpleDeliveryInfo *deliveryInfo; // @dynamic deliveryInfo;
@property(nonatomic) unsigned long long orderCloseTime; // @dynamic orderCloseTime;
@property(nonatomic) unsigned long long orderCreateTime; // @dynamic orderCreateTime;
@property(retain, nonatomic) DetailLink *orderDetailLink; // @dynamic orderDetailLink;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(nonatomic) unsigned int orderState; // @dynamic orderState;
@property(retain, nonatomic) PayInfo *payInfo; // @dynamic payInfo;
@property(retain, nonatomic) PriceInfo *priceInfo; // @dynamic priceInfo;
@property(retain, nonatomic) SalesFinderInfo *salesFinderInfo; // @dynamic salesFinderInfo;
@property(retain, nonatomic) ShopInfo *shopInfo; // @dynamic shopInfo;
@property(retain, nonatomic) NSMutableArray *skuList; // @dynamic skuList;

@end

