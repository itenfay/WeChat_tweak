//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_notifyBLECharacteristicValueChanged
{
    NSString *m_deviceId;
    NSString *m_serviceId;
    NSString *m_charId;
}

- (void).cxx_destruct;
- (id)bleInstance;
- (void)dealloc;
- (void)onBluetoothCharacteristicsDidSetNotify:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5 appid:(id)arg6;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

