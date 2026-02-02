//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMPatternLockViewControllerDelegate <NSObject>
- (_Bool)needBlockViewControllerLeftBarbuttonItemInEnteranceScene;
- (_Bool)isNeedSvrVerify;
- (void)onClosePatternLockPwdWithPatternHash:(NSString *)arg1;
- (void)onModifyPatternLockWithNewPatternHash:(NSString *)arg1;
- (void)onPatternLockVerifyPatternLockPwdWithPatternHash:(NSString *)arg1;
- (void)onPatternLockSetupNewWithPatternHash:(NSString *)arg1;
- (void)onPatternLockViewControllerDidErrorBeyondLimit;
- (void)onPatternLockViewControllerDidForgetPwd;
- (void)onPatternLockViewControllerDidOperateError;
- (void)onPatternLockViewControllerDidOperateSuccess;
- (void)onPatternLockViewControllerDidOperateCancel;
@end

