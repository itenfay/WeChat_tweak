//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableOrderedSet, OMCStoryline, UBValueSignal;
@protocol MJMovieComposingContext;

@interface MJStorylineViewModel : NSObject
{
    CDStruct_1b6d18a9 _durationBeforeSync;
    OMCStoryline *_storyline;
    id <MJMovieComposingContext> _composingContext;
    NSMutableOrderedSet *_segmentVMs;
    NSMutableOrderedSet *_storySegmentVMs;
    NSMutableOrderedSet *_storyElementSegmentVMs;
    UBValueSignal *_durationDidChangeSignal;
    double _viewHeight;
    NSMapTable *_segmentVMsByID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *segmentVMsByID; // @synthesize segmentVMsByID=_segmentVMsByID;
@property(readonly, nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(readonly, nonatomic) UBValueSignal *durationDidChangeSignal; // @synthesize durationDidChangeSignal=_durationDidChangeSignal;
@property(retain, nonatomic) NSMutableOrderedSet *storyElementSegmentVMs; // @synthesize storyElementSegmentVMs=_storyElementSegmentVMs;
@property(retain, nonatomic) NSMutableOrderedSet *storySegmentVMs; // @synthesize storySegmentVMs=_storySegmentVMs;
@property(retain, nonatomic) NSMutableOrderedSet *segmentVMs; // @synthesize segmentVMs=_segmentVMs;
@property(readonly, nonatomic) __weak id <MJMovieComposingContext> composingContext; // @synthesize composingContext=_composingContext;
@property(readonly, nonatomic) OMCStoryline *storyline; // @synthesize storyline=_storyline;
- (id)description;
- (void)updateTransitionRelatedProperties;
- (id)nextStorySegmentVM:(id)arg1;
- (id)previousStorySegmentVM:(id)arg1;
- (id)nextStoryElementSegment:(id)arg1;
- (id)previousStoryElementSegment:(id)arg1;
- (_Bool)isAnchoredSegmentVM:(id)arg1;
- (_Bool)isStorySegmentVM:(id)arg1;
- (void)syncAfterUndoRedo;
- (id)internalUpdateSegmentVM:(id)arg1 withMutationInfo:(id)arg2;
- (id)internalRemoveSegmentVM:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)internalInsertSegmentVM:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)syncWithTimelineMutation:(id)arg1;
- (id)nearstNextAnchoredSegmentAtTime:(CDStruct_1b6d18a9)arg1 withType:(unsigned long long)arg2;
- (id)nearstAnchoredSegmentAtTime:(CDStruct_1b6d18a9)arg1 withType:(unsigned long long)arg2;
- (id)nearstAnchoredClipSegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (id)nearstStoryClipSegmentToAtTime:(CDStruct_1b6d18a9)arg1;
- (id)storyElementSegmentVMAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)intersectedSegmentVMCountWithType:(unsigned long long)arg1 atTimeRange:(CDStruct_e83c9415)arg2 excudeSegmentID:(id)arg3;
- (_Bool)intersectSegmentVMWithType:(unsigned long long)arg1 atTimeRange:(CDStruct_e83c9415)arg2 excudeSegmentID:(id)arg3;
- (_Bool)containsSegmentVMWithType:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)containsSegmentVMWithType:(unsigned long long)arg1;
- (id)segmentVMWithID:(id)arg1;
- (_Bool)containsSegmentVMWithID:(id)arg1;
- (void)updateDurationSilently:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 expandedDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)initSegmentVMs;
- (void)dealloc;
- (id)initWithStoryline:(id)arg1 viewHeight:(double)arg2 composingContext:(id)arg3;

@end

