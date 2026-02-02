//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMKEditTextOnEditorActionCallback, MMKEditTextOnFocusChangeCallback, MMKEditTextOnTextBeginChangeCallback, MMKEditTextOnTextChangedCallback, MMKEditTextOnTextEndEditingCallback, NSString;
@protocol MMKView;

@protocol MMKEditText <MMKView>
- (void)setOnEditorActionCallback:(MMKEditTextOnEditorActionCallback *)arg1;
- (void)setOnTextEndEditingCallback:(MMKEditTextOnTextEndEditingCallback *)arg1;
- (void)setOnFocusChangeCallback:(MMKEditTextOnFocusChangeCallback *)arg1;
- (void)setOnTextChangedCallback:(MMKEditTextOnTextChangedCallback *)arg1;
- (void)setOnTextBeginChangeCallback:(MMKEditTextOnTextBeginChangeCallback *)arg1;
- (NSString *)getConfirmButtonText;
- (void)setConfirmButtonText:(NSString *)arg1;
- (_Bool)getStayFocusWhenEnter;
- (void)setStayFocusWhenEnter:(_Bool)arg1;
- (_Bool)getShowFloatButton;
- (void)setShowFloatButton:(_Bool)arg1;
- (_Bool)getIsSingleLine;
- (void)setIsSingleLine:(_Bool)arg1;
- (NSString *)getFixedHeaderText;
- (void)setFixedHeaderText:(NSString *)arg1;
- (int)getMoneyRestrictionIntegerLimit;
- (void)setMoneyRestrictionIntegerLimit:(int)arg1;
- (long long)getRestrictType;
- (void)setRestrictType:(long long)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (long long)getClearButtonMode;
- (void)setClearButtonMode:(long long)arg1;
- (MMDynamicColor *)getTintColor;
- (void)setTintColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (int)getSelection;
- (void)setSelection:(int)arg1;
- (long long)getKeyboardType;
- (void)setKeyboardType:(long long)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (MMDynamicColor *)getCursorColor;
- (void)setCursorColor:(MMDynamicColor *)arg1;
- (float)getHintTextSize;
- (void)setHintTextSize:(float)arg1;
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
- (void)setupToolBarView:(id <MMKView>)arg1;
- (void)enableConfirmBtn:(_Bool)arg1;
- (NSString *)encryptWith3Des;
- (void)setNeedForceDismissFloatButton;
@end

