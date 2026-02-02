//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MoveWithTouchAlgorithm, NSString, SightIconView;
@protocol WAFloatingVideoDelegate, WAStreamPlayerInterface;

@interface WAFloatingVideoView : UIView
{
    UIView<WAStreamPlayerInterface> *_videoView;
    UIView *_videoParentView;
    UIView *_audioOnlyShadowView;
    id <WAFloatingVideoDelegate> _delegate;
    UIView *_interactiveView;
    SightIconView *_loadingView;
    MMUIButton *_closeBtn;
    UIView *_progressView;
    MoveWithTouchAlgorithm *_moveAlgorithm;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *interactiveView; // @synthesize interactiveView=_interactiveView;
@property(nonatomic) __weak id <WAFloatingVideoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *audioOnlyShadowView; // @synthesize audioOnlyShadowView=_audioOnlyShadowView;
@property(retain, nonatomic) UIView *videoParentView; // @synthesize videoParentView=_videoParentView;
@property(nonatomic) __weak UIView<WAStreamPlayerInterface> *videoView; // @synthesize videoView=_videoView;
- (id)getVideoView;
- (void)removeVideoView;
- (void)onFloatingVideoClick;
- (void)onVideoViewClosed;
- (void)onOrientationChanged;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (_Bool)shouldLockToPortrait;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isVideoViewFloating:(id)arg1;
- (void)showInteractiveView;
- (void)hideInteractiveView;
- (void)showProgressViewWithProgress:(double)arg1;
- (void)updatePlayerView:(id)arg1;
- (void)setupSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

