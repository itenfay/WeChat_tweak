//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, SimpleExpressInfo, SimplePickupDeliveryInfo, SimpleSamecityDeliveryInfo;

@class WXPBGeneratedMessage;

@interface SimpleDeliveryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int deliveryType; // @dynamic deliveryType;
@property(retain, nonatomic) SimpleExpressInfo *expressInfo; // @dynamic expressInfo;
@property(retain, nonatomic) NSMutableArray *multiPackageExpressInfo; // @dynamic multiPackageExpressInfo;
@property(retain, nonatomic) SimplePickupDeliveryInfo *pickupDeliveryInfo; // @dynamic pickupDeliveryInfo;
@property(retain, nonatomic) SimpleSamecityDeliveryInfo *samecityDeliveryInfo; // @dynamic samecityDeliveryInfo;

@end

