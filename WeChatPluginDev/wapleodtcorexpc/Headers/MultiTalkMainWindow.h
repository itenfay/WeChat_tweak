//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;
@protocol MultiTalkMainWindowDelegate;

@interface MultiTalkMainWindow
{
    _Bool _shouldIgnoreExtendFromCollapseFirstStepAnimation;
    _Bool _m_hasStartQuitAnimation;
    _Bool _noNeedAnimationFromStart;
    id <MultiTalkMainWindowDelegate> m_mainWindowDelegate;
    UIImageView *m_blurView;
    unsigned long long _scene;
    unsigned long long _animateStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool noNeedAnimationFromStart; // @synthesize noNeedAnimationFromStart=_noNeedAnimationFromStart;
@property(nonatomic) _Bool m_hasStartQuitAnimation; // @synthesize m_hasStartQuitAnimation=_m_hasStartQuitAnimation;
@property(nonatomic) _Bool shouldIgnoreExtendFromCollapseFirstStepAnimation; // @synthesize shouldIgnoreExtendFromCollapseFirstStepAnimation=_shouldIgnoreExtendFromCollapseFirstStepAnimation;
@property(nonatomic) unsigned long long animateStatus; // @synthesize animateStatus=_animateStatus;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(nonatomic) __weak id <MultiTalkMainWindowDelegate> m_mainWindowDelegate; // @synthesize m_mainWindowDelegate;
- (void)changeStatusBarColor;
- (void)restoreStatusBarColor;
- (void)collapseWithAnimationDidStop;
- (_Bool)hasStartQuitAnimation;
- (long long)getPreviousOrientation;
- (void)quitAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)quitAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2 delay:(float)arg3;
- (void)quitWithoutAnimation;
- (void)quitWithAnimation;
- (void)quitAnimtedWithCompletion:(CDUnknownBlockType)arg1 delay:(float)arg2;
- (void)extendFromCollapseWithAnimated:(_Bool)arg1;
- (struct CGRect)normalScreenBounds;
- (void)extendFromCollapseWithAnimation;
- (void)collapseWithAnimation;
- (void)slipCollapseWithAnimation:(id)arg1;
- (void)collapseWithNotAnimation;
- (void)extendWithAnimation;
- (void)extendWithCompletion:(CDUnknownBlockType)arg1 isAnimated:(_Bool)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showWithAnimation;
- (void)hideWithAnimation;
- (_Bool)animateAtInit;
- (void)dealloc;
- (void)commonSetup;
- (id)init;
- (id)initWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isExtending;

@end

