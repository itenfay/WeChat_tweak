//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeAuthorizationUtilLogicDelegate <NSObject>

@optional
- (void)didCutomerPageClose;
- (void)didCutomerPageVerifySuccess;
- (void)onVerifyCancelWithBizKey:(NSString *)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessAndAnimationEndedWithBizKey:(NSString *)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessWithBizKey:(NSString *)arg1 bizType:(long long)arg2;
@end

