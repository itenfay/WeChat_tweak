//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppStateChangedContextInfoBluetoothInfo
{
    _Bool _canKeepAliveByBluetooth;
    _Bool _isBluetoothBackgroundEnabled;
    _Bool _isBluetoothSharedResourceBeenRecoverd;
    _Bool _hasBluetoothConnection;
}

@property(nonatomic) _Bool hasBluetoothConnection; // @synthesize hasBluetoothConnection=_hasBluetoothConnection;
@property(nonatomic) _Bool isBluetoothSharedResourceBeenRecoverd; // @synthesize isBluetoothSharedResourceBeenRecoverd=_isBluetoothSharedResourceBeenRecoverd;
@property(nonatomic) _Bool isBluetoothBackgroundEnabled; // @synthesize isBluetoothBackgroundEnabled=_isBluetoothBackgroundEnabled;
@property(nonatomic) _Bool canKeepAliveByBluetooth; // @synthesize canKeepAliveByBluetooth=_canKeepAliveByBluetooth;
- (id)description;

@end

