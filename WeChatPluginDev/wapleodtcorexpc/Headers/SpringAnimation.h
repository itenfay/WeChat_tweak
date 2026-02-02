//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SpringAnimation : NSObject
{
    double _stiffness;
    double _damping;
    double _mass;
    double _initialVelocity;
    double _fromValue;
    double _toValue;
    double _zeta;
    double _omega0;
    double _omega1;
    double _v0;
}

@property(nonatomic) double v0; // @synthesize v0=_v0;
@property(nonatomic) double omega1; // @synthesize omega1=_omega1;
@property(nonatomic) double omega0; // @synthesize omega0=_omega0;
@property(nonatomic) double zeta; // @synthesize zeta=_zeta;
@property(nonatomic) double toValue; // @synthesize toValue=_toValue;
@property(nonatomic) double fromValue; // @synthesize fromValue=_fromValue;
@property(readonly, nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double mass; // @synthesize mass=_mass;
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
- (double)curveFunction:(double)arg1;
- (id)initWithStiffness:(double)arg1 damping:(double)arg2 mass:(double)arg3 initialVelocity:(double)arg4 fromValue:(double)arg5 toValue:(double)arg6;

@end

