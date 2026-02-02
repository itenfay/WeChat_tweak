//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat27XRVisionLoginViewController
{
    MISSING_TYPE *viewModel;
    MISSING_TYPE *deviceLoginLogic;
    MISSING_TYPE *subscriptions;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onGetExtDeviceLoginInfo:(id)arg1;
- (id)viewController;
- (void)onCancelLogin;
- (void)onConfirmLoginFailed;
- (void)onConfirmLoginSucceeded;

@end

