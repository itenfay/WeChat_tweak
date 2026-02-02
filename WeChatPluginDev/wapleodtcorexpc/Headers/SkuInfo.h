//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SpuSnapshot;

@interface SkuInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *afterSaleOrderId; // @dynamic afterSaleOrderId;
@property(nonatomic) unsigned int afterSaleTimes; // @dynamic afterSaleTimes;
@property(nonatomic) _Bool canAfterSale; // @dynamic canAfterSale;
@property(retain, nonatomic) NSMutableArray *deliveryInfo; // @dynamic deliveryInfo;
@property(retain, nonatomic) NSMutableArray *featureList; // @dynamic featureList;
@property(retain, nonatomic) NSMutableArray *headLabel; // @dynamic headLabel;
@property(retain, nonatomic) SpuSnapshot *spuSnapshot; // @dynamic spuSnapshot;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *stateStr; // @dynamic stateStr;

@end

