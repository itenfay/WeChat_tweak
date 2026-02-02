//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WAJSEventHandler_sendBizRedPacket
{
    NSDictionary *_dicParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicParam; // @synthesize dicParam=_dicParam;
- (void)onRedEnvFail:(id)arg1;
- (void)onRedEnvCancel;
- (void)onRedEnvSuccess:(id)arg1;
- (id)getRedEnvParam;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

