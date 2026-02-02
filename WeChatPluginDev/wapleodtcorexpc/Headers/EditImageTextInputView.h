//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageColorSquareBar, EditImageTextInputViewParams, EditImageTextView, EditVideoSecondCutPromotionButton, MMUIButton, MMUIView, NSString, UIButton, UIColor, UILabel, UIView;
@protocol EditImageTextInputDelegate;

@interface EditImageTextInputView
{
    EditImageTextView *_inputView;
    MMUIButton *_cancelBtn;
    UIView *_colorBarContainerView;
    EditImageColorSquareBar *_colorBar;
    UIColor *_textColor;
    MMUIView *_translucentView;
    struct CGRect _editViewFrame;
    EditVideoSecondCutPromotionButton *_secondCutPromotionButton;
    EditImageTextInputView *_tempTextInputView;
    _Bool _enableMultiline;
    id <EditImageTextInputDelegate> _delegate;
    NSString *_textStr;
    UIView *_textView;
    MMUIButton *_confirmBtn;
    UIButton *_textStyleBtn;
    unsigned long long _maxNumberOfLines;
    unsigned long long _maxNumberOfCharacters;
    EditImageTextInputViewParams *_params;
    double _keyboardHeight;
    UILabel *_validationErrorLabel;
    unsigned long long _textStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) UILabel *validationErrorLabel; // @synthesize validationErrorLabel=_validationErrorLabel;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) EditImageTextInputViewParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long maxNumberOfCharacters; // @synthesize maxNumberOfCharacters=_maxNumberOfCharacters;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(nonatomic) _Bool enableMultiline; // @synthesize enableMultiline=_enableMultiline;
@property(retain, nonatomic) UIButton *textStyleBtn; // @synthesize textStyleBtn=_textStyleBtn;
@property(retain, nonatomic) MMUIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *_textView; // @synthesize _textView;
@property(copy, nonatomic) NSString *_textStr; // @synthesize _textStr;
@property(nonatomic) __weak id <EditImageTextInputDelegate> _delegate; // @synthesize _delegate;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)updateViewsOnKeyboardHeightChange;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)adjustColorBarYPosition;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (unsigned long long)_getOrderNextStyle;
- (unsigned long long)_getDefauleNextStyle;
- (unsigned long long)getNextStyle;
- (void)onTextStyleChange;
- (id)getTextStyleAccessibilityStr;
- (id)getTextStyleIconName;
- (void)onConfirm;
- (void)onCancel;
- (void)dropDownAndRemove;
- (void)didMoveToSuperview;
- (void)addTranslucent;
- (void)addBlur;
@property(nonatomic) double textHighlightAlpha;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)updateFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1 withParams:(id)arg2;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

