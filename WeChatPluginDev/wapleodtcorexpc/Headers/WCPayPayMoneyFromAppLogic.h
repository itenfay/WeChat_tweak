//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, PayResp, WCPayBaseViewController, WCPayPayMoneyFromOverseaH5WalletLogic, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromAppLogic
{
    NSDictionary *m_payInfo;
    NSString *m_appID;
    NSString *m_bundleId;
    NSString *m_universalLink;
    PayResp *m_resp;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayBaseViewController *rootViewController;
    WCPayPayMoneyFromOverseaH5WalletLogic *m_payMoneyFromOverseaH5WalletLogic;
    _Bool m_cancelByOpenApi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_cancelByOpenApi; // @synthesize m_cancelByOpenApi;
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
- (void)WCPayBaseViewControllerBack;
- (void)markCancelByOpenApi;
- (id)initWithInfo:(id)arg1 BundleID:(id)arg2 appID:(id)arg3 universalLink:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

