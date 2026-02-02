//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_getBLEDeviceRSSI
{
    NSString *_deviceUUID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
- (void)onBLEDevice:(id)arg1 didReadRSSI:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4 appId:(id)arg5;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

