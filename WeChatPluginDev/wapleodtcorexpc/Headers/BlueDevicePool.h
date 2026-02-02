//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface BlueDevicePool : NSObject
{
    NSMutableArray *_devicePool;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *devicePool; // @synthesize devicePool=_devicePool;
- (void)removeAllObjectsWithDelegate:(id)arg1;
- (void)removeDisconnected;
- (void)removeDevice:(id)arg1;
- (id)getDeviceByOutputStream:(id)arg1;
- (id)getDeviceByInputStream:(id)arg1;
- (id)getDeviceByPeripheral:(id)arg1;
- (id)getDeviceBySessionID:(long long)arg1;
- (id)getDeviceByDID:(long long)arg1;
- (id)getDeviceByAccessory:(id)arg1;
- (id)addDeviceWithPeripheral:(id)arg1 WithUUID:(id)arg2;
- (id)addDeviceWithPeripheral:(id)arg1 WithMacData:(id)arg2;
- (id)addDeviceWithPeripheral:(id)arg1 WithDID:(long long)arg2;
- (id)addDeviceWithAccessory:(id)arg1;
- (id)initWithLock:(id)arg1;

@end

