//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GenMallPrepayResponse, NSDictionary, NSString, WCPayGenMallPrePayCgi, WCPayPayMoneyLogic;
@protocol WCPayMallRequestPaymentControlLogicDelegate;

@interface WCPayMallRequestPaymentControlLogic
{
    id <WCPayMallRequestPaymentControlLogicDelegate> _logicDelegate;
    NSDictionary *_jsParams;
    WCPayGenMallPrePayCgi *_prepayCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    GenMallPrepayResponse *_mallPrepayResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GenMallPrepayResponse *mallPrepayResp; // @synthesize mallPrepayResp=_mallPrepayResp;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayGenMallPrePayCgi *prepayCgi; // @synthesize prepayCgi=_prepayCgi;
@property(retain, nonatomic) NSDictionary *jsParams; // @synthesize jsParams=_jsParams;
@property(nonatomic) __weak id <WCPayMallRequestPaymentControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (_Bool)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)clickPrePayErrorAlert;
- (void)onGetMallPrePayResp:(id)arg1;
- (void)startLogic;
- (id)initWithJSParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

