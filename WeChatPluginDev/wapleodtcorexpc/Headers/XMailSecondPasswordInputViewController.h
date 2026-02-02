//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIScrollView, WCUITextField;

@interface XMailSecondPasswordInputViewController
{
    UIScrollView *m_scrollView;
    UILabel *m_errorInfoLabel;
    WCUITextField *m_pwdTextField;
    UIButton *m_confirmBtn;
    NSString *_mailAddr;
    CDUnknownBlockType _onClickConfirmBlock;
    CDUnknownBlockType _onViewControllerQuitBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onViewControllerQuitBlock; // @synthesize onViewControllerQuitBlock=_onViewControllerQuitBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickConfirmBlock; // @synthesize onClickConfirmBlock=_onClickConfirmBlock;
@property(retain, nonatomic) NSString *mailAddr; // @synthesize mailAddr=_mailAddr;
- (void)onClickConfirmBtn:(id)arg1;
- (void)onReturn;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onShowPasswordError;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

