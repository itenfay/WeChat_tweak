//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AACWeakTimer, CHHapticParameterCurve;

@interface CHHapticParameterCurveModel : NSObject
{
    float _time;
    CHHapticParameterCurve *_parameters;
    AACWeakTimer *_cuveModeltimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AACWeakTimer *cuveModeltimer; // @synthesize cuveModeltimer=_cuveModeltimer;
@property(nonatomic) float time; // @synthesize time=_time;
@property(retain, nonatomic) CHHapticParameterCurve *parameters; // @synthesize parameters=_parameters;
- (void)dealloc;
- (void)scheduleParameterCurve:(id)arg1;
- (void)startTimer:(id)arg1:(id)arg2;

@end

