//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WCPayBaseViewController, WCPayPayMoneyFromOverseaH5WalletLogic, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromWAPPayLogic
{
    NSDictionary *m_payInfo;
    NSString *m_bundleId;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayBaseViewController *rootViewController;
    WCPayPayMoneyFromOverseaH5WalletLogic *m_payMoneyFromOverseaH5WalletLogic;
}

- (void).cxx_destruct;
- (void)cancelPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)failToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)succToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)OnGetAppAuthUrlErrorRequest:(id)arg1;
- (void)OnGetAppAuthUrlRequest:(id)arg1 AppSource:(id)arg2 PrepayId:(id)arg3 CallBackUrl:(id)arg4 WalletMixSpGenprepayResp:(id)arg5 Error:(id)arg6;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnRootViewBack;
- (_Bool)gotoViewController:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithInfo:(id)arg1 BundleID:(id)arg2;
- (void)markCancelByOpenApi;
- (_Bool)cancelByOpenApi;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

