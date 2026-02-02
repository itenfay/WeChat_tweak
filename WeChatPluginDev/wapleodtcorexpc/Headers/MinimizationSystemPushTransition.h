//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol MinimizationNewTransitionDelegate;

@interface MinimizationSystemPushTransition : NSObject
{
    _Bool _useInPresentAnimation;
    id <MinimizationNewTransitionDelegate> _delegate;
    UIViewController *_animatedTransitionRespondViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useInPresentAnimation; // @synthesize useInPresentAnimation=_useInPresentAnimation;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(nonatomic) __weak id <MinimizationNewTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

