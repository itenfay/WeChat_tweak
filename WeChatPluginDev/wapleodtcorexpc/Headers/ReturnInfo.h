//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DeliveryInfo;

@interface ReturnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long orderReturnTime; // @dynamic orderReturnTime;
@property(retain, nonatomic) DeliveryInfo *returnDeliveryInfo; // @dynamic returnDeliveryInfo;
@property(nonatomic) unsigned int returnState; // @dynamic returnState;

@end

