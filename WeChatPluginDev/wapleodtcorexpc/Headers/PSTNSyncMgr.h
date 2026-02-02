//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSRecursiveLock, NSString;

@interface PSTNSyncMgr
{
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    int mRoomId;
    long long mRoomKey;
    long long mCallSeq;
    _Bool m_isDoingSync;
    unsigned int m_nCalledStatus;
    unsigned int m_nStatusSyncKey;
    int mAcceptDataFlag;
    MMTimer *m_syncTimer;
    NSMutableArray *_mOplogList;
    NSRecursiveLock *_mOplogLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock=_mOplogLock;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList=_mOplogList;
@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
- (void)StopSession;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2 andCallSeq:(long long)arg3;
- (void)forceCheck_next_sync;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StopSyncTimer;
- (id)init;
- (void)setAcceptDataFlag:(int)arg1;
- (void)setStatusSyncKey:(unsigned int)arg1;
- (void)setCalledStatus:(unsigned int)arg1;
- (unsigned int)getStatusSyncKey;
- (long long)getRoomKey;
- (int)getRoomId;
- (void)onServiceClearData;
- (void)SendSyncRequestFor;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)check_next_sync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

