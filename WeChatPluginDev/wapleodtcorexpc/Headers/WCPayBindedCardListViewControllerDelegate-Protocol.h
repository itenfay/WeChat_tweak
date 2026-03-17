//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBindedCardListViewController, WCPayControlData;

@protocol WCPayBindedCardListViewControllerDelegate <NSObject>
- (void)ONBindedCardListVCVerifyByCardNumber:(WCPayBindedCardListViewController *)arg1;
- (void)ONBindedCardListResetBankTel:(WCPayControlData *)arg1;
- (void)ONBindedCardListResetBalanceTel:(WCPayControlData *)arg1;
- (void)OnBindedCardListNewCardClicked;
- (void)OnBindedCardListBack;
@end

