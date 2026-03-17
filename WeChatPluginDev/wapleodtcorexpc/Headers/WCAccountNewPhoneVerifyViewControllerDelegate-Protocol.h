//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountNewPhoneVerifyViewControllerDelegate <NSObject>

@optional
- (void)onNewPhoneVerifyProblem;
- (void)onNewPhoneVerifyGotoFeedback;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyNextWithPwd:(NSString *)arg1;
- (void)onNewPhoneVerifyNextWithVerifyCode:(NSString *)arg1;
- (void)onNewPhoneVerifyFirstTime:(_Bool)arg1;
- (void)onNewPhoneVerifyBack;
@end

