//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayControlData;

@interface WAJSEventHandler_collectWepalm
{
    WCPayControlData *_controlData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
- (void)onWCPayCollectPalmControlLogicEndWithFail:(id)arg1;
- (void)onWCPayCollectPalmControlLogicEndWithCancel:(id)arg1;
- (void)onWCPayCollectPalmControlLogicEndWithOK:(id)arg1;
- (id)wrapJSApiResult:(unsigned long long)arg1 errorMessage:(id)arg2;
- (int)getIntFromStringParam:(id)arg1 key:(id)arg2 defaultVal:(int)arg3;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

