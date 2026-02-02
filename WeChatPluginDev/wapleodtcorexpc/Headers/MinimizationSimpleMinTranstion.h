//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizationTransitionContext, NSString;
@protocol MinimizationNewTransitionDelegate;

@interface MinimizationSimpleMinTranstion : NSObject
{
    id <MinimizationNewTransitionDelegate> _delegate;
    MinimizationTransitionContext *_transitionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MinimizationTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <MinimizationNewTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

