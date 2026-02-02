//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, WCPayInputMoneyView, WCPayNavigationBarBottomBanner;
@protocol HoneyPayModifyMaximumAmountViewControllerDelegate;

@interface HoneyPayModifyMaximumAmountViewController
{
    _Bool _isHide;
    id <HoneyPayModifyMaximumAmountViewControllerDelegate> _delegate;
    UIButton *_confirmButton;
    NSString *_amount;
    WCPayNavigationBarBottomBanner *_alertBanner;
    WCPayInputMoneyView *_inputMoneyView;
    UILabel *_bottomTipsLabel;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHide; // @synthesize isHide=_isHide;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UILabel *bottomTipsLabel; // @synthesize bottomTipsLabel=_bottomTipsLabel;
@property(retain, nonatomic) WCPayInputMoneyView *inputMoneyView; // @synthesize inputMoneyView=_inputMoneyView;
@property(retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner; // @synthesize alertBanner=_alertBanner;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <HoneyPayModifyMaximumAmountViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)max;
- (void)wcpayInputMoneyView:(id)arg1 didChangeAmount:(id)arg2;
- (void)honeyPaykeyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)done;
- (void)checkAmount;
- (id)normalStatusHeaderView;
- (void)updateBottomTipsView;
- (void)relaodTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

