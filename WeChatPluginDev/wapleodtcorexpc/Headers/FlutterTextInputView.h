//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FlutterTextInputPlugin, FlutterTextRange, NSArray, NSDictionary, NSMutableArray, NSMutableString, NSString, UIAccessibilityElement, UIInputViewController, UITextInputPasswordRules, UITextInteraction, UITextPosition, UITextRange;
@protocol FlutterViewResponder, UITextInputDelegate, UITextInputTokenizer;

@interface FlutterTextInputView : UIView
{
    int _textInputClient;
    const char *_selectionAffinity;
    FlutterTextRange *_selectedTextRange;
    UIInputViewController *_inputViewController;
    struct CGRect _cachedFirstRect;
    long long _scribbleInteractionStatus;
    _Bool _hasPlaceholder;
    _Bool _isSystemKeyboardEnabled;
    _Bool _isFloatingCursorActive;
    struct CGPoint _floatingCursorOffset;
    _Bool _enableInteractiveSelection;
    UITextInteraction *_textInteraction;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    _Bool _enableDeltaModel;
    _Bool _preventCursorDismissWhenResignFirstResponder;
    _Bool _accessibilityEnabled;
    id <UITextInputTokenizer> _tokenizer;
    NSDictionary *_configuration;
    NSMutableString *_text;
    UITextRange *_markedTextRange;
    NSDictionary *_markedTextStyle;
    id <UITextInputDelegate> _inputDelegate;
    NSMutableArray *_pendingDeltas;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
    long long _keyboardAppearance;
    long long _keyboardType;
    long long _returnKeyType;
    long long _smartQuotesType;
    long long _smartDashesType;
    NSString *_textContentType;
    UIAccessibilityElement *_backingTextInputAccessibilityObject;
    id <FlutterViewResponder> _viewResponder;
    long long _scribbleFocusStatus;
    NSArray *_selectionRects;
    FlutterTextInputPlugin *_textInputPlugin;
    NSString *_autofillId;
    CDUnknownBlockType _onKeyboardHeightChange;
    CDUnknownBlockType _onInputViewAdded;
    CDUnknownBlockType _onInputViewRemoved;
    double _inputAccessoryHeight;
    NSString *_temporarilyDeletedComposedCharacter;
    UIView *_inputView;
    struct CGRect _markedRect;
    struct CATransform3D _editableTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(copy, nonatomic) NSString *temporarilyDeletedComposedCharacter; // @synthesize temporarilyDeletedComposedCharacter=_temporarilyDeletedComposedCharacter;
@property(nonatomic) double inputAccessoryHeight; // @synthesize inputAccessoryHeight=_inputAccessoryHeight;
@property(copy, nonatomic) CDUnknownBlockType onInputViewRemoved; // @synthesize onInputViewRemoved=_onInputViewRemoved;
@property(copy, nonatomic) CDUnknownBlockType onInputViewAdded; // @synthesize onInputViewAdded=_onInputViewAdded;
@property(copy, nonatomic) CDUnknownBlockType onKeyboardHeightChange; // @synthesize onKeyboardHeightChange=_onKeyboardHeightChange;
@property(retain, nonatomic) UITextInteraction *textInteraction; // @synthesize textInteraction=_textInteraction;
@property(nonatomic) int textInputClient; // @synthesize textInputClient=_textInputClient;
@property(nonatomic) _Bool accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
@property(nonatomic) _Bool preventCursorDismissWhenResignFirstResponder; // @synthesize preventCursorDismissWhenResignFirstResponder=_preventCursorDismissWhenResignFirstResponder;
@property(nonatomic) struct CGRect markedRect; // @synthesize markedRect=_markedRect;
@property(readonly, nonatomic) struct CATransform3D editableTransform; // @synthesize editableTransform=_editableTransform;
@property(copy, nonatomic) NSString *autofillId; // @synthesize autofillId=_autofillId;
@property(readonly, nonatomic) __weak FlutterTextInputPlugin *textInputPlugin; // @synthesize textInputPlugin=_textInputPlugin;
@property(retain, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(nonatomic) long long scribbleFocusStatus; // @synthesize scribbleFocusStatus=_scribbleFocusStatus;
@property(nonatomic) __weak id <FlutterViewResponder> viewResponder; // @synthesize viewResponder=_viewResponder;
@property(nonatomic) __weak UIAccessibilityElement *backingTextInputAccessibilityObject; // @synthesize backingTextInputAccessibilityObject=_backingTextInputAccessibilityObject;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long smartDashesType; // @synthesize smartDashesType=_smartDashesType;
@property(nonatomic) long long smartQuotesType; // @synthesize smartQuotesType=_smartQuotesType;
@property(nonatomic, getter=isEnableDeltaModel) _Bool enableDeltaModel; // @synthesize enableDeltaModel=_enableDeltaModel;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(retain, nonatomic) NSMutableArray *pendingDeltas; // @synthesize pendingDeltas=_pendingDeltas;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(retain, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange=_markedTextRange;
@property(readonly, nonatomic) NSMutableString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)inputAccessoryView;
- (void)resetScribbleInteractionStatusIfEnding;
- (_Bool)accessibilityElementsHidden;
- (void)accessibilityElementDidBecomeFocused;
- (void)postAccessibilityNotification:(unsigned int)arg1 target:(id)arg2;
- (void)deleteBackward;
- (void)removeTextPlaceholder:(id)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)updateEditingStateWithDelta:(struct TextEditingDelta)arg1;
- (void)updateEditingState;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (struct CGRect)localRectFromFrameworkTransform:(struct CGRect)arg1;
- (void)setEditableTransform:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (unsigned long long)incrementOffsetPosition:(unsigned long long)arg1;
- (unsigned long long)decrementOffsetPosition:(unsigned long long)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeLocal:(struct _NSRange)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(copy) UITextRange *selectedTextRange;
- (void)setSelectedTextRangeLocal:(id)arg1;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer=_tokenizer;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)scribbleInteractionShouldDelayFocus:(id)arg1;
- (_Bool)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
- (void)scribbleInteractionDidFinishWriting:(id)arg1;
- (void)scribbleInteractionWillBeginWriting:(id)arg1;
- (_Bool)isScribbleAvailable;
@property(nonatomic) _Bool isVisibleToAutofill;
- (struct _NSRange)clampSelection:(struct _NSRange)arg1 forText:(id)arg2;
- (struct _NSRange)clampSelectionFromBase:(int)arg1 extent:(int)arg2 forText:(id)arg3;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTextInputState:(id)arg1;
- (_Bool)isSelectedRangeValid:(struct _NSRange)arg1;
- (void)setTextSelectionState:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)textInputDelegate;
- (id)inputViewController;
- (id)selectionHighlightColor;
- (id)selectionBarColor;
- (id)insertionPointColor;
- (void)configureWithDictionary:(id)arg1;
- (id)initWithOwner:(id)arg1;
- (void)setCustomKeyboardType:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long inlinePredictionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextInputPasswordRules",?,C,N

@property(nonatomic) long long selectionAffinity;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartInsertDeleteType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *textInputView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N


@end

