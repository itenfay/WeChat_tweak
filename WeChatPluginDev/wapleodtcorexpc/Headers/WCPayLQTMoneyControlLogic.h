//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPanelView, MMTipsViewController, MMWebViewController, NSString, PreRedeemFundRes, PurchaseFundRes, WCPayComplianceHalfPage, WCPayLQTClickPurchaseCgi, WCPayLQTClickRedeemCgi, WCPayLQTGetDistributePreviewCgi, WCPayLQTPreRedeemFundCgi, WCPayLQTPurchaseFromBankGuideCgi, WCPayLQTPurchaseFundCgi, WCPayLQTQryPurchaseResultCgi, WCPayLQTQryUserFundDetailCgi, WCPayLQTRedeemFundCgi, WCPayPayMoneyLogic;
@protocol WCPayLQTMoneyControlLogicDelegate;

@interface WCPayLQTMoneyControlLogic
{
    _Bool _bIsFetchOrSaveSucc;
    unsigned int _entranceType;
    id <WCPayLQTMoneyControlLogicDelegate> _logicDelegate;
    NSString *_traceInfo;
    NSString *_operateId;
    WCPayLQTQryUserFundDetailCgi *_detailCgi;
    WCPayLQTPurchaseFundCgi *_prepayCgi;
    WCPayLQTQryPurchaseResultCgi *_payResultQryCgi;
    WCPayLQTPreRedeemFundCgi *_preRedeemFundCgi;
    WCPayLQTRedeemFundCgi *_redeemFundCgi;
    WCPayLQTClickRedeemCgi *_clickRedeemCgi;
    WCPayLQTGetDistributePreviewCgi *_getDistributePreviewCgi;
    WCPayLQTClickPurchaseCgi *_clickPurchaseCgi;
    WCPayLQTPurchaseFromBankGuideCgi *_purchaseFromLqReportCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    PurchaseFundRes *_purchaseResp;
    PreRedeemFundRes *_preRedeemResp;
    WCPayComplianceHalfPage *_complianceHalfPage;
    NSString *_bindSerialFromNewCard;
    MMTipsViewController *_upgradeTipsView;
    MMWebViewController *_uploadIDCardWebView;
    MMPanelView *_largeAmountPanelView;
}

- (void).cxx_destruct;
@property(retain) MMPanelView *largeAmountPanelView; // @synthesize largeAmountPanelView=_largeAmountPanelView;
@property(retain, nonatomic) MMWebViewController *uploadIDCardWebView; // @synthesize uploadIDCardWebView=_uploadIDCardWebView;
@property(retain) MMTipsViewController *upgradeTipsView; // @synthesize upgradeTipsView=_upgradeTipsView;
@property(nonatomic) _Bool bIsFetchOrSaveSucc; // @synthesize bIsFetchOrSaveSucc=_bIsFetchOrSaveSucc;
@property(retain, nonatomic) NSString *bindSerialFromNewCard; // @synthesize bindSerialFromNewCard=_bindSerialFromNewCard;
@property(nonatomic) WCPayComplianceHalfPage *complianceHalfPage; // @synthesize complianceHalfPage=_complianceHalfPage;
@property(retain, nonatomic) PreRedeemFundRes *preRedeemResp; // @synthesize preRedeemResp=_preRedeemResp;
@property(retain, nonatomic) PurchaseFundRes *purchaseResp; // @synthesize purchaseResp=_purchaseResp;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayLQTPurchaseFromBankGuideCgi *purchaseFromLqReportCgi; // @synthesize purchaseFromLqReportCgi=_purchaseFromLqReportCgi;
@property(retain, nonatomic) WCPayLQTClickPurchaseCgi *clickPurchaseCgi; // @synthesize clickPurchaseCgi=_clickPurchaseCgi;
@property(retain, nonatomic) WCPayLQTGetDistributePreviewCgi *getDistributePreviewCgi; // @synthesize getDistributePreviewCgi=_getDistributePreviewCgi;
@property(retain, nonatomic) WCPayLQTClickRedeemCgi *clickRedeemCgi; // @synthesize clickRedeemCgi=_clickRedeemCgi;
@property(retain, nonatomic) WCPayLQTRedeemFundCgi *redeemFundCgi; // @synthesize redeemFundCgi=_redeemFundCgi;
@property(retain, nonatomic) WCPayLQTPreRedeemFundCgi *preRedeemFundCgi; // @synthesize preRedeemFundCgi=_preRedeemFundCgi;
@property(retain, nonatomic) WCPayLQTQryPurchaseResultCgi *payResultQryCgi; // @synthesize payResultQryCgi=_payResultQryCgi;
@property(retain, nonatomic) WCPayLQTPurchaseFundCgi *prepayCgi; // @synthesize prepayCgi=_prepayCgi;
@property(retain, nonatomic) WCPayLQTQryUserFundDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(retain) NSString *operateId; // @synthesize operateId=_operateId;
@property(retain) NSString *traceInfo; // @synthesize traceInfo=_traceInfo;
@property unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <WCPayLQTMoneyControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)ActiveMoenyViewControllerTextField;
- (void)reportLQTUpgradeV2:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)onTransSuccessViewControllerPlanCellClick;
- (id)genCardInfoFromBindQueryRecard:(id)arg1;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)alertViewConfirmClick;
- (_Bool)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)startPayMoneyLogicWithReqkey:(id)arg1;
- (void)addBalanceInfoInfoCardList:(id)arg1;
- (void)onGetLQTClickPurchaseCgiResp:(id)arg1;
- (void)sendClickPurchaseCgi:(_Bool)arg1;
- (void)onPopsItemClick:(id)arg1;
- (void)onGetLQTClickRedeemCgiPopItems:(id)arg1;
- (void)onGetDistributePreviewCgiResp:(id)arg1;
- (void)sendGetDistributePreviewCgi:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (void)onGetLQTClickRedeemCgiResp:(id)arg1;
- (void)sendClickRedeemCgi;
- (void)OnRetryPayMoneyFromPwdError;
- (void)onGetLQTRedeemFundResp:(id)arg1;
- (void)sendRedeemRequestWithFee:(unsigned int)arg1 pwdEnString:(id)arg2;
- (void)continueLQTPreRedeemFund;
- (void)onGetLQTPreRedeemFundResp:(id)arg1;
- (void)sendPreRedeemRequestWithFee:(unsigned int)arg1 redeemType:(unsigned int)arg2;
- (void)onGetLQTQryPurchaseResultResp:(id)arg1;
- (void)sendQryPurchaseResultFromSvr;
- (void)sendQryPurchaseResultFromSvrWithTransactionId:(id)arg1 isUseJointPayChannelFlag:(unsigned int)arg2;
- (void)call:(id)arg1;
- (void)continueHandlePurchaseFundResp;
- (void)onGetLQTPurchaseFundResp:(id)arg1;
- (void)sendLQTPrePayRquestWithMoney:(unsigned int)arg1;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)onTransSuccessViewControllerConfirmBtnClick;
- (void)onPreRedeemFundResPageSheetClickContinuePreRedeem:(id)arg1 redeemType:(unsigned int)arg2;
- (void)onPurchaseFundResPageSheetClickContinuePurchase:(id)arg1;
- (void)onGetLQTPurchaseFromBankGuideResp:(id)arg1;
- (void)onMoneyViewControllerGetDistributePreview:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (void)onMoneyViewControllerReportGuideFromLqWithShow:(unsigned int)arg1 click:(unsigned int)arg2;
- (void)onMoneyViewControllerNeedUpdatePageData;
- (void)onMoneyViewControllerClickAddNewCard;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 pwdEnString:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)handleRealnamePopups:(id)arg1;
- (_Bool)shouldHandleRealNameInfo:(id)arg1;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 redeemType:(unsigned int)arg2;
- (void)onMoneyViewControllerBack;
- (_Bool)MoneyViewControllerCurrentLogicIsTop;
- (void)internalStartLogic;
- (id)operateIdFromUrl:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithMoneyScene:(unsigned long long)arg1 controlData:(id)arg2;
- (void)dealloc;
- (void)updateTraceInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

