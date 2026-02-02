//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EAAccessoryManager, NSRunLoop, NSString;

@interface BlueEAAdapter
{
    EAAccessoryManager *m_eaAdapter;
    NSRunLoop *m_runLoop;
}

- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)accessoryDidDisconnect:(id)arg1;
- (_Bool)isWeChatDevice:(id)arg1;
- (void)deviceDisconnected:(id)arg1;
- (void)deviceConnected:(id)arg1;
- (void)writeSession:(long long)arg1:(const char *)arg2:(int)arg3;
- (int)readSession:(long long)arg1:(char *)arg2:(int)arg3;
- (void)closeSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceProtocols:(long long)arg1;
- (void)removeDevice:(id)arg1;
- (void)stopScan;
- (_Bool)scanAll;
- (_Bool)scan;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

