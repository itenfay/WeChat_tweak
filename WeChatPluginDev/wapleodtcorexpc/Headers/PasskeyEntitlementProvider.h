//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMUIViewControllerDelegate;

@interface PasskeyEntitlementProvider : NSObject
{
    id <MMUIViewControllerDelegate> _vcDelegate;
    CDUnknownBlockType _finalBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finalBlock; // @synthesize finalBlock=_finalBlock;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)_iOS16_signInFromChallenge:(id)arg1 preferImmediatelyAvailableCredentials:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInFromChallenge:(id)arg1 preferImmediatelyAvailableCredentials:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_iOS16_signUpPasskeyFromUserID:(id)arg1 userName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signUpPasskeyFromUserID:(id)arg1 userName:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

