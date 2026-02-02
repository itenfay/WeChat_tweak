//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCoverSnapshotOptions : NSObject
{
    int _sampleRate;
    float _darknessRatioThreshold;
    float _clarityThreshold;
    CDStruct_1b6d18a9 _maxDuration;
}

@property(readonly, nonatomic) float clarityThreshold; // @synthesize clarityThreshold=_clarityThreshold;
@property(readonly, nonatomic) float darknessRatioThreshold; // @synthesize darknessRatioThreshold=_darknessRatioThreshold;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxDuration; // @synthesize maxDuration=_maxDuration;
@property(readonly, nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;
- (id)initWithSampleRate:(int)arg1 maxDuration:(CDStruct_1b6d18a9)arg2 darknessRatioThreshold:(float)arg3 clarityThreshold:(float)arg4;
- (id)initWithSampleRate:(int)arg1 maxDuration:(CDStruct_1b6d18a9)arg2;
- (id)initWithSampleRate:(int)arg1 maxDuration:(CDStruct_1b6d18a9)arg2 darknessRatioThreshold:(float)arg3;
- (id)init;

@end

