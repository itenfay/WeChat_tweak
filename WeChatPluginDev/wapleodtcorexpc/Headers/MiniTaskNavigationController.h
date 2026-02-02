//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniTaskNavEdgeGestureHandler, MiniTaskTransitionContext, MiniTaskTransitionHelper, MultiTaskItemPageBrowseInfo, MultiTaskPageActionInfo, NSString;

@interface MiniTaskNavigationController
{
    _Bool _shouldAutoRotate;
    MiniTaskTransitionContext *_transitionContext;
    MultiTaskItemPageBrowseInfo *_pageBrowseInfo;
    MultiTaskPageActionInfo *_pageActionInfo;
    MiniTaskTransitionHelper *_animationLogic;
    MiniTaskNavEdgeGestureHandler *_leftEdgeGestureHandler;
    MiniTaskNavEdgeGestureHandler *_rightEdgeGestureHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAutoRotate; // @synthesize shouldAutoRotate=_shouldAutoRotate;
@property(retain, nonatomic) MiniTaskNavEdgeGestureHandler *rightEdgeGestureHandler; // @synthesize rightEdgeGestureHandler=_rightEdgeGestureHandler;
@property(retain, nonatomic) MiniTaskNavEdgeGestureHandler *leftEdgeGestureHandler; // @synthesize leftEdgeGestureHandler=_leftEdgeGestureHandler;
@property(retain, nonatomic) MiniTaskTransitionHelper *animationLogic; // @synthesize animationLogic=_animationLogic;
@property(retain, nonatomic) MultiTaskPageActionInfo *pageActionInfo; // @synthesize pageActionInfo=_pageActionInfo;
@property(retain, nonatomic) MultiTaskItemPageBrowseInfo *pageBrowseInfo; // @synthesize pageBrowseInfo=_pageBrowseInfo;
@property(retain, nonatomic) MiniTaskTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void)onTransitionEnd:(id)arg1 isComplete:(_Bool)arg2 isInteracting:(_Bool)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)onMiniInteractiveTransitionDidEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionWillEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionBegin:(id)arg1;
- (_Bool)shouldMiniInteractiveTransitionBegin:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupRightScreenEdgeGestureHandler;
- (void)setupLeftScreenEdgeGestureHandler;
- (void)setupNaviGestureHandlers;
- (id)rightEdgePanGestureRecognizer;
- (id)leftEdgePanGestureRecognizer;
- (void)setRootViewController:(id)arg1;
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

