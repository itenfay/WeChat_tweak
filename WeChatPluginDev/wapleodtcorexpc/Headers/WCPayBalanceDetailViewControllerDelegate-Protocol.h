//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayBalanceDetailViewController;

@protocol WCPayBalanceDetailViewControllerDelegate <NSObject>
- (void)BalanceDetailJumpToLQTSave:(NSString *)arg1;
- (void)BalanceDetailJumpToLQTDetail:(NSString *)arg1;
- (void)BalanceDetailBackOpenECardDetail:(WCPayBalanceDetailViewController *)arg1;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailSaveMoney;
- (void)BalanceDetailBack;
@end

