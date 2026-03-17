//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, NSString;
@protocol MMKImage;

@protocol MMKButton <MMKView>
- (long long)getVerticalPadding;
- (void)setVerticalPadding:(long long)arg1;
- (long long)getHorizontalPadding;
- (void)setHorizontalPadding:(long long)arg1;
- (long long)getExpandHitHeight;
- (void)setExpandHitHeight:(long long)arg1;
- (long long)getExpandHitWidth;
- (void)setExpandHitWidth:(long long)arg1;
- (_Bool)getEnable;
- (void)setEnable:(_Bool)arg1;
- (MMDynamicColor *)getDisableTextColor;
- (void)setDisableTextColor:(MMDynamicColor *)arg1;
- (MMDynamicColor *)getDisableColor;
- (void)setDisableColor:(MMDynamicColor *)arg1;
- (id <MMKImage>)getDisabledImage;
- (void)setDisabledImage:(id <MMKImage>)arg1;
- (id <MMKImage>)getSelectedImage;
- (void)setSelectedImage:(id <MMKImage>)arg1;
- (id <MMKImage>)getPressedImage;
- (void)setPressedImage:(id <MMKImage>)arg1;
- (id <MMKImage>)getNormalImage;
- (void)setNormalImage:(id <MMKImage>)arg1;
- (MMDynamicColor *)getNormalColor;
- (void)setNormalColor:(MMDynamicColor *)arg1;
- (long long)getFontStyle;
- (void)setFontStyle:(long long)arg1;
- (NSString *)getText;
- (void)setText:(NSString *)arg1;
- (MMDynamicColor *)getTextNormalColor;
- (void)setTextNormalColor:(MMDynamicColor *)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
@end

