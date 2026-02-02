//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, NSString, TencentLBSLocationManager;

@interface WAJSContextPlugin_coreMotion
{
    CMMotionManager *_motionMgr;
    TencentLBSLocationManager *m_locationMgr;
    TencentLBSLocationManager *m_headingMgr;
    unsigned int m_moduleStatus[7];
    long long _lastOrientation;
    double lastTimeUpdateLocation;
    _Bool _enableIndoor;
    NSString *_mapSubKey;
    unsigned long long _coordType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long coordType; // @synthesize coordType=_coordType;
@property(nonatomic) _Bool enableIndoor; // @synthesize enableIndoor=_enableIndoor;
@property(retain, nonatomic) NSString *mapSubKey; // @synthesize mapSubKey=_mapSubKey;
- (_Bool)isUpdatingBackgroundLocation;
- (_Bool)isUpdatingForegroundLocation;
- (_Bool)isUpdatingLocation;
- (void)stopGyroscope;
- (_Bool)startGyroscope;
- (void)stopDeviceAxisChange;
- (_Bool)startDeviceAxisChange;
- (void)didRotate:(id)arg1;
- (void)stopDeviceOrientationChangeListening;
- (_Bool)enableDeviceOrientationChangeListening;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)forceStopLocating;
- (void)forceStopBackgroundLocating;
- (void)forceStopForegroundLocating;
- (void)stopBackgroundLocationUpdate;
- (void)stopLocationUpdate;
- (_Bool)enableBackgroundLocationUpdate;
- (_Bool)enableLocationUpdate;
- (void)stopPreviousLocationUpdate;
- (void)updateParamByDic:(id)arg1;
- (void)stopCompass;
- (_Bool)enableCompass;
- (id)getOpenId;
- (void)stopAccelerometer;
- (_Bool)enableAccelerometer;
- (void)moduleDidStop:(int)arg1;
- (void)stopModule:(int)arg1 suspend:(_Bool)arg2;
- (void)stopModule:(int)arg1;
- (_Bool)isModuleRunning:(int)arg1;
- (void)setModuleInterval:(double)arg1 name:(int)arg2;
- (_Bool)startModule:(int)arg1;
- (_Bool)isRunningModule:(int)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

