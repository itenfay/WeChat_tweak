//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, WXGMigrationInfoDB;
@protocol OS_dispatch_queue;

@interface WXGMigrationMgr
{
    WXGMigrationInfoDB *m_infoDB;
    NSObject<OS_dispatch_queue> *m_updateTimeQueue;
    _Bool m_bShouldNotInterruption;
    NSString *m_deviceID;
    _Bool m_bCheckState;
    unsigned int m_deviceType;
    _Bool m_bBackground;
}

- (void).cxx_destruct;
- (void)onAuthOK;
- (_Bool)hasBeenMigrationWithSessionNameArray:(id)arg1;
- (_Bool)hasBeenMigration;
- (void)resetSession:(id)arg1 withBeginTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)arg1 withTmpLastTime:(unsigned int)arg2;
- (void)setUserDeviceIDAndCreateTable:(id)arg1;
- (unsigned int)getPairDeviceType;
- (void)setPairDeviceType:(unsigned int)arg1;
- (void)showUseHotspotContinueToMigrate;
- (void)showLocalNotificationWhenChatMigrationWorking;
- (void)canInterrutpion;
- (void)shouldNotInterruption;
- (_Bool)isMigrationWorking;
- (void)p_onMainThreadShowServerEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)p_onMainThreadShowClientEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)checkState;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

