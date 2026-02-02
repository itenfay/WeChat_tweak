//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCSegmentSequenceTimeOffsetMapper;

@interface MJTimeRulerViewLayout : NSObject
{
    struct vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> _timeRulerMarks;
    OMCSegmentSequenceTimeOffsetMapper *_timelineTimeOffsetMapper;
    struct MJTimeScaleList _timeScaleList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct MJTimeScaleList timeScaleList; // @synthesize timeScaleList=_timeScaleList;
@property(readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *timelineTimeOffsetMapper; // @synthesize timelineTimeOffsetMapper=_timelineTimeOffsetMapper;
- (void)adjustTimeScaleWithSegmentMappers:(id)arg1 adjustState:(unsigned long long)arg2;
- (void)updateTimeRulerMarksWithTimelineVisibleRect:(const struct CGRect *)arg1;
- (void *)timeRulerMarks;
- (id)initWithTimelineTimeOffsetMapper:(id)arg1 frameRate:(float)arg2;

@end

