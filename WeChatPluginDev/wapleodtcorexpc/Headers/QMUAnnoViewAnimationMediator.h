//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;
@protocol QAnnotation;

@interface QMUAnnoViewAnimationMediator : NSObject
{
    _Bool _annoAnimationNeedRotate;
    int _animationStatus;
    int _annoCurrentEraseIndex;
    int _annoInternalEraseIndexBackUp;
    int _coordKVOCounter;
    CDUnknownBlockType _coordCallBack;
    double _annoAnimationAccumulateDistance;
    double _annoAnimationSpeed;
    double _annoCallbacklocationPrecision;
    NSArray *_originalCoords;
    UIView *_mapInternalRotateView;
    id <QAnnotation> _observerTarget;
    struct CGPoint _annoComparePoint;
}

- (void).cxx_destruct;
@property(nonatomic) int coordKVOCounter; // @synthesize coordKVOCounter=_coordKVOCounter;
@property(nonatomic) __weak id <QAnnotation> observerTarget; // @synthesize observerTarget=_observerTarget;
@property(nonatomic) __weak UIView *mapInternalRotateView; // @synthesize mapInternalRotateView=_mapInternalRotateView;
@property(retain, nonatomic) NSArray *originalCoords; // @synthesize originalCoords=_originalCoords;
@property(nonatomic) int annoInternalEraseIndexBackUp; // @synthesize annoInternalEraseIndexBackUp=_annoInternalEraseIndexBackUp;
@property(nonatomic) _Bool annoAnimationNeedRotate; // @synthesize annoAnimationNeedRotate=_annoAnimationNeedRotate;
@property(nonatomic) double annoCallbacklocationPrecision; // @synthesize annoCallbacklocationPrecision=_annoCallbacklocationPrecision;
@property(nonatomic) double annoAnimationSpeed; // @synthesize annoAnimationSpeed=_annoAnimationSpeed;
@property(nonatomic) double annoAnimationAccumulateDistance; // @synthesize annoAnimationAccumulateDistance=_annoAnimationAccumulateDistance;
@property(nonatomic) struct CGPoint annoComparePoint; // @synthesize annoComparePoint=_annoComparePoint;
@property(nonatomic) int annoCurrentEraseIndex; // @synthesize annoCurrentEraseIndex=_annoCurrentEraseIndex;
@property(nonatomic) int animationStatus; // @synthesize animationStatus=_animationStatus;
@property(copy, nonatomic) CDUnknownBlockType coordCallBack; // @synthesize coordCallBack=_coordCallBack;
- (_Bool)hasCoordAnimation:(id)arg1;
- (void)removeMoveAlongAnimation:(id)arg1;
- (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3 andLeftTime:(double)arg4;
- (void)setAnimation:(id)arg1 withLeftTime:(double)arg2;
- (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3;
- (void)startAnimation:(id)arg1 rotationView:(id)arg2 locations:(id)arg3 time:(double)arg4 autoRotate:(_Bool)arg5 distance:(double)arg6;
- (void)generateAnimation:(id)arg1 rotationView:(id)arg2 locations:(id)arg3 validatedLocation:(id)arg4 time:(double)arg5 autoRotate:(_Bool)arg6 distanceFilter:(double)arg7;
- (_Bool)checkIfTargetAnimationExists:(id)arg1 withKey:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)sendInterruptionCallBack;
- (void)sendAnimationInfoToCallback:(struct CLLocationCoordinate2D)arg1 Status:(int)arg2;
- (void)notifMoveAlongCallbackUpdateWithCoordinate:(struct CLLocationCoordinate2D)arg1 andAnimationStatus:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)setUpObserver:(id)arg1;
- (void)setAnnoTranslateObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)validateLocations:(id)arg1;
- (_Bool)checkInterpolationIsOutOfPrecisionRangeWithInterpolation:(struct CLLocationCoordinate2D)arg1;
- (id)getTranlateCoordinatesWithIndexChanged:(int)arg1 andRatio:(double)arg2;
- (id)getCoordinatesForLeftTimeMode:(struct CLLocationCoordinate2D)arg1;
- (id)generateNewCoordFromOrigin:(id)arg1 withIndex:(int)arg2 andRatio:(double)arg3;
- (void)searchEraseInexWithInterpolatePoint:(struct CLLocationCoordinate2D)arg1 andOriginalPoints:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

