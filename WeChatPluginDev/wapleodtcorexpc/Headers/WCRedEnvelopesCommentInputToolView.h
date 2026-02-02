//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, NSString, UIButton, UIImageView;
@protocol WCRedEnvelopesCommentInputToolViewDelegate;

@interface WCRedEnvelopesCommentInputToolView
{
    long long _keyboardHeight;
    UIImageView *_toolView;
    MMGrowTextView *_textView;
    unsigned long long _positionMode;
    UIButton *_sendButton;
    struct CGPoint fPreToolViewOrigin;
    double _fKeyboardAnimationDuration;
    long long _iKeyboardAnimationCurve;
    id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate;
    _Bool m_bPositioning;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bPositioning; // @synthesize m_bPositioning;
@property(nonatomic) __weak id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTextViewDidChange:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)keyboardDidShow:(double)arg1;
- (_Bool)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (_Bool)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillHideInter:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)NotifyViewControllerPostionChanged:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)dealloc;
- (double)getToolViewHeight;
- (id)getText;
@property(nonatomic) __weak NSString *text;
- (void)insertString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSubview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

