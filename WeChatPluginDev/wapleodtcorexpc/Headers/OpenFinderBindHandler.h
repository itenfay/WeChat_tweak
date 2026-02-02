//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderSDKAuthorViewController;

@interface OpenFinderBindHandler
{
    WCFinderSDKAuthorViewController *_bindVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderSDKAuthorViewController *bindVC; // @synthesize bindVC=_bindVC;
- (void)finderSDKAuthorViewController:(id)arg1 comfirmFailure:(id)arg2;
- (void)finderSDKAuthorViewController:(id)arg1 comfirmSuccessful:(id)arg2;
- (id)extMsg;
- (void)finderSDKAuthorViewControllerDenyAction:(id)arg1;
- (void)onAuthDidSuccessWithResult:(id)arg1;
- (void)onAuthDidCancel;
- (void)onAuthDidFail;
- (void)cancelHandler;
- (void)createOpenUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

