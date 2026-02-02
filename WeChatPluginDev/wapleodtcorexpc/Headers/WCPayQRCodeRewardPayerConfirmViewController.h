//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextView, NSString, UIButton;
@protocol WCPayQRCodeRewardPayerConfirmViewControllerDelegate;

@interface WCPayQRCodeRewardPayerConfirmViewController
{
    _Bool _bIsCheckBoxSelected;
    id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> _delegate;
    MMTextView *_payerCommentTextView;
    UIButton *_checkBoxButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsCheckBoxSelected; // @synthesize bIsCheckBoxSelected=_bIsCheckBoxSelected;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(retain, nonatomic) MMTextView *payerCommentTextView; // @synthesize payerCommentTextView=_payerCommentTextView;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkBoxBtnClick;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)confirmBtnClick;
- (void)leftBarButtonClick;
- (void)setupContentView;
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

