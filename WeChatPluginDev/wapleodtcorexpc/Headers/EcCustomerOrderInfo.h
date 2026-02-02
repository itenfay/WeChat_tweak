//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DetailLink, EcCustomerOrderInfo_PriceInfo, NSMutableArray, NSString;

@interface EcCustomerOrderInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DetailLink *orderDetailLink; // @dynamic orderDetailLink;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(nonatomic) unsigned int orderState; // @dynamic orderState;
@property(retain, nonatomic) NSString *orderStateStr; // @dynamic orderStateStr;
@property(retain, nonatomic) EcCustomerOrderInfo_PriceInfo *priceInfo; // @dynamic priceInfo;
@property(retain, nonatomic) NSMutableArray *skuList; // @dynamic skuList;
@property(nonatomic) unsigned int srcId; // @dynamic srcId;
@property(nonatomic) unsigned int totalProductCnt; // @dynamic totalProductCnt;

@end

