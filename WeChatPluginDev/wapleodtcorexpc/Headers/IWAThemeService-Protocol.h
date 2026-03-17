//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, UIColor, UIImage;

@protocol IWAThemeService <NSObject>
+ (void)reloadCssForMultiTaskingIfNeed;
+ (NSString *)pathOfResNamed:(NSString *)arg1;
+ (NSString *)getImageName:(UIImage *)arg1;
+ (UIImage *)svgImageDisableNamed:(NSString *)arg1 size:(struct CGSize)arg2 color:(UIColor *)arg3;
+ (UIImage *)svgImageHighlightNamed:(NSString *)arg1 size:(struct CGSize)arg2 color:(UIColor *)arg3;
+ (UIImage *)svgImageNamed:(NSString *)arg1 size:(struct CGSize)arg2 color:(UIColor *)arg3;
+ (UIImage *)svgImageNamed:(NSString *)arg1 color:(UIColor *)arg2;
+ (UIImage *)svgImageFromData:(NSData *)arg1;
+ (UIImage *)imageFromColor:(UIColor *)arg1;
+ (UIImage *)imageDisableNamed:(NSString *)arg1;
+ (UIImage *)imageHighlightNamed:(NSString *)arg1;
+ (UIImage *)imageNamed:(NSString *)arg1 alpha:(double)arg2;
+ (UIImage *)imageNamed:(NSString *)arg1;
+ (UIColor *)getColorByName:(NSString *)arg1 withAlpha:(double)arg2;
+ (UIColor *)getColorByName:(NSString *)arg1;
+ (NSDictionary *)getRuleSetForSeletor:(NSString *)arg1;
+ (NSArray *)getValueOfProperty:(NSString *)arg1 inRuleSet:(NSString *)arg2;
@end

