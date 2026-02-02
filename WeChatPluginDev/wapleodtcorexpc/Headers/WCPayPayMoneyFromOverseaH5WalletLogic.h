//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CallbackRetryConf, MMVoidCallback, MMVoidITransmitKvDataCallback, NSMutableDictionary, NSString, WCPayDrawLotteryCgi, WCPayFollowCardBDMchCgi, WCPayGetLotteryCgi;
@protocol WCPayPayMoneyFromOverseaH5WalletLogicDelegate;

@interface WCPayPayMoneyFromOverseaH5WalletLogic
{
    NSString *m_nsPayGateUrl;
    CallbackRetryConf *m_oCallbackRetryConf;
    unsigned int m_currentRetryCount;
    _Bool m_bNeedDialog;
    NSString *m_nsDialogText;
    _Bool m_bIsPending;
    int m_enPayScene;
    WCPayDrawLotteryCgi *m_oDrawLotteryCgi;
    WCPayGetLotteryCgi *m_oGetLotteryCgi;
    NSMutableDictionary *m_oGetPaidOrderDetailInfo;
    _Bool _cancelByOpenApi;
    id <WCPayPayMoneyFromOverseaH5WalletLogicDelegate> _logicDelegate;
    MMVoidITransmitKvDataCallback *_m_successCallback;
    MMVoidCallback *_m_cancelCallback;
    MMVoidCallback *_m_failCallback;
    WCPayFollowCardBDMchCgi *_followMchCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelByOpenApi; // @synthesize cancelByOpenApi=_cancelByOpenApi;
@property(retain, nonatomic) WCPayFollowCardBDMchCgi *followMchCgi; // @synthesize followMchCgi=_followMchCgi;
@property(retain, nonatomic) MMVoidCallback *m_failCallback; // @synthesize m_failCallback=_m_failCallback;
@property(retain, nonatomic) MMVoidCallback *m_cancelCallback; // @synthesize m_cancelCallback=_m_cancelCallback;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *m_successCallback; // @synthesize m_successCallback=_m_successCallback;
@property(nonatomic) __weak id <WCPayPayMoneyFromOverseaH5WalletLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)call:(id)arg1;
- (void)markCancelByOpenApi;
- (void)stopLogic;
- (void)onGetPaidOrderDetailSuccess:(id)arg1;
- (void)onGetPaidOrderDetailCancel;
- (void)onGetPaidOrderDetailFail;
- (void)OnGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetLotteryRepsonseOK:(id)arg1;
- (void)OnDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnDrawLotteryRepsonseOK:(id)arg1;
- (void)onWCPayPaidOrderDetailViewControllerlClickFavMchWithParam:(id)arg1 stateBefore:(unsigned int)arg2 stateAfter:(unsigned int)arg3;
- (void)OnWCPayPaidOrderDetailViewControllerClickLotteryBtn:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerReturnWithoutDrawLottery;
- (void)OnWCPayPaidOrderDetailViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)mergePaidOrderDetailData:(id)arg1;
- (void)OnGetPaidOrderDetailNetError:(id)arg1;
- (void)retryGetPaidOrderDetailAgain;
- (void)OnAuthenticationPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)onGetPaidOrderDetailJsApiInvoke:(id)arg1;
- (_Bool)onKindaGetPaidOrderDetailJsApiInvoke:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)showWebViewControllerWithURL;
- (void)startLogic;
- (id)initWithInfo:(id)arg1 Data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

