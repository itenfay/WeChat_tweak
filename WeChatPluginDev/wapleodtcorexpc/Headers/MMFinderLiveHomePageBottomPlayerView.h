//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMFinderLiveHomePageBottomPlayerViewModel, MMUIButton, MMUILabel, MMWebImageView, NSString, RichTextView, UIImageView, UIPanGestureRecognizer, WCFinderHeadImageView;
@protocol MMFinderLiveHomePageBottomPlayerViewDelegagte;

@interface MMFinderLiveHomePageBottomPlayerView : UIView
{
    id <MMFinderLiveHomePageBottomPlayerViewDelegagte> _delegate;
    MMFinderLiveHomePageBottomPlayerViewModel *_viewModel;
    UIView *_liveView;
    UIView *_indicatorView;
    UIView *_liveViewContainerView;
    UIView *_playerControlView;
    UIView *_containerView;
    UIView *_backgroundBlurView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIView *_bottomPlayerView;
    CAShapeLayer *_shapeLayer;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMWebImageView *_authIconView;
    MMUIButton *_playButton;
    RichTextView *_liveTitleLabel;
    MMUILabel *_liveAnchorNameLabel;
    WCFinderHeadImageView *_avatarView;
    UIImageView *_topColorView;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *topColorView; // @synthesize topColorView=_topColorView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) MMUILabel *liveAnchorNameLabel; // @synthesize liveAnchorNameLabel=_liveAnchorNameLabel;
@property(retain, nonatomic) RichTextView *liveTitleLabel; // @synthesize liveTitleLabel=_liveTitleLabel;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *bottomPlayerView; // @synthesize bottomPlayerView=_bottomPlayerView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(retain, nonatomic) UIView *liveViewContainerView; // @synthesize liveViewContainerView=_liveViewContainerView;
@property(nonatomic) __weak UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) MMFinderLiveHomePageBottomPlayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MMFinderLiveHomePageBottomPlayerViewDelegagte> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onClickPlayButton:(id)arg1;
- (id)playerBottomBarBackgroundColor:(id)arg1;
- (void)onDismissView;
- (void)attachIndicatorView:(id)arg1;
- (_Bool)isLiveViewAttached:(id)arg1;
- (_Bool)attachLiveView:(id)arg1;
- (void)onViewDidDisapear;
- (void)onViewDidApear;
- (void)adjustBottomPlayerContainer;
- (void)updateViewModel:(id)arg1;
- (void)updateAuthInfo:(id)arg1;
- (void)refreshPlayButtonStatus:(unsigned long long)arg1;
- (void)updateBottomPlayerBackgroundView:(id)arg1;
- (void)layoutAnchorTitle;
- (void)updateAnimationFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateBottomPlayerContainerViewFrame;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

