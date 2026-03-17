//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLivePersonalCenterPaymentInfoCollectionCell;

@protocol WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate <NSObject>

@optional
- (void)paymentInfoCellDidSelectLotteryRecord:(WCFinderLivePersonalCenterPaymentInfoCollectionCell *)arg1;
- (void)paymentInfoCellDidSelectPurchasedRecord:(WCFinderLivePersonalCenterPaymentInfoCollectionCell *)arg1;
- (void)paymentInfoCellDidSelectShoppingRecord:(WCFinderLivePersonalCenterPaymentInfoCollectionCell *)arg1;
@end

