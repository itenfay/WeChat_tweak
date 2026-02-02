//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMFinderLiveMilestoneLotteryCouponInfo : NSObject
{
    unsigned int _status;
    NSString *_lotteryId;
    NSString *_couponId;
    NSString *_productId;
    NSString *_buttonText;
    NSString *_expireDesc;
    NSData *_jumpInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *expireDesc; // @synthesize expireDesc=_expireDesc;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;

@end

