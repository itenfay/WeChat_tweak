//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCoinFetchMoneyInputViewController;

@protocol WCCoinFetchMoneyInputViewControllerDelegate <NSObject>
- (void)didClickTaxCutEntrance:(WCCoinFetchMoneyInputViewController *)arg1;
- (void)shouldFetchMoney:(WCCoinFetchMoneyInputViewController *)arg1 amount:(unsigned long long)arg2;
- (void)vcDidBePopedOrDismissed:(WCCoinFetchMoneyInputViewController *)arg1;
@end

