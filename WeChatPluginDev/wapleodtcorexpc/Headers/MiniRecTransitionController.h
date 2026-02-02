//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeEdgeGestureHandler, NSString, UIScreenEdgePanGestureRecognizer;
@protocol MinimizationTransitionControllerDelegate, MinimizeTransitionInterface;

@interface MiniRecTransitionController : NSObject
{
    _Bool _hasActivateMinimizeAreaInPopInteration;
    _Bool _hasAskedForMinimization;
    _Bool _isBlockMinimizationEntryInTheGesCallback;
    id <MinimizationTransitionControllerDelegate> _taskControllerDelegate;
    NSString *_taskBizName;
    NSString *_taskBizKey;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    MinimizeEdgeGestureHandler *_edgeGesHandler;
    id <MinimizeTransitionInterface> _transitionDelegate;
}

+ (id)portraitSnapShotFromViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MinimizeTransitionInterface> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler; // @synthesize edgeGesHandler=_edgeGesHandler;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(nonatomic) _Bool isBlockMinimizationEntryInTheGesCallback; // @synthesize isBlockMinimizationEntryInTheGesCallback=_isBlockMinimizationEntryInTheGesCallback;
@property(nonatomic) _Bool hasAskedForMinimization; // @synthesize hasAskedForMinimization=_hasAskedForMinimization;
@property(nonatomic) _Bool hasActivateMinimizeAreaInPopInteration; // @synthesize hasActivateMinimizeAreaInPopInteration=_hasActivateMinimizeAreaInPopInteration;
@property(copy, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(copy, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
@property(nonatomic) __weak id <MinimizationTransitionControllerDelegate> taskControllerDelegate; // @synthesize taskControllerDelegate=_taskControllerDelegate;
- (id)__getCurrentTaskBizKey;
- (id)__getCurrentTaskBizName;
- (_Bool)tryUpdateTaskSnapshotWithCustomSnapshot:(id)arg1;
- (_Bool)tryUpdateTaskSnapshotWithViewController:(id)arg1 navigationController:(id)arg2;
- (_Bool)tryUpdateTaskSnapshotWithViewController:(id)arg1;
- (id)systemDismissTransitionWithInteracting:(_Bool)arg1;
- (id)systemPopTransitionWithInteracting:(_Bool)arg1 respondViewController:(id)arg2;
- (id)maximizeTransition;
- (id)minimizeTransition;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)performMinimizationTansitionAnimation;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onEdgeInteractiveTransitionDidEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionWillEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(struct CGPoint)arg3;
- (void)onEdgeInteractiveTransitionBegin:(id)arg1;
- (_Bool)__shouldBlockMinimizationEntryInInteractivePop;
- (id)edgeGestureRecognizer;
- (void)setNeedMinimieTransitioning;
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

