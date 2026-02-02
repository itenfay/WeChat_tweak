//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TSKEffectGraph;

@interface MMFinderLiveKTVAudioEffectTSKProcesser
{
    TSKEffectGraph *_graph;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSKEffectGraph *graph; // @synthesize graph=_graph;
- (id)supportedReverbTypes;
- (_Bool)updateSettingParam:(id)arg1;
- (_Bool)process:(id)arg1;
- (_Bool)stopAudioProcesser;
- (_Bool)startAudioProcesser;
- (unsigned long long)effectTypeForReverbType:(unsigned long long)arg1;
- (void)updateOptimizeReverbSetting;
- (void)freeEffectGraph;
- (void)createEffectGraph;

@end

