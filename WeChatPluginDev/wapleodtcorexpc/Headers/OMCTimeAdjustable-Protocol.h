//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMCTimeAdjustable <NSObject>
@property(readonly, nonatomic) _Bool isTailExpandableToOrigin;
@property(readonly, nonatomic) _Bool isHeadExpandableToOrigin;
@property(readonly, nonatomic) CDStruct_1b6d18a9 tailCompressibleDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 headCompressibleDuration;
@property(readonly, nonatomic) _Bool isTailCompressible;
@property(readonly, nonatomic) _Bool isHeadCompressible;
@property(readonly, nonatomic) CDStruct_1b6d18a9 totalDurationIncludingExpandable;
@property(readonly, nonatomic) CDStruct_1b6d18a9 tailExpandableDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 headExpandableDuration;
@property(readonly, nonatomic) _Bool isTailExpandable;
@property(readonly, nonatomic) _Bool isHeadExpandable;
@property(readonly, nonatomic) CDStruct_e83c9415 presentationTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (_Bool)setStartTimeKeepingDuration:(CDStruct_1b6d18a9)arg1;
- (void)setDurationByChangingEndTime:(CDStruct_1b6d18a9)arg1;
- (void)setDurationByChangingStartTime:(CDStruct_1b6d18a9)arg1;
- (void)changeDurationByAdjustingTailToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)changeDurationByAdjustingHeadToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isTailAdjustableToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isHeadAdjustableToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isTailCompressibleToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isHeadCompressibleToPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)expandTailToOrigin;
- (void)expandHeadToOrigin;
@end

