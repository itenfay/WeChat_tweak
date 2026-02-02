//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class MMTimer, NSDictionary, NSString, UIColor, UIFont, WADropListView, WAInputEncrypter, WASafeKeyboard;
@protocol IWAPayKeyboardService, WATextInputDelegate;

@interface WATextField : UITextField
{
    UIColor *_placeColor;
    UIFont *_placeFont;
    _Bool _disableEditing;
    unsigned short _keyCode;
    _Bool _isDeletingSpace;
    _Bool _transTextToStar;
    _Bool _forbidChangeSelectedTextRange;
    _Bool showConfirmButton;
    _Bool multiLine;
    _Bool initKeyBoard;
    _Bool fixed;
    _Bool confirmHold;
    _Bool native;
    _Bool adjustPosition;
    _Bool isKeyboardAnimating;
    _Bool blockFocus;
    _Bool _screenWidth;
    _Bool _bAboveDrop;
    _Bool _blockSelectWhenEditing;
    _Bool _isBankCard;
    unsigned int inputId;
    id <WATextInputDelegate> keyboardDelegate;
    NSString *userData;
    long long maxLength;
    NSString *defaultValue;
    double bottomMargin;
    long long initCursor;
    long long endCursor;
    long long selectionBegin;
    long long selectionEnd;
    unsigned long long adjustKeyboardTo;
    unsigned long long actionOnKeyboardAnimationEnd;
    MMTimer *enableEditingTimer;
    double _marginLeft;
    double _marginRight;
    WADropListView *_dropView;
    WASafeKeyboard *_safePasswordKeyboard;
    WAInputEncrypter *_safeEncrypter;
    id <IWAPayKeyboardService> _payKeyboardService;
    NSDictionary *_placeholderStyle;
    NSDictionary *_placeholderStyleDark;
    struct CGPoint lastHitPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *placeholderStyleDark; // @synthesize placeholderStyleDark=_placeholderStyleDark;
@property(retain, nonatomic) NSDictionary *placeholderStyle; // @synthesize placeholderStyle=_placeholderStyle;
@property(retain, nonatomic) id <IWAPayKeyboardService> payKeyboardService; // @synthesize payKeyboardService=_payKeyboardService;
@property(nonatomic) _Bool isBankCard; // @synthesize isBankCard=_isBankCard;
@property(retain, nonatomic) WAInputEncrypter *safeEncrypter; // @synthesize safeEncrypter=_safeEncrypter;
@property(retain, nonatomic) WASafeKeyboard *safePasswordKeyboard; // @synthesize safePasswordKeyboard=_safePasswordKeyboard;
@property(nonatomic) _Bool blockSelectWhenEditing; // @synthesize blockSelectWhenEditing=_blockSelectWhenEditing;
@property(nonatomic) _Bool bAboveDrop; // @synthesize bAboveDrop=_bAboveDrop;
@property(retain, nonatomic) WADropListView *dropView; // @synthesize dropView=_dropView;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) _Bool screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) struct CGPoint lastHitPoint; // @synthesize lastHitPoint;
@property(nonatomic) _Bool blockFocus; // @synthesize blockFocus;
@property(retain, nonatomic) MMTimer *enableEditingTimer; // @synthesize enableEditingTimer;
@property(nonatomic) unsigned long long actionOnKeyboardAnimationEnd; // @synthesize actionOnKeyboardAnimationEnd;
@property(nonatomic) _Bool isKeyboardAnimating; // @synthesize isKeyboardAnimating;
@property(nonatomic) unsigned long long adjustKeyboardTo; // @synthesize adjustKeyboardTo;
@property(nonatomic) _Bool adjustPosition; // @synthesize adjustPosition;
@property(nonatomic) _Bool native; // @synthesize native;
@property(nonatomic) long long selectionEnd; // @synthesize selectionEnd;
@property(nonatomic) long long selectionBegin; // @synthesize selectionBegin;
@property(nonatomic) long long endCursor; // @synthesize endCursor;
@property(nonatomic) long long initCursor; // @synthesize initCursor;
@property(nonatomic) _Bool confirmHold; // @synthesize confirmHold;
@property(nonatomic) _Bool fixed; // @synthesize fixed;
@property(nonatomic) _Bool initKeyBoard; // @synthesize initKeyBoard;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) _Bool multiLine; // @synthesize multiLine;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue;
@property(nonatomic) long long maxLength; // @synthesize maxLength;
@property(copy, nonatomic) NSString *userData; // @synthesize userData;
@property(nonatomic) unsigned int inputId; // @synthesize inputId;
@property(nonatomic) __weak id <WATextInputDelegate> keyboardDelegate; // @synthesize keyboardDelegate;
@property(nonatomic) _Bool showConfirmButton; // @synthesize showConfirmButton;
- (void)payKeyboardDidClickConfirm:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)getInputView;
- (void)updateDropHeight:(_Bool)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (struct _NSRange)getCurrentSelectedRange;
- (void)setDisableEdit:(_Bool)arg1;
- (void)onDeleteDrop:(id)arg1;
- (void)onSelectDrop:(id)arg1 value:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDropList:(id)arg1 above:(_Bool)arg2;
- (void)takeActionOnKeyboardAnimationEnd;
- (void)onKeyboardDidShow;
- (void)onKeyboardWillShow;
- (void)onKeyboardDidHide;
- (void)enableEditing;
- (void)startEnableEditingTimerWithInterval:(double)arg1;
- (void)onKeyboardWillHide;
- (id)getParentView;
- (_Bool)isAutoSize;
- (void)setAutoSize:(_Bool)arg1;
- (double)getContentHeight;
- (long long)getLineCount;
- (void)setKeyboardType:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isBold;
- (void)setDisable:(_Bool)arg1;
- (double)getFontSize;
- (void)setInputFrame:(struct CGRect)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(double)arg1 bold:(_Bool)arg2;
- (id)getAccessoryButton;
- (struct CGRect)getVisibleRect;
- (_Bool)textInterface_isFirstResponder;
- (void)removeFromParent;
- (void)becomeFirstResponder:(_Bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)resumeChangeSelectedTextRange;
- (void)forbidChangeSelectedTextRange;
- (void)changeToBankCardText;
- (id)subStringWith:(id)arg1 ToIndex:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)getAttributedString;
- (void)appendAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteBackward;
- (void)setInputPlaceholder:(id)arg1 placeholderStyleDark:(id)arg2 setDarkNow:(_Bool)arg3;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (id)getEncryptStringEncryptError:(id *)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (id)getInputValue;
- (void)setSelectedTextRange:(id)arg1;
- (id)getSelectedTextRange;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)layoutSubviews;
- (void)setPasswordMode:(_Bool)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

