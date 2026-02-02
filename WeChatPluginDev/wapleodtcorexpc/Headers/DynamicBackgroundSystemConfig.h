//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DynamicBackgroundSystemConfig : NSObject
{
    unsigned int _maxParticles;
    unsigned int _sideCount;
    unsigned int _framePerSecond;
    double _minRadius;
    double _maxRadius;
    double _speed;
    double _minAngle;
    double _maxAngle;
    double _minPositionX;
    double _maxPositionX;
    double _minPositionY;
    double _maxPositionY;
    double _opacity;
    double _backgroundDuration;
    NSMutableArray *_colorConfigs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *colorConfigs; // @synthesize colorConfigs=_colorConfigs;
@property(nonatomic) double backgroundDuration; // @synthesize backgroundDuration=_backgroundDuration;
@property(nonatomic) unsigned int framePerSecond; // @synthesize framePerSecond=_framePerSecond;
@property(nonatomic) unsigned int sideCount; // @synthesize sideCount=_sideCount;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double maxPositionY; // @synthesize maxPositionY=_maxPositionY;
@property(nonatomic) double minPositionY; // @synthesize minPositionY=_minPositionY;
@property(nonatomic) double maxPositionX; // @synthesize maxPositionX=_maxPositionX;
@property(nonatomic) double minPositionX; // @synthesize minPositionX=_minPositionX;
@property(nonatomic) double maxAngle; // @synthesize maxAngle=_maxAngle;
@property(nonatomic) double minAngle; // @synthesize minAngle=_minAngle;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double maxRadius; // @synthesize maxRadius=_maxRadius;
@property(nonatomic) double minRadius; // @synthesize minRadius=_minRadius;
@property(nonatomic) unsigned int maxParticles; // @synthesize maxParticles=_maxParticles;
- (_Bool)isCurrentTimeInDarkStyle;

@end

