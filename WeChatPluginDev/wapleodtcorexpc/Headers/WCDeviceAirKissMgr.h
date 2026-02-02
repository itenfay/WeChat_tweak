//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCDeviceAirKissMgr
{
    _Bool m_isStarted;
}

- (_Bool)setWifi:(id)arg1 Password:(id)arg2;
- (id)getTableKey:(id)arg1;
- (id)getAESKey:(id)arg1;
- (id)getWifiPassword:(id)arg1;
- (void)stopAirKiss;
- (_Bool)startAirKiss:(id)arg1 Password:(id)arg2 Key:(id)arg3 ProcInt:(int)arg4 DataInt:(int)arg5;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

