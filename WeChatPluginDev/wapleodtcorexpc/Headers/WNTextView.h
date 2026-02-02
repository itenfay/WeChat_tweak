//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UILabel;
@protocol WNTextViewDataDelegate, WNTextViewOperationDelegate;

@interface WNTextView
{
    NSMutableArray *m_accessiblityElement;
    NSMutableArray *m_accessiblityMenuItems;
    unsigned long long m_accessiblityMenuItemIndex;
    NSMutableArray *m_urlArray;
    NSString *m_touchUrl;
    UILabel *m_placeHolder;
    _Bool m_onTouch;
    struct CGPoint m_touchPoint;
    _Bool m_readyToShowMMMenu;
    _Bool _needUpdateAccessbility;
    unsigned int _enterNoteScene;
    id <WNTextViewOperationDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int enterNoteScene; // @synthesize enterNoteScene=_enterNoteScene;
@property(nonatomic) _Bool needUpdateAccessbility; // @synthesize needUpdateAccessbility=_needUpdateAccessbility;
@property(nonatomic) __weak id <WNTextViewOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onPanAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)calculateTouchAreaUrl:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)webviewWCPayScene;
- (void)jumpLink;
- (_Bool)handleLinkClick;
- (_Bool)handleTouchLinkArea:(struct CGPoint)arg1;
- (void)tryShowLinkStyle;
- (void)onEditOrderList:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)setSmallImage:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)setHighlightFromKey:(id)arg1;
- (void)setBoldFromKey:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)onPaste:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDelete:(id)arg1;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecameFirstResponder;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)tryToShowMMMenu;
- (id)editMenuForTextRange:(id)arg1 suggestedActions:(id)arg2;
- (void)menuWillHide;
- (void)tryScrollTouchPointToVisible;
@property(nonatomic) __weak id <WNTextViewDataDelegate> dataDelegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)snapshop;
- (void)updatePlaceHolder;
- (void)setPlaceHolderHidden:(_Bool)arg1;
- (void)setPlaceHolder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onBecomeFocus:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)tryUpdateAccessbilityElement;
- (void)initMenuRotor;
- (void)updateMenuRotor;
- (long long)accessibilityElementCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

