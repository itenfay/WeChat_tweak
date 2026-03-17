//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, NSString;

@protocol MMKLabelView <MMKView>
- (float)getLineSpacingFactor;
- (void)setLineSpacingFactor:(float)arg1;
- (long long)getBaselineAdjustment;
- (void)setBaselineAdjustment:(long long)arg1;
- (_Bool)getAdjustsFontSizeToFitWidth;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (long long)getEllipsize;
- (void)setEllipsize:(long long)arg1;
- (long long)getFontStyle;
- (void)setFontStyle:(long long)arg1;
- (NSString *)getTextFont;
- (void)setTextFont:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (NSString *)getText;
- (void)setText:(NSString *)arg1;
- (int)getLines;
- (void)setLines:(int)arg1;
@end

