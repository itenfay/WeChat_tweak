//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBCharacteristic, CBDescriptor, CBL2CAPChannel, CBPeripheral, CBService, NSArray, NSError, NSNumber;

@protocol CBPeripheralDelegate <NSObject>

@optional
- (void)peripheral:(CBPeripheral *)arg1 didOpenL2CAPChannel:(CBL2CAPChannel *)arg2 error:(NSError *)arg3;
- (void)peripheralIsReadyToSendWriteWithoutResponse:(CBPeripheral *)arg1;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverDescriptorsForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateNotificationStateForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristicsForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverIncludedServicesForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverServices:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didReadRSSI:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)peripheralDidUpdateRSSI:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didModifyServices:(NSArray *)arg2;
- (void)peripheralDidUpdateName:(CBPeripheral *)arg1;
@end

