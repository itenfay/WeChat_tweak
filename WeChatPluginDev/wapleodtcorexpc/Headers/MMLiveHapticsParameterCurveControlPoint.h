//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveHapticsParameterCurveControlPoint : NSObject
{
    double _timeSinceBeginOfCurve;
    double _value;
}

+ (id)controlPointWithTimeSinceBeginOfCurve:(double)arg1 value:(double)arg2;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double timeSinceBeginOfCurve; // @synthesize timeSinceBeginOfCurve=_timeSinceBeginOfCurve;
- (id)coreHapticsParameterCurveControlPoint;
- (id)initWithTimeSinceBeginOfCurve:(double)arg1 value:(double)arg2;

@end

