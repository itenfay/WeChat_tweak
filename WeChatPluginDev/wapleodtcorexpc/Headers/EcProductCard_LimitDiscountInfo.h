//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface EcProductCard_LimitDiscountInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, nonatomic) _Bool effective;

// Remaining properties
@property(nonatomic) unsigned int discountPrice; // @dynamic discountPrice;
@property(nonatomic) unsigned long long endTimeMs; // @dynamic endTimeMs;
@property(nonatomic) unsigned int stock; // @dynamic stock;
@property(retain, nonatomic) NSString *stockWording; // @dynamic stockWording;

@end

