//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCPayTenpaySecureCtrlItem;
@protocol WCPayResetPwdBindCardViewControllerDelegate;

@interface WCPayResetPwdBindCardViewController
{
    UIButton *m_footerButton;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    id <WCPayResetPwdBindCardViewControllerDelegate> m_delegate;
    _Bool bPoped;
}

- (void).cxx_destruct;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)changeRealName;
- (void)showDetailTip;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnWCPayResetPwdBindCardBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

