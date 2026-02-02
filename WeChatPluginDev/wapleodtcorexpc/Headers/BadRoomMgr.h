//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface BadRoomMgr
{
    NSObject<OS_dispatch_queue> *m_updateDigestQueue;
    NSRecursiveLock *_m_oLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
- (id)HandleSysMsg:(id)arg1 revokeMsgId:(long long *)arg2;
- (void)notifyWithData:(id)arg1;
- (void)onWillDeleteSession:(id)arg1;
- (void)onDeleteBadRoomMsg:(long long)arg1 createTime:(unsigned int)arg2 chatName:(id)arg3;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)onDeleteBrokenMsg:(unsigned int)arg1 chatName:(id)arg2;
- (void)updateSessionInfos:(id)arg1 updateSequenceDigests:(id)arg2;
- (id)genSessionByDigest:(id)arg1 updateSequenceDigests:(id)arg2;
- (id)convertDataToDigest:(id)arg1;
- (void)batchHandleDigestDatas:(id)arg1;
- (void)onNewSyncBadRoomBatchHandleDigest:(id)arg1;
- (void)onNewSyncBadRoomClearUnread:(id)arg1;
- (void)onServiceInit;
- (void)saveDeleteMsg:(id)arg1;
- (id)loadDeleteMsg;
- (id)getPBPath;
- (void)AddDeletedMsg:(long long)arg1 createTime:(unsigned int)arg2;
- (_Bool)existsInDeletedMsg:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

