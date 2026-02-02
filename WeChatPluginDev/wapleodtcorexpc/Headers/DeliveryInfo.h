//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddressInfo, ExpressData, NSString, PickupDeliveryInfo, SamecityDeliveryInfo;

@interface DeliveryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AddressInfo *addressInfo; // @dynamic addressInfo;
@property(retain, nonatomic) NSString *deliveryName; // @dynamic deliveryName;
@property(nonatomic) unsigned int deliveryType; // @dynamic deliveryType;
@property(retain, nonatomic) ExpressData *expressData; // @dynamic expressData;
@property(retain, nonatomic) PickupDeliveryInfo *pickupDeliveryInfo; // @dynamic pickupDeliveryInfo;
@property(retain, nonatomic) SamecityDeliveryInfo *samecityDeliveryInfo; // @dynamic samecityDeliveryInfo;

@end

