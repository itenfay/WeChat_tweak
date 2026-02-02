//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EffectGraph : NSObject
{
    struct EffectContext _context;
    struct EffectGraph<audiobase::fx::EffectGraphImplBeta> _betaGraph;
    struct EffectGraph<audiobase::fx::EffectGraphImplStable> _stabelGraph;
    _Bool _isStable;
    NSString *_currentEffectName;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentEffectName; // @synthesize currentEffectName=_currentEffectName;
- (float)latencyMs:(unsigned long long)arg1;
- (_Bool)setBPM:(float)arg1;
- (_Bool)setAccompanyGainEnable:(_Bool)arg1;
- (_Bool)setVocalGainEnable:(_Bool)arg1;
- (_Bool)updateVolumeGainWithVocLoudness:(float)arg1 accLoudness:(float)arg2 plugged:(_Bool)arg3 isMono:(_Bool)arg4;
- (_Bool)updateVolumeGainWithVocLoudness:(float)arg1 accLoudness:(float)arg2 plugged:(_Bool)arg3;
- (_Bool)updateSliderWithIndex:(unsigned long long)arg1 value:(float)arg2;
- (_Bool)recordStageChanged:(unsigned long long)arg1;
- (_Bool)pluggedStageChanged:(_Bool)arg1;
- (void)reset;
- (_Bool)processWithBuffer:(char *)arg1 bufferLen:(unsigned long long *)arg2 stage:(unsigned long long)arg3;
- (_Bool)loadEffectConfigParser:(id)arg1 effectSpec:(id)arg2;
- (_Bool)setEffectType:(unsigned long long)arg1 effectSpec:(id)arg2;
- (id)initWithStableEnable:(_Bool)arg1;
- (id)init;

@end

