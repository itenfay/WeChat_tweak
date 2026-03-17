//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMKCardNumberEditViewOnTextChangedCallback, MMKCardNumberEditViewOnTextEndEditingCallback, NSString;

@protocol MMKCardNumberEditView <MMKView>
- (void)setOnTextEndEditingCallback:(MMKCardNumberEditViewOnTextEndEditingCallback *)arg1;
- (void)setOnTextChangedCallback:(MMKCardNumberEditViewOnTextChangedCallback *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (MMDynamicColor *)getHintColor;
- (void)setHintColor:(MMDynamicColor *)arg1;
- (NSString *)getHint;
- (void)setHint:(NSString *)arg1;
- (void)setText:(NSString *)arg1;
- (int)getInputTextLength;
- (_Bool)isBankCardNumber;
- (NSString *)getValue;
@end

