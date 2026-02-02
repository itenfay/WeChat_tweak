//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DiscountList;

@interface PriceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DiscountList *discounts; // @dynamic discounts;
@property(nonatomic) unsigned long long expressPrice; // @dynamic expressPrice;
@property(nonatomic) unsigned long long orderPrice; // @dynamic orderPrice;
@property(nonatomic) unsigned long long productPrice; // @dynamic productPrice;

@end

