//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HackUITextField, NSMutableArray, NSString, UIButton, UILabel;
@protocol MailReceiverEditViewDelegate;

@interface MailReceiverEditView
{
    NSMutableArray *m_arrReceiverButtons;
    long long m_uiReceiverEditViewTag;
    id <MailReceiverEditViewDelegate> m_delegate;
    HackUITextField *m_textField;
    UIButton *m_addContactButton;
    UILabel *m_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MailReceiverEditViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) long long m_uiReceiverEditViewTag; // @synthesize m_uiReceiverEditViewTag;
- (long long)count;
- (void)onMailContactClicked:(id)arg1 sender:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)finishEditing;
- (_Bool)finishEditing:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)deleteMailContactButton;
- (void)finishEdit:(id)arg1;
- (void)beginEdit:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onAddReceiver:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)removeAllContacts;
- (id)getMailContacts;
- (_Bool)isFirstResponder;
- (void)setAddButtonHide:(_Bool)arg1;
- (void)resizeButtons;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)addMailContact:(id)arg1;
- (void)updateBtnArray;
- (void)updateTextFieldPosition;
- (struct CGPoint)getNewBtnPointForNewBtn:(id)arg1;
- (void)layoutSubviews;
- (void)initView:(double)arg1;
- (void)initTextField;
- (id)getDisplayName;
- (void)fixSize;
- (id)initWithReceiverTag:(long long)arg1 MaxWidth:(double)arg2;
- (id)initWithReceiverTag:(long long)arg1;
- (void)properInit;
- (_Bool)isMailAddrFormatOK:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

