//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveNewCustomGiftItemResourceURL, NSString;

@interface GiftNewCustomizationMagicRewardResource : NSObject
{
    NSString *_productId;
    NSString *_key;
    MMFinderLiveNewCustomGiftItemResourceURL *_engineResource;
    NSString *_minCodeVersion;
}

+ (id)createMagicRewardResourceWithCustomizationModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *minCodeVersion; // @synthesize minCodeVersion=_minCodeVersion;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *engineResource; // @synthesize engineResource=_engineResource;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isParamUnValid;

@end

