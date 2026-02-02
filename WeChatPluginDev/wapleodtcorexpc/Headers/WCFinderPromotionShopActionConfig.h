//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPromotionShopActionConfig : NSObject
{
    NSString *_productId;
    NSString *_poiId;
    long long _multiStorePromotion;
}

- (void).cxx_destruct;
@property(nonatomic) long long multiStorePromotion; // @synthesize multiStorePromotion=_multiStorePromotion;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;
- (id)description;

@end

