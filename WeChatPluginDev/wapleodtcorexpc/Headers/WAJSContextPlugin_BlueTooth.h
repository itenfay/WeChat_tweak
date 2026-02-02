//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSRecursiveLock, NSString, WABleAdpterLogic;

@interface WAJSContextPlugin_BlueTooth
{
    _Bool m_hasInit;
    WABleAdpterLogic *m_bleAdpter;
    NSRecursiveLock *m_lock;
    long long m_state;
    unsigned long long m_onDeviceFoundTriggerInterval;
    NSMutableDictionary *m_foundDevices;
    MMTimer *m_deviceOnTriggerTimer;
    _Bool m_isScaning;
    _Bool _isBackgroundModeEnabled;
    _Bool _hasConnection;
    _Bool _isSilentlyOpen;
    _Bool _isAllowBackground;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasConnection; // @synthesize hasConnection=_hasConnection;
@property(nonatomic) _Bool m_isScaning; // @synthesize m_isScaning;
- (void)stopScan;
- (int)checkAbilityForInvokingBleAPI;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)onBleDeviceDidReadRSSI:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onBleDeviceDidUpdateValueInCharacteristics:(id)arg1 service:(id)arg2 device:(id)arg3 value:(id)arg4 errorCode:(int)arg5 errMsg:(id)arg6;
- (void)onBleDeviceDidSetNotifyToCharacteristics:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5;
- (void)onBleDeviceDidWriteValueToCharacteristics:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5;
- (void)onBleDeviceDiscoverCharacteristicsInService:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onBleDeviceDiscoverServices:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
@property(nonatomic) _Bool isSilentlyOpen; // @synthesize isSilentlyOpen=_isSilentlyOpen;
- (void)onBleDevicesAllDisconnected;
- (void)onBleDeviceDidDisConnentedError:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceDisConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onTriggerDevicesSendToServices;
- (void)onBleDeviceFound:(id)arg1;
- (void)onBleStateChangeTimeout:(id)arg1;
- (void)onBleStateChanged:(id)arg1;
- (long long)getMaximumWriteValueLengthForType:(id)arg1 forDevice:(id)arg2;
- (int)setNotifyOnCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3 state:(_Bool)arg4;
- (int)readValueFromCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3;
- (int)writeValueToCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3 value:(id)arg4 writeType:(unsigned long long)arg5;
- (int)discovierCharacteristicForService:(id)arg1 forDevice:(id)arg2;
- (int)discoverService:(id)arg1 forDevice:(id)arg2;
- (int)getBluetoothDeviceRSSI:(id)arg1;
- (int)closeBluetoothLowEnergyConnection:(id)arg1;
- (int)createBluetoothLowEnergyConnection:(id)arg1;
- (id)getConnectedBluethoothDevices:(id)arg1;
- (id)getFoundBluethoothDevices;
- (void)onBleScanStateChanged;
- (int)stopBluetoothDevicesDiscovery;
- (void)startBluetoothDevicesDiscoveryForServices:(id)arg1 allowDuplicatesKey:(_Bool)arg2 onFoundInterval:(unsigned long long)arg3;
- (_Bool)getBluetoothAdapterAvailableState;
@property(nonatomic) _Bool isBackgroundModeEnabled; // @synthesize isBackgroundModeEnabled=_isBackgroundModeEnabled;
@property(nonatomic) _Bool isAllowBackground; // @synthesize isAllowBackground=_isAllowBackground;
- (void)restoreScanIfNeeded;
- (void)disconnectAllPeripheralAndStopScan;
- (void)closeBluetoothLowEnergyLib;
- (void)openBluetoothLowEnergyLib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

