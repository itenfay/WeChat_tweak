//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CountDownTipViewController, MMUIWindow, NSString, WCAccountControlData, WCAccountGraphicVerifyControlLogic, WCAccountManualAuthControlLogic;
@protocol WCAccountAutoLoginControlLogicDelegate;

@interface WCAccountAutoLoginControlLogic
{
    WCAccountControlData *m_data;
    MMUIWindow *m_window;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    id <WCAccountAutoLoginControlLogicDelegate> m_delegate;
    unsigned int m_idc_redirect_count;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    unsigned int m_mmtls_set_count;
    _Bool m_bSessionKeyNeedECDHDecrypt;
    _Bool m_bStopCloseAcct;
    CountDownTipViewController *m_tipView;
    unsigned long long m_ui64BeginTime;
    _Bool m_bHasKickout;
    CDUnknownBlockType m_quitCompleteBlock;
    _Bool _isDisasterAuth;
}

- (void).cxx_destruct;
@property _Bool isDisasterAuth; // @synthesize isDisasterAuth=_isDisasterAuth;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleMessageReturn:(id)arg1;
- (void)handleAuthResponse:(id)arg1;
- (void)onStopCloseAcct;
- (void)showTipWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 countDown:(unsigned int)arg4 errorInfo:(id)arg5;
- (void)showTipView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)webViewReturn:(id)arg1;
- (void)stopLogicLoginRetry;
- (void)onAlertErrorAction:(id)arg1;
- (void)onErrorAction:(id)arg1;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(_Bool)arg1;
- (void)onGraphicVerifyControlLogicCancel;
- (void)closeFirstView;
- (void)openFirstView;
- (void)kickOut;
- (void)stopLogicWithKickOut;
- (void)endCloseMainFrame;
- (void)closeMainFrame;
- (void)startLogic;
- (id)getViewController;
- (id)genAutoAuthRequest;
- (id)genAutoAuthRequest:(_Bool)arg1;
- (_Bool)startAutoAuth:(id)arg1;
- (void)dealloc;
- (void)stopLogic:(unsigned long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

