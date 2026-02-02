//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PasswordLogic;

@interface MMChangeQQLoginTypeHandler
{
    int _lastLoginAcountType;
    PasswordLogic *_pwdLogic;
    NSString *_loginName;
}

- (void).cxx_destruct;
@property(nonatomic) int lastLoginAcountType; // @synthesize lastLoginAcountType=_lastLoginAcountType;
@property(retain, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(retain, nonatomic) PasswordLogic *pwdLogic; // @synthesize pwdLogic=_pwdLogic;
- (void)unknownFail:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)failWithShouldSetContent:(_Bool)arg1;
- (void)handleCommonApiWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

