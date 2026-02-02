//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BlueDevicePool, NSRecursiveLock, NSString;
@protocol BlueAdapterDelegate, OS_dispatch_queue;

@interface BlueAdapterBase : NSObject
{
    id <BlueAdapterDelegate> m_delegate;
    BlueDevicePool *m_devices;
    NSObject<OS_dispatch_queue> *m_queue;
    NSRecursiveLock *m_lock;
}

- (void).cxx_destruct;
@property(retain) NSRecursiveLock *m_lock; // @synthesize m_lock;
@property(nonatomic) __weak id <BlueAdapterDelegate> m_delegate; // @synthesize m_delegate;
@property(retain) BlueDevicePool *m_devices; // @synthesize m_devices;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (void)closeProfile:(long long)arg1;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)onBlueToothPowerOff;
- (void)writeSession:(long long)arg1:(const char *)arg2:(int)arg3;
- (int)readSession:(long long)arg1:(char *)arg2:(int)arg3;
- (void)closeSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (long long)getDIDbySessionID:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceProtocols:(long long)arg1;
- (void)stopScan;
- (_Bool)scanAll;
- (_Bool)scan;
- (void)cleanUpAllDevices;
- (id)initWithDelegate:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

