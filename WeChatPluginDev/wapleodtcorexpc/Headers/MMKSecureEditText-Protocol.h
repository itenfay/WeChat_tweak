//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMKSecureEditTextOnTextChangedCallback, NSString;

@protocol MMKSecureEditText <MMKView>
- (void)setOnTextChangedCallback:(MMKSecureEditTextOnTextChangedCallback *)arg1;
- (_Bool)getIsCommonText;
- (void)setIsCommonText:(_Bool)arg1;
- (long long)getEncryptType;
- (void)setEncryptType:(long long)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (NSString *)getDefaultValue;
- (void)setDefaultValue:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (long long)getClearButtonMode;
- (void)setClearButtonMode:(long long)arg1;
- (MMDynamicColor *)getTintColor;
- (void)setTintColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (NSString *)getText;
- (void)setText:(NSString *)arg1;
- (NSString *)getHint;
- (void)setHint:(NSString *)arg1;
- (long long)getKeyboardType;
- (void)setKeyboardType:(long long)arg1;
- (void)setTextSize:(float)arg1;
- (_Bool)isCardFromatValid:(int)arg1;
@end

