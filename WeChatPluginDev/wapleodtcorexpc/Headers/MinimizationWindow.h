//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeViewController, NSString;
@protocol MinimizeWindowDelegate;

@interface MinimizationWindow : NSObject
{
    _Bool _needCheckHidden;
    _Bool _isAnimatingHidden;
    _Bool _isShowingRecordOperateView;
    id <MinimizeWindowDelegate> _delegate;
    MinimizeViewController *_minimizeVC;
    long long _statusBarOrientation;
    struct CGRect _inputToolFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingRecordOperateView; // @synthesize isShowingRecordOperateView=_isShowingRecordOperateView;
@property(nonatomic) long long statusBarOrientation; // @synthesize statusBarOrientation=_statusBarOrientation;
@property(nonatomic) struct CGRect inputToolFrame; // @synthesize inputToolFrame=_inputToolFrame;
@property(nonatomic) _Bool isAnimatingHidden; // @synthesize isAnimatingHidden=_isAnimatingHidden;
@property(nonatomic) _Bool needCheckHidden; // @synthesize needCheckHidden=_needCheckHidden;
@property(retain, nonatomic) MinimizeViewController *minimizeVC; // @synthesize minimizeVC=_minimizeVC;
@property(nonatomic) __weak id <MinimizeWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAttachWindow;
- (void)onWindowLevelChanged;
- (void)onRootViewControllerDidChangedFrom:(id)arg1 to:(id)arg2;
- (void)onExitFullScreenOccupy;
- (void)onFullScreenOccupy;
- (void)onHiddenRecordOperateView;
- (void)onShowRecordOperateView;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)beginAddMinimizeInteraction;
- (void)endAddMinimizeComplete:(_Bool)arg1;
- (_Bool)updateAddMinimizeWithProgress:(double)arg1 TouchPoint:(struct CGPoint)arg2 ShouldCancel:(_Bool *)arg3;
- (void)endSwipeToAddMinimize:(id)arg1 isComplete:(_Bool)arg2 pendingTaskContext:(id)arg3;
- (_Bool)canSwipeToAddMinimize:(id)arg1 Progress:(double)arg2 TouchPoint:(struct CGPoint)arg3 ShouldCancel:(_Bool *)arg4;
- (void)endSlideToShowAdsorbFloatingView:(id)arg1 isComplete:(_Bool)arg2;
- (void)slideToShowAdsorbFloatingView:(id)arg1 Progress:(double)arg2;
- (void)beginPopBackGesture:(id)arg1 GestureMode:(int)arg2;
- (struct CGRect)getConvertedFloatingIconFrame;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1 toWindow:(id)arg2;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (id)getMaximizeTransitionFloatingView:(id)arg1;
- (id)getMinimizeTransitionFloatingView:(id)arg1;
- (void)transitionToMaximization:(id)arg1 Duration:(double)arg2;
- (void)transitionToMinimization:(id)arg1 Duration:(double)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4;
- (void)onRemoveCurrentOuterContentTask;
- (void)onAbsorbFloatingViewFoldStateChange:(_Bool)arg1;
- (void)onRecordTipsFloatingViewHidden;
- (void)onTaskCountExceedMaxWhenSlideToAddNewTask:(id)arg1;
- (void)onOuterContentViewSizeDidChanged:(id)arg1 From:(struct CGSize)arg2 To:(struct CGSize)arg3;
- (void)onExitTaskListPage:(unsigned long long)arg1 ExitType:(unsigned long long)arg2;
- (void)onEnterTaskList;
- (void)onUpdateAbsorbFloatingViewLastPosition:(struct CGPoint)arg1 moveContext:(id)arg2;
- (void)onClearPendingTask:(id)arg1 bAddNewTask:(_Bool)arg2;
- (void)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onFloatingViewMoveToTrash:(id)arg1;
- (void)onFloatingViewTap:(id)arg1 FromFloatingView:(id)arg2 WillEnterBackgroundTaskKey:(id)arg3 EnterTaskScene:(unsigned int)arg4;
- (void)willStatusBarOrientationChanged:(id)arg1;
- (void)bringToFront;
- (_Bool)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
- (void)onMinimizeAnimationEnd:(id)arg1;
- (void)hideTaskListAndShowAdsorbFloatingViewAnimatedWithExitType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)minimizeToAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)configWindowEndStateAfterDelay:(double)arg1;
- (void)configWindowEndState;
- (void)configWindowEndStateWithAnimationDuration:(double)arg1;
- (void)forceFinishWindowEndState;
- (void)makeKeyWindow;
- (void)dealloc;
- (void)setAlpha:(double)arg1;
- (double)alpha;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (void)dettachSelf;
- (void)attachToTopWindow;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

