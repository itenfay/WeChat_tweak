//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountLoginUsersViewController, WCAccountManualAuthControlLogic;
@protocol WCAccountNoPwdAuthLogicDelegate;

@interface WCAccountNoPwdAuthLogic
{
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    id <WCAccountNoPwdAuthLogicDelegate> m_delegate;
    WCAccountLoginUsersViewController *_loginUsersVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCAccountLoginUsersViewController *loginUsersVC; // @synthesize loginUsersVC=_loginUsersVC;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)reportOpCode:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)onLoginUsersLoginUserName:(id)arg1;
- (void)onRegisterAffiliatedAccount;
- (void)onLoginUsersNewAccount;
- (void)onLoginUsersLoginUserEmpty;
- (void)onLoginUsersCancel;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

