//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITextView;

@interface WCBaseTextViewItem
{
    UITextView *m_textView;
    UILabel *placeHolderLabel;
    int m_iMaxInputLen;
    _Bool m_bRealLen;
}

- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setMaxRealStringLen:(int)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)setPlaceHolderColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (id)getTextView;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
- (void)setTextView:(id)arg1 andPlaceHolder:(id)arg2;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

