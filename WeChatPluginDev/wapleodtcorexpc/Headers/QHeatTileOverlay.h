//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QHeatTileCreationData, QHeatTileGradient, QQuadTree;

@interface QHeatTileOverlay
{
    unsigned long long _minimumZoomIntensity;
    unsigned long long _maximumZoomIntensity;
    _Bool _dirty;
    QHeatTileCreationData *_data;
    NSArray *_nodes;
    long long _decayRadius;
    double _opacity;
    QHeatTileGradient *_gradient;
    QQuadTree *_quadTree;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QQuadTree *quadTree; // @synthesize quadTree=_quadTree;
@property(retain, nonatomic) QHeatTileGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long decayRadius; // @synthesize decayRadius=_decayRadius;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (id)initWithHeatTileNodes:(id)arg1;
- (id)initWithURLTemplate:(id)arg1;
- (id)init;
- (void)loadTileAtPath:(CDStruct_7e23819f)arg1 result:(CDUnknownBlockType)arg2;
- (CDStruct_c3b9c2ee)mapPointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)getWrappedPointsOffsetWithWrappedPoints:(id)arg1 tileBounds:(CDStruct_c519178c)arg2 worldWidth:(double)arg3 data:(id)arg4;
- (id)loadTileImageAtPath:(CDStruct_7e23819f)arg1;
- (unsigned int *)calculateRawpixels:(double)arg1 data:(id)arg2 minX:(double)arg3 minY:(double)arg4 points:(id)arg5 wrappedPoints:(id)arg6 wrappedPointsOffset:(double)arg7 zoom:(unsigned long long)arg8;
- (id)transparentImageWithSize:(int)arg1;
- (void)prepare;
- (id)generateKernel;
- (id)calculateIntensities;
- (id)maxValueForZoom:(unsigned long long)arg1;
- (CDStruct_c519178c)calculateBounds;

@end

