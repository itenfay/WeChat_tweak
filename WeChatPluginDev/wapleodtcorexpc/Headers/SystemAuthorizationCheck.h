//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocationManager, LocationAuthorizationInfo, NSString;

@interface SystemAuthorizationCheck
{
    CLLocationManager *_locationManager;
    LocationAuthorizationInfo *_locationAuthorizationInfo;
}

+ (id)currentVisibleAuthorizationItems;
+ (unsigned int)getSportsAuthorizationStatus;
+ (id)getSettingNotifyState;
+ (unsigned int)getBluetoothPeripheralAuthorizationStatus;
+ (unsigned int)getBluetoothAuthorizationStatusForOldIos;
+ (unsigned int)getBluetoothAuthorizationStatusForIOS13_1;
+ (unsigned int)getLocationAuthorizationStatus;
+ (unsigned int)getMicrophoneAuthorizationStatus;
+ (unsigned int)getContactsAuthorizationStatus;
+ (unsigned int)getCameraAuthorizationStatus;
+ (unsigned int)getPhotoLibraryAuthorizationStatusForAccessLevel:(unsigned long long)arg1;
+ (unsigned int)getPhotoLibraryAuthorizationStatus;
+ (unsigned int)getAuthStatusByItem:(unsigned int)arg1;
+ (_Bool)isAPPFirstTimeRuning;
+ (void)initMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) LocationAuthorizationInfo *locationAuthorizationInfo; // @synthesize locationAuthorizationInfo=_locationAuthorizationInfo;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (unsigned long long)getNotificationAuthorizationStatus:(id)arg1;
- (void)updateReportTime;
- (_Bool)shouldReport;
- (void)reportReaderSetting;
- (void)reportSettingNotify;
- (void)reportAuthorizationStatus:(id)arg1;
- (void)reportWCFontLevel;
- (void)startCheck;
- (void)reportElderMode;
- (void)listenVoiceOver;
- (void)reportVoiceOverIfOn;
- (void)onGetWifiInfo;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)onRequestLocationUpdating:(unsigned long long)arg1;
- (void)onRequestLocationAuthorization;
- (void)onCNCopySupportedInterfaces;
- (void)logAndReportAuthorizationItem:(id)arg1 item:(unsigned int)arg2 action:(unsigned int)arg3;
- (void)updateCachedLocationStatus:(int)arg1;
@property(readonly, nonatomic) int locationAuthStatus;
- (id)currentVc;
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

