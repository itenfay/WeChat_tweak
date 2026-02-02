//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface WCFinderMinimizationSystemPopTransition : NSObject
{
    _Bool _isInteracting;
    _Bool _useWhenVCPop;
    UIViewController *_animatedTransitionRespondViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(nonatomic) _Bool useWhenVCPop; // @synthesize useWhenVCPop=_useWhenVCPop;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
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

