//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayVerifyTouchLockViewController;

@protocol WCPayVerifyTouchLockViewControllerDelegate <NSObject>
- (void)verifyViewControllerBack:(WCPayVerifyTouchLockViewController *)arg1;
- (void)shouldVerifyPassword:(WCPayVerifyTouchLockViewController *)arg1;
- (void)shouldVerifyTouchLock:(WCPayVerifyTouchLockViewController *)arg1;

@optional
- (_Bool)needBlockBack:(WCPayVerifyTouchLockViewController *)arg1;
@end

