//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonStoreItem;

@protocol EmoticonStoreWeCoinPurchaseLogicDelegate <NSObject>
- (void)onWeCoinPurchaseSuccessForItem:(EmoticonStoreItem *)arg1 paidBefore:(_Bool)arg2;
- (void)onWeCoinConsumeFailedForItem:(EmoticonStoreItem *)arg1;
- (void)onWeCoinPreparePurchaseFailedForItem:(EmoticonStoreItem *)arg1;
- (void)onWeCoinPurchaseCanceledForItem:(EmoticonStoreItem *)arg1;
- (void)onWeCoinDepositFailedWhenPurchasing:(EmoticonStoreItem *)arg1;
- (void)onWeCoinPurchaseStartedForItem:(EmoticonStoreItem *)arg1;
- (void)onWeCoinPurchasePrepareFinishedForItem:(EmoticonStoreItem *)arg1;
- (void)onWeCoinPurchasePrepareStartedForItem:(EmoticonStoreItem *)arg1;
- (void)onWeCoinShowFirstBuyTipForItem:(EmoticonStoreItem *)arg1;
@end

