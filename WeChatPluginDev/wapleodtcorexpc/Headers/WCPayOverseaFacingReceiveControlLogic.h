//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayOverseaGetFacingReceiveQRCodeCgi, WCPayOverseaGetFacingReceiveQRCodeResponse;

@interface WCPayOverseaFacingReceiveControlLogic
{
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
    WCPayOverseaGetFacingReceiveQRCodeCgi *_m_getQRCodeCgi;
    WCPayOverseaGetFacingReceiveQRCodeResponse *_m_getQRCodeResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOverseaGetFacingReceiveQRCodeResponse *m_getQRCodeResponse; // @synthesize m_getQRCodeResponse=_m_getQRCodeResponse;
@property(retain, nonatomic) WCPayOverseaGetFacingReceiveQRCodeCgi *m_getQRCodeCgi; // @synthesize m_getQRCodeCgi=_m_getQRCodeCgi;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)playVibration;
- (void)OnNotifyOverseaAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(_Bool)arg1;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)WCPayFacingReceiveNotifySaveQRCode:(unsigned int)arg1 isFixedCode:(_Bool)arg2;
- (void)userChangeFacingReceiveCodeType:(int)arg1;
- (int)getCurrentFacingReceiveCodeType;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (id)facingReceiveMultipleWalletTitle:(id)arg1;
- (void)checkShowOverseaFacingReceiveFirstTips:(id)arg1;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeResponseOK:(id)arg1;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeLocalResponse:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseBizError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetFacingReceiveFixQRCodeResponseOK:(id)arg1;
- (void)stopLogic;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

