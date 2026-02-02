//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKBridgeAPIRequest, NSString, UIViewController;
@protocol FBSDKAuthenticationSession, FBSDKURLOpening;

@interface FBSDKBridgeAPI : NSObject
{
    FBSDKBridgeAPIRequest *_pendingRequest;
    CDUnknownBlockType _pendingRequestCompletionBlock;
    id <FBSDKURLOpening> _pendingURLOpen;
    id <FBSDKAuthenticationSession> _authenticationSession;
    CDUnknownBlockType _authenticationSessionCompletionHandler;
    _Bool _expectingBackground;
    _Bool _isRequestingSFAuthenticationSession;
    UIViewController *_safariViewController;
    _Bool _isDismissingSafariViewController;
    _Bool _isAppLaunched;
    _Bool _active;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (void)_cancelBridgeRequest;
- (_Bool)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2;
- (void)viewControllerDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)_setSessionCompletionHandlerFromHandler:(CDUnknownBlockType)arg1;
- (void)_openURLWithAuthenticationSession:(id)arg1;
- (void)openURLWithSafariViewController:(id)arg1 sender:(id)arg2 fromViewController:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)openBridgeAPIRequest:(id)arg1 useSafariViewController:(_Bool)arg2 fromViewController:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 sender:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

