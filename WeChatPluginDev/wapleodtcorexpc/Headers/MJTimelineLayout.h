//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTimelineViewModel, NSMapTable, NSMutableArray, NSString, OMCSegmentSequenceTimeOffsetMapper, OMJID;
@protocol MJTimelineLayoutDataSource;

@interface MJTimelineLayout : NSObject
{
    struct MCOffsetRange _contentYOffsetRange;
    struct MCOffsetRange _storylineYOffsetRange;
    struct map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> _audialLaneYOffsetRangeMap;
    struct map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> _visualLaneYOffsetRangeMap;
    struct set<MCSegmentType, std::less<MCSegmentType>, std::allocator<MCSegmentType>> _visibleSegmentTypes;
    NSMutableArray *_arrangedAudialSegments;
    NSMutableArray *_arrangedVisualSegments;
    NSMapTable *_segmentFrameMap;
    NSMapTable *_segmentMappersByID;
    _Bool _isLayoutDirty;
    id <MJTimelineLayoutDataSource> _dataSource;
    MJTimelineViewModel *_timelineVM;
    OMCSegmentSequenceTimeOffsetMapper *_storylineTimeOffsetMapper;
    double _storylineYOffset;
    OMJID *_blankMapperID;
    struct UIEdgeInsets _timelineViewContentInsets;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) OMJID *blankMapperID; // @synthesize blankMapperID=_blankMapperID;
@property(nonatomic) double storylineYOffset; // @synthesize storylineYOffset=_storylineYOffset;
@property(nonatomic) struct UIEdgeInsets timelineViewContentInsets; // @synthesize timelineViewContentInsets=_timelineViewContentInsets;
@property(readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *storylineTimeOffsetMapper; // @synthesize storylineTimeOffsetMapper=_storylineTimeOffsetMapper;
@property(nonatomic) _Bool isLayoutDirty; // @synthesize isLayoutDirty=_isLayoutDirty;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
@property(nonatomic) __weak id <MJTimelineLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long visualLaneCount;
@property(readonly, nonatomic) unsigned long long audialLaneCount;
@property(readonly, nonatomic) _Bool isStorylineEmpty;
- (void)calcSegmentFrames;
- (id)targetStoryContentSegmentForMovingSegmentWithFrame:(struct CGRect)arg1;
- (id)targetAnchoredSegmentForMovingSegmentWithID:(id)arg1 frame:(struct CGRect)arg2;
- (void)pruneSegmentMappersByIDs:(id)arg1;
- (id)internalSegmentMapperForSegmentWithID:(id)arg1;
- (id)segmentTimeOffsetMapperForSegmentWithID:(id)arg1;
- (_Bool)shouldUseTimeOffsetScaleForSequenceMapper:(id)arg1;
- (double)timeOffsetScaleForSequenceMapper:(id)arg1;
- (id)segmentViewMappersForSequenceMapper:(id)arg1;
- (void)internalCalculateLayout;
- (void)markLayoutDirty;
- (void)resetCache;
- (void)calculateLayout;
- (void)calculateLayoutIfNeeded;
- (struct CGRect)frameForSegmentWithID:(id)arg1;
- (struct MCOffsetRange)xOffsetRangeForStoryline;
- (struct MCOffsetRange)yOffsetRangeForStoryline;
- (struct MCOffsetRange)yOffsetRangeForContent;
@property(readonly, nonatomic) struct CGSize timelineViewContentSize;
- (id)initWithTimelineViewModel:(id)arg1 visibleSegmentTypes:(id)arg2;
- (vector_0e047154)calcWidthsForSegmentVMs:(id)arg1;
- (id)segmentViewMappersForSegmentVMs:(id)arg1;
- (void)arrangeSegmentsOverlapDisabled;
- (void)arrangeSegmentsOverlapEnabled;
- (void)arrangeSegments;
- (void)calcVerticalLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

