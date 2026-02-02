//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, NSString;

@interface FinderLiveAggregationCardProduct : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int hotSellCount; // @dynamic hotSellCount;
@property(nonatomic) unsigned int priceAfterCoupon; // @dynamic priceAfterCoupon;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(retain, nonatomic) NSString *productImgUrl; // @dynamic productImgUrl;
@property(retain, nonatomic) NSString *productTitle; // @dynamic productTitle;

@end

