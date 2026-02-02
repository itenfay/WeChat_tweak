//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCMovieTitleSegment, OMCMusicSegment, OMCTimeline;

@interface OMCStoryline : NSObject
{
    OMCTimeline *_timeline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak OMCTimeline *timeline; // @synthesize timeline=_timeline;
- (id)description;
- (void)setVideoTagDesc:(id)arg1;
@property(readonly, nonatomic) _Bool hasVideoTag;
- (id)segmentIDsOnVisualLaneIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfVisualSegmentLanes;
- (id)segmentIDsOnAudialLaneIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAudialSegmentLanes;
- (_Bool)checkIfHasDifferentClipSegmentForMediaFilePath:(id)arg1;
- (id)allTransitionSegments;
- (id)allStorySegments;
- (id)storySegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)containsStorySegment:(id)arg1;
- (id)segmentWithID:(id)arg1;
- (id)segmentIDAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)indexOfSegment:(id)arg1;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
@property(readonly, nonatomic) OMCMusicSegment *musicSegment;
@property(readonly, nonatomic) _Bool hasMusicSegment;
@property(readonly, nonatomic) OMCMovieTitleSegment *movieTitleSegment;
@property(readonly, nonatomic) _Bool hasMovieTitleSegment;
@property(readonly, nonatomic) CDStruct_e83c9415 presentationTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationStartTime;
@property(readonly, nonatomic) SharedPtr_4e87c261 backingStoryline;
- (id)initWithTimeline:(id)arg1;

@end

