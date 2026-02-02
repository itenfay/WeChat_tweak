//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface WAJSContextPlugin_BlueTooth_Peripheral
{
    _Bool m_hasInit;
    NSMutableDictionary *m_adapterDic;
    NSMutableDictionary *m_requestDic;
    NSMutableDictionary *m_characDataDic;
    NSRecursiveLock *m_lock;
    long long m_state;
    _Bool _isAllowBackground;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAllowBackground; // @synthesize isAllowBackground=_isAllowBackground;
- (id)generateServerId;
- (id)generateCallbackId;
- (void)onUnsubscribedToCharacteristic:(id)arg1 central:(id)arg2 serverID:(id)arg3;
- (void)onSubscribedToCharacteristic:(id)arg1 central:(id)arg2 serverID:(id)arg3;
- (void)onDisconnected:(id)arg1 central:(id)arg2;
- (void)onConnected:(id)arg1 central:(id)arg2;
- (void)didStartAdvertising:(id)arg1 errMsg:(id)arg2;
- (void)didAddService:(id)arg1 serverID:(id)arg2 errMsg:(id)arg3 errCode:(int)arg4;
- (void)onReceiveReadRequest:(id)arg1 serverID:(id)arg2;
- (void)onReceiveWriteRequests:(id)arg1 serverID:(id)arg2;
- (void)onBleStateChanged:(id)arg1 serverID:(id)arg2;
- (int)writeValueToCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3 value:(id)arg4 callBackId:(id)arg5 needNotify:(_Bool)arg6;
- (id)createDescriptor:(id)arg1 value:(id)arg2;
- (id)createCharacteristic:(id)arg1 properties:(id)arg2 value:(id)arg3 permissions:(id)arg4;
- (int)stopAdvertising:(id)arg1;
- (int)startBeaconAdvertising:(id)arg1 UUID:(id)arg2 identifier:(id)arg3 major:(unsigned short)arg4 minor:(unsigned short)arg5 measuredPower:(id)arg6;
- (int)startAdvertising:(id)arg1 deviceName:(id)arg2 serviceUUIDs:(id)arg3;
- (int)removeBluetoothService:(id)arg1 fromAdapter:(id)arg2;
- (int)addBluetoothService:(id)arg1 toAdapter:(id)arg2 withCharacteristicsList:(id)arg3;
- (int)closePeripheralServer:(id)arg1;
- (id)createPeripheralServer;
- (int)checkAbilityForInvokingBleAPI;
- (_Bool)getBluetoothAdapterAvailableState;
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

