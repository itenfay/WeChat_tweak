//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveContainerLogic, MMLiveTaskId, MMLiveView, UIGestureRecognizer, UIImageView, UIView;
@protocol MMLiveContainerDisplayViewProtocol;

@protocol MMLiveContainerLogicControllerDelegate <NSObject>
@property(nonatomic) _Bool isPresentingWithCustomTransition;
@property(nonatomic) _Bool isForcePortraitForExtend;
@property(readonly, nonatomic) UIImageView *blurView;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) MMLiveView *liveView;
@property(readonly, nonatomic) UIView *minimizeSrcView;
@property(readonly, nonatomic) UIView<MMLiveContainerDisplayViewProtocol> *displayContentView;
- (UIView *)takeSnapshotView;
- (void)onLiveViewEnterSquareAnimationEnd:(MMLiveContainerLogic *)arg1 isPop:(_Bool)arg2;
- (void)onLiveViewEnterSquareAnimationBegin:(MMLiveContainerLogic *)arg1 isPop:(_Bool)arg2;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportSpecialLiveAnimatorGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (void)hideView;
- (void)showView;
- (struct CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;

@optional
- (_Bool)isAnchorPreviewRotateTransiting;
- (_Bool)isPIPHandlerCreated;
@end

