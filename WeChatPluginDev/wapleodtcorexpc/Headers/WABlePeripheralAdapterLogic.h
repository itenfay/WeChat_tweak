//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CBPeripheralManager, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue, WABlePeripheralAdapterLogicDelegate;

@interface WABlePeripheralAdapterLogic : NSObject
{
    NSString *m_serverID;
    CBPeripheralManager *m_adapter;
    NSRecursiveLock *m_lock;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    NSMutableDictionary *m_services;
    NSMutableDictionary *m_centralDevices;
    NSMutableDictionary *m_serviceCharacteristicsDic;
    NSMutableArray *m_notifyQueue;
    NSMutableDictionary *m_connectedDevices;
    id <WABlePeripheralAdapterLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WABlePeripheralAdapterLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)onPowerOff;
- (void)onConnected:(id)arg1;
- (void)respondToRequest:(id)arg1;
- (int)removeService:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertisingWithRequest:(id)arg1;
- (int)notifyCharacteristicChange:(id)arg1 service:(id)arg2;
- (id)readCharacteristics:(id)arg1 service:(id)arg2;
- (int)writeCharacteristics:(id)arg1 value:(id)arg2 forService:(id)arg3;
- (int)addService:(id)arg1 isPrimary:(_Bool)arg2 withCharacteristics:(id)arg3;
- (long long)state;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 lock:(id)arg2 serverID:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

