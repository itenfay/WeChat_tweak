//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayWalletLockSettingLogic;

@protocol WCPayWalletLockSettingLogicDelegate <NSObject>
- (void)patternLockDidSetup:(WCPayWalletLockSettingLogic *)arg1;
- (void)touchLockDidSetup:(WCPayWalletLockSettingLogic *)arg1;
- (void)walletLockDidClose:(WCPayWalletLockSettingLogic *)arg1;

@optional
- (void)walletLockSettingLogicWillStop:(WCPayWalletLockSettingLogic *)arg1;
@end

