//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsStackInfo, NSString;

@interface MMGPUSamplingTraceInfo : NSObject
{
    unsigned int _type;
    unsigned int _sampleCount;
    int _startOfVertexSampleIndex;
    int _endOfVertexSampleIndex;
    int _startOfFragmentSampleIndex;
    int _endOfFragmentSampleIndex;
    int _startOfEncoderSampleIndex;
    int _endOfEncoderSampleIndex;
    double _time;
    id _timestampCounterBuffer;
    MMMetricsStackInfo *_stack;
    unsigned long long _stackHash;
    NSString *_tag;
    double _vertexTimeMs;
    double _fragmentTimeMs;
    double _gpuCostTimeMs;
    double _encodeTimeMs;
    struct TimeLapse _gpuTimestamp;
    struct TimeLapse _cpuTimestamp;
}

+ (unsigned long long)GetAdjustGPUTime:(struct TimeLapse)arg1 cpuLapse:(struct TimeLapse)arg2 gpuTime:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) double encodeTimeMs; // @synthesize encodeTimeMs=_encodeTimeMs;
@property(nonatomic) double gpuCostTimeMs; // @synthesize gpuCostTimeMs=_gpuCostTimeMs;
@property(nonatomic) double fragmentTimeMs; // @synthesize fragmentTimeMs=_fragmentTimeMs;
@property(nonatomic) double vertexTimeMs; // @synthesize vertexTimeMs=_vertexTimeMs;
@property(nonatomic) int endOfEncoderSampleIndex; // @synthesize endOfEncoderSampleIndex=_endOfEncoderSampleIndex;
@property(nonatomic) int startOfEncoderSampleIndex; // @synthesize startOfEncoderSampleIndex=_startOfEncoderSampleIndex;
@property(nonatomic) int endOfFragmentSampleIndex; // @synthesize endOfFragmentSampleIndex=_endOfFragmentSampleIndex;
@property(nonatomic) int startOfFragmentSampleIndex; // @synthesize startOfFragmentSampleIndex=_startOfFragmentSampleIndex;
@property(nonatomic) int endOfVertexSampleIndex; // @synthesize endOfVertexSampleIndex=_endOfVertexSampleIndex;
@property(nonatomic) int startOfVertexSampleIndex; // @synthesize startOfVertexSampleIndex=_startOfVertexSampleIndex;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned long long stackHash; // @synthesize stackHash=_stackHash;
@property(retain, nonatomic) MMMetricsStackInfo *stack; // @synthesize stack=_stack;
@property(nonatomic) unsigned int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) struct TimeLapse cpuTimestamp; // @synthesize cpuTimestamp=_cpuTimestamp;
@property(nonatomic) struct TimeLapse gpuTimestamp; // @synthesize gpuTimestamp=_gpuTimestamp;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) id timestampCounterBuffer; // @synthesize timestampCounterBuffer=_timestampCounterBuffer;
@property(nonatomic) double time; // @synthesize time=_time;
- (id)renderSample;
- (_Bool)isEncoderSampleIndexValid;
- (_Bool)isFragmentSampleIndexValid;
- (_Bool)isVertexSampleIndexValid;
- (unsigned long long)adjustGPUTime:(unsigned long long)arg1;
- (void)markEndPointWithDevice:(id)arg1;
- (void)markStartPointWithDevice:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id sampleKey;
- (id)init;

@end

