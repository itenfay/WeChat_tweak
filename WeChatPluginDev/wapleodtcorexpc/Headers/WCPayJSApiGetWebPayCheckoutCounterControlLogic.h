//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, UIView;
@protocol WCPayCheckoutCounterLogicDelegate;

@interface WCPayJSApiGetWebPayCheckoutCounterControlLogic
{
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    int m_getOrderScene;
    NSString *m_nsErrDesc;
    id <WCPayCheckoutCounterLogicDelegate> _logicDelegate;
    UIView *_m_deskView;
    NSString *_kindaPayBindSerial;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *kindaPayBindSerial; // @synthesize kindaPayBindSerial=_kindaPayBindSerial;
@property(retain, nonatomic) UIView *m_deskView; // @synthesize m_deskView=_m_deskView;
@property(nonatomic) __weak id <WCPayCheckoutCounterLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)call:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)OnGetWebPayOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayConfirmViewCancel;
- (void)onOrderPayChangeCard;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(_Bool)arg2;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)checkStopLogic;
- (void)stopLogic;
- (void)dealloc;
- (void)startLogic;
- (void)removeDesk;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

