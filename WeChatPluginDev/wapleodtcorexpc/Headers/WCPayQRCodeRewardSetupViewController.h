//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMTextView, MMUIView, NSMutableArray, NSString, UIButton, UITextField, WCPayNoticeItemView, WCPayParamInvalidTipView;
@protocol WCPayQRCodeRewardSetupViewControllerDelegate;

@interface WCPayQRCodeRewardSetupViewController
{
    id <WCPayQRCodeRewardSetupViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    MMTextView *_rewardDescTextView;
    MMUIView *_keyboardInputToolBar;
    UIButton *_confirmGenCodeBtn;
    UITextField *_currentEdittingTextField;
    WCPayParamInvalidTipView *_invalidTipsView;
    NSMutableArray *_defaultAmountList;
    NSMutableArray *_editAmountList;
    unsigned long long _maxAmount;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(nonatomic) unsigned long long maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) NSMutableArray *editAmountList; // @synthesize editAmountList=_editAmountList;
@property(retain, nonatomic) NSMutableArray *defaultAmountList; // @synthesize defaultAmountList=_defaultAmountList;
@property(retain, nonatomic) WCPayParamInvalidTipView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(retain, nonatomic) UITextField *currentEdittingTextField; // @synthesize currentEdittingTextField=_currentEdittingTextField;
@property(retain, nonatomic) UIButton *confirmGenCodeBtn; // @synthesize confirmGenCodeBtn=_confirmGenCodeBtn;
@property(retain, nonatomic) MMUIView *keyboardInputToolBar; // @synthesize keyboardInputToolBar=_keyboardInputToolBar;
@property(retain, nonatomic) MMTextView *rewardDescTextView; // @synthesize rewardDescTextView=_rewardDescTextView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayQRCodeRewardSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)arg1 amountIndex:(unsigned long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)resignTextField;
- (void)confirmGenCodeBtnClick;
- (void)confirmToExitEdit;
- (void)leftBarButtonClick;
- (id)genKeyboardInputToolBar;
- (void)setupTableHeaderView;
- (void)setupContentView;
- (void)setupNavigationBar;
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

