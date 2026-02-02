//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisherSlider, MJSegmentAudioInspectorViewModel, MMUIButton, MMUILabel;

@interface MJSegmentVolumeInspectorView
{
    MMUIButton *_muteButton;
    MMUILabel *_valueLabel;
    MJPublisherSlider *_plainSlider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPublisherSlider *plainSlider; // @synthesize plainSlider=_plainSlider;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMUIButton *muteButton; // @synthesize muteButton=_muteButton;
- (void)syncWithModel;
- (void)muteButtonDidTouchUpInside:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)setButtonUnMuted:(id)arg1;
- (void)setButtonMuted:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;

// Remaining properties
@property(readonly, nonatomic) MJSegmentAudioInspectorViewModel *viewModel; // @dynamic viewModel;

@end

