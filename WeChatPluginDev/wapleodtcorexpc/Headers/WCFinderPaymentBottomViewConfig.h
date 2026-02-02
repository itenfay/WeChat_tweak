//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPaymentBottomViewConfig : NSObject
{
    NSString *_priceDescription;
    NSString *_confirmButtonTitle;
    unsigned long long _price;
}

+ (id)configWithPaidCollectionInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *priceDescription; // @synthesize priceDescription=_priceDescription;

@end

