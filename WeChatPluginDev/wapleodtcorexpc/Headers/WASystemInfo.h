//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBCentralManager, CLLocationManager, MMFullScreenShadeViewController, MMTimer, NSDictionary, NSMutableArray, NSString;

@interface WASystemInfo
{
    _Bool _started;
    _Bool _checkBlueTooth;
    _Bool _isApplicationStateActive;
    _Bool _clientNetworkIsWeakNet;
    _Bool _isAllInfoUpdated;
    unsigned int _wechatConnectType;
    NSDictionary *_systemInfoDic;
    CBCentralManager *_bluetoothManager;
    NSMutableArray *_syncUpdateSelArr;
    unsigned long long _currentSyncUpdateIdx;
    CLLocationManager *_locationManager;
    MMTimer *_updateTimer;
    MMFullScreenShadeViewController *_fullScreenShadeVC;
    double _allInfoUpdateTime;
}

- (void).cxx_destruct;
@property(nonatomic) double allInfoUpdateTime; // @synthesize allInfoUpdateTime=_allInfoUpdateTime;
@property(nonatomic) _Bool isAllInfoUpdated; // @synthesize isAllInfoUpdated=_isAllInfoUpdated;
@property(retain, nonatomic) MMFullScreenShadeViewController *fullScreenShadeVC; // @synthesize fullScreenShadeVC=_fullScreenShadeVC;
@property(nonatomic) unsigned int wechatConnectType; // @synthesize wechatConnectType=_wechatConnectType;
@property(nonatomic) _Bool clientNetworkIsWeakNet; // @synthesize clientNetworkIsWeakNet=_clientNetworkIsWeakNet;
@property _Bool isApplicationStateActive; // @synthesize isApplicationStateActive=_isApplicationStateActive;
@property(retain, nonatomic) MMTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) unsigned long long currentSyncUpdateIdx; // @synthesize currentSyncUpdateIdx=_currentSyncUpdateIdx;
@property(retain, nonatomic) NSMutableArray *syncUpdateSelArr; // @synthesize syncUpdateSelArr=_syncUpdateSelArr;
@property(retain, nonatomic) CBCentralManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(nonatomic) _Bool checkBlueTooth; // @synthesize checkBlueTooth=_checkBlueTooth;
@property(retain, nonatomic) NSDictionary *systemInfoDic; // @synthesize systemInfoDic=_systemInfoDic;
@property(nonatomic) _Bool started; // @synthesize started=_started;
- (void)syncUpdateLanguage;
- (void)onTranslateLanguageChange;
- (void)onLanguageChange;
- (void)syncUpdateFontSize;
- (void)onFontSizeChange;
- (void)tryHideFullScreenNoticeVC;
- (void)showFullScreenNoticeVCWithConfig:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)tryRequestWhenInUseAuthorization:(id)arg1;
- (void)onTimerClientNetworkRecover;
- (void)startClientNetworkRecoverTimer;
- (void)cancelClientNetworkRecoverTimer;
- (void)onWeAppNetworkWeakChange:(_Bool)arg1;
- (unsigned int)currentWeakNetReportType;
- (_Bool)isWechatConnected;
- (_Bool)isWechatDisconnected;
- (_Bool)isClientNetworkInWeakNet;
- (void)onClientNetworkWeakChange:(_Bool)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onPowerStateChange;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)asyncUpdateNotification;
- (void)asyncUpdateLocationServicesEnabled;
- (void)syncUpdateCalendar;
- (void)syncUpdateBattery;
- (void)syncUpdateBlueTooth;
- (void)syncUpdateMicrophone;
- (void)syncUpdateCamera;
- (void)syncUpdatePhoto;
- (void)syncUpdateWifi;
- (void)syncUpdateHardWare;
- (void)stepSyncUpdate;
- (void)updateSystemPermissionInfo;
- (id)stateByAuthorized:(_Bool)arg1 notDetermined:(_Bool)arg2;
- (void)updateRegularSystemInfo;
- (void)updateByKey:(id)arg1 value:(id)arg2;
- (void)updateByDictionary:(id)arg1;
- (void)makeBlueToothInfo:(id)arg1;
- (void)createBluetoothManager;
- (id)startCheckBlueTooth:(_Bool)arg1;
- (void)updateSystemInfo;
- (void)initSystemInfo;
- (void)onTimeUpdateSystemInfo;
- (void)tryStartUpdateSystemInfo;
- (void)didStatusBarFrameChanged;
- (void)didOrientationChanged;
- (void)onApplicationDidFinishLaunching:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (id)getSystemInfo;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (void)initSyncUpdateSelArr;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

