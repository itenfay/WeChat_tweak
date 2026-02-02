//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, SWMidasAppleProductIntroductoryOfferInfo;

@interface SWMidasAppleProductInfo : NSObject
{
    MISSING_TYPE *id;
    MISSING_TYPE *displayPrice;
    MISSING_TYPE *displayName;
    MISSING_TYPE *productDescription;
    MISSING_TYPE *isFamilyShareable;
    MISSING_TYPE *currencyCode;
    MISSING_TYPE *originalPrice;
    MISSING_TYPE *isFromStoreKit2;
    MISSING_TYPE *subscriptionGroupID;
    MISSING_TYPE *introductoryOfferInfo;
    MISSING_TYPE *promotionalOfferInfos;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)toJSON;
@property(nonatomic, copy) NSArray *promotionalOfferInfos;
@property(nonatomic, retain) SWMidasAppleProductIntroductoryOfferInfo *introductoryOfferInfo; // @synthesize introductoryOfferInfo;
@property(nonatomic, readonly) NSString *subscriptionGroupID;
@property(nonatomic, readonly) _Bool isFromStoreKit2; // @synthesize isFromStoreKit2;
@property(nonatomic, readonly) NSString *originalPrice;
@property(nonatomic, readonly) NSString *currencyCode;
@property(nonatomic, copy) NSString *isFamilyShareable;
@property(nonatomic, readonly) NSString *productDescription;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSString *displayPrice;
@property(nonatomic, readonly) NSString *identifier;

@end

