//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSSet, NSString, PrepareWecoinRechargeResponse, PrepareWecoinSubscriptionResponse;

@interface _TtC6WeChat12WCCoinIAPMgr
{
    MISSING_TYPE *api;
    MISSING_TYPE *midasDelegateInstance;
    MISSING_TYPE *prefetchProductIds;
}

+ (void)bindingPaymentMethodWithPinningID:(NSString *)arg1 completionHandler:(void (^)(long long))arg2;
- (void).cxx_destruct;
- (id)init;
- (void)onServiceInit;
- (void)purchaseWithSubscriptionResp:(PrepareWecoinSubscriptionResponse *)arg1 completionHandler:(void (^)(_TtC6WeChat18WCCoinIAPPayResult *))arg2;
- (void)purchaseWithInfo:(PrepareWecoinRechargeResponse *)arg1 completionHandler:(void (^)(_TtC6WeChat18WCCoinIAPPayResult *))arg2;
- (void)getSubscriptionProductStatusWithProductId:(NSString *)arg1 completionHandler:(void (^)(NSData *))arg2;
- (id)getProductInfo:(id)arg1;
- (id)currencyCode;
- (void)prefetchProductWithCompletionHandler:(void (^)(void))arg1;
- (void)getProductInfoWithProductIds:(NSSet *)arg1 completionHandler:(void (^)(NSSet *))arg2;
- (void)preloadWithCompletionHandler:(void (^)(void))arg1;
- (id)getSDKVersion;

@end

