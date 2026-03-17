//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMPatternLockLogicDelegate <NSObject>

@optional
- (void)onPatternLockVerifyResult:(_Bool)arg1;
- (void)onPatternLockToPwdVerifyResult:(_Bool)arg1;
- (void)onPatternLockToPwdVerifyCancel;
- (_Bool)needCancelPopAnimation;
- (void)onPatternLockErrorOutOfLimit;
- (_Bool)needBlockLeftBarbuttonItemInEnteranceScene;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
@end

