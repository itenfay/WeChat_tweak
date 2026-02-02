//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewController, WCFinderTransitionAnimatorList, WCFinderTransitionUserInfo;
@protocol UIViewControllerContextTransitioning, WCFinderMinimizeGestureAnimatorDelegate;

@interface WCFinderMinimizeGestureAnimator : NSObject
{
    _Bool _showMinimizeEntrance;
    _Bool _stopFlag;
    _Bool _animatedHiddenCellMask;
    _Bool _finishBeforeAnimation;
    _Bool _forceMakeFinish;
    _Bool _animationRunning;
    UIViewController *animatedTransitionRespondViewController;
    id <WCFinderMinimizeGestureAnimatorDelegate> _delegate;
    long long _behavior;
    UIPercentDrivenInteractiveTransition *_interactive;
    WCFinderTransitionAnimatorList *_transitioningAnimationProvider;
    WCFinderTransitionUserInfo *_provderUserInfo;
    id <UIViewControllerContextTransitioning> _context;
    UIView *_fromView;
    UIViewController *_fromVC;
    UIView *_toView;
    UIView *_fromBarView;
    UIView *_toBarView;
    UIView *_maskView;
    UIView *_shadowView;
    NSMutableArray *_completions;
    long long _animCnt;
    struct CGPoint _beginPoint;
    struct CGRect _fromViewInitialFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long animCnt; // @synthesize animCnt=_animCnt;
@property(nonatomic) _Bool animationRunning; // @synthesize animationRunning=_animationRunning;
@property(nonatomic) _Bool forceMakeFinish; // @synthesize forceMakeFinish=_forceMakeFinish;
@property(nonatomic) _Bool finishBeforeAnimation; // @synthesize finishBeforeAnimation=_finishBeforeAnimation;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool animatedHiddenCellMask; // @synthesize animatedHiddenCellMask=_animatedHiddenCellMask;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
@property(nonatomic) struct CGRect fromViewInitialFrame; // @synthesize fromViewInitialFrame=_fromViewInitialFrame;
@property(nonatomic) __weak UIView *toBarView; // @synthesize toBarView=_toBarView;
@property(nonatomic) __weak UIView *fromBarView; // @synthesize fromBarView=_fromBarView;
@property(nonatomic) __weak UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> context; // @synthesize context=_context;
@property(nonatomic) _Bool stopFlag; // @synthesize stopFlag=_stopFlag;
@property(retain, nonatomic) WCFinderTransitionUserInfo *provderUserInfo; // @synthesize provderUserInfo=_provderUserInfo;
@property(retain, nonatomic) WCFinderTransitionAnimatorList *transitioningAnimationProvider; // @synthesize transitioningAnimationProvider=_transitioningAnimationProvider;
@property(nonatomic) _Bool showMinimizeEntrance; // @synthesize showMinimizeEntrance=_showMinimizeEntrance;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive; // @synthesize interactive=_interactive;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) __weak id <WCFinderMinimizeGestureAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)forceMakeAnimationFinish;
- (_Bool)isViewControllerBePoping:(id)arg1;
- (void)handleDragDown:(id)arg1;
- (void)onAnimationEnd:(_Bool)arg1;
- (void)_cancelAnimation:(double)arg1;
- (void)_beginAnimation:(double)arg1;
- (void)_endCardDragging:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isFast:(_Bool)arg3 progress:(double)arg4;
- (void)dragWithProgress:(double)arg1 translation:(struct CGPoint)arg2;
- (void)handleGesture:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateTransition:(id)arg1;
- (double)duration;
- (double)transitionDuration:(id)arg1;
- (_Bool)pinBack;
- (_Bool)asCard;
- (id)initWithCommonGesture:(id)arg1 behavior:(long long)arg2;
- (id)initWithDragDownGesture:(id)arg1 behavior:(long long)arg2;
- (id)initWithGesture:(id)arg1 behavior:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

