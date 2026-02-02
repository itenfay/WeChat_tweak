//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBCentralManager, NSArray, NSDictionary, NSMutableDictionary, NSObject, NSRecursiveLock, NSString, WABlueToothDevicePool;
@protocol OS_dispatch_queue, WABleAdpterLogicDelegate;

@interface WABleAdpterLogic
{
    CBCentralManager *m_bleAdapter;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    NSRecursiveLock *m_lock;
    _Bool hasFirstUpdateState;
    NSMutableDictionary *m_connectedDevices;
    NSArray *m_currentScanServices;
    NSDictionary *m_currentScanOptions;
    WABlueToothDevicePool *_devices;
    id <WABleAdpterLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WABleAdpterLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WABlueToothDevicePool *devices; // @synthesize devices=_devices;
- (void)centralManagerUpdateStateTimeout;
- (void)__didRetrieveConnectedPeripherals:(id)arg1;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (int)readRSSIForPeripheral:(id)arg1;
- (int)setNotifyForPeripheral:(id)arg1 service:(id)arg2 charUUID:(id)arg3 state:(_Bool)arg4;
- (int)readCharacteristicsForPeripheral:(id)arg1 service:(id)arg2 charUUID:(id)arg3;
- (int)writeCharacteristicsForPeripheral:(id)arg1 service:(id)arg2 charUUID:(id)arg3 value:(id)arg4 writeType:(unsigned long long)arg5;
- (int)discoverCharacteristicsForService:(id)arg1 peripheral:(id)arg2;
- (int)discoverServiceForPeripheral:(id)arg1 services:(id)arg2;
- (int)disConnectPeripheral:(id)arg1;
- (int)connectPeripheral:(id)arg1;
- (id)getDeviceInSysytemHistory:(id)arg1;
- (id)getConnectedDevicesForServices:(id)arg1;
- (void)restoreScanIfNeeded;
- (void)disconnectAllDevices;
- (void)disconnectAllDevicesAndStopScan;
- (void)clearAndDisconnectAllDevices;
- (void)stopScan;
- (_Bool)scanForServices:(id)arg1 allowDuplicatesKey:(_Bool)arg2;
- (_Bool)scan;
- (long long)state;
- (id)initWithDelegate:(id)arg1 lock:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

