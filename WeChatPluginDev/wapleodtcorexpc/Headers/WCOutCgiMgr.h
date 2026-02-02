//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCOutCouponCgi, WCOutGetProductListCgi;

@interface WCOutCgiMgr
{
    WCOutCouponCgi *_couponCgi;
    WCOutGetProductListCgi *_getproductlistCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCOutGetProductListCgi *getproductlistCgi; // @synthesize getproductlistCgi=_getproductlistCgi;
@property(retain, nonatomic) WCOutCouponCgi *couponCgi; // @synthesize couponCgi=_couponCgi;
- (void)WCOutGetProductListCgiDidFail:(id)arg1;
- (void)WCOutGetProductListCgi:(id)arg1 successWithResponse:(id)arg2;
- (void)WCOutCounponCgiDidFail:(id)arg1;
- (void)WCOutCounponCgi:(id)arg1 successWithResponse:(id)arg2;
- (void)requestProductList:(id)arg1 reqCurrency:(id)arg2;
- (void)requestCoupon:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

