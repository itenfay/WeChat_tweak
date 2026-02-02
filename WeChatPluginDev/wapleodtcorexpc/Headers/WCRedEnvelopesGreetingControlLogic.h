//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSDictionary, NSString, WCPayControlData, WCPayJumpRemindControlLogic, WCPayPayMoneyLogic, WCRedEnvelopes2019GreetingViewController, WCRedEnvelopes2022HKGreetingViewController, WCRedEnvelopesReportCgi;

@interface WCRedEnvelopesGreetingControlLogic
{
    WCPayControlData *m_oPayData;
    WCPayPayMoneyLogic *m_oPayMoneyLogic;
    unsigned long long m_scene;
    WCRedEnvelopes2019GreetingViewController *m_sendView;
    WCRedEnvelopes2022HKGreetingViewController *m_sendViewHK;
    _Bool _isViewAnimationing;
    WCRedEnvelopesReportCgi *_reportWxhbCgi;
    long long _lastUnpayReason;
    NSDictionary *_lastReqKeyStruct;
    WCPayJumpRemindControlLogic *_jumpRemindLogic;
    NSString *_unqiueId;
    MMWebViewController *_h5RedEnvPrepayWebUI;
    NSString *_reportSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(retain, nonatomic) MMWebViewController *h5RedEnvPrepayWebUI; // @synthesize h5RedEnvPrepayWebUI=_h5RedEnvPrepayWebUI;
@property(retain, nonatomic) NSString *unqiueId; // @synthesize unqiueId=_unqiueId;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindLogic; // @synthesize jumpRemindLogic=_jumpRemindLogic;
@property(retain, nonatomic) NSDictionary *lastReqKeyStruct; // @synthesize lastReqKeyStruct=_lastReqKeyStruct;
@property(nonatomic) long long lastUnpayReason; // @synthesize lastUnpayReason=_lastUnpayReason;
@property(retain, nonatomic) WCRedEnvelopesReportCgi *reportWxhbCgi; // @synthesize reportWxhbCgi=_reportWxhbCgi;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene;
- (void)sendReportHBRequestWithFailReason:(int)arg1;
- (void)callPayFail;
- (void)handleGreetingRedEnvPaySuccessWithTransid:(id)arg1;
- (void)callPaySuccWithTransId:(id)arg1;
- (void)call:(id)arg1;
- (void)startGreetingKindaPay;
- (_Bool)isGreetingKindaEnable;
- (void)redEnvelopes2022HKGreetingViewControllerSendClick:(id)arg1;
- (void)redEnvelopes2022HKGreetingViewControllerBack;
- (id)getGreetingReportSessionId;
- (void)genGreeetingReportSessonId;
- (void)redEnvelopes2019GreetingViewControllerSendClick:(id)arg1;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)onGetH5PayNativeCashierResult:(_Bool)arg1;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 isCahceInfo:(_Bool)arg2 Error:(id)arg3;
- (void)OnGenGreetingDownloadResult:(id)arg1;
- (_Bool)gotoViewController:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)onRemoveSendView;
- (void)onPayMoneyLogicDidStop;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)showSendingView:(_Bool)arg1;
- (void)dealloc;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

