//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DeliveryInfo;

@interface ExchangeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeliveryInfo *deliveryInfo; // @dynamic deliveryInfo;
@property(nonatomic) unsigned long long exchangeState; // @dynamic exchangeState;
@property(retain, nonatomic) DeliveryInfo *returnDeliveryInfo; // @dynamic returnDeliveryInfo;

@end

