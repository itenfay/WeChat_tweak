//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@interface UIViewController (ModalView)
@property(nonatomic) _Bool isForbidPageSheet; // @dynamic isForbidPageSheet;
@property(nonatomic) _Bool isForceShowToPrimaryViewController; // @dynamic isForceShowToPrimaryViewController;
@property(nonatomic) _Bool isForceFullScreen; // @dynamic isForceFullScreen;
@property(nonatomic) _Bool isBeingDismissedAsFirstPresented; // @dynamic isBeingDismissedAsFirstPresented;
- (id)modalPresentFromThisVC;
- (id)presentingThisVC;
- (id)presentedBythisVC;
- (_Bool)shouldPresentInSplitView;
- (id)previousViewController;
- (void)DismissMyselfAndOther:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)DismissMyselfAndOther:(_Bool)arg1;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1;
- (id)currentTopPresentingViewController;
- (_Bool)DismissModalViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)DismissModalViewControllerAnimated:(_Bool)arg1;
- (void)checkInstallCommonInteractiveController;
- (_Bool)isPrimaryViewControllerForSplitView;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 forceFullScreen:(_Bool)arg3 isAutoRotatePortrait:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 forceFullScreen:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
@end

