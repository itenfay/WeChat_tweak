//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCDeviceAccountWCDB;

@interface WCDeviceAccountMgr
{
    WCDeviceAccountWCDB *m_devAccountDB;
}

- (void).cxx_destruct;
- (_Bool)setAirKissData:(id)arg1 ForKey:(id)arg2;
- (id)getAirKissDataForKey:(id)arg1;
- (void)delDeviceInfoForDeviceType:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceInfoForUser:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceAccountForUser:(id)arg1;
- (_Bool)setDeviceInfo:(id)arg1;
- (id)getM7Device;
- (id)getDeviceInfoForDID:(long long)arg1;
- (id)getDeviceInfoForMd5Str:(id)arg1;
- (id)getDeviceInfoForDeviceType:(id)arg1 AndDeviceId:(id)arg2;
- (id)getDeviceInfoForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getAllDeviceInfosForUser:(id)arg1;
- (unsigned int)getBoundDeviceCount:(id)arg1;
- (_Bool)hasBoundDevice:(id)arg1;
- (id)getAllDeviceInfos;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

