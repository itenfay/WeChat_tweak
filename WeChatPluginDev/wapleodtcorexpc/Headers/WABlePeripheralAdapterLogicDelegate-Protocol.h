//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBATTRequest, CBCentral, CBCharacteristic, CBPeripheralManager, NSArray, NSString;

@protocol WABlePeripheralAdapterLogicDelegate <NSObject>
- (void)onUnsubscribedToCharacteristic:(CBCharacteristic *)arg1 central:(CBCentral *)arg2 serverID:(NSString *)arg3;
- (void)onSubscribedToCharacteristic:(CBCharacteristic *)arg1 central:(CBCentral *)arg2 serverID:(NSString *)arg3;
- (void)onDisconnected:(NSString *)arg1 central:(CBCentral *)arg2;
- (void)onConnected:(NSString *)arg1 central:(CBCentral *)arg2;
- (void)onReceiveWriteRequests:(NSArray *)arg1 serverID:(NSString *)arg2;
- (void)onReceiveReadRequest:(CBATTRequest *)arg1 serverID:(NSString *)arg2;
- (void)didStartAdvertising:(NSString *)arg1 errMsg:(NSString *)arg2;
- (void)didAddService:(NSString *)arg1 serverID:(NSString *)arg2 errMsg:(NSString *)arg3 errCode:(int)arg4;
- (void)onBleStateChanged:(CBPeripheralManager *)arg1 serverID:(NSString *)arg2;
@end

