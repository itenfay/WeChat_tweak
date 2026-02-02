//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayLQTMoneyViewControllerDelegate <NSObject>
- (void)onPreRedeemFundResPageSheetClickContinuePreRedeem:(NSString *)arg1 redeemType:(unsigned int)arg2;
- (void)onPurchaseFundResPageSheetClickContinuePurchase:(NSString *)arg1;
- (void)onMoneyViewControllerGetDistributePreview:(unsigned long long)arg1 scene:(unsigned int)arg2;
- (void)onMoneyViewControllerReportGuideFromLqWithShow:(unsigned int)arg1 click:(unsigned int)arg2;
- (_Bool)MoneyViewControllerCurrentLogicIsTop;
- (void)onMoneyViewControllerNeedUpdatePageData;
- (void)onMoneyViewControllerClickAddNewCard;
- (void)onMoneyViewControllerActionWithAmount:(NSString *)arg1 pwdEnString:(NSString *)arg2;
- (void)onMoneyViewControllerActionWithAmount:(NSString *)arg1 redeemType:(unsigned int)arg2;
- (void)onMoneyViewControllerBack;
@end

