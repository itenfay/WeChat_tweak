//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayTouchLockVerifyLogic;

@protocol WCPayTouchLockVerifyLogicDelegate <NSObject>
- (void)touchLockVerifyCancel:(WCPayTouchLockVerifyLogic *)arg1;
- (void)touchLockVerifySuccess:(WCPayTouchLockVerifyLogic *)arg1;

@optional
- (void)reportTouchLockToPwdVerifyCancel;
- (void)reportTouchLockToPwdVerifyResult:(_Bool)arg1;
- (void)reportTouchLockVerifyResult:(_Bool)arg1;
- (_Bool)needBlockUntilVerified:(WCPayTouchLockVerifyLogic *)arg1;
@end

