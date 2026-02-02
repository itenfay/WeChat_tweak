//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSData, NSMutableArray, NSRecursiveLock, NSString;

@interface VOIPSyncMgr
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    unsigned long long mRoomId;
    long long mRoomKey;
    _Bool m_isDoingSync;
    int cancelInviteStatus;
    NSData *mKeyBuf;
    NSMutableArray *mOplogList;
    NSRecursiveLock *mOplogLock;
    MMTimer *m_syncTimer;
    unsigned long long mSendVoipSyncTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mSendVoipSyncTime; // @synthesize mSendVoipSyncTime;
@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList;
@property(retain, nonatomic) NSData *mKeyBuf; // @synthesize mKeyBuf;
- (void)StopSession;
- (void)PushRelayData:(id)arg1;
- (void)PushControlStatus:(unsigned int)arg1;
- (void)SyncByNotifyWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (void)StartSessionWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (void)forceCheck_next_sync;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StopSyncTimer;
- (void)dealloc;
- (id)init;
- (int)getSitemStatus;
- (long long)getRoomKey;
- (unsigned long long)getRoomId;
- (void)onServiceClearData;
- (void)ClearOplog;
- (void)RemoveOplogArray:(id)arg1;
- (id)GetOplogArray;
- (void)AddOplog:(unsigned int)arg1 data:(id)arg2;
- (void)SendSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;
- (_Bool)isSyncKeyNew:(id)arg1;
- (void)check_next_sync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

