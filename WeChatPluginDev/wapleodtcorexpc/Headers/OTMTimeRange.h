//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OTMTime;

@interface OTMTimeRange : NSObject
{
    OTMTime *_start;
    OTMTime *_duration;
    struct XTMTimeRange _backingTimeRange;
}

+ (id)timeRangeWithBackingTimeRange:(struct XTMTimeRange)arg1;
+ (id)timeRangeWithStartTime:(id)arg1 duration:(id)arg2;
+ (id)invalidTimeRange;
+ (id)zeroTimeRange;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) OTMTime *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) OTMTime *start; // @synthesize start=_start;
@property(readonly, nonatomic) struct XTMTimeRange backingTimeRange; // @synthesize backingTimeRange=_backingTimeRange;
@property(readonly, nonatomic) OTMTime *end;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)timeForRatio:(double)arg1;
- (_Bool)containsTime:(id)arg1;
- (id)initWithStartTime:(id)arg1 duration:(id)arg2;
- (id)initWithBackingTimeRange:(struct XTMTimeRange)arg1;

@end

