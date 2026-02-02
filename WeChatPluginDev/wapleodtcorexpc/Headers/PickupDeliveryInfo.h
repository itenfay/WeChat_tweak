//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddressInfo, DeliveryContact, NSString;

@interface PickupDeliveryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeliveryContact *deliveryContact; // @dynamic deliveryContact;
@property(nonatomic) unsigned int deliveryState; // @dynamic deliveryState;
@property(nonatomic) unsigned long long latestPickupTime; // @dynamic latestPickupTime;
@property(retain, nonatomic) AddressInfo *pickupAddressInfo; // @dynamic pickupAddressInfo;
@property(retain, nonatomic) NSString *pickupCode; // @dynamic pickupCode;
@property(retain, nonatomic) NSString *pickupQrcodeUrl; // @dynamic pickupQrcodeUrl;
@property(nonatomic) unsigned long long pickupTime; // @dynamic pickupTime;

@end

