//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdCouponInfo : NSObject
{
    NSString *_couponSenderPhoto;
    NSString *_couponSenderName;
    NSString *_couponAppId;
    NSString *_couponStockId;
    NSString *_couponName;
    NSString *_couponDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *couponDesc; // @synthesize couponDesc=_couponDesc;
@property(retain, nonatomic) NSString *couponName; // @synthesize couponName=_couponName;
@property(retain, nonatomic) NSString *couponStockId; // @synthesize couponStockId=_couponStockId;
@property(retain, nonatomic) NSString *couponAppId; // @synthesize couponAppId=_couponAppId;
@property(retain, nonatomic) NSString *couponSenderName; // @synthesize couponSenderName=_couponSenderName;
@property(retain, nonatomic) NSString *couponSenderPhoto; // @synthesize couponSenderPhoto=_couponSenderPhoto;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

