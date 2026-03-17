//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountMainLoginViewControllerDelegate <NSObject>

@optional
- (_Bool)shouldShowBackBtnForMainLogin;
- (void)onMainLoginPasskeyConnectWithAutoLogin:(_Bool)arg1;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginAppleConnect;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginProblem;
- (void)onMainLoginGoToFeedback;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginBack;
- (void)onMainLoginUserName:(NSString *)arg1 Pwd:(NSString *)arg2;
- (void)onMainLoginNext:(NSString *)arg1 phoneNumber:(NSString *)arg2;
@end

