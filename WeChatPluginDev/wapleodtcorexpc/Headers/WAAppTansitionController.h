//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiniTaskTransitionContext, NSString, UINavigationController, WASheetPresentationController;
@protocol MinimizeTransitionInterface, WAAppTansitionControllerDelegate;

@interface WAAppTansitionController : NSObject
{
    _Bool _isMinimizedTask;
    _Bool _isManualMinimizedTask;
    _Bool _isSimulatedNativeAnimation;
    _Bool _maskEnable;
    _Bool _sheetMode;
    _Bool _dismissFromMenuOrGesture;
    _Bool _dismissFromGestureOnly;
    _Bool _isInForceDismissAndPresentAnimationOnce;
    unsigned int _miniPinedGestureType;
    UINavigationController *_owerNav;
    id <WAAppTansitionControllerDelegate> _delegate;
    id <MinimizeTransitionInterface> _minimizationTransitionDelegate;
    NSString *_taskBizKey;
    long long _simulatedNativeAnimationType;
    long long _restoreOrientationOnDismiss;
    MiniTaskTransitionContext *_miniTaskVCAnimationContext;
    WASheetPresentationController *_sheetPresentationController;
    struct CGRect _simulatedNativeAnimationScreenRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInForceDismissAndPresentAnimationOnce; // @synthesize isInForceDismissAndPresentAnimationOnce=_isInForceDismissAndPresentAnimationOnce;
@property(retain, nonatomic) WASheetPresentationController *sheetPresentationController; // @synthesize sheetPresentationController=_sheetPresentationController;
@property(nonatomic) unsigned int miniPinedGestureType; // @synthesize miniPinedGestureType=_miniPinedGestureType;
@property(retain, nonatomic) MiniTaskTransitionContext *miniTaskVCAnimationContext; // @synthesize miniTaskVCAnimationContext=_miniTaskVCAnimationContext;
@property(nonatomic) _Bool dismissFromGestureOnly; // @synthesize dismissFromGestureOnly=_dismissFromGestureOnly;
@property(nonatomic) _Bool dismissFromMenuOrGesture; // @synthesize dismissFromMenuOrGesture=_dismissFromMenuOrGesture;
@property(nonatomic) _Bool sheetMode; // @synthesize sheetMode=_sheetMode;
@property(nonatomic) _Bool maskEnable; // @synthesize maskEnable=_maskEnable;
@property(nonatomic) long long restoreOrientationOnDismiss; // @synthesize restoreOrientationOnDismiss=_restoreOrientationOnDismiss;
@property(nonatomic) struct CGRect simulatedNativeAnimationScreenRect; // @synthesize simulatedNativeAnimationScreenRect=_simulatedNativeAnimationScreenRect;
@property(nonatomic) long long simulatedNativeAnimationType; // @synthesize simulatedNativeAnimationType=_simulatedNativeAnimationType;
@property(nonatomic) _Bool isSimulatedNativeAnimation; // @synthesize isSimulatedNativeAnimation=_isSimulatedNativeAnimation;
@property(nonatomic) _Bool isManualMinimizedTask; // @synthesize isManualMinimizedTask=_isManualMinimizedTask;
@property(nonatomic) _Bool isMinimizedTask; // @synthesize isMinimizedTask=_isMinimizedTask;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(nonatomic) __weak id <MinimizeTransitionInterface> minimizationTransitionDelegate; // @synthesize minimizationTransitionDelegate=_minimizationTransitionDelegate;
@property(nonatomic) __weak id <WAAppTansitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *owerNav; // @synthesize owerNav=_owerNav;
- (void)sheetPresentationController:(id)arg1 dismissalTransitionDidEnd:(_Bool)arg2;
- (void)sheetDismissalTransitionWillBegin:(id)arg1;
- (void)sheetPresentationController:(id)arg1 presentTransitionDidEnd:(_Bool)arg2;
- (void)sheetPresentationTransitionWillBegin:(id)arg1;
- (_Bool)sheetCanRecoverAfterExpand;
- (_Bool)sheetShouldForbidDragDownGestureAfterExpand;
- (_Bool)sheetShouldUseDraggingBarHeaderView;
- (id)headerViewForSheetPresentationController:(id)arg1;
- (_Bool)sheetBackgroundUserInteractionEnabled;
- (_Bool)sheetBackgroundShouldBlur;
- (id)sheetBackgroundColor;
- (id)sheetModeParameter;
- (unsigned long long)sheetLaunchMode;
- (void)sheetFrameDidChange:(struct CGRect)arg1;
- (void)sheetDragGestureDidEnd:(id)arg1;
- (void)sheetDragGestureDidBegin:(id)arg1;
- (void)sheetContentYDidChangeTo:(double)arg1;
- (_Bool)sheetCanExpandToStatusBarArea;
- (_Bool)sheetCanDragToExpand;
- (_Bool)sheetShouldRespondsToTapGesture:(id)arg1;
- (_Bool)sheetShouldForbidDragDownGesture:(id)arg1;
- (_Bool)sheetShouldForbidDragUpGesture:(id)arg1;
- (_Bool)sheetShouldRespondsToDragGesture:(id)arg1;
- (unsigned long long)sheetRectCorner;
- (double)sheetCornerRadius;
- (double)sheetExpandedHeight;
- (struct CGSize)landscapeSheetSize;
- (struct CGSize)sheetSize;
- (void)onDragToNormalAfterExpand;
- (void)onDragToExpand:(_Bool)arg1;
- (void)onWillDragToExpand:(_Bool)arg1;
- (void)onDragToDismiss;
- (void)onTapBackground;
- (_Bool)dismissControllerNeedMask;
- (_Bool)presentationControllerNeedMask;
- (_Bool)dismissControllerNeedZoom;
- (_Bool)presentationControllerNeedZoom;
- (id)maximizeTransition;
- (id)minimizeTransition;
- (void)markForceDissmissAndPresentAnimationOnce;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)genDismissAnimateTransitionWithWebViewController:(id)arg1;
- (id)genSystemPopAnimateTransitionWithWebViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)onFirstWebViewDidNavigateOut:(id)arg1;
- (void)onFirstWebViewDidEndDragging:(id)arg1;
- (void)onFirstWebViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)onFirstWebViewWillBeginDragging:(id)arg1;
- (void)onFirstWebViewDidScroll:(id)arg1;
- (id)currentTaskWebView;
- (void)setFakeStatusBarColorInSheetMode:(id)arg1;
- (void)onEmbedWeAppExpandToFullScreen;
- (void)onInvokeRecoverHalfScreen;
- (void)onInvokeExpandFullScreen:(unsigned long long)arg1;
- (void)onMenuDisappear;
- (void)onMenuMore;
- (void)onClickEmbedExpandButton;
- (void)onDidAppear;
- (void)onDidPushViewController:(id)arg1;
- (void)onDidPresentViewController:(id)arg1;
- (void)updateMiniTaskSnapshot:(id)arg1;
- (void)onPresentComplete:(_Bool)arg1;
- (void)onMiniTaskDismissalGestureWillEnd:(_Bool)arg1;
- (void)onMiniTaskDismissalGestureWillBegin;
- (void)resetMinimizeState;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
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

