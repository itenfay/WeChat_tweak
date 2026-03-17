//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPresentationController.h>

@class NSString;

@interface MMUILandscapePresentationController : UIPresentationController
{
}

+ (struct CGRect)rectForLandscapeModalViewController;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didTapBG:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

