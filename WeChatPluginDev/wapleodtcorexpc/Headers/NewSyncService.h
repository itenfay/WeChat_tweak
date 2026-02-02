//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMDB, NSDate, NSObject, NSRecursiveLock, NSString, OplogDataLogic;
@protocol OS_dispatch_queue;

@interface NewSyncService
{
    _Bool m_bHasInit;
    unsigned int m_uiSelector;
    unsigned int m_uiSyncScene;
    unsigned int m_uiSyncContinueCount;
    NSString *m_lastSyncKeyMd5;
    NSDate *m_tLastNotify;
    NSDate *m_tLastLongConnDisconnect;
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    OplogDataLogic *m_oplogData;
    _Bool m_bNeedSyncOplog;
    _Bool m_bSyncOplog;
    _Bool m_bSyncOpError;
    _Bool m_bSyncOperating;
    _Bool m_lastSyncFinishCallingExtension;
    unsigned int m_syncEventID;
    _Bool m_bIsSyncPause;
    _Bool m_isGettingData;
    _Bool m_bFirstSyncAfterBgfgChange;
    _Bool m_bNeedSync;
    _Bool _m_bHasSync;
    NSObject<OS_dispatch_queue> *m_actionNotifySyncQueue;
}

- (void).cxx_destruct;
@property _Bool m_bHasSync; // @synthesize m_bHasSync=_m_bHasSync;
- (_Bool)IsLastSyncFinishCallingExtension;
- (void)onNewSyncOplogFail;
- (void)onNewSyncOplogOK;
- (_Bool)handleBatchMessages:(id)arg1 ignoreSession:(_Bool)arg2;
- (void)makeSyncResume;
- (void)makeSyncPause;
- (void)StartOplog:(unsigned int)arg1 Oplog:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (unsigned int)StartOplog:(unsigned int)arg1 Oplog:(id)arg2;
- (void)HandleOplog:(id)arg1 Event:(unsigned int)arg2;
- (void)NeedToSyncOplog;
- (void)checkSyncOplog;
- (_Bool)InsertOplog:(unsigned int)arg1 Oplog:(id)arg2 Sync:(_Bool)arg3;
- (void)startSyncOplog;
- (_Bool)ignoreNotifyDataWhenSyncOperating;
- (void)HandleNewSyncPush:(id)arg1;
- (void)markSyncOperating;
- (void)HandleSyncResp:(id)arg1 handleResult:(_Bool)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SetSelector:(unsigned int)arg1;
- (unsigned int)GetSelector;
- (void)checkNeedSync;
- (void)setNeedSyncWithScene:(int)arg1;
- (void)LongLinkTimerSync;
- (void)AfterManualAuthNotifySync;
- (_Bool)SlientPushAwakeToNewSync;
- (_Bool)VOIPPushAwakeToSyncByVoIP;
- (_Bool)VOIPPushAwakeToSyncByCallKit;
- (_Bool)VOIPPushAwakeToNewSyncByLocalNotification;
- (_Bool)BackGroundFetchToSync;
- (void)ProcessStartSync;
- (void)BackGroundToForeGroundSync;
- (void)ApnsNotifySync;
- (void)NeedToSync;
- (_Bool)NotifyToSync;
- (_Bool)creatPBNewSyncEvent:(unsigned int)arg1;
- (_Bool)InternalCreateSync:(unsigned int)arg1;
- (_Bool)StartNewInit:(unsigned int)arg1;
- (void)onWillSuspend;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)SetLastLongConnDisconectTime:(id)arg1;
- (void)SetLastNotifyTime:(id)arg1;
- (void)resetGettingData;
- (_Bool)isGettingData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *actionNotifySyncQueue; // @synthesize actionNotifySyncQueue=m_actionNotifySyncQueue;
- (void)InitDB:(id)arg1 Lock:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

