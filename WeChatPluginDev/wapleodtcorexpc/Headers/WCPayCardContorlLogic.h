//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayCardContorlLogic
{
}

- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnSetMainCard:(id)arg1 Error:(id)arg2;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)BackToRootView;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)CardDetailBack;
- (void)CardDetailRepay:(id)arg1;
- (void)CardDetailExpiredUnbindCard:(id)arg1;
- (void)CardDetailSetMainBankCard:(id)arg1;
- (void)CardDetailUnbindCard:(id)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

