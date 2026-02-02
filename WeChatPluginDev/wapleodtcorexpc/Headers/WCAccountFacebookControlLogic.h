//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountManualAuthControlLogic;

@interface WCAccountFacebookControlLogic
{
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
}

- (void).cxx_destruct;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onLoginFacebookBegan:(id)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)loginWithUserName:(id)arg1 token:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)pause;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

