//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSString;
@protocol OMCSegmentSequenceTimeOffsetMapperDataSource;

@interface OMCSegmentSequenceTimeOffsetMapper : NSObject
{
    _Bool _isSequenceEmpty;
    _Bool _isSequenceMapperDirty;
    NSArray *_segmentViewMappers;
    id <OMCSegmentSequenceTimeOffsetMapperDataSource> _dataSource;
    SharedPtr_1b54ecb7 _time2OffsetMapper;
    SharedPtr_9eb4f64e _offset2TimeMapper;
    NSMapTable *_pointOffsetRangesByTimeRange;
    NSMapTable *_timeRangesByPointOffsetRange;
    struct MCOffsetRange _pixelOffsetRangeBoundary;
    struct MCOffsetRange _pointOffsetRangeBoundary;
    struct XTMTimeRange _backingTimeRangeBoundary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *timeRangesByPointOffsetRange; // @synthesize timeRangesByPointOffsetRange=_timeRangesByPointOffsetRange;
@property(retain, nonatomic) NSMapTable *pointOffsetRangesByTimeRange; // @synthesize pointOffsetRangesByTimeRange=_pointOffsetRangesByTimeRange;
@property(nonatomic) SharedPtr_9eb4f64e offset2TimeMapper; // @synthesize offset2TimeMapper=_offset2TimeMapper;
@property(nonatomic) SharedPtr_1b54ecb7 time2OffsetMapper; // @synthesize time2OffsetMapper=_time2OffsetMapper;
@property(nonatomic) struct XTMTimeRange backingTimeRangeBoundary; // @synthesize backingTimeRangeBoundary=_backingTimeRangeBoundary;
@property(readonly, nonatomic) struct MCOffsetRange pointOffsetRangeBoundary; // @synthesize pointOffsetRangeBoundary=_pointOffsetRangeBoundary;
@property(readonly, nonatomic) struct MCOffsetRange pixelOffsetRangeBoundary; // @synthesize pixelOffsetRangeBoundary=_pixelOffsetRangeBoundary;
@property(readonly, nonatomic) _Bool isSequenceMapperDirty; // @synthesize isSequenceMapperDirty=_isSequenceMapperDirty;
@property(nonatomic) _Bool isSequenceEmpty; // @synthesize isSequenceEmpty=_isSequenceEmpty;
@property(nonatomic) __weak id <OMCSegmentSequenceTimeOffsetMapperDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSArray *segmentViewMappers; // @synthesize segmentViewMappers=_segmentViewMappers;
- (void)setIsSequenceMapperDirty:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeBoundary;
- (void)rebuild;
- (void)rebuildIfNeeded;
- (void)markSequenceMapperDirty;
- (struct MCOffsetRange)pointOffsetRangeForBackingTimeRange:(const void *)arg1;
- (struct XTMTimeRange)backingTimeRangeForPointOffsetRange:(struct MCOffsetRange)arg1;
- (struct MCOffsetRange)pointOffsetRangeForTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)timeRangeForPointOffsetRange:(struct MCOffsetRange)arg1;
- (double)pixelOffsetForBackingTimeOutOfBoundary:(const void *)arg1;
- (double)pointOffsetForBackingTime:(const void *)arg1;
- (struct XTMTime)backingTimeForPointOffset:(double)arg1;
- (double)pointOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForPointOffset:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

