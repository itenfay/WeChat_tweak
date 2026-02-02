//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MiniTaskDurantionCounter, MiniTaskPanGestureHandler, NSString, UIImageView, UIView;

@interface MiniTaskInteractionGuideViewController
{
    NSString *_educationTips;
    UIImageView *_fakeMainFrameSnapshotView;
    MMUIButton *_fakeSnapshotMaskView;
    UIView *_fakeSnapshotShadowView;
    MMUILabel *_swipeEducationLabel;
    CDUnknownBlockType _guideConfirmBlock;
    MiniTaskPanGestureHandler *_leftPanPopGestureHandler;
    MiniTaskDurantionCounter *_eduDurantionCounter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskDurantionCounter *eduDurantionCounter; // @synthesize eduDurantionCounter=_eduDurantionCounter;
@property(retain, nonatomic) MiniTaskPanGestureHandler *leftPanPopGestureHandler; // @synthesize leftPanPopGestureHandler=_leftPanPopGestureHandler;
@property(copy, nonatomic) CDUnknownBlockType guideConfirmBlock; // @synthesize guideConfirmBlock=_guideConfirmBlock;
@property(retain, nonatomic) MMUILabel *swipeEducationLabel; // @synthesize swipeEducationLabel=_swipeEducationLabel;
@property(retain, nonatomic) UIView *fakeSnapshotShadowView; // @synthesize fakeSnapshotShadowView=_fakeSnapshotShadowView;
@property(retain, nonatomic) MMUIButton *fakeSnapshotMaskView; // @synthesize fakeSnapshotMaskView=_fakeSnapshotMaskView;
@property(retain, nonatomic) UIImageView *fakeMainFrameSnapshotView; // @synthesize fakeMainFrameSnapshotView=_fakeMainFrameSnapshotView;
@property(retain, nonatomic) NSString *educationTips; // @synthesize educationTips=_educationTips;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)setupLeftPanGestureHandler;
- (id)genGuideEducationLabel;
- (void)onSwipeLeftOnView:(id)arg1;
- (void)onFakeSnapshotClicked;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)unregisterAppActiveStateObsever;
- (void)registerAppActiveStateObsever;
- (void)viewDidLayoutSubviews;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setupSwipeExitGesture;
- (void)setupEducationLabel;
- (void)initNavigationItems;
- (void)setupFakeSnapshot;
- (void)setupBackgroundView;
- (void)initMainUI;
- (void)dealloc;
- (id)initWithGuideConfirmBlock:(CDUnknownBlockType)arg1 educationTips:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

