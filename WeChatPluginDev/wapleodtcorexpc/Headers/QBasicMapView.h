//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, GLKView, NSArray, NSString, QMapContext, QMapMonitor, TBDrawParam, TBRegionChangeDistributor;
@protocol QViewSystemChangeDelegate;

@interface QBasicMapView : UIView
{
    _Bool _dormant;
    _Bool _SDKDirty;
    TBRegionChangeDistributor *_regionChangeDistributor;
    QMapContext *_mapContext;
    id <QViewSystemChangeDelegate> _delegate;
    GLKView *_glkView;
    CADisplayLink *_displayLink;
    double _previousTimestamp;
    TBDrawParam *_frameParam;
    NSArray *_buildingRectList;
    QMapMonitor *_drawMonitor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) QMapMonitor *drawMonitor; // @synthesize drawMonitor=_drawMonitor;
@property(retain, nonatomic) NSArray *buildingRectList; // @synthesize buildingRectList=_buildingRectList;
@property(retain, nonatomic) TBDrawParam *frameParam; // @synthesize frameParam=_frameParam;
@property(nonatomic) _Bool SDKDirty; // @synthesize SDKDirty=_SDKDirty;
@property(nonatomic) _Bool dormant; // @synthesize dormant=_dormant;
@property(nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) GLKView *glkView; // @synthesize glkView=_glkView;
@property(nonatomic) __weak id <QViewSystemChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(retain, nonatomic) TBRegionChangeDistributor *regionChangeDistributor; // @synthesize regionChangeDistributor=_regionChangeDistributor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 resourceManager:(id)arg2;
- (void)setEventObserving;
- (void)setupDisplayLink;
- (void)setupGLKView;
- (void)setupMapContextWithResourceManager:(id)arg1;
- (void)resetGLContext;
- (void)switchGLContext;
- (void)didReceiveMemoryWarning;
- (void)setMaxRenderFramesPerSecond:(long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)wakeGL:(id)arg1;
- (void)sleepGL:(id)arg1;
- (void)validateDrawContext;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willTerminate;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (struct CGRect)viewPixelBounds;
- (void)handleDisplayLinkDidFire:(id)arg1;
- (_Bool)isApplicationActiveStatus;
- (void)destroy;
- (void)makeDirty;
- (void)layoutSubviews;
@property(nonatomic) _Bool offlineMapEnable; // @dynamic offlineMapEnable;
- (void)onSizeChange;
- (void)reloadMap;
- (void)enableMaploadCallbackEventOnce;
- (_Bool)isLoadingFinished;
- (id)internalDataDebugLog;
- (id)internalDebugStatus;
- (id)getAndResetLatestErrorLog;
- (void)setMapCacheClearSize:(int)arg1;
- (id)getPoisOnScreen;
- (id)checkClickInfoAtPoint:(struct CGPoint)arg1;
- (void)setMapLanguage:(long long)arg1;
- (void)setDarkMode:(_Bool)arg1;
- (void)setCompassOffset:(struct CGPoint)arg1;
- (void)setBaseMapHidden:(_Bool)arg1;
- (void)setLabelSize:(int)arg1;
- (_Bool)showsPoi;
- (void)setShowsPoi:(_Bool)arg1;
- (void)setSatelliteEnabled:(_Bool)arg1;
- (void)reloadBuildings;
- (void)setBuildingBlackList:(CDStruct_02837cd9 *)arg1 count:(int)arg2;
- (void)setShowsBuildings3D:(_Bool)arg1;
- (_Bool)showBuildings3D;
- (void)setShowsBuildings:(_Bool)arg1;
- (void)setShowsCompass:(_Bool)arg1;
- (CDStruct_02837cd9)convertRect:(struct CGRect)arg1 toMapRectFromView:(id)arg2;
- (struct CGRect)convertMapRect:(CDStruct_02837cd9)arg1 toRectToView:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toMapPointFromView:(id)arg2;
- (struct CGPoint)convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (float)pixelRatio;
- (double)glPointRatio;
- (struct CGPoint)glPointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
- (int)renderType;
- (double)mapPointsPerPointAtZoomLevel:(double)arg1;
- (double)metersPerPointAtLatitude:(double)arg1 zoomLevel:(double)arg2;
- (void)setLimitMapRect:(CDStruct_02837cd9)arg1 minZoomLevel:(double)arg2;
- (CDStruct_c3b9c2ee)mapSizeForOffsetRange:(struct CGSize)arg1;
- (void)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1 screenRect:(struct CGRect)arg2 outZoomLevel:(double *)arg3 outCenterMapPoint:(CDStruct_c3b9c2ee *)arg4;
- (double)zoomLevelThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 outCenterCoordinate:(struct CLLocationCoordinate2D *)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect; // @dynamic visibleMapRect;
@property(nonatomic, getter=isKeepCenterEnabled) _Bool keepCenterEnabled; // @dynamic keepCenterEnabled;
@property(readonly, nonatomic) struct CGPoint defaultAnchor;
@property(nonatomic) struct CGPoint centerOffset; // @dynamic centerOffset;
- (void)enableAutoMaxOverlooking:(_Bool)arg1;
@property(readonly, nonatomic) double maxOverlooking;
@property(readonly, nonatomic) double minOverlooking;
@property(nonatomic) double overlooking; // @dynamic overlooking;
@property(nonatomic) double rotation; // @dynamic rotation;
- (double)getAvailableMaxZoomLevel;
- (void)setMinZoomLevel:(double)arg1 maxZoomLevel:(double)arg2;
@property(readonly, nonatomic) double maxZoomLevel;
@property(readonly, nonatomic) double minZoomLevel;
@property(nonatomic) int scaleLevel; // @dynamic scaleLevel;
@property(nonatomic) double zoomLevel; // @dynamic zoomLevel;
- (void)setZoomLevelWithAnchor:(struct CGRect)arg1;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerMapPoint; // @dynamic centerMapPoint;
- (void)clearAllAnimations;
- (void)animateFromOverlooking:(double)arg1 toOverlooking:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToOverlooking:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToOverlooking:(double)arg1 duration:(double)arg2;
- (void)animateFromRotation:(double)arg1 toRotation:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToRotation:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToRotation:(double)arg1 duration:(double)arg2;
- (void)animateFromCenterOffset:(struct CGPoint)arg1 toCenterOffset:(struct CGPoint)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToCenterOffset:(struct CGPoint)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToCenterOffset:(struct CGPoint)arg1 duration:(double)arg2;
- (void)animateFromCoordinate:(struct CLLocationCoordinate2D)arg1 toCoordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToCoordinate:(struct CLLocationCoordinate2D)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToCoordinate:(struct CLLocationCoordinate2D)arg1 duration:(double)arg2;
- (void)animateFromZoomLevel:(struct CGRect)arg1 toZoomLevel:(struct CGRect)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToZoomLevel:(struct CGRect)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToZoomLevel:(struct CGRect)arg1 duration:(double)arg2;
- (void)appendCompletion:(CDUnknownBlockType)arg1 ToAnimation:(id)arg2;
- (id)constructFromOverlooking:(double)arg1 toOverlooking:(double)arg2 duration:(double)arg3;
- (id)constructFromRotation:(double)arg1 toRotation:(double)arg2 duration:(double)arg3;
- (id)constructAnimationFromCenterOffset:(struct CGPoint)arg1 toCenterOffset:(struct CGPoint)arg2 duration:(double)arg3;
- (id)constructAnimationFromCoordinate:(struct CLLocationCoordinate2D)arg1 toCoordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3;
- (id)constructAnimationFromZoomLevel:(struct CGRect)arg1 toZoomLevel:(struct CGRect)arg2 duration:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) _Bool enableMSAA;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

