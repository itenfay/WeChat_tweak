//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC11SwiftyMidas24DefaultWebViewController : UIViewController
{
    MISSING_TYPE *window;
    MISSING_TYPE *config;
    MISSING_TYPE *registeredActions;
    MISSING_TYPE *$__lazy_storage_$_titleBar;
    MISSING_TYPE *$__lazy_storage_$_webView;
    MISSING_TYPE *$__lazy_storage_$_containerView;
    MISSING_TYPE *containerViewYAnchorConstraints;
    MISSING_TYPE *containerViewYAnchorConstraintsFromH5;
    MISSING_TYPE *showWebViewCompletion;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)presentErrorAlert;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

