//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, NSString;

@protocol MMKMoneyLoadingView <MMKView>
- (float)getAnimationDuration;
- (void)setAnimationDuration:(float)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (NSString *)getCurrencySymbol;
- (void)setCurrencySymbol:(NSString *)arg1;
- (void)updateTextAlignment:(long long)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)setTextSizeNotScaleable:(float)arg1 isScaleable:(_Bool)arg2;
- (void)setMoney:(long long)arg1 animated:(_Bool)arg2;
- (void)setFont:(NSString *)arg1;
@end

