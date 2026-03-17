//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor, UIFont, UIImage;

@protocol IWAThemeUtilService <NSObject>
+ (void)parseColorDeclarations:(NSDictionary *)arg1 toValues:(NSMutableDictionary *)arg2;
+ (UIFont *)parseFontFromValues:(NSArray *)arg1;
+ (double)parseFontSizeFromValues:(NSArray *)arg1;
+ (NSString *)parseStringFromValues:(NSArray *)arg1;
+ (double)parseFloatFromValues:(NSArray *)arg1;
+ (long long)parseIntegerFromValues:(NSArray *)arg1;
+ (_Bool)parseBOOLFromValues:(NSArray *)arg1;
+ (struct UIEdgeInsets)parseEdgeInsetsFromValues:(NSArray *)arg1;
+ (struct CGRect)parseRectFromValues:(NSArray *)arg1;
+ (struct CGSize)parseSizeFromValues:(NSArray *)arg1;
+ (struct CGPoint)parsePointFromValues:(NSArray *)arg1;
+ (UIImage *)parseStrechedImageFromValues:(NSArray *)arg1;
+ (UIColor *)parseColorFromValues:(NSArray *)arg1;
@end

