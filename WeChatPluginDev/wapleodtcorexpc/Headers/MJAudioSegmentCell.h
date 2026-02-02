//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJAudioWaveformView, NSString;

@interface MJAudioSegmentCell
{
    _Bool _contentCanBeDrawn;
    MJAudioWaveformView *_waveformView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJAudioWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(nonatomic) _Bool contentCanBeDrawn; // @synthesize contentCanBeDrawn=_contentCanBeDrawn;
- (void)drawWaveformWithTimeRange:(CDStruct_e83c9415)arg1 sampleCount:(unsigned int)arg2 forceUpdate:(_Bool)arg3;
- (void)drawWaveformWithTimeRange:(CDStruct_e83c9415)arg1 sampleCount:(unsigned int)arg2;
- (void)audioWaveformViewDidLayout:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

