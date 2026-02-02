//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DepositQueryDepositResponse, NSString, OrderCreateOrderResponse, WCPayNFCCardPlaceOrderCgi, WCPayNFCCardQueryDepositCgi, WCPayNFCCardTipsModal, WCPayPassKitFacade;
@protocol WCPayNFCCardChargeControlLogicDelegate;

@interface WCPayNFCCardChargeControlLogic
{
    _Bool _isChargeSuccess;
    id <WCPayNFCCardChargeControlLogicDelegate> _logicDelegate;
    WCPayPassKitFacade *_passkitMgr;
    OrderCreateOrderResponse *_placeOrderResponse;
    NSString *_outTradeNo;
    DepositQueryDepositResponse *_orderQueryReponse;
    WCPayNFCCardQueryDepositCgi *_queryOrderCgi;
    WCPayNFCCardPlaceOrderCgi *_placeOrderCgi;
    WCPayNFCCardTipsModal *_tipsModal;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isChargeSuccess; // @synthesize isChargeSuccess=_isChargeSuccess;
@property(retain, nonatomic) WCPayNFCCardTipsModal *tipsModal; // @synthesize tipsModal=_tipsModal;
@property(retain, nonatomic) WCPayNFCCardPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(retain, nonatomic) WCPayNFCCardQueryDepositCgi *queryOrderCgi; // @synthesize queryOrderCgi=_queryOrderCgi;
@property(retain, nonatomic) DepositQueryDepositResponse *orderQueryReponse; // @synthesize orderQueryReponse=_orderQueryReponse;
@property(retain, nonatomic) NSString *outTradeNo; // @synthesize outTradeNo=_outTradeNo;
@property(retain, nonatomic) OrderCreateOrderResponse *placeOrderResponse; // @synthesize placeOrderResponse=_placeOrderResponse;
@property(retain, nonatomic) WCPayPassKitFacade *passkitMgr; // @synthesize passkitMgr=_passkitMgr;
@property(nonatomic) __weak id <WCPayNFCCardChargeControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onWCPayNFCCardQueryDepositCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardQueryDepositCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)refreshBalance;
- (void)doNFCCardQueryOrderCgi;
- (void)call:(id)arg1;
- (void)doInWxAppPay:(id)arg1;
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardChargeViewControllerConfirmCharge:(long long)arg1;
- (long long)getCurrentPassBalance;
- (void)onWCPayNFCCardChargeViewControllerCancel;
- (void)onWCPayQueryNFCardInfoCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)startQueryCardInfoCgi;
- (void)startLogic;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

