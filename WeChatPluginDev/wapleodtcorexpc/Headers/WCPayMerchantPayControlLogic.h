//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetUrlInfoReqSession, NSString, WCPayInterceptWinLogic;

@interface WCPayMerchantPayControlLogic
{
    _Bool _isStopLogicWhenCloseWebview;
    unsigned int _getA8keyScene;
    NSString *_m_nsQrcodeUrl;
    GetUrlInfoReqSession *_scanCodeSessionInfo;
    WCPayInterceptWinLogic *_interceptWinLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStopLogicWhenCloseWebview; // @synthesize isStopLogicWhenCloseWebview=_isStopLogicWhenCloseWebview;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(nonatomic) unsigned int getA8keyScene; // @synthesize getA8keyScene=_getA8keyScene;
@property(retain, nonatomic) GetUrlInfoReqSession *scanCodeSessionInfo; // @synthesize scanCodeSessionInfo=_scanCodeSessionInfo;
@property(retain, nonatomic) NSString *m_nsQrcodeUrl; // @synthesize m_nsQrcodeUrl=_m_nsQrcodeUrl;
- (void)onWCPayMerchantPayPlaceOrderError:(long long)arg1 errorMsg:(id)arg2;
- (void)call:(id)arg1;
- (void)startPayCheck:(int)arg1;
- (void)doInWxAppPay:(id)arg1;
- (void)onWCPayMerchantPayPlaceOrder:(id)arg1;
- (void)startPlaceOrder;
- (void)onWCPayMerchantPayViewControllerClickPlaceOrder;
- (void)onWCPayMerchantPayCheckPayError:(long long)arg1 errorMsg:(id)arg2;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayMerchantPayGetQRCodeInfoError:(long long)arg1 errorMsg:(id)arg2;
- (void)onWCPayMerchantPayGetQRCodeInfo:(id)arg1;
- (void)onWCPayMerchantPayViewControllerBack;
- (void)startGetQRCodeInfo;
- (void)startLogic;
- (id)initWithData:(id)arg1 qrCodeUrl:(id)arg2 getA8keyScene:(unsigned int)arg3 scanCodeSessionInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

