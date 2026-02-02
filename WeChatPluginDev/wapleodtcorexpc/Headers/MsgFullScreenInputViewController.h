//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MMTextView, MMUIButton, MsgFullScreenInputConfig, NSString, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UITapGestureRecognizer, UIView, WXKeyBoardTipsView;
@protocol MsgFullScreenInputDelegate;

@interface MsgFullScreenInputViewController
{
    _Bool _isInDismissState;
    _Bool _showKeyboardWhenPresent;
    _Bool _showEmoticonWhenPresent;
    unsigned char _contentMode;
    int _lastAttributeCount;
    id <MsgFullScreenInputDelegate> _delegate;
    double _keyboardHeight;
    UIView *_containerView;
    MMTextView *_textView;
    MMUIButton *_exitButton;
    UIView *_toolView;
    MsgFullScreenInputConfig *_config;
    MMUIButton *_expressionButton;
    WXKeyBoardTipsView *_keyboardTipsView;
    EmoticonBoardView *_expressionView;
    double _keyboardAnimationDuration;
    long long _keyboardAnimationCurve;
    UIScreenEdgePanGestureRecognizer *_edgePanGesture;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgePanGesture; // @synthesize edgePanGesture=_edgePanGesture;
@property(nonatomic) long long keyboardAnimationCurve; // @synthesize keyboardAnimationCurve=_keyboardAnimationCurve;
@property(nonatomic) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(nonatomic) unsigned char contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) EmoticonBoardView *expressionView; // @synthesize expressionView=_expressionView;
@property(retain, nonatomic) WXKeyBoardTipsView *keyboardTipsView; // @synthesize keyboardTipsView=_keyboardTipsView;
@property(retain, nonatomic) MMUIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(nonatomic) int lastAttributeCount; // @synthesize lastAttributeCount=_lastAttributeCount;
@property(retain, nonatomic) MsgFullScreenInputConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) MMUIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) MMTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool showEmoticonWhenPresent; // @synthesize showEmoticonWhenPresent=_showEmoticonWhenPresent;
@property(nonatomic) _Bool showKeyboardWhenPresent; // @synthesize showKeyboardWhenPresent=_showKeyboardWhenPresent;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isInDismissState; // @synthesize isInDismissState=_isInDismissState;
@property(nonatomic) __weak id <MsgFullScreenInputDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldDeleteLastCharacter;
- (void)exitFullScreenInput:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleEdgePanGesture:(id)arg1;
- (unsigned long long)menuTypeForExtMenuAction:(SEL)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textDidChangeNotification:(id)arg1;
- (id)topicTagAttributes;
- (int)parseAndAppendTopicSearchAttributeds:(id)arg1;
- (void)doWXTagParse;
- (_Bool)pretreatmentAttributedText;
- (void)insertString:(id)arg1;
- (void)ensureTextVisible;
- (void)deleteEmoticon;
- (void)didSelectorEmoticon:(id)arg1;
- (void)onSendButtonClicked;
- (void)inputAddTagStr;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateToolViewLayout;
- (void)updateTextViewLayout;
- (double)getToolViewHeight;
- (void)setContentMode:(unsigned char)arg1 animated:(_Bool)arg2;
- (void)jumpToPlugin;
- (void)onExpressionButtonClicked;
- (void)onExitButtonClicked;
- (void)initEmoticonView;
- (void)initExpressionButton;
- (void)initToolView;
- (void)initExitButton;
- (void)initTextView;
- (void)initContainerView;
- (void)initViews;
- (struct CGRect)textViewFinalTransitionFrame;
- (struct CGRect)containerViewFinalFrame;
- (id)backgroundView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

