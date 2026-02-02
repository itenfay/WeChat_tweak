//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_addBLEPeripheralService
{
    NSString *serverId;
    NSString *serviceUUID;
}

- (void).cxx_destruct;
- (void)onBluetoothDidAddService:(id)arg1 serverID:(id)arg2 errMsg:(id)arg3 errCode:(int)arg4 appid:(id)arg5;
- (id)bleInstance;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

