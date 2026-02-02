//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandIAPMgr
{
    _Bool _isPaying;
}

- (void)dealloc;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (int)brandIAPGetResult:(id)arg1;
- (int)brandIAPPay:(id)arg1 ExtInfo:(id)arg2;
- (int)brandIAPRequestProduct:(id)arg1;
- (int)brandIAPPreay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

