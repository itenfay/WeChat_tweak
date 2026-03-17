//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSEvent;

@protocol JSEventExt <NSObject>

@optional
- (void)jsHandlerHandle:(JSEvent *)arg1;
- (void)handleDeviceInfo:(JSEvent *)arg1;
- (void)handleVideoAction:(JSEvent *)arg1;
- (void)requestScanPOSPay:(JSEvent *)arg1;
- (void)requestWxPayKeyboard:(JSEvent *)arg1;
- (void)emptyHandle:(JSEvent *)arg1;
- (void)jsIdCardRealnameVerify:(JSEvent *)arg1;
- (void)jsUploadIdCardSuccess:(JSEvent *)arg1;
- (void)jsUnbindBankCard:(JSEvent *)arg1;
- (void)jsSelectWalletCurrency:(JSEvent *)arg1;
- (void)jsGetWCPayRealnameVerify:(JSEvent *)arg1;
- (void)jsVerifyWCPayPayPwd:(JSEvent *)arg1;
- (void)jsGetRecevieBizHongBaoRequest:(JSEvent *)arg1;
- (void)jsGetWebPayCheckoutCounterRequst:(JSEvent *)arg1;
- (void)jsGetPaymentOrderRequest:(JSEvent *)arg1;
- (void)jsSendC2CSecureMessage:(JSEvent *)arg1;
- (void)jsOpenWCPaySpecialView:(JSEvent *)arg1;
- (void)jsGetTransferMoneyRequest:(JSEvent *)arg1;
- (void)jsGetBrandWCPayAddCardRequeset:(JSEvent *)arg1;
- (void)jsJumpWCMall:(JSEvent *)arg1;
- (void)jsSetPageState:(JSEvent *)arg1;
- (void)jsGetBrandWCPayRequeset:(JSEvent *)arg1;
- (void)jsVideoStateChanged:(JSEvent *)arg1;
- (void)jsAudioStateChanged:(JSEvent *)arg1;
@end

