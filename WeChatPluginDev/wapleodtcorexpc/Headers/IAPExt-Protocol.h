//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class IAPErrInfo, NSArray, NSString, iAPTransation;

@protocol IAPExt <NSObject>

@optional
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(NSArray *)arg1;
- (void)onPurchaseFailForProduct:(NSString *)arg1 Err:(IAPErrInfo *)arg2;
- (void)onPurchaseCancelForProduct:(NSString *)arg1;
- (void)onPurchaseSuccessForProduct:(iAPTransation *)arg1 ErrCode:(unsigned int)arg2;
- (void)onGetProduct:(NSArray *)arg1 invalidProductID:(NSArray *)arg2;
@end

