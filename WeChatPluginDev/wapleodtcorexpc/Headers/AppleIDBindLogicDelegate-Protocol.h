//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AccountAppleIDError, AppleIDAuthorizationWrap, UIViewController;

@protocol AppleIDBindLogicDelegate <NSObject>
- (UIViewController *)getViewController;

@optional
- (void)onAuthorizeAppleIDFailedWithError:(AccountAppleIDError *)arg1;
- (void)onAuthorizeAppleIDSuceededWithWrap:(AppleIDAuthorizationWrap *)arg1;
- (void)onUnbindAppleIDFailedWithError:(AccountAppleIDError *)arg1;
- (void)onUnbindAppleIDSucceed;
- (void)onBindAppleIDFailedWithError:(AccountAppleIDError *)arg1;
- (void)onBindAppleIDSucceed;
- (void)onRequestAuthorizeFromAppleFinished:(_Bool)arg1;
@end

