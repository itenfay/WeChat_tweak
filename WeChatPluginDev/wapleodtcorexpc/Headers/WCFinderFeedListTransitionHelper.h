//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView, UIViewController, WCFinderFullScreenAnimatedTransitioning, WCFinderMinimizeGestureAnimator, WCFinderTransitionAnimatorList, WCFinderTransitionUserInfo;
@protocol WCFinderFeedListTransitionHelperBehavior, WCFinderFeedListTransitionHelperDelegate;

@interface WCFinderFeedListTransitionHelper : NSObject
{
    UIScreenEdgePanGestureRecognizer *_gesture;
    UIPanGestureRecognizer *_nonEdgeGesture;
    UIPanGestureRecognizer *_pushPanGesture;
    UIViewController *_vc;
    WCFinderMinimizeGestureAnimator *_animator;
    WCFinderFullScreenAnimatedTransitioning *_pushAnimator;
    UIView *_minimizeEntranceView;
    id <WCFinderFeedListTransitionHelperBehavior> _behavior;
    id <WCFinderFeedListTransitionHelperDelegate> _delegate;
    WCFinderTransitionUserInfo *_userInfo;
    NSMutableArray *_dismissBlocks;
    WCFinderTransitionAnimatorList *_gesturingAnimatorList;
}

+ (void)PresentVCWithSystemPushPopAnimation:(id)arg1 rootVC:(id)arg2;
+ (void)addToVC:(id)arg1 willDismissHookBlock:(CDUnknownBlockType)arg2 endDismissBlock:(CDUnknownBlockType)arg3;
+ (id)transitionUserInfoForPage:(id)arg1;
+ (void)forceMakeGestureAnimationFinishForVC:(id)arg1;
+ (void)addPopingCompleteForViewController:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (_Bool)isViewControllerGesturePoping:(id)arg1;
+ (void)endTransition;
+ (void)beginTransition:(id)arg1 onAnimatorUsed:(CDUnknownBlockType)arg2;
+ (void)recordTrailingAnimator:(id)arg1 forVC:(id)arg2;
+ (void)configNavigationController:(id)arg1 delegate:(id)arg2;
+ (void)configViewController:(id)arg1 delegate:(id)arg2 behavior:(id)arg3;
+ (void)configViewController:(id)arg1 delegate:(id)arg2;
+ (void)configViewController:(id)arg1 behavior:(id)arg2;
+ (_Bool)hasConfigViewController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTransitionAnimatorList *gesturingAnimatorList; // @synthesize gesturingAnimatorList=_gesturingAnimatorList;
@property(retain, nonatomic) NSMutableArray *dismissBlocks; // @synthesize dismissBlocks=_dismissBlocks;
@property(retain, nonatomic) WCFinderTransitionUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <WCFinderFeedListTransitionHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderFeedListTransitionHelperBehavior> behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) UIView *minimizeEntranceView; // @synthesize minimizeEntranceView=_minimizeEntranceView;
@property(retain, nonatomic) WCFinderFullScreenAnimatedTransitioning *pushAnimator; // @synthesize pushAnimator=_pushAnimator;
@property(retain, nonatomic) WCFinderMinimizeGestureAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIPanGestureRecognizer *pushPanGesture; // @synthesize pushPanGesture=_pushPanGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *nonEdgeGesture; // @synthesize nonEdgeGesture=_nonEdgeGesture;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *gesture; // @synthesize gesture=_gesture;
- (_Bool)isPresentedScene;
- (void)onAnimator:(id)arg1 willEndGesture:(_Bool)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)topStackVCForPresentVC:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)notifyVCWillClosureFrom:(id)arg1 toVC:(id)arg2;
- (void)notifyVCWillExpandFrom:(id)arg1 toVC:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)fetchAnimatorFromVC:(id)arg1 toVC:(id)arg2 isClosure:(_Bool)arg3;
- (id)fetchAnimatorAfterGetureBegin;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_invokeEndDismissHookBlocks:(_Bool)arg1 toVC:(id)arg2;
- (void)_invokeWillDismissHookBlocks:(id)arg1;
- (void)addWillDismissHookBlock:(CDUnknownBlockType)arg1 endDismissBlock:(CDUnknownBlockType)arg2;
- (_Bool)_doMinimizeAction;
- (void)_handleMinimizeEntranceGestureState:(id)arg1 progress:(double)arg2;
- (void)handleGestureForMinimizeEntrance:(id)arg1;
- (void)handleDragDownGesture:(id)arg1;
- (void)configVCInnerScrollView:(id)arg1;
- (void)handlePushPanGesture:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)swizzleMethod:(SEL)arg1 swizzleSel:(SEL)arg2 target:(Class)arg3;
- (void)hookAnimationMethods:(id)arg1;
- (id)customTrailingAnimator;
- (void)_configViewNavController:(id)arg1;
- (void)installSwapGesture;
- (void)_configViewController:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

