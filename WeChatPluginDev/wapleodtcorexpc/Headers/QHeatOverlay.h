//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QAnimation, QHeatGradient;

@interface QHeatOverlay
{
    CDStruct_02837cd9 _boundingRect;
    _Bool _enable3D;
    _Bool _useUserIntensity;
    NSArray *_nodes;
    long long _decayRadius;
    QHeatGradient *_gradient;
    double _maxHeight;
    QAnimation *_animation;
    QHeatGradient *_internalGradient;
    double _maxIntensity;
    double _minIntensity;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useUserIntensity; // @synthesize useUserIntensity=_useUserIntensity;
@property(nonatomic) double minIntensity; // @synthesize minIntensity=_minIntensity;
@property(nonatomic) double maxIntensity; // @synthesize maxIntensity=_maxIntensity;
@property(retain, nonatomic) QHeatGradient *internalGradient; // @synthesize internalGradient=_internalGradient;
@property(retain, nonatomic) QAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) QHeatGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) long long decayRadius; // @synthesize decayRadius=_decayRadius;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)recordGLoverlayCount:(id)arg1;
- (id)initWithHeatNodes:(id)arg1;
- (struct HeatmapCell **)getHeatMapCells;
- (void)destoryInfoData:(struct HeatmapData *)arg1;
- (struct HeatmapData *)createInfoData;
- (void)destoryImpl;
- (void *)createImpl;
- (struct Gradient *)generateGradient;
- (id)getType;
- (void)setNeedsDisplay;
- (void)setDisplayLevel:(long long)arg1;
- (void)setMinIntensity:(double)arg1 maxIntensity:(double)arg2;
- (CDStruct_02837cd9)boundingMapRect;
- (void)calculateBoundingRect;

@end

