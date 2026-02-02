//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayPayMoneyLogic, WCPayQRCodeRewardPayCheckCgi, WCPayQRCodeRewardPlaceOrderCgi, WCPayQRCodeRewardScanCodeCgi;
@protocol WCPayQRCodeRewardPayControlLogicDelegate;

@interface WCPayQRCodeRewardPayControlLogic
{
    id <WCPayQRCodeRewardPayControlLogicDelegate> _logicDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    WCPayQRCodeRewardScanCodeCgi *_scanCodeCgi;
    WCPayQRCodeRewardPlaceOrderCgi *_placeOrderCgi;
    WCPayQRCodeRewardPayCheckCgi *_payCheckCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayQRCodeRewardPayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain, nonatomic) WCPayQRCodeRewardPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(retain, nonatomic) WCPayQRCodeRewardScanCodeCgi *scanCodeCgi; // @synthesize scanCodeCgi=_scanCodeCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)call:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)onGetQRCodeRewardPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (_Bool)gotoViewController:(id)arg1;
- (void)continueToTransfer:(_Bool)arg1;
- (void)continueToTransfer;
- (void)onGetQRCodeRewardPlaceOrderResp:(id)arg1;
- (void)sendRewardPrePayRequestWithAmount:(long long)arg1 comment:(id)arg2 isSelectAmount:(_Bool)arg3 shouldShowNickName:(_Bool)arg4;
- (void)handleGotoViewControllerAfterGetTransferContact;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)scanCodeAlertViewConfirmClick;
- (void)onGetQRCodeRewardScanCodeCgiResp:(id)arg1;
- (void)sendScanCodeRequest;
- (void)onEditMoneyViewControllerConfirmRewardWithAmount:(long long)arg1 comment:(id)arg2 shouldShowNickName:(_Bool)arg3;
- (void)onEditMoneyViewControllerBack;
- (void)onPayerConfirmViewControllerConfirmWithPayerCommnet:(id)arg1 shouldShowNickName:(_Bool)arg2;
- (void)onPayerConfirmViewControllerBack;
- (void)onPayerDetailViewControllerClickAmount:(long long)arg1;
- (void)onPayerDetailViewControllerClickEditMoneyBtn;
- (void)onPayerDetailViewControllerBack;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

