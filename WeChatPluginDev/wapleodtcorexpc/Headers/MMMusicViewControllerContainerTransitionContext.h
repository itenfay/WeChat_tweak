//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIView;

@interface MMMusicViewControllerContainerTransitionContext : NSObject
{
    _Bool _animated;
    _Bool _interactive;
    CDUnknownBlockType _completionBlock;
    NSDictionary *_viewControllers;
    UIView *_containerView;
    long long _presentationStyle;
    struct CGAffineTransform _targetTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform=_targetTransform;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)pauseInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
@property(readonly, nonatomic) _Bool transitionWasCancelled;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)initWithFromVC:(id)arg1 toVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

