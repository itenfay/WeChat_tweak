//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayJSGetEncryptHKPasswdLogicDelegate;

@interface WCPayJSGetEncryptHKPasswdLogic
{
    id <WCPayJSGetEncryptHKPasswdLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayJSGetEncryptHKPasswdLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authFail;
- (void)callGetEncryptPwd:(id)arg1 signature:(id)arg2;
- (void)callFail:(_Bool)arg1;
- (void)authOk;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

@end

