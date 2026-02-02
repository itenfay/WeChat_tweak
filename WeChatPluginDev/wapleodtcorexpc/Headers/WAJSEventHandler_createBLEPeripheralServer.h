//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_createBLEPeripheralServer
{
    NSString *m_serverID;
}

- (void).cxx_destruct;
- (void)onBluetoothDidStartPeripheralServer:(id)arg1 errMsg:(id)arg2 errCode:(int)arg3 appid:(id)arg4 state:(long long)arg5;
- (id)bleInstance;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

