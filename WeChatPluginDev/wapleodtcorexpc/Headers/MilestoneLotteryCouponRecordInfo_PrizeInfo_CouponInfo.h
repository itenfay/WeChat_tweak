//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface MilestoneLotteryCouponRecordInfo_PrizeInfo_CouponInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(nonatomic) _Bool couponIsExpired; // @dynamic couponIsExpired;
@property(nonatomic) unsigned int couponStatus; // @dynamic couponStatus;
@property(retain, nonatomic) NSString *expiredWording; // @dynamic expiredWording;
@property(retain, nonatomic) NSData *jumpInfo; // @dynamic jumpInfo;

@end

