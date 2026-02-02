//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary;

@interface MMLiveMgr
{
    NSMutableDictionary *_openedLiveItemDict;
    NSRecursiveLock *_lock;
    OrderedDictionary *_fetchLiveInfoQueue;
    NSMutableDictionary *_fetchingDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *fetchingDict; // @synthesize fetchingDict=_fetchingDict;
@property(retain, nonatomic) OrderedDictionary *fetchLiveInfoQueue; // @synthesize fetchLiveInfoQueue=_fetchLiveInfoQueue;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *openedLiveItemDict; // @synthesize openedLiveItemDict=_openedLiveItemDict;
- (void)onGetNewXmlFinderChatRoomLiveTipsbar:(id)arg1;
- (void)onGetNewXmlFinderChatRoomLiveCloseMsg:(id)arg1;
- (void)onGetNewXmlCloseLiveMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2;
- (id)currentLiveChatRoomId;
- (_Bool)isGroupLiveMessage:(id)arg1;
- (void)notifyLiveCountChanged:(id)arg1;
- (void)updateOpenedLiveIfNecessary:(id)arg1;
- (void)removeOpenedLive:(unsigned long long)arg1 roomId:(id)arg2;
- (void)removeOpenedLive:(id)arg1;
- (void)addOpenedLiveList:(id)arg1 roomId:(id)arg2;
- (void)addOpenedLive:(id)arg1;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)updateLiveStatusEndWithLiveId:(unsigned long long)arg1;
- (_Bool)checkFetchLiveInfoQueue;
- (void)batchFetchLiveInfo:(id)arg1 roomId:(id)arg2;
- (void)loadOpenedLivesAsync;
- (void)loadLiveInfoIfExists:(id)arg1;
- (void)closeLiveTipBarWithRoomId:(id)arg1;
- (void)closeLiveTipBar:(unsigned long long)arg1 roomId:(id)arg2;
- (id)openedLiveList:(id)arg1;
- (id)unreadLiveList:(id)arg1;
- (unsigned long long)unreadLiveCount:(id)arg1;
- (void)onServiceClearData;
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

