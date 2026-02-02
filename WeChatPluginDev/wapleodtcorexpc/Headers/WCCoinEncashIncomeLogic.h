//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaProgressDialog, NSString, PrepareIncomeEncashResponse, SecurityInfoAuthrizeLogic, WCCoinEncashParameter, WCCoinFetchMoneyInputViewController, WCCoinInterceptLogic;
@protocol WCCoinEncashIncomeLogicDelegate;

@interface WCCoinEncashIncomeLogic
{
    WCCoinEncashParameter *_parameter;
    id <WCCoinEncashIncomeLogicDelegate> _delegate;
    unsigned long long _amount;
    PrepareIncomeEncashResponse *_prepareEncashResponse;
    NSString *_wcpayToken;
    WCCoinInterceptLogic *_interceptLogic;
    WCCoinFetchMoneyInputViewController *_inputVC;
    KindaProgressDialog *_loading;
    SecurityInfoAuthrizeLogic *_authLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SecurityInfoAuthrizeLogic *authLogic; // @synthesize authLogic=_authLogic;
@property(retain, nonatomic) KindaProgressDialog *loading; // @synthesize loading=_loading;
@property(retain, nonatomic) WCCoinFetchMoneyInputViewController *inputVC; // @synthesize inputVC=_inputVC;
@property(retain, nonatomic) WCCoinInterceptLogic *interceptLogic; // @synthesize interceptLogic=_interceptLogic;
@property(copy, nonatomic) NSString *wcpayToken; // @synthesize wcpayToken=_wcpayToken;
@property(retain, nonatomic) PrepareIncomeEncashResponse *prepareEncashResponse; // @synthesize prepareEncashResponse=_prepareEncashResponse;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(nonatomic) __weak id <WCCoinEncashIncomeLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCoinEncashParameter *parameter; // @synthesize parameter=_parameter;
- (void)encashIncomeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)encashIncomeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)prepareIncomeEncashCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareIncomeEncashCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)realNameAuthCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)realNameAuthCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)getCurrentURL;
- (id)getParam;
- (void)onVerifyResult:(id)arg1;
- (void)didClickDisagree:(id)arg1;
- (void)didClickAgree:(id)arg1;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)didClickTaxCutEntrance:(id)arg1;
- (void)vcDidBePopedOrDismissed:(id)arg1;
- (void)shouldFetchMoney:(id)arg1 amount:(unsigned long long)arg2;
- (void)showError:(id)arg1;
- (id)getTopVC;
- (void)handleIntercept:(id)arg1;
- (void)callFail;
- (void)callSuccess;
- (void)startEncash:(id)arg1 action:(int)arg2;
- (void)startEncash;
- (void)startGetWCPayToken;
- (void)startPrepareEncash;
- (void)encashWith:(unsigned long long)arg1;
- (void)uploadToken:(id)arg1;
- (void)getRealNameInfo;
- (void)enterInputVC;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

