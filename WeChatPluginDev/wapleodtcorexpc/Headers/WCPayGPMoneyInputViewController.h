//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, WCPayDecimalKeyboardView, WCPayRemarkPageSheet, WCPayTextField;
@protocol WCPayGPMoneyInputViewControllerDelegate;

@interface WCPayGPMoneyInputViewController
{
    id <WCPayGPMoneyInputViewControllerDelegate> _delegate;
    WCPayTextField *_moneyTextField;
    RichTextView *_remarkTextView;
    WCPayDecimalKeyboardView *_keyboardView;
    NSString *_remarkContent;
    WCPayRemarkPageSheet *_remarkPageSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayRemarkPageSheet *remarkPageSheet; // @synthesize remarkPageSheet=_remarkPageSheet;
@property(retain, nonatomic) NSString *remarkContent; // @synthesize remarkContent=_remarkContent;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) RichTextView *remarkTextView; // @synthesize remarkTextView=_remarkTextView;
@property(retain, nonatomic) WCPayTextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(nonatomic) __weak id <WCPayGPMoneyInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)pageSheetCancel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)activeTextField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChang:(id)arg1;
- (id)getLauncherDisplayName;
- (void)genKeyboardView;
- (void)setupInputView:(id)arg1;
- (void)setupHeaderView:(id)arg1;
- (void)setupContentView;
- (void)leftBarButtonClick;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

