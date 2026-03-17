//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTimer, NSAttributedString, NSDictionary, NSMutableAttributedString, NSString, UIButton, UIColor, UITextRange, UIView;
@protocol WATextInputDelegate;

@protocol WATextInputInterface <NSObject>
@property(nonatomic) struct CGPoint lastHitPoint;
@property(nonatomic) _Bool blockFocus;
@property(retain, nonatomic) MMTimer *enableEditingTimer;
@property(nonatomic) unsigned long long actionOnKeyboardAnimationEnd;
@property(nonatomic) _Bool isKeyboardAnimating;
@property(nonatomic) _Bool native;
@property(nonatomic) long long selectionEnd;
@property(nonatomic) long long selectionBegin;
@property(nonatomic) long long endCursor;
@property(nonatomic) long long initCursor;
@property(nonatomic) unsigned long long adjustKeyboardTo;
@property(nonatomic) _Bool adjustPosition;
@property(nonatomic) _Bool confirmHold;
@property(nonatomic) _Bool fixed;
@property(nonatomic) _Bool initKeyBoard;
@property(nonatomic) double bottomMargin;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) unsigned int inputId;
@property(nonatomic) long long maxLength;
@property(copy, nonatomic) NSString *defaultValue;
@property(nonatomic) _Bool multiLine;
@property(nonatomic) _Bool showConfirmButton;
@property(nonatomic) __weak id <WATextInputDelegate> keyboardDelegate;
- (NSMutableAttributedString *)getAttributedString;
- (void)appendAttributedString:(NSAttributedString *)arg1;
- (void)insertAttributedString:(NSAttributedString *)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteBackward;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (_Bool)textInterface_isFirstResponder;
- (void)setKeyboardType:(long long)arg1;
- (struct _NSRange)getCurrentSelectedRange;
- (void)setDisableEdit:(_Bool)arg1;
- (UIView *)getParentView;
- (struct CGRect)getVisibleRect;
- (void)removeFromParent;
- (void)setReturnKeyType:(long long)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isBold;
- (double)getFontSize;
- (void)setInputFrame:(struct CGRect)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (void)setFont:(double)arg1 bold:(_Bool)arg2;
- (UIButton *)getAccessoryButton;
- (void)becomeFirstResponder:(_Bool)arg1;
- (UIView *)getInputView;
- (void)setInputView:(UIView *)arg1;
- (void)setInputAccessoryView:(UIView *)arg1;
- (NSString *)getInputValue;
- (void)setSelectedTextRange:(UITextRange *)arg1;
- (UITextRange *)getSelectedTextRange;
- (void)setInputPlaceholder:(NSString *)arg1 placeholderStyle:(NSDictionary *)arg2;
- (void)setInputValue:(NSString *)arg1 cursorPos:(long long)arg2;

@optional
- (void)onKeyboardDidShow;
- (void)onKeyboardWillShow;
- (void)onKeyboardDidHide;
- (void)onKeyboardWillHide;
- (_Bool)isAutoSize;
- (void)setAutoSize:(_Bool)arg1;
- (double)getContentHeight;
- (long long)getLineCount;
- (void)setDisable:(_Bool)arg1;
- (void)setPasswordMode:(_Bool)arg1;
@end

