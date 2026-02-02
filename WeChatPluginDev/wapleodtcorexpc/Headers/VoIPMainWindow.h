//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;
@protocol VoIPMainWindowDelegate;

@interface VoIPMainWindow
{
    _Bool _shouldIgnoreExtendFromCollapseFirstStepAnimation;
    _Bool _m_hasStartQuitAnimation;
    id <VoIPMainWindowDelegate> m_mainWindowDelegate;
    UIImageView *m_blurView;
    unsigned long long _scene;
    unsigned long long _lastScene;
    unsigned long long _animateStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasStartQuitAnimation; // @synthesize m_hasStartQuitAnimation=_m_hasStartQuitAnimation;
@property(nonatomic) _Bool shouldIgnoreExtendFromCollapseFirstStepAnimation; // @synthesize shouldIgnoreExtendFromCollapseFirstStepAnimation=_shouldIgnoreExtendFromCollapseFirstStepAnimation;
@property(nonatomic) unsigned long long animateStatus; // @synthesize animateStatus=_animateStatus;
@property(nonatomic) unsigned long long lastScene; // @synthesize lastScene=_lastScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(nonatomic) __weak id <VoIPMainWindowDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate;
- (void)changeStatusBarColor;
- (void)restoreStatusBarColor;
- (void)collapseWithAnimationDidStopIsIgnoringSnapshot:(_Bool)arg1;
- (_Bool)hasStartQuitAnimation;
- (long long)getPreviousOrientation;
- (void)quitAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)quitAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2 delay:(float)arg3;
- (void)quitWithoutAnimationWithCompletion:(CDUnknownBlockType)arg1 delay:(float)arg2;
- (void)quitWithoutAnimation;
- (void)quitAnimtedWithCompletion:(CDUnknownBlockType)arg1 delay:(float)arg2;
- (void)extendFromCollapseWithAnimated:(_Bool)arg1 isIgnoringSnapshot:(_Bool)arg2;
- (void)_extendFromCollapseWithAnimated:(_Bool)arg1;
- (void)_extendFromCollapseWhenConnectingInVideoModeWithAnimated:(_Bool)arg1;
- (void)extendFromCollapseWithAnimationIsIgnoringSnapshot:(_Bool)arg1;
- (void)collapseWithAnimationIsIgnoringSnapshot:(_Bool)arg1;
- (void)_collapseWithAnimation;
- (void)_collapseWhenConnectingInVideoModeWithAnimation;
- (void)slipCollapseWithAnimation:(id)arg1 isIgnoringSnapshot:(_Bool)arg2;
- (void)_slipCollapseWithAnimation:(id)arg1;
- (void)_slipCollapseWhenConnectingInVideoModeWithAnimation;
- (void)collapseWithNotAnimation;
- (void)extendWithAnimation;
- (void)extendWithCompletion:(CDUnknownBlockType)arg1 isAnimated:(_Bool)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isExtending;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 rootViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

