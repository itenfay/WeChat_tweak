//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMCContentDescSegment, OMJID;

@interface OMCElementSegment
{
    struct XTMTime _minElementSegmentPreservedDuration;
    struct XTMTime _imageOriginDuration;
}

- (id).cxx_construct;
@property(readonly, nonatomic) SharedPtr_65cdf39d backingElementSegment;
@property(readonly, nonatomic) _Bool isBuiltinAnimEnabled;
- (void)disableBuiltinAnim;
- (void)enableBuiltinAnim;
- (void)clearCompoAnim;
@property(retain, nonatomic) NSString *animPresetID;
- (struct XTMTime)minElementSegmentDuration;
- (_Bool)isTailAdjustableToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isHeadAdjustableToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isTailCompressibleToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isHeadCompressibleToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)changeDurationByAdjustingTailToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)changeDurationByAdjustingHeadToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)expandTailToOrigin;
- (void)expandHeadToOrigin;
@property(readonly, nonatomic) _Bool isTailExpandableToOrigin;
@property(readonly, nonatomic) _Bool isHeadExpandableToOrigin;
- (_Bool)isCuttableAtPresentationTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 tailCompressibleDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 headCompressibleDuration;
@property(readonly, nonatomic) _Bool isTailCompressible;
@property(readonly, nonatomic) _Bool isHeadCompressible;
@property(readonly, nonatomic) CDStruct_1b6d18a9 totalDurationIncludingExpandable;
@property(readonly, nonatomic) CDStruct_1b6d18a9 tailExpandableDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 headExpandableDuration;
@property(readonly, nonatomic) _Bool isTailExpandable;
@property(readonly, nonatomic) _Bool isHeadExpandable;
- (_Bool)isLayerSpatialAdjusted;
- (void)setAbsoluteLayerAnchorPoint:(struct CGPoint)arg1;
- (void)setRelativeLayerAnchorPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isLayerAnchorPointRelative;
@property(readonly, nonatomic) struct CGPoint layerAnchorPoint;
@property(nonatomic) float layerRotation;
@property(nonatomic) struct CGPoint layerScale;
@property(nonatomic) struct CGPoint layerNormalizedPosition;
@property(nonatomic) struct CGPoint layerPosition;
@property(readonly, nonatomic) _Bool isLayerSpatialAdjustable;
- (_Bool)setStartTimeKeepingDuration:(CDStruct_1b6d18a9)arg1;
- (void)setDurationByChangingEndTime:(CDStruct_1b6d18a9)arg1;
- (void)setDurationByChangingStartTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) OMCContentDescSegment *contentDescSegment;
@property(readonly, nonatomic) OMJID *contentDescSegmentID;
@property(readonly, nonatomic) _Bool hasContentDescSegment;
@property(readonly, nonatomic) CDStruct_1b6d18a9 transOutDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 transInDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 mainPartTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 mainPartDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 mainPartStartTime;
- (id)initWithSegmentID:(id)arg1 timeline:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_e83c9415 presentationTimeRange;
@property(readonly) Class superclass;

@end

