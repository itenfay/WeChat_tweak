//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJElementSegmentViewModel, MJStorylineViewModel, NSMutableArray, OMCSegmentTimeOffsetMapper;
@protocol OMCTimelineTimeOffsetValueMapper><OMCTimelineTimeOffsetRangeMapper;

@interface MJSegmentTrimContext : NSObject
{
    struct map<CMTime, MJTrimSnapInfo *, CMTimeComparator, std::allocator<std::pair<const CMTime, MJTrimSnapInfo *>>> _snapInfos;
    CDStruct_e83c9415 _originalTimeRange;
    struct MCOffsetRange _originalOffsetRange;
    _Bool _shouldSnapToVisualAnchoredSegments;
    MJStorylineViewModel *_storylineVM;
    MJElementSegmentViewModel *_trimmingSegmentVM;
    id <OMCTimelineTimeOffsetValueMapper><OMCTimelineTimeOffsetRangeMapper> _timeOffsetMapper;
    OMCSegmentTimeOffsetMapper *_trimmingSegmentTimeOffsetMapper;
    NSMutableArray *_anchoredSegmentSnapTimes;
    double _snapDistance;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double snapDistance; // @synthesize snapDistance=_snapDistance;
@property(readonly, nonatomic) NSMutableArray *anchoredSegmentSnapTimes; // @synthesize anchoredSegmentSnapTimes=_anchoredSegmentSnapTimes;
@property(readonly, nonatomic) _Bool shouldSnapToVisualAnchoredSegments; // @synthesize shouldSnapToVisualAnchoredSegments=_shouldSnapToVisualAnchoredSegments;
@property(readonly, nonatomic) OMCSegmentTimeOffsetMapper *trimmingSegmentTimeOffsetMapper; // @synthesize trimmingSegmentTimeOffsetMapper=_trimmingSegmentTimeOffsetMapper;
@property(readonly, nonatomic) id <OMCTimelineTimeOffsetValueMapper><OMCTimelineTimeOffsetRangeMapper> timeOffsetMapper; // @synthesize timeOffsetMapper=_timeOffsetMapper;
@property(readonly, nonatomic) MJElementSegmentViewModel *trimmingSegmentVM; // @synthesize trimmingSegmentVM=_trimmingSegmentVM;
@property(readonly, nonatomic) MJStorylineViewModel *storylineVM; // @synthesize storylineVM=_storylineVM;
- (id)snapInfoWithTranslation:(struct CGPoint)arg1;
- (id)snapInfoForTargetOffset:(double)arg1;
@property(readonly, nonatomic) unsigned long long trimmingEdge;
- (id)initWithStorylineVM:(id)arg1 segmentVM:(id)arg2 timeOffsetMapper:(id)arg3 segmentTimeOffsetMapper:(id)arg4 shouldSnapToVisualAnchoredSegments:(_Bool)arg5;

@end

