//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HoneyPayPayerCardDetailViewController, WCPayBindCardInfo;

@protocol HoneyPayPayerCardDetailViewControllerDelegate <NSObject>
- (void)payerCardDetailVC:(HoneyPayPayerCardDetailViewController *)arg1 changePayWay:(WCPayBindCardInfo *)arg2;
- (void)payerCardDetailVCDidClickUnbindCard:(HoneyPayPayerCardDetailViewController *)arg1;
- (void)payerCardDetailVCDidClickChangeMaximumAmount:(HoneyPayPayerCardDetailViewController *)arg1;
- (void)payerCardDetailVCDidClickCreatedDoneButton:(HoneyPayPayerCardDetailViewController *)arg1;
@end

