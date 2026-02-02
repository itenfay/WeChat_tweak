//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMDeviceMotion, NSObject, NSString, SCNNode, SCNView, UIButton, UIImageView, UIPanGestureRecognizer, WCAdSphereCardInfo, WCMediaItem;
@protocol WCAdvertiseSphereViewDelegate;

@interface WCAdvertiseSphereView
{
    _Bool _showFullCoverButton;
    _Bool _forbidVerticalPan;
    _Bool _isHorizontalView;
    _Bool _shouldRemoveThumbWithAnimation;
    _Bool _idleState;
    unsigned int _downloadScene;
    int _stateType;
    int _renderStateType;
    int _idleCheckCount;
    WCMediaItem *_mediaData;
    id <WCAdvertiseSphereViewDelegate> _delegate;
    WCAdSphereCardInfo *_sphereInfo;
    unsigned long long _sphereType;
    unsigned long long _monitoringType;
    unsigned long long _monitoringTypeToResume;
    double _gestureDelayTime;
    UIButton *_fullCoverButton;
    UIImageView *_thumbView;
    SCNView *_scnView;
    SCNNode *_cameraNode;
    UIPanGestureRecognizer *_panGesture;
    NSObject *_motionDataLock;
    CMDeviceMotion *_oriMotion;
    CMDeviceMotion *_previousMotion;
    double _angleAtX;
    CMDeviceMotion *_idleMotion;
    struct CGPoint _lastPoint;
    struct CGPoint _fingerRotation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool idleState; // @synthesize idleState=_idleState;
@property(nonatomic) int idleCheckCount; // @synthesize idleCheckCount=_idleCheckCount;
@property(retain, nonatomic) CMDeviceMotion *idleMotion; // @synthesize idleMotion=_idleMotion;
@property(nonatomic) double angleAtX; // @synthesize angleAtX=_angleAtX;
@property(retain, nonatomic) CMDeviceMotion *previousMotion; // @synthesize previousMotion=_previousMotion;
@property(retain, nonatomic) CMDeviceMotion *oriMotion; // @synthesize oriMotion=_oriMotion;
@property(retain, nonatomic) NSObject *motionDataLock; // @synthesize motionDataLock=_motionDataLock;
@property(nonatomic) struct CGPoint fingerRotation; // @synthesize fingerRotation=_fingerRotation;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) SCNNode *cameraNode; // @synthesize cameraNode=_cameraNode;
@property(retain, nonatomic) SCNView *scnView; // @synthesize scnView=_scnView;
@property(nonatomic) _Bool shouldRemoveThumbWithAnimation; // @synthesize shouldRemoveThumbWithAnimation=_shouldRemoveThumbWithAnimation;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) UIButton *fullCoverButton; // @synthesize fullCoverButton=_fullCoverButton;
@property(nonatomic) double gestureDelayTime; // @synthesize gestureDelayTime=_gestureDelayTime;
@property(nonatomic) unsigned long long monitoringTypeToResume; // @synthesize monitoringTypeToResume=_monitoringTypeToResume;
@property(nonatomic) unsigned long long monitoringType; // @synthesize monitoringType=_monitoringType;
@property(nonatomic) int renderStateType; // @synthesize renderStateType=_renderStateType;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;
@property(nonatomic) unsigned long long sphereType; // @synthesize sphereType=_sphereType;
@property(nonatomic) unsigned int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) _Bool isHorizontalView; // @synthesize isHorizontalView=_isHorizontalView;
@property(retain, nonatomic) WCAdSphereCardInfo *sphereInfo; // @synthesize sphereInfo=_sphereInfo;
@property(nonatomic) __weak id <WCAdvertiseSphereViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool forbidVerticalPan; // @synthesize forbidVerticalPan=_forbidVerticalPan;
@property(nonatomic) _Bool showFullCoverButton; // @synthesize showFullCoverButton=_showFullCoverButton;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onPanGestureEnd;
- (_Bool)willNewAngleXOverRightAngleWith:(double)arg1;
- (double)fetchAngleForDistance:(double)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeGesture;
- (void)initGesture;
- (void)checkIdleStateFromCurrentMotion:(id)arg1;
- (double)fetchPitchDiffFromCurrentMotion:(id)arg1 againstPreviousMotion:(id)arg2;
- (struct SCNVector4)fetchOrientationFromDeviceMotion:(id)arg1 againstOriMotion:(id)arg2 fingerRotation:(struct CGPoint)arg3;
- (void)updateCameraOrientation;
- (void)stopDeviceMotion;
- (void)initDeviceMotion;
- (void)tryToStopMonitoring;
- (void)startMonitoring;
- (void)tryToStartMonitoringWithType:(unsigned long long)arg1;
- (void)tryToStartMonitoring;
- (void)tryToNoticeIdleStateChanged:(_Bool)arg1;
- (void)onClick;
- (void)delayClearTouchButtonColor;
- (void)delayClickAdTouchButton;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)removeFullCoverButton;
- (void)initFullCoverButton;
- (_Bool)checkSnapshotImage:(id)arg1;
- (void)generateOriginSnapshot;
- (id)fetchOriginSnapshot;
- (id)fetchCurrentSnapshot;
- (id)fetchOriginSnapshotDirectly;
- (void)updateBackGroundColor;
- (void)updateStateWithType:(int)arg1;
- (void)loadThumbResource;
- (void)delayRemoveThumbView;
- (void)removeThumbView;
- (void)initThumbView;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)stopScene;
- (void)playScene;
- (void)loadSphereResourceAtRenderer:(id)arg1 withImage:(id)arg2;
- (id)fetchSphereResourceFor:(id)arg1;
- (void)loadSphereResource;
- (void)initSCNView;
- (id)generateSphereNodeWith:(id)arg1;
- (id)generateCameraNode;
- (id)generateSCNView;
- (_Bool)isHorizontalViewForSize:(struct CGSize)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)isLoadingSphereResource;
- (void)resetMotionData;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)onViewWillResignActive:(id)arg1;
- (void)initNotificationObserver;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 sphereInfo:(id)arg2 delegate:(id)arg3 downloadScene:(unsigned int)arg4 type:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

