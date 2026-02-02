//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WADynamicBackgroundGLGeometry;

@interface DynamicBackgroundParticle
{
    float _radius;
    int _sideCount;
    float _opacity;
    unsigned int _framePerSecond;
    float _angle;
    float _vx;
    float _vy;
    float _dx;
    float _dy;
    unsigned int _colorIndex;
    WADynamicBackgroundGLGeometry *_geometry;
    NSMutableArray *_colorConfigs;
    double _colorRatio;
    union _GLKVector3 _position;
    union _GLKVector3 _velocity;
    union _GLKVector4 _currentColor;
    union _GLKMatrix4 _colorMatrix;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int colorIndex; // @synthesize colorIndex=_colorIndex;
@property(nonatomic) double colorRatio; // @synthesize colorRatio=_colorRatio;
@property(nonatomic) union _GLKVector4 currentColor; // @synthesize currentColor=_currentColor;
@property(retain, nonatomic) NSMutableArray *colorConfigs; // @synthesize colorConfigs=_colorConfigs;
@property(nonatomic) float dy; // @synthesize dy=_dy;
@property(nonatomic) float dx; // @synthesize dx=_dx;
@property(nonatomic) float vy; // @synthesize vy=_vy;
@property(nonatomic) float vx; // @synthesize vx=_vx;
@property(nonatomic) float angle; // @synthesize angle=_angle;
@property(nonatomic) unsigned int framePerSecond; // @synthesize framePerSecond=_framePerSecond;
@property(retain, nonatomic) WADynamicBackgroundGLGeometry *geometry; // @synthesize geometry=_geometry;
@property(nonatomic) union _GLKMatrix4 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) union _GLKVector3 velocity; // @synthesize velocity=_velocity;
@property(nonatomic) union _GLKVector3 position; // @synthesize position=_position;
@property(nonatomic) int sideCount; // @synthesize sideCount=_sideCount;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (float)randFloat:(float)arg1 end:(float)arg2;
- (void)resetPositionBeyondScreen:(_Bool)arg1;
- (void)rangeDetect;
- (void)draw:(id)arg1;
- (void)update:(double)arg1;
- (id)initWithGLContext:(id)arg1;

@end

