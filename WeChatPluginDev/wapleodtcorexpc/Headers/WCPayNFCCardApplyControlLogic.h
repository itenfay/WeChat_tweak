//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ApplyNFCCardResponse, EXTPKG_mmpayapplynfccardbo_CardPasskitInfo, NSString, OrderCreateOrderResponse, OrderQueryOrderResponse, WCPayNFCCardPlaceOrderCgi, WCPayNFCCardQueryOrderCgi;
@protocol WCPayNFCCardApplyControlLogicDelegate;

@interface WCPayNFCCardApplyControlLogic
{
    id <WCPayNFCCardApplyControlLogicDelegate> _logicDelegate;
    OrderCreateOrderResponse *_placeOrderResponse;
    CDUnknownBlockType _completionHandler;
    ApplyNFCCardResponse *_applyNFCCardResponse;
    OrderQueryOrderResponse *_orderQueryReponse;
    EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *_cardPasskitInfo;
    NSString *_outTradeNo;
    WCPayNFCCardPlaceOrderCgi *_placeOrderCgi;
    WCPayNFCCardQueryOrderCgi *_queryOrderCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNFCCardQueryOrderCgi *queryOrderCgi; // @synthesize queryOrderCgi=_queryOrderCgi;
@property(retain, nonatomic) WCPayNFCCardPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(retain, nonatomic) NSString *outTradeNo; // @synthesize outTradeNo=_outTradeNo;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *cardPasskitInfo; // @synthesize cardPasskitInfo=_cardPasskitInfo;
@property(retain, nonatomic) OrderQueryOrderResponse *orderQueryReponse; // @synthesize orderQueryReponse=_orderQueryReponse;
@property(retain, nonatomic) ApplyNFCCardResponse *applyNFCCardResponse; // @synthesize applyNFCCardResponse=_applyNFCCardResponse;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) OrderCreateOrderResponse *placeOrderResponse; // @synthesize placeOrderResponse=_placeOrderResponse;
@property(nonatomic) __weak id <WCPayNFCCardApplyControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onWCPayIssueNFCCardCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayIssueNFCCardCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)addPaymentPassViewController:(id)arg1 didFinishAddingPaymentPass:(id)arg2 error:(id)arg3;
- (void)addPaymentPassViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)onWCPayNFCCardQueryOrderCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardQueryOrderCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)doContinueApplyCard;
- (void)doNFCCardQueryOrderCgi;
- (void)call:(id)arg1;
- (void)doInWxAppPay:(id)arg1;
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardApplyViewControllerConfirmApply:(long long)arg1;
- (void)onWCPayNFCCardApplyViewControllerCancel;
- (void)onWCPayQueryNFCardInfoCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayQueryNFCardInfoCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardTipsViewControllerCancel;
- (int)countDonwSec:(long long)arg1;
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

