//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUIView, MinimizeTaskContainerMoveContext, MoveWithTouchAlgorithm, NSString, UIImageView, UIVisualEffectView;
@protocol MinimizeStarFloatingViewDelegate;

@interface MinimizeStarFloatingView : UIView
{
    _Bool m_recordFloatingMoveImg;
    _Bool _isIdleState;
    _Bool _isShowing;
    _Bool _animatedForAdsorbToWindow;
    id <MinimizeStarFloatingViewDelegate> _delegate;
    NSString *_currTaskKey;
    unsigned long long _genFloatingTime;
    long long _scene;
    UIImageView *_containerView;
    UIImageView *_iconView;
    MMUIView *_backgroundView;
    UIVisualEffectView *_blurEffectView;
    MMTimer *_countdownTimer;
    MMTimer *_changeStatuTimer;
    MoveWithTouchAlgorithm *_m_moveAlgorithm;
    MinimizeTaskContainerMoveContext *_originMoveContext;
    double _animateDurationForAdsorbToWindow;
    long long _animationSerial;
    struct UIEdgeInsets _edgeInset;
    struct CGRect _origiFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long animationSerial; // @synthesize animationSerial=_animationSerial;
@property(nonatomic) double animateDurationForAdsorbToWindow; // @synthesize animateDurationForAdsorbToWindow=_animateDurationForAdsorbToWindow;
@property(nonatomic) _Bool animatedForAdsorbToWindow; // @synthesize animatedForAdsorbToWindow=_animatedForAdsorbToWindow;
@property(retain, nonatomic) MinimizeTaskContainerMoveContext *originMoveContext; // @synthesize originMoveContext=_originMoveContext;
@property(retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm; // @synthesize m_moveAlgorithm=_m_moveAlgorithm;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) MMTimer *changeStatuTimer; // @synthesize changeStatuTimer=_changeStatuTimer;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGRect origiFrame; // @synthesize origiFrame=_origiFrame;
@property(nonatomic) struct UIEdgeInsets edgeInset; // @synthesize edgeInset=_edgeInset;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool isIdleState; // @synthesize isIdleState=_isIdleState;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long genFloatingTime; // @synthesize genFloatingTime=_genFloatingTime;
@property(retain, nonatomic) NSString *currTaskKey; // @synthesize currTaskKey=_currTaskKey;
@property(nonatomic) __weak id <MinimizeStarFloatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportFloatingClose:(_Bool)arg1;
- (void)reportFloatingOpen;
- (id)reportParams;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithnMoveEnd:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1 Touch:(id)arg2;
- (void)onMoveBeginWithTouchAlgorithmBegin:(struct CGPoint)arg1;
- (_Bool)shouldLockToPortrait;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void)onMiniTaskInteractivePopProgress:(double)arg1;
- (void)onMiniTaskInteractivePushProgress:(double)arg1;
- (void)onExitMiniTaskList;
- (void)onOpenMiniTaskList;
- (void)onChangeStatuTimer:(id)arg1;
- (void)onCountdownTimer:(id)arg1;
- (struct UIEdgeInsets)adjuestRealSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)realSafeAreaInsetsOfWindow;
- (double)floatViewScreenWidth;
- (double)bottomSafeAreaLength;
- (double)topSafeAreaLength;
- (void)adjustAfterAdsorbToWindowWithNewFrame:(struct CGRect)arg1;
- (void)animationToValueForViewsWhenMoveEndsWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onOrientationChange;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didStopCountdown;
- (void)stopChangeStatusTimer;
- (void)startChangeStatuTimer;
- (void)showAndResetTimer;
- (void)showFloating;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

