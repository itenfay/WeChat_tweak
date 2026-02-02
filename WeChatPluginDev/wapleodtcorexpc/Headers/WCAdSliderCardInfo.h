//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAdSliderCardOpeningAnimationInfo, WCAdSliderCardProductInfo, WCAdSliderCardSlideJumpInfo;

@interface WCAdSliderCardInfo : NSObject
{
    NSArray *_sliderCardList;
    WCAdSliderCardSlideJumpInfo *_slideJumpInfo;
    WCAdSliderCardOpeningAnimationInfo *_openingAnimation;
    WCAdSliderCardProductInfo *_productInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdSliderCardProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) WCAdSliderCardOpeningAnimationInfo *openingAnimation; // @synthesize openingAnimation=_openingAnimation;
@property(retain, nonatomic) WCAdSliderCardSlideJumpInfo *slideJumpInfo; // @synthesize slideJumpInfo=_slideJumpInfo;
@property(retain, nonatomic) NSArray *sliderCardList; // @synthesize sliderCardList=_sliderCardList;
- (_Bool)hasProductInfo;
- (_Bool)hasOpeningAnimation;
- (long long)fetchSliderCardStyle;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

