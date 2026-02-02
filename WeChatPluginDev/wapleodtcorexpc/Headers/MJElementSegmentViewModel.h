//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMCContentDescSegment, OMCElementSegment;
@protocol OMCLayerSpatialAdjustable;

@interface MJElementSegmentViewModel
{
    OMCElementSegment *_elementSegment;
    CDStruct_1b6d18a9 _trimmingOriginalDuration;
    CDStruct_1b6d18a9 _lastTrimmingDeltaTime;
    _Bool _isTrimming;
    _Bool _isTransInOverlapped;
    _Bool _isTransOutOverlapped;
    unsigned long long _trimmingEdge;
    unsigned long long _trimmingBehavior;
    double _trimmingDeltaWidth;
    id <OMCLayerSpatialAdjustable> _layerSpatialAdjustable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <OMCLayerSpatialAdjustable> layerSpatialAdjustable; // @synthesize layerSpatialAdjustable=_layerSpatialAdjustable;
@property(nonatomic) _Bool isTransOutOverlapped; // @synthesize isTransOutOverlapped=_isTransOutOverlapped;
@property(nonatomic) _Bool isTransInOverlapped; // @synthesize isTransInOverlapped=_isTransInOverlapped;
@property(nonatomic) double trimmingDeltaWidth; // @synthesize trimmingDeltaWidth=_trimmingDeltaWidth;
@property(readonly, nonatomic) unsigned long long trimmingBehavior; // @synthesize trimmingBehavior=_trimmingBehavior;
@property(readonly, nonatomic) unsigned long long trimmingEdge; // @synthesize trimmingEdge=_trimmingEdge;
@property(nonatomic) _Bool isTrimming; // @synthesize isTrimming=_isTrimming;
- (id)description;
- (void)syncAnimPreset;
- (CDStruct_1b6d18a9)mapToAbsoluteTimeFromDeltaTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) OMCContentDescSegment *contentDescSegment;
@property(readonly, nonatomic) _Bool hasContentDescSegment;
@property(readonly, nonatomic) CDStruct_1b6d18a9 contentOriginalDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 contentTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 tailCompressibleDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 headCompressibleDuration;
@property(readonly, nonatomic) _Bool isTailCompressible;
@property(readonly, nonatomic) _Bool isHeadCompressible;
@property(readonly, nonatomic) CDStruct_1b6d18a9 totalDurationIncludingExpandable;
@property(readonly, nonatomic) CDStruct_1b6d18a9 tailExpandableDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 headExpandableDuration;
@property(readonly, nonatomic) _Bool isTailExpandable;
@property(readonly, nonatomic) _Bool isHeadExpandable;
@property(readonly, nonatomic) CDStruct_1b6d18a9 transOutDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 transInDuration;
- (void)expandTailToOrigin;
- (void)expandHeadToOrigin;
- (_Bool)setStartTimeKeepingDuration:(CDStruct_1b6d18a9)arg1;
- (_Bool)setDurationByChangingEndTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)setDurationByChangingStartTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)canContinueTrimming;
- (void)endTrimming;
- (_Bool)trimTrailingEdgeWithSnapTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)trimLeadingEdgeWithSnapTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)trimTrailingEdgeWithDeltaTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)trimLeadingEdgeWithDeltaTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)applyTrimmingWithSnapTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)applyTrimmingWithDeltaTime:(CDStruct_1b6d18a9)arg1;
- (void)beginTrimmingWithEdge:(unsigned long long)arg1;
- (_Bool)isContentRangeAdjustableCurrently;
- (_Bool)isCuttableAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)syncWithElementSegmentImpl;
- (_Bool)syncWithSegment:(id)arg1;
- (id)initWithElementSegment:(id)arg1;

@end

