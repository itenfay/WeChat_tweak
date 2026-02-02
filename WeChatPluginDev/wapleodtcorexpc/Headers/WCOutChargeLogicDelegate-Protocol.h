//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class GetWCOProductListResponse, IAPErrInfo, NSArray, NSString, iAPTransation;

@protocol WCOutChargeLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)onPurchaseCancelForProduct:(NSString *)arg1;
- (void)onPurchaseFailForProduct:(NSString *)arg1 Err:(IAPErrInfo *)arg2;
- (void)onPurchaseSuccessForProduct:(iAPTransation *)arg1 ErrCode:(unsigned int)arg2;
- (void)updateListFromAppleResponse:(_Bool)arg1 successSKProductList:(NSArray *)arg2;
- (void)didReceiveGetProductListResponse:(_Bool)arg1 Respone:(GetWCOProductListResponse *)arg2;
@end

