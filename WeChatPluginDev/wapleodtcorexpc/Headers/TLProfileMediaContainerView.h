//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicFadeOutLayer, NSString, TLProfileModel, UIViewPropertyAnimator, UIVisualEffectView;
@protocol TLProfileBaseMediaView, TLProfileBaseMediaViewDelegate;

@interface TLProfileMediaContainerView : UIView
{
    _Bool _useCoverForContent;
    UIView<TLProfileBaseMediaView> *_mediaView;
    id <TLProfileBaseMediaViewDelegate> _delegate;
    double _mediaAspectRatio;
    UIView *_mediaCoverView;
    UIView *_mediaBackgroundView;
    double _aspectRatio;
    long long _effect;
    double _transitionProgress;
    double _visibleHeight;
    double _minVisibleHeight;
    double _minHeight;
    double _maxHeight;
    MMMusicFadeOutLayer *_maskLayer;
    MMMusicFadeOutLayer *_coverMaskLayer;
    UIView *_effectView;
    UIVisualEffectView *_blurView;
    UIViewPropertyAnimator *_blurAnimator;
    UIView *_backgroundBlurView;
    TLProfileModel *_profileModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TLProfileModel *profileModel; // @synthesize profileModel=_profileModel;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIViewPropertyAnimator *blurAnimator; // @synthesize blurAnimator=_blurAnimator;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) MMMusicFadeOutLayer *coverMaskLayer; // @synthesize coverMaskLayer=_coverMaskLayer;
@property(retain, nonatomic) MMMusicFadeOutLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool useCoverForContent; // @synthesize useCoverForContent=_useCoverForContent;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double minVisibleHeight; // @synthesize minVisibleHeight=_minVisibleHeight;
@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) long long effect; // @synthesize effect=_effect;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UIView *mediaBackgroundView; // @synthesize mediaBackgroundView=_mediaBackgroundView;
@property(retain, nonatomic) UIView *mediaCoverView; // @synthesize mediaCoverView=_mediaCoverView;
@property(nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onMediaViewRefresh;
- (void)onMediaFinishPlaying;
- (void)resetPlayMedia;
@property(nonatomic, getter=isMuted) _Bool muted;
- (void)pausePlayMediaVideoStream;
- (void)stopPlayMedia;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (_Bool)shouldHandleMedia;
- (void)didExitHover;
- (void)exitHover;
- (void)willExitHover;
- (void)didEnterHover;
- (void)enterHover;
- (void)willEnterHover;
- (void)removeBlurViewEffect;
- (void)addBlurViewEffect;
- (void)willEnterForeground;
- (void)didMoveToWindow;
- (void)refreshSubviewLevel;
@property(retain, nonatomic) UIView<TLProfileBaseMediaView> *mediaView; // @synthesize mediaView=_mediaView;
- (_Bool)isSizeParamsInvalid;
- (_Bool)hidesBlurForMediaViewSize:(struct CGSize)arg1;
- (void)resetMediaViewMask;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)updateModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

