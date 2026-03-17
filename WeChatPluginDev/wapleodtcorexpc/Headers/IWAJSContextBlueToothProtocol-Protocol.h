//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBService, NSArray, NSNumber, NSString;

@protocol IWAJSContextBlueToothProtocol <NSObject>

@optional
- (void)onBluetoothDidStartPeripheralServer:(NSString *)arg1 errMsg:(NSString *)arg2 errCode:(int)arg3 appid:(NSString *)arg4 state:(long long)arg5;
- (void)onBluetoothDidAddService:(NSString *)arg1 serverID:(NSString *)arg2 errMsg:(NSString *)arg3 errCode:(int)arg4 appid:(NSString *)arg5;
- (void)onBluetoothCharacteristicsDidWrite:(NSString *)arg1 service:(NSString *)arg2 server:(NSString *)arg3 callbackId:(NSString *)arg4 appid:(NSString *)arg5;
- (void)onBluetoothStartAdvertising:(NSString *)arg1 errMsg:(NSString *)arg2 appid:(NSString *)arg3 errCode:(int)arg4;
- (void)onBLEDevice:(NSString *)arg1 didReadRSSI:(NSNumber *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4 appId:(NSString *)arg5;
- (void)onBluetoothCharacteristicsDidSetNotify:(NSString *)arg1 service:(NSString *)arg2 device:(NSString *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5 appid:(NSString *)arg6;
- (void)onBluetoothCharacteristicsDidWrite:(NSString *)arg1 service:(NSString *)arg2 device:(NSString *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5 appid:(NSString *)arg6;
- (void)onBluetoothCharacteristicsDiscovered:(NSArray *)arg1 service:(CBService *)arg2 device:(NSString *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5 appid:(NSString *)arg6;
- (void)onBluetoothServicesDiscovered:(NSArray *)arg1 device:(NSString *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4 appid:(NSString *)arg5;
- (void)onBluetoothDisConnected:(NSString *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3 appid:(NSString *)arg4;
- (void)onBluetoothConnected:(NSString *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3 appid:(NSString *)arg4;
- (void)onBluetoothStartScan:(int)arg1 errMsg:(NSString *)arg2 appid:(NSString *)arg3;
- (void)onBluetoothLibOpenTimeoutWithAppId:(NSString *)arg1;
- (void)onBluetoothLibOpen:(long long)arg1 appid:(NSString *)arg2 mode:(NSString *)arg3;
@end

