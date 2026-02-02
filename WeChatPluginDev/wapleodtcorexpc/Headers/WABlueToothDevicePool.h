//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSRecursiveLock;

@interface WABlueToothDevicePool
{
    NSMutableArray *m_devicePool;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
- (id)allDevices;
- (void)clearAllDevice;
- (void)clearDisconnectedDevice;
- (id)getDeviceByUUID:(id)arg1;
- (id)getDeviceByPeripheral:(id)arg1;
- (id)addDeviceWithPeripheral:(id)arg1 RSSI:(id)arg2 adData:(id)arg3;
- (id)initWithLock:(id)arg1;

@end

