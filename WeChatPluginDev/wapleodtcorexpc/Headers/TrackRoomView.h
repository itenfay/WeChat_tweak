//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnnotationLogicController, CAShapeLayer, MMFloorPickView, MMLoadingView, MMMapView, MMTimer, NSString, NavigateLogicController, POIInfo, TrackRoomReporter, TrackRoomTopBarView, UIButton, UIView, WCUIAlertView;
@protocol TrackRoomViewDelegate;

@interface TrackRoomView
{
    id <TrackRoomViewDelegate> _trackRoomViewDelegate;
    _Bool _isInit;
    _Bool _getMicSucc;
    _Bool _showAllHead;
    _Bool _isMapRegionChanging;
    _Bool _shouldIgnoreAccuracy;
    _Bool _intermediateAnimation;
    _Bool _shouldHideAllAnnotation;
    _Bool _shouldZoomToSeeAll;
    _Bool _isLoadFinish;
    _Bool _drivingMode;
    _Bool _refreshOK;
    _Bool _hasReportLocateError;
    _Bool _enterBackground;
    unsigned long long _gpsTag;
    UIView *_micMeterCircleView;
    POIInfo *_poiInfo;
    unsigned int _scene;
    UIButton *_micButton;
    UIButton *_myLocationButton;
    NSString *_chatname;
    MMMapView *_mapView;
    MMFloorPickView *_floorPickView;
    NSString *_trackRoomID;
    NSString *_trackErrorAlertMessage;
    CAShapeLayer *_micMeterCircle;
    MMTimer *_updateUserLocationTimer;
    MMLoadingView *_loadingView;
    CDStruct_b7cb895d _destinationRegion;
    TrackRoomTopBarView *_topbarView;
    NavigateLogicController *_navigateLogicController;
    AnnotationLogicController *_annotationLogicController;
    WCUIAlertView *_currAlertView;
    _Bool _isRequestForAccuracyAuthorization;
    _Bool _hasInternalInit;
    unsigned long long _enterTimestamp;
    unsigned long long _exitTimestamp;
    unsigned long long _startLocatingTimestamp;
    unsigned long long _micButtonTotalTime;
    unsigned long long _micButtonPressedTimestamp;
    long long _micButtonTapCount;
    int _currentAuthLogType;
    TrackRoomReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TrackRoomReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) int currentAuthLogType; // @synthesize currentAuthLogType=_currentAuthLogType;
@property(nonatomic) __weak id <TrackRoomViewDelegate> trackRoomViewDelegate; // @synthesize trackRoomViewDelegate=_trackRoomViewDelegate;
- (void)reportLog26734;
- (void)onPerformShortCut:(id)arg1;
- (void)showAlertForLocationAuthorization;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)updateMapStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
- (_Bool)canShowShareLocationMsgToDevice;
- (void)onCenterMapAt:(id)arg1;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)setAnnotation:(id)arg1 Coordinate:(struct CLLocationCoordinate2D)arg2 Animated:(_Bool)arg3 Duration:(float)arg4;
- (void)updateHeadAnnotation:(id)arg1;
- (void)onRemoteControlCheckShouldStop;
- (void)onRemoteControlCheckShouldPlay;
- (void)OnRestart;
- (void)OnPause;
- (void)OnReConnecting;
- (void)onKickOutFromWXTalkRoom:(id)arg1;
- (void)OnNobodyTalking;
- (void)OnForceStopRecord;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSomeoneTalking:(id)arg1;
- (void)OnGetMicrophoneResult:(int)arg1;
- (void)OnOpenWXTalkModeOK:(id)arg1;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)doMeterAnimationOnMainThread:(id)arg1;
- (void)closeTalk;
- (_Bool)openTalk:(id)arg1;
- (void)OnHeadingChanged:(double)arg1;
- (void)OnTrackRoomError:(int)arg1 Message:(id)arg2;
- (void)trySeeAll;
- (void)OnRefreshTrackRoom:(id)arg1 Type:(int)arg2;
- (void)OnJoinTrackRoomOK:(id)arg1;
- (_Bool)initTrack;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)tryRequestTemporaryFullAccuracy;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)didDragMap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)bringFriendToFront:(id)arg1;
- (void)bringMyselfToFront;
- (id)getUserLocation;
- (void)setRegion:(CDStruct_b7cb895d)arg1 AlwaysAnimated:(_Bool)arg2;
- (void)onSetIgnoreAccuracy;
- (_Bool)isLocationOK:(id)arg1;
- (void)stopUpdateUserLocation;
- (void)startUpdateUserLocation;
- (void)stopTimerCheckUserLocation;
- (void)startTimerCheckUserLocation;
- (void)onTimerUpdateLocation;
- (void)resizeMapToShowAllHeadAnimated:(id)arg1;
- (void)onNavigateToPOI:(id)arg1;
- (void)setAllHeadAnnotationShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)showLocationCalloutViewAnimated:(_Bool)arg1;
- (void)OnRecordDeniedByWeChat;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onMapTapped:(id)arg1;
- (void)onMicButtonReleased;
- (void)onMicButtonPressed;
- (void)onMyLocationButtonClick;
- (void)onMinimizeButtonClick;
- (void)onCloseButtonClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeTrackRoom:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (id)getLocationText:(struct CLLocationCoordinate2D)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)hideTrackRoomView;
- (void)showTrackRoomView;
- (void)exitTracking:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)doStartTrack;
- (_Bool)startTrackWithChatname:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)initMapView;
- (void)initView;
- (void)dealloc;
- (void)quitFromTrack;
- (void)goToSettingLocationAuthorization;
- (void)internalInit;
- (id)init;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

