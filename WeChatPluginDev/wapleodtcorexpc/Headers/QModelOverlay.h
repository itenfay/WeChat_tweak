//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QGLOverlayRenderMode, QModelOverlayAnimationLayer;

@interface QModelOverlay
{
    _Bool _unlit;
    QGLOverlayRenderMode *_renderMode;
    NSString *_path;
    double _altitude;
    double _rotationX;
    double _rotationY;
    double _rotationZ;
    long long _animateType;
    double _exposure;
    double _anchorX;
    double _anchorY;
    double _anchorZ;
    QModelOverlayAnimationLayer *_animLayer;
    struct CLLocationCoordinate2D _coordinate;
    CDStruct_02837cd9 _boundingRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QModelOverlayAnimationLayer *animLayer; // @synthesize animLayer=_animLayer;
@property(nonatomic) double anchorZ; // @synthesize anchorZ=_anchorZ;
@property(nonatomic) double anchorY; // @synthesize anchorY=_anchorY;
@property(nonatomic) double anchorX; // @synthesize anchorX=_anchorX;
@property(nonatomic, getter=isUnlit) _Bool unlit; // @synthesize unlit=_unlit;
@property(nonatomic) double exposure; // @synthesize exposure=_exposure;
@property(nonatomic) long long animateType; // @synthesize animateType=_animateType;
@property(nonatomic) double rotationZ; // @synthesize rotationZ=_rotationZ;
@property(nonatomic) double rotationY; // @synthesize rotationY=_rotationY;
@property(nonatomic) double rotationX; // @synthesize rotationX=_rotationX;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) QGLOverlayRenderMode *renderMode; // @synthesize renderMode=_renderMode;
- (CDStruct_02837cd9)boundingMapRect;
- (_Bool)isAnimationPlaying;
- (id)getAnimationInformation;
- (void)stopAnimation;
- (void)playAnimationWithIndex:(int)arg1 speed:(float)arg2 autoRepeat:(_Bool)arg3;
- (void)notifOverlayDidTapWithOverlayObject:(id)arg1;
- (void)notifyOverlayProgress:(double)arg1 hasError:(_Bool)arg2;
- (double)normalizeRotation:(double)arg1;
- (id)getType;
- (void)destoryImpl;
- (void *)createImpl;
- (void)updateLayerData:(void *)arg1;
- (int)getNativeAnimationType;
- (void)setAnchorX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)setNeedsDisplay;
- (void)setInteractive:(_Bool)arg1;
- (_Bool)isSupportClick;
- (id)init;
- (id)getUnlitEnabled:(id)arg1 error:(id *)arg2;
- (void)enableUnlit:(id)arg1 error:(id *)arg2;
- (void)resetMonoColor:(id)arg1 error:(id *)arg2;
- (void)setMonoColor:(id)arg1 error:(id *)arg2;
- (id)getCurrentMaterialVariant:(id)arg1 error:(id *)arg2;
- (void)setMaterialVariant:(id)arg1 error:(id *)arg2;
- (id)getMaterialVariantsInfo:(id)arg1 error:(id *)arg2;
- (void)startTranslateAnimation:(id)arg1 error:(id *)arg2;
- (void)setPixelBound:(id)arg1 error:(id *)arg2;
- (id)getExposure:(id)arg1 error:(id *)arg2;
- (void)setExposure:(id)arg1 error:(id *)arg2;
- (id)getSkeletonAnimationInfo:(id)arg1 error:(id *)arg2;
- (void)stopSkeletonAnimation:(id)arg1 error:(id *)arg2;
- (void)playSkeletonAnimation:(id)arg1 error:(id *)arg2;
- (id)getRotation:(id)arg1 error:(id *)arg2;
- (void)setRotation:(id)arg1 error:(id *)arg2;
- (id)getScale:(id)arg1 error:(id *)arg2;
- (void)setScale:(id)arg1 error:(id *)arg2;
- (id)getPosition:(id)arg1 error:(id *)arg2;
- (void)setPosition:(id)arg1 error:(id *)arg2;
- (_Bool)shouldTriggerAnimDidStopDelegate:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didChangeCoordinate:(struct CGPoint)arg1;
- (void)didChangeRotation:(double)arg1;
- (id)generateAnimationLocations:(id)arg1;
- (void)startTranslateAnimation:(id)arg1 duration:(double)arg2 initRotation:(double)arg3 autoRotate:(_Bool)arg4;
- (void)setAnamtaion:(id)arg1 forKey:(id)arg2 withMapView:(id)arg3;
- (void)resetMonoColor;
- (void)setMonoColor:(id)arg1;
- (id)getMaterialVariantsInfo;
- (int)getCurrentMaterialVariant;
- (void)setMaterialVariant:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

