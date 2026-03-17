//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BankInfoItem, WCPayECardBankCardListViewController;

@protocol WCPayECardBankCardListViewControllerDelegate <NSObject>

@optional
- (void)eCardBankListVCBack;
- (void)eCardBankListVCDidChoseNewCard:(WCPayECardBankCardListViewController *)arg1;
- (void)eCardBankListVC:(WCPayECardBankCardListViewController *)arg1 didSelectedCard:(BankInfoItem *)arg2;
@end

