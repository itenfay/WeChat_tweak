//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMVoidBoolCallback, MMVoidCallback, MMVoidStringCallback, NSString;

@protocol MMKMultiLineEditText <MMKView>
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (MMDynamicColor *)getHintColor;
- (void)setHintColor:(MMDynamicColor *)arg1;
- (NSString *)getHint;
- (void)setHint:(NSString *)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (NSString *)getTextFont;
- (void)setTextFont:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (NSString *)getText;
- (void)setText:(NSString *)arg1;
- (void)setOnTextEndEditingImpl:(MMVoidCallback *)arg1;
- (void)setOnFocusChangedImpl:(MMVoidBoolCallback *)arg1;
- (void)setOnTextChangedImpl:(MMVoidStringCallback *)arg1;
@end

