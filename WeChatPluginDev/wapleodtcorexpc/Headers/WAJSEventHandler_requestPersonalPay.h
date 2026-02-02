//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMITransmitKvData, NSString, WABizF2FCancelPayCgi, WABizF2FPlaceOrderCgi, WABizF2FPlaceOrderResp, WABizF2FRequestPaymentCgi, WABizF2FRequestPaymentResp, WABizF2FSuccPageCgi, WCBizLoadingView, WCPayBizF2FPaidSuccViewController, WCPayControlData, WCPayJumpRemindControlLogic;

@interface WAJSEventHandler_requestPersonalPay
{
    NSString *_appId;
    NSString *_outPrepayId;
    WABizF2FRequestPaymentCgi *_bizF2FRequestPaymentCgi;
    WABizF2FPlaceOrderCgi *_bizF2FPlaceOrderCgi;
    WABizF2FCancelPayCgi *_bizF2FCancelPayCgi;
    WABizF2FSuccPageCgi *_bizF2FSuccPageCgi;
    WABizF2FRequestPaymentResp *_bizF2FRequestPaymentResp;
    WABizF2FPlaceOrderResp *_placeOrderResp;
    WCPayJumpRemindControlLogic *_jumpRemindControlLogic;
    MMITransmitKvData *_paymentData;
    WCPayControlData *_m_data;
    WCPayBizF2FPaidSuccViewController *_paidSuccViewController;
    WCBizLoadingView *_m_loadView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBizLoadingView *m_loadView; // @synthesize m_loadView=_m_loadView;
@property(retain, nonatomic) WCPayBizF2FPaidSuccViewController *paidSuccViewController; // @synthesize paidSuccViewController=_paidSuccViewController;
@property(retain, nonatomic) WCPayControlData *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) MMITransmitKvData *paymentData; // @synthesize paymentData=_paymentData;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic; // @synthesize jumpRemindControlLogic=_jumpRemindControlLogic;
@property(retain, nonatomic) WABizF2FPlaceOrderResp *placeOrderResp; // @synthesize placeOrderResp=_placeOrderResp;
@property(retain, nonatomic) WABizF2FRequestPaymentResp *bizF2FRequestPaymentResp; // @synthesize bizF2FRequestPaymentResp=_bizF2FRequestPaymentResp;
@property(retain, nonatomic) WABizF2FSuccPageCgi *bizF2FSuccPageCgi; // @synthesize bizF2FSuccPageCgi=_bizF2FSuccPageCgi;
@property(retain, nonatomic) WABizF2FCancelPayCgi *bizF2FCancelPayCgi; // @synthesize bizF2FCancelPayCgi=_bizF2FCancelPayCgi;
@property(retain, nonatomic) WABizF2FPlaceOrderCgi *bizF2FPlaceOrderCgi; // @synthesize bizF2FPlaceOrderCgi=_bizF2FPlaceOrderCgi;
@property(retain, nonatomic) WABizF2FRequestPaymentCgi *bizF2FRequestPaymentCgi; // @synthesize bizF2FRequestPaymentCgi=_bizF2FRequestPaymentCgi;
@property(retain, nonatomic) NSString *outPrepayId; // @synthesize outPrepayId=_outPrepayId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)stopWCPayLoading;
- (void)startWCPayLoading;
- (void)initLoadView;
- (id)getPanelCustomView:(id)arg1;
- (void)startPlaceOrder:(unsigned long long)arg1;
- (void)onWABizF2FRequestPaymentFail;
- (void)showPanelWithPaymentResp:(id)arg1;
- (void)onWABizF2FPlaceOrderFail;
- (void)onPayMoneyLogicSuccess:(id)arg1;
- (id)genAfterPlaceOrderCommReq:(id)arg1;
- (void)onPayMoneyLogicCancel:(id)arg1;
- (void)onAfterPaymentCancelOrFail;
- (void)onSuccPageCgiFailed;
- (void)onWABizF2FSuccPageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)convertSucPageRespFrom:(id)arg1;
- (void)onWABizF2FSuccPageCgiResponseOK:(id)arg1;
- (void)onWABizF2FCancelPayCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FCancelPayCgiResponseOK:(id)arg1;
- (void)call:(id)arg1;
- (void)onBizF2FPaidSuccViewControllerDoneBtnClick;
- (void)onWABizPayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizPayCheckCgiResponseOK:(id)arg1;
- (void)onWABizF2FPlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FPlaceOrderCgiResponseOK:(id)arg1;
- (void)onWABizF2FRequestPaymentCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FRequestPaymentCgiResponseOK:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

