//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITraitCollection;
@protocol AppUserInterfaceSizeDelegate;

@interface MMMainViewController
{
    id <AppUserInterfaceSizeDelegate> _interfaceSizeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AppUserInterfaceSizeDelegate> interfaceSizeDelegate; // @synthesize interfaceSizeDelegate=_interfaceSizeDelegate;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidTransitionToNewSize;
- (double)getContentViewY;
- (void)viewDidLoad;
- (void)onLastChat:(id)arg1;
- (void)onNextChat:(id)arg1;
- (void)closeCurChat:(id)arg1;
- (void)newChat:(id)arg1;
- (void)onNextUnreadChat:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)selectTab:(id)arg1;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

