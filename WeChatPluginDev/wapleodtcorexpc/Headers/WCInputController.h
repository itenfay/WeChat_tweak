//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MMGrowTextView, MMLiveAddBoardView, NSString, UIScrollView, UIView;
@protocol InputControllerDelegate;

@interface WCInputController
{
    double _fKeyboardAnimationDuration;
    double _fKeyboardHeight;
    long long _iKeyboardAnimationCurve;
    long long _eInputMode;
    UIView *_inputView;
    UIScrollView *_scrollView;
    MMGrowTextView *_textView;
    EmoticonBoardView *_emoticonBoardView;
    MMLiveAddBoardView *_addBoardView;
    UIView *_backgroundView;
    double _fInputViewY;
    double _fScrollViewY;
    double _fScrollViewOriginY;
    id <InputControllerDelegate> _delegate;
    _Bool _bAnimationCutHeight;
    _Bool _isKeyBoardShow;
    _Bool _bShouldInputViewFadeIn;
    _Bool _bInputViewShowing;
    _Bool _bShouldDisableScrollWhenHideKeyboard;
    double _inputViewBottomSpace;
    NSString *_lastPastedText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *lastPastedText; // @synthesize lastPastedText=_lastPastedText;
@property(nonatomic) _Bool bShouldDisableScrollWhenHideKeyboard; // @synthesize bShouldDisableScrollWhenHideKeyboard=_bShouldDisableScrollWhenHideKeyboard;
@property(nonatomic) _Bool bInputViewShowing; // @synthesize bInputViewShowing=_bInputViewShowing;
@property(nonatomic) _Bool bShouldInputViewFadeIn; // @synthesize bShouldInputViewFadeIn=_bShouldInputViewFadeIn;
@property(nonatomic) double inputViewBottomSpace; // @synthesize inputViewBottomSpace=_inputViewBottomSpace;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(nonatomic) __weak MMLiveAddBoardView *addBoardView; // @synthesize addBoardView=_addBoardView;
@property(nonatomic) double fKeyboardHeight; // @synthesize fKeyboardHeight=_fKeyboardHeight;
@property(nonatomic) _Bool bAnimationCutHeight; // @synthesize bAnimationCutHeight=_bAnimationCutHeight;
@property(nonatomic) long long eInputMode; // @synthesize eInputMode=_eInputMode;
@property(nonatomic) __weak id <InputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double fScrollViewOriginY; // @synthesize fScrollViewOriginY=_fScrollViewOriginY;
@property(nonatomic) double fScrollViewY; // @synthesize fScrollViewY=_fScrollViewY;
@property(nonatomic) double fInputViewY; // @synthesize fInputViewY=_fInputViewY;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)changeTextViewColorForEmoticonState:(_Bool)arg1;
- (void)TextViewDidChangeSelection:(id)arg1;
- (void)textViewCommit;
- (void)updateTabbarSendButtonState;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onClickTextViewSendText:(id)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)MMGrowTextView:(id)arg1 willPastedText:(id)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)updateScrollViewY:(double)arg1;
- (void)inputViewYDidChange;
- (void)inputModeChangeButtonClicked;
- (void)inputModeChangeButtonClicked:(long long)arg1;
- (void)onSystemHideKeyboard;
- (void)AnimationDidStop:(id)arg1;
- (void)doHideKeybaord;
- (void)keyboardWillHide:(_Bool)arg1;
- (_Bool)shouldInterceptExpressionPanelOnKeyboardChanged:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)showKeyBoard:(double)arg1;
- (_Bool)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)becomeTextView;
- (void)resignResponder;
- (void)resignTextView;
- (void)deleteEmoticon;
- (void)onEmoticonSearchIconClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

