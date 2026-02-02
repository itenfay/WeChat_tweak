//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITextField;
@protocol MailReceiverEditViewDelegate;

@interface MailSubjectEditView
{
    id <MailReceiverEditViewDelegate> m_delegate;
    UITextField *m_textField;
    UILabel *m_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MailReceiverEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)init;
- (void)layoutSubviews;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

