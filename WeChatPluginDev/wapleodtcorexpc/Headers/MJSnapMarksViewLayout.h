//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, OMCSegmentSequenceTimeOffsetMapper;

@interface MJSnapMarksViewLayout : NSObject
{
    struct vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> _snapMarks;
    OMCSegmentSequenceTimeOffsetMapper *_timelineTimeOffsetMapper;
    NSArray *_snapTimes;
    struct CGRect _timelineVisibleRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect timelineVisibleRect; // @synthesize timelineVisibleRect=_timelineVisibleRect;
@property(retain, nonatomic) NSArray *snapTimes; // @synthesize snapTimes=_snapTimes;
@property(readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *timelineTimeOffsetMapper; // @synthesize timelineTimeOffsetMapper=_timelineTimeOffsetMapper;
- (_Bool)isValidTimelineVisibleRect:(const struct CGRect *)arg1;
- (void)updateSnapMarksWithTimelineVisibleRect:(const struct CGRect *)arg1;
- (void)updateSnapMarksWithSnapTimes:(id)arg1;
- (void *)snapMarks;
- (id)initWithTimelineTimeOffsetMapper:(id)arg1 snapTimes:(id)arg2;

@end

