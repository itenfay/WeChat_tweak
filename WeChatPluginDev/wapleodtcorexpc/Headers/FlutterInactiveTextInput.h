//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableString, NSString, UITextInputPasswordRules, UITextPosition, UITextRange;
@protocol UITextInputDelegate, UITextInputTokenizer;

@interface FlutterInactiveTextInput : UIView
{
    id <UITextInputTokenizer> _tokenizer;
    UITextPosition *_beginningOfDocument;
    UITextPosition *_endOfDocument;
    NSString *_text;
    NSMutableString *_markedText;
    UITextRange *_selectedTextRange;
    UITextRange *_markedTextRange;
    NSDictionary *_markedTextStyle;
    id <UITextInputDelegate> _inputDelegate;
}

@property(nonatomic) id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange=_markedTextRange;
@property(copy) UITextRange *selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(readonly, copy, nonatomic) NSMutableString *markedText; // @synthesize markedText=_markedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UITextPosition *endOfDocument; // @synthesize endOfDocument=_endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument; // @synthesize beginningOfDocument=_beginningOfDocument;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer=_tokenizer;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(nonatomic) long long inlinePredictionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly, nonatomic) id insertDictationResultPlaceholder;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(nonatomic) long long keyboardAppearance;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long keyboardType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITextInputPasswordRules",?,C,N

@property(nonatomic) long long returnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSecureTextEntry

@property(nonatomic) long long selectionAffinity;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartDashesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartInsertDeleteType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long smartQuotesType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(readonly, nonatomic) UIView *textInputView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N


@end

