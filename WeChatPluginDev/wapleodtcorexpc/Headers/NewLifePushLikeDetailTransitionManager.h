//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPushTransition, MMUIViewController, NSString;

@interface NewLifePushLikeDetailTransitionManager : NSObject
{
    MMUIViewController *_viewController;
    MMPushTransition *_transition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPushTransition *transition; // @synthesize transition=_transition;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)getTransition;
- (_Bool)updateOperation:(long long)arg1;
- (void)setupViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

