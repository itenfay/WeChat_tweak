//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIViewController, UIWindow;

@interface WCAccountManualLoginControlMgr
{
    UIViewController *m_firstViewController;
    UIWindow *m_window;
}

- (void).cxx_destruct;
- (void)reportLogoutSwitchToOtherAccount;
- (void)reportLogoutSwitchToOtherMethodToLogin;
- (void)reportLogoutDefaultPhoneOrNot:(_Bool)arg1;
- (void)reportPwdSwitchToVerifyOrReverse:(_Bool)arg1;
- (void)reportPhoneSwitchToOthersOrReverse:(_Bool)arg1;
- (void)reportADID;
- (unsigned int)startRegAffiliatedAcct:(id)arg1 Data:(id)arg2;
- (unsigned int)startKidsWatchLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startNewPhoneLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSecurityCenterLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPasskeyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startAppleLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFacebookLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startThirdAppRegisterLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPhoneRegLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startQRCodeLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startOneClickLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startMainLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startLastUserLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startLoginLogic:(id)arg1 Data:(id)arg2;
- (void)reportClickAction:(unsigned int)arg1;
- (void)switchLogin;
- (void)closeFirstView:(_Bool)arg1;
- (void)closeFirstViewWithFadeOutAnimation;
- (void)openFirstView:(id)arg1;
- (void)setMainWindowRootView:(id)arg1;
- (id)getWindow;
- (void)dealloc;
- (id)init;

@end

