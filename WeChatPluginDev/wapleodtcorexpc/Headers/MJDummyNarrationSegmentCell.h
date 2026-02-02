//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJAudioWaveformView, OMCDecibelHeightCalculator;

@interface MJDummyNarrationSegmentCell : UIView
{
    void * _decibels;
    struct shared_ptr<std::vector<float>> _realDecibelHeights;
    struct shared_ptr<std::vector<float>> _allDecibelHeights;
    int _dummySampleCount;
    void * _dummyDecibelHeights;
    _Bool _contentCanBeDrawn;
    OMCDecibelHeightCalculator *_decibelHeightCalc;
    MJAudioWaveformView *_waveformView;
}

@property(readonly, nonatomic) MJAudioWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(readonly, nonatomic) OMCDecibelHeightCalculator *decibelHeightCalc; // @synthesize decibelHeightCalc=_decibelHeightCalc;
@property(nonatomic) _Bool contentCanBeDrawn; // @synthesize contentCanBeDrawn=_contentCanBeDrawn;
- (void)updateWithDecibels:(const void *)arg1;
- (void)updateWithCaptionItems:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

