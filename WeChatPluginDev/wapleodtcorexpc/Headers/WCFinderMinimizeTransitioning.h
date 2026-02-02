//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController, WCFinderMinimizeFloatingView;
@protocol WCFinderMinimizeTransitioningDelegate;

@interface WCFinderMinimizeTransitioning : NSObject
{
    _Bool _useWhenVCPop;
    _Bool _isMinimize;
    id <WCFinderMinimizeTransitioningDelegate> _delegate;
    UIView *_floatingOutter;
    WCFinderMinimizeFloatingView *_floatingView;
    UIViewController *_animatedTransitionRespondViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMinimize; // @synthesize isMinimize=_isMinimize;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController=_animatedTransitionRespondViewController;
@property(nonatomic) _Bool useWhenVCPop; // @synthesize useWhenVCPop=_useWhenVCPop;
@property(retain, nonatomic) WCFinderMinimizeFloatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UIView *floatingOutter; // @synthesize floatingOutter=_floatingOutter;
@property(nonatomic) __weak id <WCFinderMinimizeTransitioningDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (double)animationDuration;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

