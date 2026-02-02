//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeEdgeGestureHandler, MinimizeNewTransitionController, NSString, UIScreenEdgePanGestureRecognizer;

@interface LVFlutterNavigationController
{
    MinimizeEdgeGestureHandler *_edgeGesHandler;
    MinimizeNewTransitionController *_transitionController;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(retain, nonatomic) MinimizeNewTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler; // @synthesize edgeGesHandler=_edgeGesHandler;
- (void)onMinimizationNewTransitionEnd:(id)arg1 withContext:(id)arg2 isComplete:(_Bool)arg3;
- (void)onMinimizationNewTransitionStart:(id)arg1 withContext:(id)arg2;
- (void)onLVLandscapeTransitionEnd:(id)arg1 transitionType:(unsigned long long)arg2 isComplete:(_Bool)arg3;
- (void)onLVLandscapeTransitionStart:(id)arg1;
- (void)onMinimizeTransitionWillEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (_Bool)isMinimizeTransitioning;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (void)onMinimizeTransitionBeginWithoutContext;
- (_Bool)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (void)deactiveMinimize:(_Bool)arg1 force:(_Bool)arg2;
- (_Bool)pendingMinimize;
- (_Bool)enterFromMinimize;
- (id)makeMinimizeContext:(_Bool)arg1;
- (id)minimizeContext;
- (void)prepareMinimize:(id)arg1;
- (void)setupMinimizeTransitionGesture;
- (void)setupMinimizeTransitionController;
- (id)playerDetailViewController;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

