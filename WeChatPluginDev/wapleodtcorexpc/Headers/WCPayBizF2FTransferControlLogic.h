//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AmountRemindPage, BusiF2FPlaceOrderResp, DrawLotteryResponse, ExposureInfo, ExposureInfoModifyResponse, GetLotteryResponse, MMTipsViewController, MMWebViewController, NSString, WCPayBizF2FPayCheckCgi, WCPayBizF2FPlaceOrderCgi, WCPayBizF2FZeroCallBackAutoRetryCgi, WCPayBizF2FZeroPayConfirmView, WCPayBusiF2FSucPageCgiWithRetry, WCPayBusiF2FUnlockFavorCgi, WCPayF2FDrawLotteryCgi, WCPayF2FGetLotteryCgi, WCPayF2FMiddlePageSubLogic, WCPayF2FModifyExposureCgi, WCPayGetZeroPayTokenCgi, WCPayPayMoneyLogic;
@protocol WCPayBizF2FTransferControlLogicDelegate;

@interface WCPayBizF2FTransferControlLogic
{
    _Bool _bHasPaySucc;
    _Bool _isModifyExposureInfo;
    _Bool _bIsShowingCrossPlatformSuccPage;
    unsigned int _lastTotalAmount;
    int _remindReportState;
    unsigned int _reportAmount;
    id <WCPayBizF2FTransferControlLogicDelegate> _bizF2FLogicDelagte;
    WCPayBizF2FPlaceOrderCgi *_placeOrderCgi;
    WCPayBizF2FPayCheckCgi *_payCheckCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    WCPayBusiF2FUnlockFavorCgi *_unLockFavorCgi;
    WCPayBusiF2FSucPageCgiWithRetry *_paySuccessCgi;
    WCPayGetZeroPayTokenCgi *_getZeroPayTokenCgi;
    WCPayBizF2FZeroCallBackAutoRetryCgi *_m_zeroPayCgi;
    WCPayF2FGetLotteryCgi *_f2fGetLotteryCgi;
    GetLotteryResponse *_getLotteryReponse;
    WCPayF2FModifyExposureCgi *_f2fModifyExposureCgi;
    ExposureInfoModifyResponse *_exposureInfoModifyResponse;
    WCPayF2FDrawLotteryCgi *_f2fDrawLotteryCgi;
    DrawLotteryResponse *_drawLotteryResponse;
    ExposureInfo *_prevExposureInfo;
    MMWebViewController *_getLotteryViewController;
    WCPayBizF2FZeroPayConfirmView *_m_zeroPayConfirmView;
    NSString *_m_fingerdata;
    WCPayF2FMiddlePageSubLogic *_m_middlePageSubLogic;
    BusiF2FPlaceOrderResp *_lastReqKeyStruct;
    NSString *_lastPayRequestKey;
    NSString *_lastRemarkWording;
    long long _lastUnpayReason;
    AmountRemindPage *_amountRemindPage;
    MMTipsViewController *_checkNameController;
    MMWebViewController *_hkCashierViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *hkCashierViewController; // @synthesize hkCashierViewController=_hkCashierViewController;
@property(retain) MMTipsViewController *checkNameController; // @synthesize checkNameController=_checkNameController;
@property(nonatomic) _Bool bIsShowingCrossPlatformSuccPage; // @synthesize bIsShowingCrossPlatformSuccPage=_bIsShowingCrossPlatformSuccPage;
@property unsigned int reportAmount; // @synthesize reportAmount=_reportAmount;
@property int remindReportState; // @synthesize remindReportState=_remindReportState;
@property(retain) AmountRemindPage *amountRemindPage; // @synthesize amountRemindPage=_amountRemindPage;
@property(nonatomic) long long lastUnpayReason; // @synthesize lastUnpayReason=_lastUnpayReason;
@property(retain, nonatomic) NSString *lastRemarkWording; // @synthesize lastRemarkWording=_lastRemarkWording;
@property(nonatomic) unsigned int lastTotalAmount; // @synthesize lastTotalAmount=_lastTotalAmount;
@property(retain, nonatomic) NSString *lastPayRequestKey; // @synthesize lastPayRequestKey=_lastPayRequestKey;
@property(retain, nonatomic) BusiF2FPlaceOrderResp *lastReqKeyStruct; // @synthesize lastReqKeyStruct=_lastReqKeyStruct;
@property(retain, nonatomic) WCPayF2FMiddlePageSubLogic *m_middlePageSubLogic; // @synthesize m_middlePageSubLogic=_m_middlePageSubLogic;
@property(nonatomic) _Bool isModifyExposureInfo; // @synthesize isModifyExposureInfo=_isModifyExposureInfo;
@property(nonatomic) _Bool bHasPaySucc; // @synthesize bHasPaySucc=_bHasPaySucc;
@property(retain, nonatomic) NSString *m_fingerdata; // @synthesize m_fingerdata=_m_fingerdata;
@property(retain, nonatomic) WCPayBizF2FZeroPayConfirmView *m_zeroPayConfirmView; // @synthesize m_zeroPayConfirmView=_m_zeroPayConfirmView;
@property(retain, nonatomic) MMWebViewController *getLotteryViewController; // @synthesize getLotteryViewController=_getLotteryViewController;
@property(retain, nonatomic) ExposureInfo *prevExposureInfo; // @synthesize prevExposureInfo=_prevExposureInfo;
@property(retain, nonatomic) DrawLotteryResponse *drawLotteryResponse; // @synthesize drawLotteryResponse=_drawLotteryResponse;
@property(retain, nonatomic) WCPayF2FDrawLotteryCgi *f2fDrawLotteryCgi; // @synthesize f2fDrawLotteryCgi=_f2fDrawLotteryCgi;
@property(retain, nonatomic) ExposureInfoModifyResponse *exposureInfoModifyResponse; // @synthesize exposureInfoModifyResponse=_exposureInfoModifyResponse;
@property(retain, nonatomic) WCPayF2FModifyExposureCgi *f2fModifyExposureCgi; // @synthesize f2fModifyExposureCgi=_f2fModifyExposureCgi;
@property(retain, nonatomic) GetLotteryResponse *getLotteryReponse; // @synthesize getLotteryReponse=_getLotteryReponse;
@property(retain, nonatomic) WCPayF2FGetLotteryCgi *f2fGetLotteryCgi; // @synthesize f2fGetLotteryCgi=_f2fGetLotteryCgi;
@property(retain, nonatomic) WCPayBizF2FZeroCallBackAutoRetryCgi *m_zeroPayCgi; // @synthesize m_zeroPayCgi=_m_zeroPayCgi;
@property(retain, nonatomic) WCPayGetZeroPayTokenCgi *getZeroPayTokenCgi; // @synthesize getZeroPayTokenCgi=_getZeroPayTokenCgi;
@property(retain, nonatomic) WCPayBusiF2FSucPageCgiWithRetry *paySuccessCgi; // @synthesize paySuccessCgi=_paySuccessCgi;
@property(retain, nonatomic) WCPayBusiF2FUnlockFavorCgi *unLockFavorCgi; // @synthesize unLockFavorCgi=_unLockFavorCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayBizF2FPayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain, nonatomic) WCPayBizF2FPlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(nonatomic) __weak id <WCPayBizF2FTransferControlLogicDelegate> bizF2FLogicDelagte; // @synthesize bizF2FLogicDelagte=_bizF2FLogicDelagte;
- (id)kvLog19821StringWithActionType:(unsigned int)arg1;
- (void)nameCheckReport:(unsigned long long)arg1 payAmount:(unsigned int)arg2 scanId:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)reportConfirmPageWithAmount:(unsigned int)arg1;
- (void)reportWithAmount:(unsigned int)arg1;
- (void)moneyRemindReportCancelThenInputTheSame;
- (void)moneyRemindReportCancelThenInputOtherAmount:(unsigned int)arg1;
- (void)moneyRemindReportClickLeft;
- (void)moneyRemindReportClickRight;
- (void)moneyRemindReportShow;
- (void)moneyRemindReportAction:(unsigned long long)arg1 amount:(unsigned int)arg2;
- (void)moneyRemindReportAction:(unsigned long long)arg1;
- (void)moneyRemindReportAction:(unsigned long long)arg1 f2fId:(id)arg2 qrCodeId:(id)arg3 totalAmount:(unsigned int)arg4;
- (void)onWCPayF2FMiddlePageSubLogicToDynamicView:(id)arg1;
- (id)onWCPayBizF2FConfirmViewControllerSign;
- (id)onWCPayBizF2FConfirmViewControllerDesc;
- (id)onWCPayBizF2FConfirmViewControllerTitle;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(id)arg2;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onWCPayBizF2FConfirmViewControllerClickBackButton;
- (void)gotoRootVCAndstopBizF2FLogic;
- (void)activeBizTransferMoneyViewControllerTextField;
- (void)showBizTransferMoneyViewControllerFloatBtn;
- (void)call:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onWCPayF2FMiddleViewControllerClickTransfer:(unsigned int)arg1;
- (void)onWCPayF2FMiddleViewControllerBack;
- (void)onWCPayBusiF2FZeroCallBackCgiError:(id)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(id)arg1;
- (void)onResetPwdConfirm:(id)arg1;
- (void)onResetPwdRetry:(id)arg1;
- (void)onWCPayGetZeroPayTokenCgi:(id)arg1 didFailWithTenpayResponse:(id)arg2 error:(id)arg3;
- (void)onWCPayGetZeroPayTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPayGetZeroPayTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onWCPayBizF2FZeroPayConfirmViewCancel;
- (void)onWCPayBizF2FZeroPayConfirmViewConfirmWithFingerData:(id)arg1;
- (void)onWCPayBizF2FZeroPayConfirmViewConfirmWithPassword:(id)arg1;
- (void)onRealnameVerifyCancelNotification:(id)arg1;
- (void)onRealnameVerifySuccessNotification:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnF2FModifyExposureRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnF2FModifyExposureRepsonseOK:(id)arg1;
- (void)OnF2FDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnF2FDrawLotteryRepsonseOK:(id)arg1;
- (void)OnGetF2FGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetF2FGetLotteryRepsonseOK:(id)arg1;
- (void)onBizF2FPaidSuccViewControllerReturnWithoutDrawLottery;
- (void)onBizF2FPaidSuccViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)onBizF2FPaidSuccViewControllerClickLotteryBtn:(id)arg1;
- (void)onWCPayBusiF2FSucPageCgiError:(id)arg1;
- (void)onWCPayBusiF2FSucPageCgiResp:(id)arg1;
- (void)onWCPayBusiF2FUnlockFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FUnlockFavorCgiResp:(id)arg1;
- (void)startUnlockFavorCgi;
- (void)startPaySuccessCgi;
- (void)onPayMoneyLogicDidStop;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (_Bool)gotoViewController:(id)arg1;
- (void)placeOrderAlertRightBtnClick;
- (void)cancelTransferMoney:(id)arg1;
- (_Bool)handleJumpHKCashier:(id)arg1;
- (_Bool)handleJumpThirdPartyCashier:(id)arg1;
- (_Bool)checkJumpThirdPartyCashier;
- (void)continueToTransfer:(_Bool)arg1;
- (void)continueTransfer:(id)arg1;
- (double)zeroPayMoneyDouble;
- (id)zeroPayMoney;
- (id)zeroPayTitle;
- (_Bool)canUseBioAuth;
- (_Bool)zeroPay:(id)arg1;
- (void)placeOrderErrorSceneClickIKnow;
- (void)invokeActionOfJumpItem:(id)arg1 actionContinue:(CDUnknownBlockType)arg2;
- (_Bool)blockByAmountRemindPage:(id)arg1;
- (_Bool)blockByAmountRemindWin:(id)arg1;
- (void)cutString:(id)arg1;
- (void)checkNameDidChange:(id)arg1;
- (_Bool)blockByCheckRecvNameWin:(id)arg1;
- (void)onGetBizF2FPlaceOrderResp:(id)arg1;
- (void)onBizF2FPaidSuccViewControllerClickActivityBtn;
- (void)onBizF2FPaidSuccViewControllerDoneBtnClick;
- (void)resendPlaceOrderCgiWithAmountRemindSign:(id)arg1 CheckRecvNameSign:(id)arg2 inputRecvName:(id)arg3;
- (void)resendPlaceOrderCgiAmount:(unsigned int)arg1 amountRemindSign:(id)arg2;
- (void)onBizTransferMoneyTransferBtnClickWithArgs:(id)arg1;
- (void)onBizTransferMoneyViewControllerBack;
- (_Bool)BizTransferMoneyCurrentLogicIsTop;
- (void)startLogic;
- (id)initWithData:(id)arg1;
- (void)stopLogic;
- (void)dealloc;
- (long long)getLastUnpayReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

