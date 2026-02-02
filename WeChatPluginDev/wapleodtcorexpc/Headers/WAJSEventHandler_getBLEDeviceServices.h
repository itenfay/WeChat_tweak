//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_getBLEDeviceServices
{
    NSString *m_uuid;
}

- (void).cxx_destruct;
- (id)bleInstance;
- (void)dealloc;
- (void)onBluetoothServicesDiscovered:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4 appid:(id)arg5;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

