//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayWalletLockVerifyLogic;

@protocol WCPayWalletLockVerifyLogicDelegate <NSObject>
- (void)walletLockVerifySuccess:(WCPayWalletLockVerifyLogic *)arg1;

@optional
- (void)walletLockVerifyCancel:(WCPayWalletLockVerifyLogic *)arg1;
- (_Bool)walletLockVerifyLogicNeedBlock:(WCPayWalletLockVerifyLogic *)arg1;
@end

