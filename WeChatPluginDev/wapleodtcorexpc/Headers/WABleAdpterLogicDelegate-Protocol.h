//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBCentralManager, CBCharacteristic, CBService, NSArray, NSData, NSNumber, NSString, WABlueToothDevice;

@protocol WABleAdpterLogicDelegate <NSObject>
- (void)onBleDevicesAllDisconnected;
- (void)onBleDeviceDidReadRSSI:(NSNumber *)arg1 device:(WABlueToothDevice *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)onBleDeviceDidUpdateValueInCharacteristics:(CBCharacteristic *)arg1 service:(CBService *)arg2 device:(WABlueToothDevice *)arg3 value:(NSData *)arg4 errorCode:(int)arg5 errMsg:(NSString *)arg6;
- (void)onBleDeviceDidSetNotifyToCharacteristics:(CBCharacteristic *)arg1 service:(CBService *)arg2 device:(WABlueToothDevice *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5;
- (void)onBleDeviceDidWriteValueToCharacteristics:(CBCharacteristic *)arg1 service:(CBService *)arg2 device:(WABlueToothDevice *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5;
- (void)onBleDeviceDiscoverCharacteristicsInService:(CBService *)arg1 device:(WABlueToothDevice *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)onBleDeviceDiscoverServices:(NSArray *)arg1 device:(WABlueToothDevice *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4;
- (void)onBleDeviceDidDisConnentedError:(WABlueToothDevice *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onBleDeviceDisConnected:(WABlueToothDevice *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onBleDeviceConnected:(WABlueToothDevice *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)onBleDeviceFound:(WABlueToothDevice *)arg1;
- (void)onBleStateChangeTimeout:(CBCentralManager *)arg1;
- (void)onBleStateChanged:(CBCentralManager *)arg1;
@end

