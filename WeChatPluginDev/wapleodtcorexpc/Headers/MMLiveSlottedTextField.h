//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonParser, MMLiveSlottedTextFieldRange, NSArray, NSCharacterSet, NSDictionary, NSMutableDictionary, NSMutableString, NSString, UIColor, UITextInputPasswordRules, UITextPosition, UITextRange;
@protocol MMLiveSlottedTextFieldDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface MMLiveSlottedTextField : UIView
{
    id <MMLiveSlottedTextFieldDelegate> _delegate;
    id <UITextInputDelegate> _inputDelegate;
    NSDictionary *_markedTextStyle;
    NSString *_instanceId;
    NSMutableString *_content;
    MMLiveSlottedTextFieldRange *_selectedRange;
    MMLiveSlottedTextFieldRange *_markedRange;
    id <UITextInputTokenizer> _textTokenizer;
    NSCharacterSet *_whitespaceSet;
    EmoticonParser *_wechatEmoticonParser;
    NSMutableDictionary *_wechatEmoticons;
    double _recommendedAspectRatio;
    UIView *_containerView;
    NSArray *_slots;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *slots; // @synthesize slots=_slots;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double recommendedAspectRatio; // @synthesize recommendedAspectRatio=_recommendedAspectRatio;
@property(retain, nonatomic) NSMutableDictionary *wechatEmoticons; // @synthesize wechatEmoticons=_wechatEmoticons;
@property(retain, nonatomic) EmoticonParser *wechatEmoticonParser; // @synthesize wechatEmoticonParser=_wechatEmoticonParser;
@property(retain, nonatomic) NSCharacterSet *whitespaceSet; // @synthesize whitespaceSet=_whitespaceSet;
@property(retain, nonatomic) id <UITextInputTokenizer> textTokenizer; // @synthesize textTokenizer=_textTokenizer;
@property(retain, nonatomic) MMLiveSlottedTextFieldRange *markedRange; // @synthesize markedRange=_markedRange;
@property(retain, nonatomic) MMLiveSlottedTextFieldRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) NSMutableString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(nonatomic) __weak id <MMLiveSlottedTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logState;
- (id)nonWhitespaceSet;
- (id)scanTextForWeChatEmoticons:(id)arg1 result:(id *)arg2;
- (id)imageForWeChatEmoticonInSlot:(long long)arg1;
- (void)placeWeChatEmoticon:(id)arg1 inSlot:(long long)arg2;
- (void)updateSlotsSelection;
- (void)updateSlotsContent;
- (void)initializeComponentsWithSlotCount:(unsigned long long)arg1;
- (void)onTappedWithGesture:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)selectionRectsForRange:(id)arg1;
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
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)validateSlots;
- (void)insertWeChatEmoticon:(id)arg1;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long returnKeyType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long spellCheckingType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(nonatomic) long long autocorrectionType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly, nonatomic) _Bool hasText;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) _Bool inMultistageInputSession;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIColor *invalidSelectedSlotBorderColor;
@property(retain, nonatomic) UIColor *selectedSlotBorderColor;
@property(retain, nonatomic) UIColor *slotBorderColor;
@property(retain, nonatomic) UIColor *slotBackgroundColor;
@property(retain, nonatomic) NSString *text;
- (id)initWithSlotCount:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
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

@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(readonly, nonatomic) UIView *textInputView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N


@end

