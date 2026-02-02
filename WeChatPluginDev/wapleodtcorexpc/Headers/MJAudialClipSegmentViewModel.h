//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMCAudioWaveformProvider, OMCClipSegment, OMCDecibelHeightCalculator;

@interface MJAudialClipSegmentViewModel
{
    vector_8ca568ff _decibels;
    struct shared_ptr<std::vector<float>> _normalizedDecibelHeights;
    unsigned int _prevSampleCount;
    _Bool _shouldUpdateWaveformProvider;
    OMCClipSegment *_clipSegment;
    OMCAudioWaveformProvider *_waveformProvider;
    OMCDecibelHeightCalculator *_decibelHeightCalc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUpdateWaveformProvider; // @synthesize shouldUpdateWaveformProvider=_shouldUpdateWaveformProvider;
@property(retain, nonatomic) OMCDecibelHeightCalculator *decibelHeightCalc; // @synthesize decibelHeightCalc=_decibelHeightCalc;
@property(retain, nonatomic) OMCAudioWaveformProvider *waveformProvider; // @synthesize waveformProvider=_waveformProvider;
@property(retain, nonatomic) OMCClipSegment *clipSegment; // @synthesize clipSegment=_clipSegment;
- (void)audialClipDidBeReplaced;
- (tuple_aeb18edb)normalizedDecibelHeightsWithTimeRange:(CDStruct_e83c9415)arg1 sampleCount:(unsigned int)arg2 forceUpdate:(_Bool)arg3;
- (tuple_aeb18edb)normalizedDecibelHeightsWithTimeRange:(CDStruct_e83c9415)arg1 sampleCount:(unsigned int)arg2;
- (void)syncWithAudialClipSegmentImpl;
- (_Bool)syncWithSegment:(id)arg1;
- (id)initWithClipSegment:(id)arg1;

@end

