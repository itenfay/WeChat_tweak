//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddressInfo, NSString;

@interface SimplePickupDeliveryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AddressInfo *pickupAddressInfo; // @dynamic pickupAddressInfo;
@property(retain, nonatomic) NSString *pickupCode; // @dynamic pickupCode;

@end

