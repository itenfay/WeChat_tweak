//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCLanDeviceJsonKissLogic
{
    NSMutableDictionary *m_sendTaskMap;
}

- (void).cxx_destruct;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (void)onSendDataToWCLanDevice:(long long)arg1 ErrCode:(int)arg2;
- (void)kissDeviceWithJsonStr:(id)arg1 deviceType:(id)arg2 deviceId:(id)arg3;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

