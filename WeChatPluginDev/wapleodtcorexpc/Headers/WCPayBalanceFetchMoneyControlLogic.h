//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCPayAddPayCardLogic, WCPayBalanceTipsLogic, WCPayFetchBalanceReport, WCPayPayMoneyLogic, WCPayPayResponseRetryInfo;

@interface WCPayBalanceFetchMoneyControlLogic
{
    WCPayPayMoneyLogic *m_payLogic;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    WCPayBalanceTipsLogic *m_oContinueTipLogic;
    WCPayBalanceTipsLogic *m_oFirstChargeTipLogic;
    WCPayBalanceTipsLogic *m_oNotEnoughtFeeTipLogic;
    WCPayBalanceTipsLogic *m_fetchChargesTipLogic;
    _Bool m_bHaveShowFisrtChargeTip;
    NSArray *m_arrMyAllCardsBeforeAddCard;
    _Bool m_bAddingNewCard;
    WCPayPayResponseRetryInfo *m_retryInfo;
    WCPayFetchBalanceReport *m_reportLogic;
}

- (void).cxx_destruct;
- (void)ActiveFetchViewControllerTextField:(_Bool)arg1;
- (void)call:(id)arg1;
- (void)startKindaFetchBalance:(unsigned long long)arg1 fetchAll:(_Bool)arg2;
- (void)onWCPayFetchIdentifyTipsViewControllerCancel;
- (void)onWCPayFetchIdentifyTipsViewControllerConfirm:(id)arg1;
- (id)getAvailableCards;
- (id)getNewBindCard;
- (void)storeAllExistCards;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onClickFetchAll;
- (void)showNotEnoughForFeeAlert:(id)arg1;
- (void)showFirstFetchInfoAlert:(id)arg1 notEnoughtForFee:(id)arg2;
- (void)showFetchChargeAlert:(id)arg1;
- (void)OnGetBalanceFetchRequest:(id)arg1 ExtData:(id)arg2 Error:(id)arg3;
- (void)WCPayFetchViewControlllerNeedUpdateData;
- (void)OnContinueFetch;
- (void)doAddCard;
- (void)WCPayFetchViewControllerAddCard;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)WCPayFetchViewControllerNext:(id)arg1 FetchAll:(_Bool)arg2;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(_Bool)arg1;
- (void)WCPayFetchViewControllerCancel:(_Bool)arg1;
- (_Bool)WCPayFetchIsCurrentLogicTop;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (id)getReportLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

