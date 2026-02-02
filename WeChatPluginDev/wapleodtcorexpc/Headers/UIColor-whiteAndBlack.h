//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIColor.h>

@interface UIColor (whiteAndBlack)
+ (id)blackWithAlpha:(double)arg1;
+ (id)whiteWithAlpha:(double)arg1;
+ (id)mmlive_secondaryButtonBGColor;
+ (id)mmlive_signBGColor;
+ (id)mmlive_containerViewBGColor;
+ (id)mmlive_FG_1_0;
+ (id)mmlive_FG_0_8;
+ (id)mmlive_halfscreenCloseButtonBGColor;
+ (id)mmlive_halfscreenBGColor;
+ (id)dynamicColorWithDictionary:(id)arg1 alpha:(double)arg2;
+ (id)dynamicColorWithDictionary:(id)arg1;
+ (id)mj_CGColorsWithUIColors:(id)arg1;
+ (id)mj_defaultTintColor;
+ (id)mj_randomColor;
+ (unsigned int)rte_hexValueToUnsigned:(id)arg1;
+ (id)rte_hexStringTransformFromThreeCharacters:(id)arg1;
+ (id)rte_colorWith8BitRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3 alpha:(double)arg4;
+ (id)rte_colorWith8BitRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3;
+ (id)rte_hexColor:(id)arg1 alpha:(double)arg2;
+ (id)rte_hexColor:(id)arg1;
+ (id)appendColor:(id)arg1 withMaskColor:(id)arg2;
+ (id)hexValuesWithAlphaFromUIColor:(id)arg1;
+ (id)hexValuesFromUIColor:(id)arg1;
+ (id)themeColorForImage:(id)arg1;
+ (CDUnknownBlockType)white;
+ (id)QMapColorWithHex:(id)arg1;
+ (void)vsb_fixRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 fromVisualBrightness:(double)arg4;
+ (id)vsb_darkModeColorFromLightModeColor:(id)arg1 bgColor:(id)arg2;
+ (id)vsb_dynamicColorFromLightModeColor:(id)arg1 bgColor:(id)arg2;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
+ (id)darkModeColorFromLightModeColor:(id)arg1;
+ (id)dynamicColorFromLightModeColor:(id)arg1;
+ (double)colorComponentFrom:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (id)colorWithHexString:(id)arg1 parseOptions:(unsigned long long)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorInLightMode:(id)arg1 DarkMode:(id)arg2;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
@property(readonly, nonatomic) UIColor *colorWithAutoDarkMode;
- (id)imageWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (id)finderPickerStyleColorFor:(_Bool)arg1;
- (id)finderPickerStyleColor;
- (id)adjustBrightnessBy:(double)arg1;
- (id)vsb_adjustBrightnessFromMin:(double)arg1 max:(double)arg2;
- (double)vsb_visualBrightness;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
- (id)colorToString;
- (_Bool)isEqualToColor:(id)arg1;
- (id)colorWithAlpha:(double)arg1;
- (id)getUpperColorByFinalColor:(id)arg1;
- (id)privateColorByOverlappingColor:(id)arg1;
- (id)colorByOverlappingColor:(id)arg1;
- (_Bool)isDarkColor;
- (id)highlightedOverlayColor;
- (id)resolvedColorInCurrentStyle;
- (id)colorDescription;
- (_Bool)isDynamicColor;
- (id)colorInDarkMode;
- (id)colorInLightMode;
- (id)toClearColorIfVisionOS;
- (CDUnknownBlockType)ifVisionOS;
@end

