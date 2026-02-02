//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayAddPayCardLogic, WCPayBalanceSaveMoneyControlLogic, WCPayLQTDetailControlLogic, WCPayLQTMoneyControlLogic;

@interface WCPayBalanceDetailControlLogic
{
    int m_eWCPayBalanceDetailControlLogicScene;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
    WCPayLQTMoneyControlLogic *_lqtMoneyControlLogic;
    WCPayBalanceSaveMoneyControlLogic *_saveMoneyControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBalanceSaveMoneyControlLogic *saveMoneyControlLogic; // @synthesize saveMoneyControlLogic=_saveMoneyControlLogic;
@property(retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic; // @synthesize lqtMoneyControlLogic=_lqtMoneyControlLogic;
@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
@property(nonatomic) int m_eWCPayBalanceDetailControlLogicScene; // @synthesize m_eWCPayBalanceDetailControlLogicScene;
- (void)onBalanceSaveMoneyControlLogicStop:(_Bool)arg1;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
- (void)onWCPayWalletUpdateDidCall;
- (void)eCardDeteailLogicDidUnbindCard:(id)arg1;
- (void)onLQTDetailControlLogicStop;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)BackToRootView;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)doFetchMoney;
- (void)doAddCardForFetchMoney;
- (void)doAddCard;
- (void)BalanceDetailJumpToLQTSave:(id)arg1 entranceType:(int)arg2 bindSerial:(id)arg3 amount:(id)arg4 vcDelegate:(id)arg5;
- (void)BalanceDetailJumpToLQTSave:(id)arg1;
- (void)BalanceDetailJumpToLQTDetail:(id)arg1 vcDelegate:(id)arg2;
- (void)BalanceDetailJumpToLQTDetail:(id)arg1;
- (void)BalanceDetailBackOpenECardDetail:(id)arg1;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailSaveMoney;
- (void)BalanceDetailBack;
- (void)call:(id)arg1;
- (void)pause;
- (void)startBalanceDetailLogic;
- (void)startLogic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

