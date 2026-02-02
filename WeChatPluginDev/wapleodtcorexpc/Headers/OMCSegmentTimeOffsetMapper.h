//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMCSegmentTimeOffsetMapper : NSObject
{
    SharedPtr_141d0c2d _time2OffsetMapper;
    SharedPtr_1b64590e _offset2TimeMapper;
    struct MCOffsetRange _pixelOffsetRange;
    struct MCOffsetRange _pointOffsetRange;
    struct XTMTimeRange _backingTimeRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_1b64590e offset2TimeMapper; // @synthesize offset2TimeMapper=_offset2TimeMapper;
@property(readonly, nonatomic) SharedPtr_141d0c2d time2OffsetMapper; // @synthesize time2OffsetMapper=_time2OffsetMapper;
@property(readonly, nonatomic) struct XTMTimeRange backingTimeRange; // @synthesize backingTimeRange=_backingTimeRange;
@property(readonly, nonatomic) struct MCOffsetRange pointOffsetRange; // @synthesize pointOffsetRange=_pointOffsetRange;
@property(readonly, nonatomic) struct MCOffsetRange pixelOffsetRange; // @synthesize pixelOffsetRange=_pixelOffsetRange;
@property(readonly, copy) NSString *description;
- (CDStruct_1b6d18a9)deltaTimeForDeltaPointOffset:(double)arg1;
- (double)pointOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForPointOffset:(double)arg1;
- (void)rebuildWithTimeRange:(CDStruct_e83c9415)arg1 pointOffsetRange:(struct MCOffsetRange)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

