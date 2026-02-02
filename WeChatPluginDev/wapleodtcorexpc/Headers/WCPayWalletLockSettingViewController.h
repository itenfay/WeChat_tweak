//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayPaySecurityCgi;
@protocol WCPayWalletLockSettingViewControllerDelegate;

@interface WCPayWalletLockSettingViewController
{
    id <WCPayWalletLockSettingViewControllerDelegate> _delegate;
    WCPayPaySecurityCgi *_m_securityCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPaySecurityCgi *m_securityCgi; // @synthesize m_securityCgi=_m_securityCgi;
@property(nonatomic) __weak id <WCPayWalletLockSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickModifyPatternLock;
- (void)clickClose;
- (void)clickPatternLock;
- (void)clickTouchLock;
- (_Bool)isTouchLockOpen;
- (_Bool)isSpecailPatternLockOpen;
- (_Bool)patternLockIsCurrentWalletLock;
- (void)reloadTableView;
- (void)reload;
- (void)viewDidLoad;
- (unsigned int)walletLockVCEntryScene;
- (void)onConfirmError;
- (void)paySecurityCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)paySecurityCgi:(id)arg1 didGetResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

