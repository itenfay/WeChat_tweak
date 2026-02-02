//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WAMenuPopInteractiveTransition;

@interface WAPushLikePresentTransitionDelegate : NSObject
{
    WAMenuPopInteractiveTransition *_dismissInteractiveTransition;
    UIViewController *_weakPresentedVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *weakPresentedVC; // @synthesize weakPresentedVC=_weakPresentedVC;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithVCToPresent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

