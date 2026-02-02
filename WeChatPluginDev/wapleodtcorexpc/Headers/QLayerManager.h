//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QMediator, QUniversalMapCounter, TBOrderedSafeDictionary;
@protocol glOverlayGestureClickDelegate;

@interface QLayerManager : NSObject
{
    void *_impl;
    QMediator *_mediator;
    TBOrderedSafeDictionary *_viewContainer;
    QUniversalMapCounter *_universalCounter;
    QUniversalMapCounter *_groundOverlayCounter;
    double _deltalTimeStamp;
    id <glOverlayGestureClickDelegate> _glOverlayClickDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <glOverlayGestureClickDelegate> glOverlayClickDelegate; // @synthesize glOverlayClickDelegate=_glOverlayClickDelegate;
@property(nonatomic) double deltalTimeStamp; // @synthesize deltalTimeStamp=_deltalTimeStamp;
@property(nonatomic) __weak QUniversalMapCounter *groundOverlayCounter; // @synthesize groundOverlayCounter=_groundOverlayCounter;
@property(nonatomic) __weak QUniversalMapCounter *universalCounter; // @synthesize universalCounter=_universalCounter;
@property(retain, nonatomic) TBOrderedSafeDictionary *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
- (void)addDirectionalLight:(id)arg1 direction:(union _GLKVector3)arg2 intensity:(double)arg3;
- (void)addSpotFollowCameraLight:(id)arg1 intensity:(double)arg2;
- (void)setAmbientLight:(id)arg1 intensity:(double)arg2;
- (struct LightColor)lightColorForUIColor:(id)arg1;
- (void)handleClickedGLOverlay:(id)arg1 withOverlayObj:(id)arg2;
- (void)notifyNoneGLLayerFound:(id)arg1 ClickPos:(struct CGPoint)arg2;
- (void)setClickCheckPoint:(struct CGPoint)arg1;
- (_Bool)isDirty;
- (_Bool)draw;
- (void)update:(double)arg1;
- (id)overlays;
- (id)viewForOverlay:(id)arg1;
- (id)removeForOverlay:(id)arg1;
- (void)addOverlayView:(id)arg1;
- (struct CGPoint)pixelForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)mapPointForPixelX:(double)arg1 Y:(double)arg2;
- (id)getView;
- (double)glPointRatio;
- (struct CGPoint)glVertexForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (float *)glProjectionMatrix;
- (float *)glViewMatrix;
- (void)makeDirty;
- (void *)impl;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

