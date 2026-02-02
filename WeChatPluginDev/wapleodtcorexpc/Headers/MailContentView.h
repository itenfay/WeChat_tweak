//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;
@protocol MailContentViewDelegate;

@interface MailContentView
{
    UIView *m_labelView;
    id <MailContentViewDelegate> m_delegate;
    _Bool forbidBecomeFirstResponder;
    struct CGRect _textViewFrame;
}

+ (id)contentDefaultParagraphStyle;
+ (id)contentDefaultTextAttribute;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect textViewFrame; // @synthesize textViewFrame=_textViewFrame;
@property(nonatomic) _Bool forbidBecomeFirstResponder; // @synthesize forbidBecomeFirstResponder;
@property(nonatomic) __weak id <MailContentViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)getHtmlContent;
- (void)formatContent;
- (void)insertMailRTEAttachments:(id)arg1;
- (void)showReplyTips;
- (double)getContentHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContent:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (id)getContent;
- (id)initWithFrame:(struct CGRect)arg1 showTips:(_Bool)arg2;
- (void)mailEdit:(id)arg1;
- (void)mailDelete:(id)arg1;
- (void)mailPaste:(id)arg1;
- (void)mailCut:(id)arg1;
- (void)mailCopy:(id)arg1;
- (void)mailSelectAll:(id)arg1;
- (void)mailSelect:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showMenuController;
- (void)initMenuController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

