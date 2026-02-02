//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SalesFinderInfo, ShopInfo, SimpleDeliveryInfo;

@interface EcCustomerOrder : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int afterSalesState; // @dynamic afterSalesState;
@property(retain, nonatomic) NSString *appUserName; // @dynamic appUserName;
@property(retain, nonatomic) SimpleDeliveryInfo *deliveryInfo; // @dynamic deliveryInfo;
@property(retain, nonatomic) NSString *evaluationAppUserName; // @dynamic evaluationAppUserName;
@property(retain, nonatomic) NSString *evaluationPagePath; // @dynamic evaluationPagePath;
@property(nonatomic) unsigned int evaluationStatus; // @dynamic evaluationStatus;
@property(retain, nonatomic) NSString *index; // @dynamic index;
@property(nonatomic) unsigned long long orderCloseTime; // @dynamic orderCloseTime;
@property(nonatomic) unsigned long long orderCreateTime; // @dynamic orderCreateTime;
@property(retain, nonatomic) NSString *orderDetailJson; // @dynamic orderDetailJson;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(nonatomic) unsigned int orderState; // @dynamic orderState;
@property(retain, nonatomic) NSString *orderStateStr; // @dynamic orderStateStr;
@property(retain, nonatomic) NSString *pagePath; // @dynamic pagePath;
@property(nonatomic) unsigned long long price; // @dynamic price;
@property(nonatomic) unsigned int priceType; // @dynamic priceType;
@property(retain, nonatomic) NSString *priceUnit; // @dynamic priceUnit;
@property(retain, nonatomic) NSMutableArray *priceWordingPartList; // @dynamic priceWordingPartList;
@property(retain, nonatomic) SalesFinderInfo *salesFinderInfo; // @dynamic salesFinderInfo;
@property(retain, nonatomic) ShopInfo *shopInfo; // @dynamic shopInfo;
@property(retain, nonatomic) NSMutableArray *skuList; // @dynamic skuList;

@end

