//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WCDevicedebugSettingData;

@interface WCDeviceDebugMgr
{
    NSMutableArray *m_logs;
    NSMutableArray *m_contacts;
    WCDevicedebugSettingData *m_settingData;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_userIndex;
}

- (void).cxx_destruct;
- (void)reloadContacts;
- (id)getSettingPath;
- (void)addObjecttoLogs:(id)arg1;
- (void)addLog:(id)arg1 isError:(_Bool)arg2 forDevice:(id)arg3;
- (void)addLog:(id)arg1 isError:(_Bool)arg2 forDid:(long long)arg3;
- (_Bool)checkPremissionIsOk:(id)arg1;
- (void)cleanAllLogs;
- (long long)getLastIndexForUser:(id)arg1;
- (void)setLastIndex:(long long)arg1 forUser:(id)arg2;
- (id)getLogsFrom:(int)arg1 Limit:(int)arg2;
- (void)addInfo:(id)arg1;
- (void)addTips:(id)arg1;
- (void)addErrorLog:(id)arg1 forDevice:(id)arg2;
- (void)addDebugLog:(id)arg1 forDevice:(id)arg2;
- (void)addErrorLog:(id)arg1 forDid:(long long)arg2;
- (void)addDebugLog:(id)arg1 forDid:(long long)arg2;
- (_Bool)isUserOpenLog:(id)arg1;
- (_Bool)hasCanLogUser;
- (id)getAllLogUser;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

