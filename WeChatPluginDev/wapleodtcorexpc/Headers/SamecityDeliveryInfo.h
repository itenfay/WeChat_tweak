//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class DeliveryContact;

@class WXPBGeneratedMessage;

@interface SamecityDeliveryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeliveryContact *deliveryContact; // @dynamic deliveryContact;
@property(nonatomic) unsigned int deliveryState; // @dynamic deliveryState;
@property(nonatomic) unsigned int estimatedDeliveryTime; // @dynamic estimatedDeliveryTime;

@end

