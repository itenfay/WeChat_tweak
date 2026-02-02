//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJComposingToolbar, MJPublisherPlaybackProgressSlider, MMUIView;
@protocol MJClippingPanelDelegate;

@interface MJClippingPanel
{
    id <MJClippingPanelDelegate> _delegate;
    unsigned long long _panelConfiguration;
    MJPublisherPlaybackProgressSlider *_playbackProgressSlider;
    MJComposingToolbar *_toolbar;
    MMUIView *_contentView;
    MMUIView *_bottomBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(readonly, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) MJComposingToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) MJPublisherPlaybackProgressSlider *playbackProgressSlider; // @synthesize playbackProgressSlider=_playbackProgressSlider;
@property(readonly, nonatomic) unsigned long long panelConfiguration; // @synthesize panelConfiguration=_panelConfiguration;
@property(nonatomic) __weak id <MJClippingPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)toolbarRedoButtonTouchUpInside:(id)arg1;
- (void)toolbarUndoButtonTouchUpInside:(id)arg1;
- (void)toolbarPlayButtonTouchUpInside:(id)arg1;
- (void)playbackControlViewTouchEnd:(id)arg1;
- (void)playbackControlViewTouchDown:(id)arg1;
- (void)playbackControlViewValueChanged:(id)arg1;
- (void)setIsRedoEnabled:(_Bool)arg1;
- (void)setIsUndoEnabled:(_Bool)arg1;
- (void)setIsToolbarHidden:(_Bool)arg1 alpha:(double)arg2;
- (void)showUndoRedoAnimated:(_Bool)arg1;
- (void)hideUndoRedoAnimated:(_Bool)arg1;
- (void)showPlaybackProgressSliderAnimated:(_Bool)arg1;
- (void)hidePlaybackProgressSliderAnimated:(_Bool)arg1;
- (void)setVideoFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setPlaybackDuration:(CDStruct_1b6d18a9)arg1;
- (void)setPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)setIsPlaying:(_Bool)arg1;
- (id)viewHitInSubview:(id)arg1 point:(struct CGPoint)arg2 event:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupBottomBackgroundViewForLyricEditing;
- (void)setupBottomBackgroundViewDefault;
- (void)configWith:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithPanelConfiguration:(unsigned long long)arg1;

@end

