//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextView, MMUIView, NSString, UIButton, UITextField, WCPayNoticeItemView, WCPayParamInvalidTipView;
@protocol WCPayQRCodeRewardEditMoneyViewControllerDelegate;

@interface WCPayQRCodeRewardEditMoneyViewController
{
    _Bool _bIsCheckBoxSelected;
    id <WCPayQRCodeRewardEditMoneyViewControllerDelegate> _delegate;
    UITextField *_moneyTextField;
    MMTextView *_commentTextView;
    UIButton *_confirmBtn;
    MMUIView *_keyboardInputToolBar;
    UIButton *_checkBoxButton;
    WCPayParamInvalidTipView *_invalidTipsView;
    unsigned long long _maxAmount;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(nonatomic) unsigned long long maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) WCPayParamInvalidTipView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(nonatomic) _Bool bIsCheckBoxSelected; // @synthesize bIsCheckBoxSelected=_bIsCheckBoxSelected;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(retain, nonatomic) MMUIView *keyboardInputToolBar; // @synthesize keyboardInputToolBar=_keyboardInputToolBar;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(nonatomic) __weak id <WCPayQRCodeRewardEditMoneyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkBoxBtnClick;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)resignTextField;
- (void)confirmBtnClick;
- (long long)getInputAmount;
- (void)leftBarButtonClick;
- (id)genKeyboardInputToolBar;
- (void)setupContentView;
- (void)setupData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

