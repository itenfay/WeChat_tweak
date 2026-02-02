//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SWMidasAppleProductPromotionalOfferInfo : NSObject
{
    MISSING_TYPE *originalPrice;
    MISSING_TYPE *displayPrice;
    MISSING_TYPE *periodUnit;
    MISSING_TYPE *periodValue;
    MISSING_TYPE *periodCount;
    MISSING_TYPE *paymentMode;
    MISSING_TYPE *promotionalID;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *promotionalID;
@property(nonatomic, readonly) long long paymentMode; // @synthesize paymentMode;
@property(nonatomic, readonly) long long periodCount; // @synthesize periodCount;
@property(nonatomic, readonly) long long periodValue; // @synthesize periodValue;
@property(nonatomic, readonly) long long periodUnit; // @synthesize periodUnit;
@property(nonatomic, readonly) NSString *displayPrice;
@property(nonatomic, readonly) NSString *originalPrice;

@end

