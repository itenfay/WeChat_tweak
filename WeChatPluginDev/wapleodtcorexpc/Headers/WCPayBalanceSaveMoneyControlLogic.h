//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayLQTMoneyControlLogic, WCPayPayMoneyLogic;
@protocol WCPayBalanceSaveMoneyControlLogicDelegate;

@interface WCPayBalanceSaveMoneyControlLogic
{
    WCPayPayMoneyLogic *m_payLogic;
    _Bool _bIsFromSaveViewControllerBindQuery;
    _Bool _bShouldRefreshSelect;
    _Bool _bIsChargeBalanceSucc;
    id <WCPayBalanceSaveMoneyControlLogicDelegate> _logicDelegate;
    WCPayLQTMoneyControlLogic *_lqtMoneyControlLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsChargeBalanceSucc; // @synthesize bIsChargeBalanceSucc=_bIsChargeBalanceSucc;
@property(retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic; // @synthesize lqtMoneyControlLogic=_lqtMoneyControlLogic;
@property(nonatomic) _Bool bShouldRefreshSelect; // @synthesize bShouldRefreshSelect=_bShouldRefreshSelect;
@property(nonatomic) _Bool bIsFromSaveViewControllerBindQuery; // @synthesize bIsFromSaveViewControllerBindQuery=_bIsFromSaveViewControllerBindQuery;
@property(nonatomic) __weak id <WCPayBalanceSaveMoneyControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)call:(id)arg1;
- (void)startKindaSaveBalance:(unsigned long long)arg1;
- (void)ActiveSaveViewControllerTextField:(_Bool)arg1;
- (void)delayActiveViewControllerTextField;
- (void)webViewReturn:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
- (void)startPayMoneyLogicWithReqKey:(id)arg1 retryPayInfo:(id)arg2 selectedCardInfo:(id)arg3;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)OnGetBalanceSaveRequest:(id)arg1 Error:(id)arg2 retryPayInfo:(id)arg3;
- (void)WCPaySaveViewControllerBackFromPop;
- (_Bool)WCPaySaveIsCurrentLogicTop;
- (void)WCPaySaveViewControllerClickLQTEntryViewWithAmount:(id)arg1 selectCardInfo:(id)arg2;
- (void)WCPaySaveViewControllerNext:(id)arg1;
- (void)WCPaySaveViewControllerCancel:(_Bool)arg1;
- (void)OnResetPasswordFinish:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)pause;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

