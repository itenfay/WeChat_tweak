//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayWalletLockSettingViewController;

@protocol WCPayWalletLockSettingViewControllerDelegate <NSObject>
- (unsigned int)walletLockVCEntryScene;
- (void)walletLockVCClickModifyPatternLock:(WCPayWalletLockSettingViewController *)arg1;
- (void)walletLockVCClickClose:(WCPayWalletLockSettingViewController *)arg1;
- (void)walletLockVCClickPatternLock:(WCPayWalletLockSettingViewController *)arg1;
- (void)walletLockVCClickTouchLock:(WCPayWalletLockSettingViewController *)arg1;
@end

