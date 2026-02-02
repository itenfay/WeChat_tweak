//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UINavigationController.h>

@class NSString;

@interface UINavigationController (MMImagePicker)
- (id)getOptionObj;
- (id)getByPassInfoObjectForKey:(id)arg1;
- (void)pushLogicController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushLogicController:(id)arg1 animated:(_Bool)arg2;
- (void)setHeroNavigationAnimationFor:(unsigned long long)arg1 dismissType:(unsigned long long)arg2;
@property(nonatomic, copy) NSString *heroNavigationAnimationTypeString;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)isCurrentViewController;
- (void)pushUniqueClassViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PopViewControllerCount:(unsigned int)arg1 animated:(_Bool)arg2;
- (id)PopViewControllerAnimated:(_Bool)arg1 remainCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)PopViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)PopViewControllerAnimated:(_Bool)arg1;
- (id)DispatchPopViewControllerAnimated:(_Bool)arg1;
- (id)PopToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)PopToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)PopToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)PopToRootViewControllerAnimated:(_Bool)arg1;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 isForceFullScreen:(_Bool)arg3 isAutoRotatePortrait:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 isForceFullScreen:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PopViewControllerAndPush:(id)arg1 animated:(_Bool)arg2;
- (void)PopToViewController:(id)arg1 AndPush:(id)arg2 animated:(_Bool)arg3;
- (void)setDefaultNavigationBarLeftButton:(id)arg1;
- (id)getNextTopViewController;
- (id)getTopViewController;
- (id)FindTopViewController;
- (void)onBackButtonClicked:(id)arg1;
- (id)getViewControllerImage:(id)arg1;
- (id)FindViewControllerBefore:(id)arg1;
@property(nonatomic) _Bool m_bAnimated;
- (id)interactivePopGestureRecognizer_internal;
- (long long)positionForBar:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

