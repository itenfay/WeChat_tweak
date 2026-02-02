//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ASAuthorizationAppleIDCredential, NSString;
@protocol AppleIDBindLogicDelegate;

@interface AppleIDBindLogic : NSObject
{
    id <AppleIDBindLogicDelegate> _delegate;
    ASAuthorizationAppleIDCredential *_appleIDCredential;
}

+ (_Bool)isAppleIDBound;
- (void).cxx_destruct;
@property(retain, nonatomic) ASAuthorizationAppleIDCredential *appleIDCredential; // @synthesize appleIDCredential=_appleIDCredential;
@property(nonatomic) __weak id <AppleIDBindLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)generateAppleIDErrorFromError:(id)arg1 andResponse:(id)arg2;
- (void)callAppleIDAuthorizeFailDelegateWithError:(id)arg1 andResponse:(id)arg2;
- (void)appleIDAuthorizeWithIDCRedirectCount:(unsigned long long)arg1;
- (void)appleIDAuthorize;
- (void)updateAppleIDBindStatusInSetting:(_Bool)arg1;
- (void)unbindAppleID;
- (void)bindAppleID;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
@property(readonly, nonatomic) _Bool authorizedFromAppleSucceed;
- (void)requestAuthorizeFromApple;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

