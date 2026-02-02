//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSRecursiveLock, NSString, WABleAdpterLogic;

@interface WABluetoothDeviceMonitorMgr
{
    NSMutableArray *_monitoredDevices;
    WABleAdpterLogic *_bleAdapter;
    NSRecursiveLock *_lock;
    NSString *_openingAppId;
    NSMutableArray *_currentOpenJobs;
    NSMutableArray *_pendingOpenJobs;
}

- (void).cxx_destruct;
- (void)deleteAllDevices;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (id)genOpenWeAppJob:(id)arg1;
- (id)popCurrentOpenJob:(id)arg1;
- (_Bool)initBleAdapterIfAllowed;
- (unsigned long long)getDebugModeTypeEnumByEnvVersion:(id)arg1;
- (id)getMonitoredDeviceWithWechatToken:(id)arg1 appId:(id)arg2;
- (id)getMonitoredDeviceWithUUID:(id)arg1;
- (void)checkAndOpenPendingJobs;
- (void)openWeAppWithJob:(id)arg1;
- (void)saveMonitoredDeviceList;
- (void)loadMonitoredDeviceList;
- (id)monitoredDevicePathSavePath;
- (void)tryDisconnectingBluetoothDevice:(id)arg1;
- (void)tryConnectingBluetoothDevice:(id)arg1;
- (void)onBleDeviceDidDisConnentedError:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceDisConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleStateChanged:(id)arg1;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)arg1 debugType:(unsigned long long)arg2 allDebugType:(_Bool)arg3;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)arg1 debugType:(unsigned long long)arg2;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)arg1;
- (id)getAllBluetoothMonitoredDevices;
- (void)deleteBluetoothMonitoredDevice:(id)arg1;
- (_Bool)deleteBluetoothMonitoredDeviceWithWechatToken:(id)arg1 appId:(id)arg2;
- (void)setBluetoothMonitoredDevice:(id)arg1;
- (void)startMonitoringBluetoothDevices;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

