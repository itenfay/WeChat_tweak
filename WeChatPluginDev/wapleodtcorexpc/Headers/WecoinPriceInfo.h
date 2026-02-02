//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WecoinPriceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int discountWecoinCount; // @dynamic discountWecoinCount;
@property(nonatomic) _Bool newUserDiscount; // @dynamic newUserDiscount;
@property(nonatomic) unsigned int price; // @dynamic price;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int wecoinCount; // @dynamic wecoinCount;

@end

