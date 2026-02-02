//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBPeripheral, NSMutableDictionary, NSNumber, NSString, WABlueToothDeviceAdData;

@interface WABlueToothDevice
{
    NSMutableDictionary *m_services;
    NSMutableDictionary *m_characteristics;
    NSString *_uuid;
    NSString *_name;
    NSNumber *_RSSI;
    WABlueToothDeviceAdData *_adData;
    CBPeripheral *_peripheral;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) WABlueToothDeviceAdData *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (unsigned long long)maximumWriteLengthForType:(id)arg1;
- (id)deviceDictionary;
- (void)clearInfo;
- (id)characteristicForUUID:(id)arg1 serviceUUID:(id)arg2;
- (id)serviceForUUID:(id)arg1;
- (void)addCharacteristics:(id)arg1 forService:(id)arg2;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2;
- (void)addServices:(id)arg1;
- (void)addService:(id)arg1;
- (id)init;

@end

