//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaAppModuleManager, MMLocatingCoordinateLogic, NSString;

@interface KindaBizMgr
{
    KindaAppModuleManager *_moduleManager;
    MMLocatingCoordinateLogic *_locatingLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) KindaAppModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
- (void)updateWCPayAddressCache:(id)arg1;
- (id)getCachedLocationInfoAndUpdate;
- (void)notifyHKOfflineXmlMsg:(id)arg1;
- (id)parameterWithURL:(id)arg1;
- (void)onThirdPayCallback:(id)arg1;
- (_Bool)isEnableWalletLock;
- (_Bool)isEnableOverseaWalletSuccPage;
- (_Bool)isSwitch2InWxAppPay:(id)arg1;
- (_Bool)isEnableSnsAppPay;
- (_Bool)isEnableKindaResetPwd;
- (_Bool)isInAnyUseCase;
- (_Bool)isEnableKindaBindCard;
- (id)getKindaNewCashierDescByPayScene:(long long)arg1 andData:(id)arg2;
- (id)getKindaPrePayPagePayeeDescByPayScene:(long long)arg1 andData:(id)arg2;
- (id)getPrepayIdFromPackage:(id)arg1;
- (_Bool)isPrefixDisableKinda:(id)arg1;
- (_Bool)localCtrlEnableKinda:(id)arg1;
- (_Bool)localContainsKey:(id)arg1;
- (_Bool)isEnableKinda:(id)arg1;
- (_Bool)isEnableLargeFont;
- (_Bool)isEnableTransferToBankMiniApp;
- (_Bool)isEnableTransferToBankKinda;
- (_Bool)isEnableNativePayLinkCross;
- (_Bool)isEnableTransferDelayFlutterCross;
- (_Bool)isEnableFaceCheckCross;
- (_Bool)isEnableWeBankLoanPay;
- (_Bool)isEnablePaySecurity;
- (_Bool)isEnableLQTDetail;
- (_Bool)isEnableLQTTransfer;
- (_Bool)isEnableBalanceDetail;
- (_Bool)isEnableFetchBalance;
- (_Bool)isEnableSaveBalance;
- (_Bool)isEnableOfflineCashier;
- (_Bool)isEnableFaceHongbaoPay;
- (_Bool)isEnableMobileFeePay;
- (_Bool)isOfflinePayAlive;
- (void)checkIfNeedRequestUserBindqueryWhenUnBindCard:(id)arg1;
- (void)updateOflinePayDefaultCard:(id)arg1 bankType:(id)arg2;
- (void)checkIfNeedUpdateOfflinePayToken;
- (void)updateOfflinePayTokenFromScene:(unsigned long long)arg1;
- (_Bool)isEnableOfflinePay;
- (_Bool)isOfflineKindaReadyAbtestOn;
- (_Bool)isEnableH5Pay;
- (_Bool)isEnableGroupChatAA;
- (_Bool)isEnableQrCodeReward;
- (_Bool)isEnableQrCodeReceivePay;
- (_Bool)isEnableTransfer;
- (_Bool)isEnableHongbaoPay;
- (_Bool)isEnableTransfer2BankPay;
- (_Bool)isEnableEmptyPrepayIdPay;
- (_Bool)isEnableJSApiPay;
- (_Bool)isEnableAppPay;
- (_Bool)isEnableTinyAppPay;
- (_Bool)isEnableScanPay;
- (void)startUITest;
- (_Bool)canHandleOpenUrl;
- (void)notifyAllUseCases:(id)arg1;
- (void)notifySpecificUseCase:(id)arg1 data:(id)arg2;
- (void)popToUseCase:(id)arg1;
- (_Bool)isUseCaseAlive:(id)arg1;
- (id)startUseCase:(id)arg1 data:(id)arg2;
- (id)startUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (id)startUseCase:(id)arg1 data:(id)arg2 callbackHandler:(CDUnknownBlockType)arg3;
- (void)fillOpeimId:(id)arg1;
- (id)startUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3 starter:(id)arg4;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)handleApplicationNotification:(id)arg1;
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

