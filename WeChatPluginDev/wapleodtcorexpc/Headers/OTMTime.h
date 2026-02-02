//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OTMTime : NSObject
{
    struct XTMTime _backingTime;
}

+ (id)timeWithBackingTime:(struct XTMTime)arg1;
+ (id)timeWithSeconds:(double)arg1;
+ (id)negativeInfinityTime;
+ (id)positiveInfinityTime;
+ (id)invalidTime;
+ (id)zeroTime;
- (id).cxx_construct;
@property(nonatomic) struct XTMTime backingTime; // @synthesize backingTime=_backingTime;
- (id)timecodeWithFrameDuration:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToTime:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double seconds;
@property(readonly, nonatomic) _Bool isZero;
@property(readonly, nonatomic) _Bool isFinitePositive;
@property(readonly, nonatomic) _Bool isFiniteNonNegative;
@property(readonly, nonatomic) _Bool isNumeric;
@property(readonly, nonatomic) _Bool isPositive;
@property(readonly, nonatomic) _Bool isNegative;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithBackingTime:(struct XTMTime)arg1;

@end

