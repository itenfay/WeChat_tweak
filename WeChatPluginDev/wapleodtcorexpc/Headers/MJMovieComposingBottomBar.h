//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisherPlaybackProgressSlider, MMUIButton, UIStackView;

@interface MJMovieComposingBottomBar
{
    CDUnknownBlockType _didClickButtonAction;
    MJPublisherPlaybackProgressSlider *_playbackProgressSlider;
    UIStackView *_panelButtonsContainer;
    MMUIButton *_musicButton;
    MMUIButton *_stickerButton;
    MMUIButton *_textButton;
    MMUIButton *_narrationButton;
    MMUIButton *_clippingButton;
    MMUIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *clippingButton; // @synthesize clippingButton=_clippingButton;
@property(retain, nonatomic) MMUIButton *narrationButton; // @synthesize narrationButton=_narrationButton;
@property(retain, nonatomic) MMUIButton *textButton; // @synthesize textButton=_textButton;
@property(retain, nonatomic) MMUIButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(retain, nonatomic) MMUIButton *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) UIStackView *panelButtonsContainer; // @synthesize panelButtonsContainer=_panelButtonsContainer;
@property(retain, nonatomic) MJPublisherPlaybackProgressSlider *playbackProgressSlider; // @synthesize playbackProgressSlider=_playbackProgressSlider;
@property(copy, nonatomic) CDUnknownBlockType didClickButtonAction; // @synthesize didClickButtonAction=_didClickButtonAction;
- (id)viewHitInSubview:(id)arg1 point:(struct CGPoint)arg2 event:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)buttonTouchUpInside:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

