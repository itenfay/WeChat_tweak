//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSamplingStatData : NSObject
{
    double _maxGPUTimeMs;
    double _maxVertexTimeMs;
    double _maxFragmentTimeMs;
    double _maxEncodeTimeMs;
    unsigned long long _gpuLagCount;
    unsigned long long _vertexLagCount;
    unsigned long long _fragmentLagCount;
    unsigned long long _encodeLagCount;
    unsigned long long _startTime;
    unsigned long long _endTime;
    double _totalGPUTimeMs;
    double _totalEncodeTimeMs;
    double _totalVertexTimeMs;
    double _totalFragmentTimeMs;
    unsigned long long _totalGPUCmdCount;
    unsigned long long _totalVertexCmdCount;
    unsigned long long _totalFragmentCmdCount;
    unsigned long long _totalEncodeCmdCount;
}

@property unsigned long long totalEncodeCmdCount; // @synthesize totalEncodeCmdCount=_totalEncodeCmdCount;
@property unsigned long long totalFragmentCmdCount; // @synthesize totalFragmentCmdCount=_totalFragmentCmdCount;
@property unsigned long long totalVertexCmdCount; // @synthesize totalVertexCmdCount=_totalVertexCmdCount;
@property unsigned long long totalGPUCmdCount; // @synthesize totalGPUCmdCount=_totalGPUCmdCount;
@property double totalFragmentTimeMs; // @synthesize totalFragmentTimeMs=_totalFragmentTimeMs;
@property double totalVertexTimeMs; // @synthesize totalVertexTimeMs=_totalVertexTimeMs;
@property double totalEncodeTimeMs; // @synthesize totalEncodeTimeMs=_totalEncodeTimeMs;
@property double totalGPUTimeMs; // @synthesize totalGPUTimeMs=_totalGPUTimeMs;
@property unsigned long long endTime; // @synthesize endTime=_endTime;
@property unsigned long long startTime; // @synthesize startTime=_startTime;
@property unsigned long long encodeLagCount; // @synthesize encodeLagCount=_encodeLagCount;
@property unsigned long long fragmentLagCount; // @synthesize fragmentLagCount=_fragmentLagCount;
@property unsigned long long vertexLagCount; // @synthesize vertexLagCount=_vertexLagCount;
@property unsigned long long gpuLagCount; // @synthesize gpuLagCount=_gpuLagCount;
@property double maxEncodeTimeMs; // @synthesize maxEncodeTimeMs=_maxEncodeTimeMs;
@property double maxFragmentTimeMs; // @synthesize maxFragmentTimeMs=_maxFragmentTimeMs;
@property double maxVertexTimeMs; // @synthesize maxVertexTimeMs=_maxVertexTimeMs;
@property double maxGPUTimeMs; // @synthesize maxGPUTimeMs=_maxGPUTimeMs;
@property(readonly, nonatomic) double avgEncodeTimeMs;
@property(readonly, nonatomic) double avgFragmentTimeMs;
@property(readonly, nonatomic) double avgVertexTimeMs;
@property(readonly, nonatomic) double avgGPUTimeMs;
- (void)updateWithSamplingTraceInfo:(id)arg1;
- (id)init;

@end

