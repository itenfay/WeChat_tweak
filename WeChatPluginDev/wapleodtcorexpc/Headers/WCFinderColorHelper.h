//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderColorHelper : NSObject
{
}

+ (id)getFinderLinkColor;
+ (id)colorWithFinderColor:(id)arg1;
+ (id)dynamicColorWithHexString:(id)arg1;
+ (id)transitionColorWithStartColor:(id)arg1 endColor:(id)arg2 progress:(double)arg3;
+ (id)RGBValueFromUIColor:(id)arg1;
+ (id)colorAtPixel:(struct CGPoint)arg1 image:(id)arg2;
+ (id)checkColorContrast:(id)arg1;
+ (_Bool)isBlackApartColor:(id)arg1;
+ (_Bool)isWhiteApartColor:(id)arg1;
+ (id)getImageGradientColorBy:(id)arg1;
+ (double)adjustColor:(double)arg1;
+ (double)luminance:(id)arg1;
+ (double)contrastRatio:(id)arg1 color2:(id)arg2;
+ (id)mainColorOfImage:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)clipImage:(id)arg1 withRect:(struct CGRect)arg2;
+ (void)setGradientLayer:(id)arg1 endColor:(id)arg2 view:(id)arg3;
+ (id)changeUIColorToRGBA:(id)arg1;

@end

