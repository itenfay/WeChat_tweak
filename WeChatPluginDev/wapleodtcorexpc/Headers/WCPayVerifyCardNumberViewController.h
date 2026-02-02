//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, WCPayInputView;
@protocol WCPayVerifyCardNumberViewControllerDelegate;

@interface WCPayVerifyCardNumberViewController
{
    id <WCPayVerifyCardNumberViewControllerDelegate> _delegate;
    WCPayInputView *_payInputView;
    UILabel *_tips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
@property(nonatomic) __weak id <WCPayVerifyCardNumberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)realodView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

