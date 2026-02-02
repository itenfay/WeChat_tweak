//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UINavigationController.h>

@class NSString, UIViewController;

@interface MMUINavigationController : UINavigationController
{
    UIViewController *_popingViewController;
}

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)disMissSelf;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)DispatchPopViewControllerAnimated:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

