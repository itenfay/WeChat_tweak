//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ImplicitAnimationParameterGenerator : NSObject
{
    int _reboundTimes;
    unsigned long long _beginPosition;
    double _minSpeedX;
    double _maxSpeedX;
    double _minSpeedY;
    double _maxSpeedY;
    double _accelerationY;
    double _speedBuffY;
    double _scaleSpeed;
}

+ (id)presetGeneratorForType:(long long)arg1 isInteractive:(_Bool)arg2;
+ (id)presetGeneratorForType:(long long)arg1;
@property(nonatomic) double scaleSpeed; // @synthesize scaleSpeed=_scaleSpeed;
@property(nonatomic) double speedBuffY; // @synthesize speedBuffY=_speedBuffY;
@property(nonatomic) double accelerationY; // @synthesize accelerationY=_accelerationY;
@property(nonatomic) double maxSpeedY; // @synthesize maxSpeedY=_maxSpeedY;
@property(nonatomic) double minSpeedY; // @synthesize minSpeedY=_minSpeedY;
@property(nonatomic) int reboundTimes; // @synthesize reboundTimes=_reboundTimes;
@property(nonatomic) double maxSpeedX; // @synthesize maxSpeedX=_maxSpeedX;
@property(nonatomic) double minSpeedX; // @synthesize minSpeedX=_minSpeedX;
@property(nonatomic) unsigned long long beginPosition; // @synthesize beginPosition=_beginPosition;
- (_Bool)D2;
- (void)setAnimationParameterForView:(id)arg1;
- (id)init;

@end

