//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCAutoVolumeCalculator : NSObject
{
    SharedPtr_006c5f19 _backingAutoVolumeCalculator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_006c5f19 backingAutoVolumeCalculator; // @synthesize backingAutoVolumeCalculator=_backingAutoVolumeCalculator;
- (id)calculateLoudnessWithClipSegment:(id)arg1 timeRangeInMedia:(CDStruct_e83c9415)arg2;
- (id)calculateVolumeWithClipSegments:(id)arg1 baseLoudness:(double)arg2 autoVolumeLevel:(double)arg3 segmentAnalysisDuration:(double)arg4 subSegmentDuration:(double)arg5;
- (id)init;

@end

