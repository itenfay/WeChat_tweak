//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPayPayMoneyFromOverseaH5WalletLogic, WCPayPayMoneyLogic;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayPayMoneyFromBrandContactJSApiLogic
{
    JSEvent *m_jsEvent;
    NSString *m_stepInURL;
    NSString *m_stepAppUserName;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayPayMoneyFromOverseaH5WalletLogic *m_payMoneyFromOverseaH5WalletLogic;
    NSString *m_funcName;
    _Bool _cancelByUser;
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate;
}

- (void).cxx_destruct;
@property _Bool cancelByUser; // @synthesize cancelByUser=_cancelByUser;
@property(nonatomic) __weak id <WCPayPayJSApiLogicParamDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)cancelPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)failToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)succToPayMoneyFromOverseaH5WalletLogic:(id)arg1;
- (void)onWCPayJSApiNeedOpenTinyApp:(id)arg1 path:(id)arg2;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2;
- (void)OnGetGenPaypreErrorRequest:(id)arg1 ErrorMsg:(id)arg2;
- (void)OnGetGenPaypreRequest:(id)arg1 SessionID:(id)arg2 AppSource:(id)arg3 WalletMixSpGenprepayResp:(id)arg4;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (_Bool)gotoViewController:(id)arg1;
- (void)reportJSPayCallbackWithPayType:(int)arg1 callbackType:(int)arg2 sourceH5:(id)arg3 sourceAppUsername:(id)arg4 sourceAppPath:(id)arg5 targetAppUsername:(id)arg6 targetAppPath:(id)arg7;
- (_Bool)isOpenPayStautsABTest;
- (void)stopLogic;
- (id)callbackStr:(id)arg1;
- (void)startLogic;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)setExtraInfo:(id)arg1;
- (id)initWithJSEvent:(id)arg1 URL:(id)arg2 BrandUserName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

