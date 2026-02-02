//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface FinderPoiGroupBuyResponse_PoiGroupBuyCoupon : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *buttonJumpInfo; // @dynamic buttonJumpInfo;
@property(retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(retain, nonatomic) NSString *couponName; // @dynamic couponName;
@property(retain, nonatomic) NSMutableArray *couponTagList; // @dynamic couponTagList;
@property(retain, nonatomic) NSString *couponType; // @dynamic couponType;
@property(retain, nonatomic) NSString *discount; // @dynamic discount;
@property(retain, nonatomic) NSString *discountPrice; // @dynamic discountPrice;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *originalPrice; // @dynamic originalPrice;

@end

