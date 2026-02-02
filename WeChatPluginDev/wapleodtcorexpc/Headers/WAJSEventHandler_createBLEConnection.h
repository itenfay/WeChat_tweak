//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface WAJSEventHandler_createBLEConnection
{
    MMTimer *m_timeOutTimer;
    NSString *m_uuid;
    unsigned long long m_connectTime;
}

- (void).cxx_destruct;
- (id)bleInstance;
- (void)onSuccess;
- (void)onTimeOut;
- (void)dealloc;
- (void)onBluetoothConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3 appid:(id)arg4;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

