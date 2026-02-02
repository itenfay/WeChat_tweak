//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPayBalanceFetchMoneyControlLogic, WCPayF2FJSApiAuthenticationControlLogic, WCPayF2FReceiveDetailControlLogic, WCPayJSApiAuthenticationControlLogic, WCPayJumpC2CMessageJsapiLogic, WCPayJumpHbRefundJsapiLogic, WCPayLQTDepositControlLogic, WCPayLQTDetailControlLogic, WCPayLQTMoneyControlLogic, WCPayOverseaFacingReceiveControlLogic, WCPayT2BCDetailControlLogic, WCPayT2BCTransferControlLogic;

@interface WCPayJSApiOpenWCPayViewControl
{
    JSEvent *m_jsEvent;
    WCPayJSApiAuthenticationControlLogic *m_oAuthenticationLogic;
    long long m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
    WCPayF2FJSApiAuthenticationControlLogic *_f2fJSApiAuthenControlLogic;
    WCPayF2FReceiveDetailControlLogic *_f2fDetailControlLogic;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
    WCPayT2BCDetailControlLogic *_t2bcDetailControlLogic;
    WCPayBalanceFetchMoneyControlLogic *_fetchBanlanceControlLogic;
    WCPayT2BCTransferControlLogic *_t2bcTransferControlLogic;
    WCPayJumpC2CMessageJsapiLogic *_m_jumpC2CMessageJsapiLogic;
    WCPayLQTDepositControlLogic *_lqtDepositControlLogic;
    WCPayLQTMoneyControlLogic *_lqtMoneyControlLogic;
    WCPayJumpHbRefundJsapiLogic *_hbRefundControlLogic;
    WCPayOverseaFacingReceiveControlLogic *_overseaFacingReceiveControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOverseaFacingReceiveControlLogic *overseaFacingReceiveControlLogic; // @synthesize overseaFacingReceiveControlLogic=_overseaFacingReceiveControlLogic;
@property(retain, nonatomic) WCPayJumpHbRefundJsapiLogic *hbRefundControlLogic; // @synthesize hbRefundControlLogic=_hbRefundControlLogic;
@property(retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic; // @synthesize lqtMoneyControlLogic=_lqtMoneyControlLogic;
@property(retain, nonatomic) WCPayLQTDepositControlLogic *lqtDepositControlLogic; // @synthesize lqtDepositControlLogic=_lqtDepositControlLogic;
@property(retain, nonatomic) WCPayJumpC2CMessageJsapiLogic *m_jumpC2CMessageJsapiLogic; // @synthesize m_jumpC2CMessageJsapiLogic=_m_jumpC2CMessageJsapiLogic;
@property(retain, nonatomic) WCPayT2BCTransferControlLogic *t2bcTransferControlLogic; // @synthesize t2bcTransferControlLogic=_t2bcTransferControlLogic;
@property(retain, nonatomic) WCPayBalanceFetchMoneyControlLogic *fetchBanlanceControlLogic; // @synthesize fetchBanlanceControlLogic=_fetchBanlanceControlLogic;
@property(retain, nonatomic) WCPayT2BCDetailControlLogic *t2bcDetailControlLogic; // @synthesize t2bcDetailControlLogic=_t2bcDetailControlLogic;
@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
@property(retain, nonatomic) WCPayF2FReceiveDetailControlLogic *f2fDetailControlLogic; // @synthesize f2fDetailControlLogic=_f2fDetailControlLogic;
@property(retain, nonatomic) WCPayF2FJSApiAuthenticationControlLogic *f2fJSApiAuthenControlLogic; // @synthesize f2fJSApiAuthenControlLogic=_f2fJSApiAuthenControlLogic;
- (void)syncLqtVersion:(id)arg1;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
- (void)onWCPaySecuritySettingViewControllerBack;
- (void)honeyPayHomeLogicDidStop:(id)arg1;
- (void)onLQTDetailControlLogicStop;
- (void)callJSEventOKAndReport;
- (id)packageParam;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)call:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

