//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MJSegmentSpeedInspectorViewModel
{
    double _speedOriginalRatio;
    double _rawSpeedOriginalRatio;
    double _rawSpeedRatio;
    double _speedRatio;
}

@property(nonatomic) double speedRatio; // @synthesize speedRatio=_speedRatio;
@property(nonatomic) double rawSpeedRatio; // @synthesize rawSpeedRatio=_rawSpeedRatio;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)setValuesToOriginal;
- (void)notifyDidReset;
- (void)notifyDidCancel;
- (_Bool)hasChanges;
- (id)adjustableProtocols;
- (id)title;
- (_Bool)isResetEnabled;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
- (double)reverseMappingFromSpeedValue:(double)arg1;
- (double)mappingToSpeedValue:(double)arg1;
- (double)reverseSegmentedLinearMappingToSpeedValue:(double)arg1;
- (double)segmentedLinearMappingToSpeedValue:(double)arg1;
- (void)handleConfigRawSpeedRatio:(double)arg1;
- (id)speedRatioTextByRawSpeedRatio:(double)arg1;
- (void)dealloc;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;

@end

