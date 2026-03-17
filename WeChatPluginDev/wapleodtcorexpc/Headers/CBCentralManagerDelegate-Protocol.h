//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBCentralManager, CBPeripheral, NSDictionary, NSError, NSNumber;

@protocol CBCentralManagerDelegate <NSObject>
- (void)centralManagerDidUpdateState:(CBCentralManager *)arg1;

@optional
- (void)centralManager:(CBCentralManager *)arg1 didUpdateANCSAuthorizationForPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didDisconnectPeripheral:(CBPeripheral *)arg2 timestamp:(double)arg3 isReconnecting:(_Bool)arg4 error:(NSError *)arg5;
- (void)centralManager:(CBCentralManager *)arg1 didDisconnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFailToConnectPeripheral:(CBPeripheral *)arg2 error:(NSError *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didConnectPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 willRestoreState:(NSDictionary *)arg2;
@end

