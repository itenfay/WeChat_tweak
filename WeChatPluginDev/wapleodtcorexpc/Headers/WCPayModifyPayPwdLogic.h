//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayModifyPayPwdLogic
{
}

- (void)OnModifyWCPayPassword:(id)arg1 NewWCPayPassword:(id)arg2 Error:(id)arg3;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)BackToRootView;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnAlertGiveUpLogic;
- (void)showGiveUpLogicAlert;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

