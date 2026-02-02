//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWecoinPriceListResponse, MMUIViewController, NSString, PrepareWecoinRechargeResponse, WCCoinBuyCoinParameter, WCCoinBuyCoinView, WCCoinInterceptLogic;
@protocol WCCoinBuyCoinLogicDelegate;

@interface WCCoinBuyCoinLogic
{
    WCCoinBuyCoinParameter *_parameter;
    id <WCCoinBuyCoinLogicDelegate> _delegate;
    unsigned long long _cancelType;
    GetWecoinPriceListResponse *_priceListResponse;
    WCCoinBuyCoinView *_buyCoinView;
    PrepareWecoinRechargeResponse *_prepareRechargeResponse;
    WCCoinInterceptLogic *_interceptLogic;
    NSString *_productId;
    unsigned long long _startTime;
    MMUIViewController *_loadingVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *loadingVC; // @synthesize loadingVC=_loadingVC;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) WCCoinInterceptLogic *interceptLogic; // @synthesize interceptLogic=_interceptLogic;
@property(retain, nonatomic) PrepareWecoinRechargeResponse *prepareRechargeResponse; // @synthesize prepareRechargeResponse=_prepareRechargeResponse;
@property(retain, nonatomic) WCCoinBuyCoinView *buyCoinView; // @synthesize buyCoinView=_buyCoinView;
@property(retain, nonatomic) GetWecoinPriceListResponse *priceListResponse; // @synthesize priceListResponse=_priceListResponse;
@property(nonatomic) unsigned long long cancelType; // @synthesize cancelType=_cancelType;
@property(nonatomic) __weak id <WCCoinBuyCoinLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCoinBuyCoinParameter *parameter; // @synthesize parameter=_parameter;
- (void)onCancelServiceAuth;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)prepareRechargeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareRechargeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPriceListCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPriceListCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)buyCoinViewDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)didClickBuyCoin:(id)arg1 info:(id)arg2;
- (void)handleIntercept:(id)arg1;
- (void)callCancelBillCgi;
- (void)buyCoin:(id)arg1;
- (void)prepareBuyCoin:(id)arg1;
- (void)callCancel;
- (void)callFail;
- (void)callSuccess;
- (_Bool)isNotEnoughScene:(int)arg1;
- (void)reportSuccessCostTime;
- (void)showNSError:(id)arg1;
- (void)showError:(id)arg1;
- (void)showErrorStr:(id)arg1;
- (id)getTopVC;
- (void)stopLoadingInTopVC;
- (void)startLoadingInTopVC;
- (void)getPriceListStopLoading;
- (void)getPriceListStartLoading;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

