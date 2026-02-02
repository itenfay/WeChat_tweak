//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMPatternLockMgrExt <NSObject>

@optional
- (void)onPatternLockSvrCheckStatusBack:(unsigned long long)arg1;
- (void)onPatternLockSvrCheckStatusFail;
- (void)onClosePatternLockPwdFail;
- (void)onClosePatternLockPwdSuccess;
- (void)onModifyPatternLockPwdFail;
- (void)onModifyPatternLockPwdSuccess;
- (void)onVerifyPatternLockPwdFail;
- (void)onVerifyPatternLockPwdCorrect;
- (void)onVerifyPatternLockPwdError;
- (void)onSetupNewPatternLockPwdFail;
- (void)onSetupNewPatternLockPwdSuccess;
@end

