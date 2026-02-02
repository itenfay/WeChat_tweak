//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QVectorHeatOverlayOption;

@interface QVectorHeatOverlay
{
    CDStruct_02837cd9 _boundingRect;
    _Bool _toBuildData;
    _Bool _hasSetGeoPoint;
    NSArray *_nodes;
    QVectorHeatOverlayOption *_option;
    double _minIntensity;
    double _maxIntensity;
    struct CLLocationCoordinate2D _internalGeoReferencePoint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasSetGeoPoint; // @synthesize hasSetGeoPoint=_hasSetGeoPoint;
@property(nonatomic) struct CLLocationCoordinate2D internalGeoReferencePoint; // @synthesize internalGeoReferencePoint=_internalGeoReferencePoint;
@property(nonatomic) double maxIntensity; // @synthesize maxIntensity=_maxIntensity;
@property(nonatomic) double minIntensity; // @synthesize minIntensity=_minIntensity;
@property(nonatomic) _Bool toBuildData; // @synthesize toBuildData=_toBuildData;
@property(retain, nonatomic) QVectorHeatOverlayOption *option; // @synthesize option=_option;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)recordGLoverlayCount:(id)arg1;
- (_Bool)checkIsDynamicIntensityRange:(double)arg1 maxIntensity:(double)arg2;
- (void)validateInitHeightRange:(id)arg1;
- (void)setVisibleRange:(void *)arg1 option:(id)arg2;
- (void)setIntensityRange:(void *)arg1 option:(id)arg2;
- (void)setHeightRange:(void *)arg1 option:(id)arg2;
- (void)setColorRange:(void *)arg1 option:(id)arg2;
- (CDStruct_c3b9c2ee)getReferencePoint;
- (void)buildHeatLayerData:(void *)arg1 option:(id)arg2;
- (vector_fdbda47e)processNodeDataCopy;
- (void)calculateBoundingRect;
- (id)getType;
- (void)destoryImpl;
- (void *)createImpl;
- (id)getAggregationUnit:(struct CLLocationCoordinate2D)arg1;
- (void)setNeedsDisplay;
@property(nonatomic) _Bool enable3D;
@property(nonatomic) double gap;
@property(nonatomic) double size;
- (void)setMinIntensity:(double)arg1 maxIntensity:(double)arg2;
@property(readonly, nonatomic) double minHeight;
@property(readonly, nonatomic) double maxHeight;
- (void)setMinHeight:(double)arg1 maxHeight:(double)arg2;
@property(readonly, nonatomic) NSArray *startPoints;
@property(readonly, nonatomic) NSArray *colors;
- (void)setColors:(id)arg1 startPoints:(id)arg2;
@property(nonatomic) int type;
- (void)setDisplayLevel:(long long)arg1;
@property(nonatomic) struct CLLocationCoordinate2D geoReferencePoint;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (id)initWithHeatNodes:(id)arg1 option:(id)arg2;

@end

