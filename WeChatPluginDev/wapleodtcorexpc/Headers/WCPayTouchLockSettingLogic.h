//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayOpeniOSTouchLockCgi;
@protocol WCPayTouchLockSettingLogicDelegate;

@interface WCPayTouchLockSettingLogic
{
    id <WCPayTouchLockSettingLogicDelegate> _delegate;
    WCPayOpeniOSTouchLockCgi *_openCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOpeniOSTouchLockCgi *openCgi; // @synthesize openCgi=_openCgi;
@property(nonatomic) __weak id <WCPayTouchLockSettingLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openiOSTouchLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)openiOSTouchLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)verifyTouchID:(id)arg1;
- (void)openTouchLockWithToken:(id)arg1 Model:(id)arg2;
- (void)callSetupSuccess;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

