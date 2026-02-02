//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUITextField, MMUIView, NSString, UIButton;
@protocol ContactTagCreateTagHalfScreenViewControllerDelegate;

@interface ContactTagCreateTagHalfScreenViewController
{
    UIButton *m_modifyAliasButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUIView *m_inputTextFieldBackground;
    MMUITextField *m_inputTextField;
    MMUILabel *m_warningView;
    unsigned int m_curEventID;
    double m_fKeyboardHeight;
    MMUIButton *_closeButton;
    NSString *_oldTagName;
    NSString *_targetTagName;
    id <ContactTagCreateTagHalfScreenViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactTagCreateTagHalfScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *targetTagName; // @synthesize targetTagName=_targetTagName;
@property(retain, nonatomic) NSString *oldTagName; // @synthesize oldTagName=_oldTagName;
- (void)setCloseButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)saveEditTag;
- (void)textFieldTextDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hideKeyboard;
- (void)onClickClose:(id)arg1;
- (void)OnSettingAccountModifyAlias;
- (void)HideWarningText;
- (void)ShowWarningText:(id)arg1;
- (void)layoutModifyAliasButton;
- (void)layoutWarningView;
- (void)layoutInputTextView;
- (void)layoutTitleView;
- (void)layoutContentView;
- (void)layoutView;
- (id)closeButton;
- (void)initNotificationObservers;
- (long long)halfViewControllerHeight;
- (void)initData;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

