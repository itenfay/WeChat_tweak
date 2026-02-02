//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol PhoneAuthManagePhoneLogicDelegate, PhoneAuthManagePhoneLogicOperationDelegate;

@interface PhoneAuthManagePhoneLogic
{
    id <PhoneAuthManagePhoneLogicDelegate> _delegate;
    id <PhoneAuthManagePhoneLogicOperationDelegate> _operationDelegate;
    NSString *_appid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) __weak id <PhoneAuthManagePhoneLogicOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) __weak id <PhoneAuthManagePhoneLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleUpdateUserPhoneResponse:(id)arg1;
- (void)handleCheckVerifyCodeResponse:(id)arg1;
- (void)handleSendCustomPhoneVerifyCodeResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyCheckVerifyCodeSuccess;
- (void)notifySendVerifyCodeSuccess;
- (void)notifyCheckVerifyCodeFailMsg:(id)arg1;
- (void)notifySendVerifyCodeFailMsg:(id)arg1;
- (void)updatePhoneToSvrWithPhoneNumber:(id)arg1 type:(unsigned int)arg2;
- (void)deletePhoneFromSvrUsageList:(id)arg1;
- (void)addPhoneToSvrUsageList:(id)arg1;
- (void)verifyCode:(id)arg1 withPhoneNumber:(id)arg2 saveFlag:(_Bool)arg3;
- (void)sendConfirmCodeToPhoneNumber:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

