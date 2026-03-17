//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountLoginLastUserViewControllerDelegate <NSObject>

@optional
- (void)onLastUserBack;
- (void)onLastUserUseBothDevice;
- (void)onLastUserVerifyNextWithVerifyCode:(NSString *)arg1;
- (void)onLastUserVerifyFirstTime:(_Bool)arg1;
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastUserGoToFreeze:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToFeedback;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastPasskeyLogin:(_Bool)arg1;
- (void)onLastUserLoginUserName:(NSString *)arg1 Pwd:(NSString *)arg2;
@end

