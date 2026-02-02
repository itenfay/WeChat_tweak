//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeEdgeGestureHandler, MinimizeNewTransitionController, NSString, UIScreenEdgePanGestureRecognizer;

@interface TingAppNavigationController
{
    _Bool _lastPresentedFullPlayer;
    _Bool _presentFromTingApp;
    int _lastPresentedScene;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    MinimizeEdgeGestureHandler *_edgeGesHandler;
    MinimizeNewTransitionController *_transitionController;
}

+ (_Bool)shouldUsePushTransitionFromScene:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool presentFromTingApp; // @synthesize presentFromTingApp=_presentFromTingApp;
@property(nonatomic) _Bool lastPresentedFullPlayer; // @synthesize lastPresentedFullPlayer=_lastPresentedFullPlayer;
@property(nonatomic) int lastPresentedScene; // @synthesize lastPresentedScene=_lastPresentedScene;
@property(retain, nonatomic) MinimizeNewTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler; // @synthesize edgeGesHandler=_edgeGesHandler;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
- (void)viewDidLoad;
- (void)onMinimizationNewTransitionEnd:(id)arg1 withContext:(id)arg2 isComplete:(_Bool)arg3;
- (void)onMinimizationNewTransitionStart:(id)arg1 withContext:(id)arg2;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (id)getMinimizationTransitionContext;
- (_Bool)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)systemDismissTransitionWithInteracting:(_Bool)arg1;
- (_Bool)edgeGestureShouldBegin;
- (void)setupLastScene:(int)arg1 shouldPresentFullPlayer:(_Bool)arg2;
- (void)setupTransitionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

