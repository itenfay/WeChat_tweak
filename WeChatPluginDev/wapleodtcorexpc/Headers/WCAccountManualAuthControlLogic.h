//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UnifyAuthResponse, WCAccountErrorHandleLogic, WCAccountGraphicVerifyControlLogic;
@protocol WCAccountManualAuthControlLogicDelegate;

@interface WCAccountManualAuthControlLogic
{
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    id <WCAccountManualAuthControlLogicDelegate> m_delegate;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    unsigned int m_idc_redirect_count;
    unsigned int m_mmtls_set_count;
    _Bool m_bFromAutoAuth;
    _Bool m_bSessionKeyNeedECDHDecrypt;
    _Bool m_bStopCloseAcct;
    unsigned long long m_ui64BeginTime;
    UnifyAuthResponse *_cacheResponse;
    _Bool m_bDontFillWTBuf;
    unsigned int m_uiCGIScene;
    WCAccountErrorHandleLogic *_passwordInputErrorLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountErrorHandleLogic *passwordInputErrorLogic; // @synthesize passwordInputErrorLogic=_passwordInputErrorLogic;
@property(nonatomic) _Bool m_bDontFillWTBuf; // @synthesize m_bDontFillWTBuf;
@property(nonatomic) unsigned int m_uiCGIScene; // @synthesize m_uiCGIScene;
- (void)onPasswordInputViewControllerLoginWithPassword:(id)arg1;
- (void)onPasswordInputViewControllerBack:(id)arg1;
- (_Bool)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)onErrorHandleLogicDone;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAuthResponseOK:(id)arg1;
- (void)handleAuthResponse:(id)arg1;
- (void)onStopCloseAcct;
- (void)onStopLogic;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(_Bool)arg1;
- (void)onGraphicVerifyControlLogicCancel;
- (void)startLogicFromAutoAuth;
- (void)startLogic;
- (id)genManualAuthRequest;
- (id)genManualAuthRequest:(_Bool)arg1;
- (_Bool)startManualAuth:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

