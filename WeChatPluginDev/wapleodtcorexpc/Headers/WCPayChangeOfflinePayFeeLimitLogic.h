//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayChangeOfflinePayFeeLimitLogic
{
    int m_enWCPayChangeOfflinePayFeeLimitLogicScene;
}

@property(nonatomic) int m_enWCPayChangeOfflinePayFeeLimitLogicScene; // @synthesize m_enWCPayChangeOfflinePayFeeLimitLogicScene;
- (void)OnChangeOfflinePayLimit:(id)arg1 Error:(id)arg2;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerChangeToLimit:(long long)arg1;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerBack;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)EndChangeOfflinePayFeeLimit;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

