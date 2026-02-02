//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PassKeyVerifyInfo, PasskeyEntitlementProvider, WCAccountManualAuthControlLogic;

@interface WCAccountPasskeyControlLogic
{
    WCAccountManualAuthControlLogic *_manualAuthLogic;
    PasskeyEntitlementProvider *_passkeyProvider;
    PassKeyVerifyInfo *_passkeyVerifyInfo;
    NSString *_username;
    NSString *_randomPwd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *randomPwd; // @synthesize randomPwd=_randomPwd;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) PassKeyVerifyInfo *passkeyVerifyInfo; // @synthesize passkeyVerifyInfo=_passkeyVerifyInfo;
@property(retain, nonatomic) PasskeyEntitlementProvider *passkeyProvider; // @synthesize passkeyProvider=_passkeyProvider;
@property(retain, nonatomic) WCAccountManualAuthControlLogic *manualAuthLogic; // @synthesize manualAuthLogic=_manualAuthLogic;
- (void)reportAction:(unsigned long long)arg1;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)startManualAuth;
- (void)passkeyAuthorizaWithIDCRedirectCount:(unsigned long long)arg1;
- (void)passkeyAuthorize;
- (unsigned int)cgiRequestScene;
- (void)showNoCredentialsPageSheetWithChallenge:(id)arg1;
- (void)signInWithChallenge:(id)arg1 preferImmediatelyAvailableCredentials:(_Bool)arg2 ignoreFail:(_Bool)arg3;
- (void)requestChallenge;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

