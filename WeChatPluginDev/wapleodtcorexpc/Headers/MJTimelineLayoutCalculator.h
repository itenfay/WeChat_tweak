//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTimelineLayout, MJTimelineViewModel, NSString, OMCSegmentSequenceTimeOffsetMapper, UIScrollView;

@interface MJTimelineLayoutCalculator : NSObject
{
    MJTimelineViewModel *_timelineVM;
    UIScrollView *_timelineView;
    MJTimelineLayout *_backingLayout;
    struct UIEdgeInsets _timelineViewContentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJTimelineLayout *backingLayout; // @synthesize backingLayout=_backingLayout;
@property(nonatomic) struct UIEdgeInsets timelineViewContentInsets; // @synthesize timelineViewContentInsets=_timelineViewContentInsets;
@property(nonatomic) __weak UIScrollView *timelineView; // @synthesize timelineView=_timelineView;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
- (void)syncWithMutationInfo:(id)arg1 options:(unsigned long long)arg2;
- (struct CGRect)timelineViewBounds;
- (double)timeOffsetScale;
@property(readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *storylineTimeOffsetMapper;
@property(readonly, nonatomic) _Bool isLayoutDirty;
- (id)targetStoryContentSegmentForMovingSegmentWithFrame:(struct CGRect)arg1;
- (id)targetAnchoredSegmentForMovingSegmentWithID:(id)arg1 frame:(struct CGRect)arg2;
- (_Bool)shouldHideSegmentWithID:(id)arg1;
- (unsigned int)waveformSampleCountForSegmentWithID:(id)arg1;
@property(readonly, nonatomic) struct CGSize timelineViewContentSize;
- (id)segmentTimeOffsetMapperForSegmentWithID:(id)arg1;
- (void)calculateLayoutIfNeeded;
- (void)calculateLayout;
- (void)markLayoutDirty;
- (struct CGRect)frameForSegmentWithID:(id)arg1;
- (struct MCOffsetRange)xOffsetRangeForStoryline;
- (struct MCOffsetRange)yOffsetRangeForStoryline;
- (struct MCOffsetRange)yOffsetRangeForContent;
- (void)dealloc;
- (id)initWithTimelineVM:(id)arg1 visibleSegmentTypes:(id)arg2;
- (pair_744b91e3)reusableAttributesForSegmentVM:(id)arg1 withShiftingOffset:(double)arg2 originalAttributes:(id)arg3 inRect:(struct CGRect)arg4;
- (id)reusableAttributesForSegmentVM:(id)arg1 inRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

