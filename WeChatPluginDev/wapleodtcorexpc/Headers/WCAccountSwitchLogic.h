//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountLogoutLogic;
@protocol WCAccountSwitchLogicDelegate;

@interface WCAccountSwitchLogic
{
    WCAccountLogoutLogic *m_logoutLogic;
    id <WCAccountSwitchLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAccountSwitchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAccountLogoutLogicDidQuit;
- (void)onAccountLogoutLogicCheckOK;
- (void)onAccountLogoutLogicCancel;
- (void)onNoPwdAuthControlLogicDidCancel;
- (void)logoutCurrentAccount;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

