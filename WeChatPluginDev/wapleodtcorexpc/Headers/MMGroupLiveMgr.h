//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveWordingInfo, NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary;

@interface MMGroupLiveMgr
{
    NSMutableDictionary *_liveInfoWrapDict;
    NSMutableDictionary *_openedLiveItemDict;
    NSRecursiveLock *_lock;
    OrderedDictionary *_fetchLiveInfoQueue;
    NSMutableDictionary *_fetchingDict;
    MMGroupLiveWordingInfo *_startLiveTipInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMGroupLiveWordingInfo *startLiveTipInfo; // @synthesize startLiveTipInfo=_startLiveTipInfo;
@property(retain, nonatomic) NSMutableDictionary *fetchingDict; // @synthesize fetchingDict=_fetchingDict;
@property(retain, nonatomic) OrderedDictionary *fetchLiveInfoQueue; // @synthesize fetchLiveInfoQueue=_fetchLiveInfoQueue;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *openedLiveItemDict; // @synthesize openedLiveItemDict=_openedLiveItemDict;
@property(retain, nonatomic) NSMutableDictionary *liveInfoWrapDict; // @synthesize liveInfoWrapDict=_liveInfoWrapDict;
- (void)onGetNewXmlOnlineLiveListMsg:(id)arg1;
- (void)onGetNewXmlLiveMicSuccMsg:(id)arg1;
- (void)onGetNewXmlCloseLiveMicMsg:(id)arg1;
- (void)onGetNewXmlCloseApplyLiveMicMsg:(id)arg1;
- (void)onGetNewXmlBanLiveCommentMsg:(id)arg1;
- (void)onGetNewXmlCloseLiveMsg:(id)arg1;
- (void)onGetNewXmlAcceptLiveMicMsg:(id)arg1;
- (void)onGetNewXmlApplyLiveMicMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2;
- (id)groupLiveStartTip;
- (void)checkAndUpdateExptData;
- (void)clearExptData;
- (_Bool)displayAnchorVerifyPage;
- (_Bool)displayAudiencePolicyPage;
- (_Bool)checkAudiencePhoneNumber;
- (_Bool)supportLandscape;
- (id)currentLiveChatRoomId;
- (_Bool)checkCanCreateLiveAndShowAlert;
- (_Bool)isDeviceCanCreateLive;
- (_Bool)isGroupLiveMessage:(id)arg1;
- (_Bool)canCreateChatRoomLiveWithContact:(id)arg1;
- (_Bool)setAnchorStatusWithLiveId:(unsigned long long)arg1 andAnchorStatus:(id)arg2;
- (_Bool)kickAudienceWithUserName:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (_Bool)getLiveOnlineUserStateListWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)getLiveOnlineUserListWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)getLiveInfoWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (unsigned int)liveVerify;
- (_Bool)likeWithLikeCount:(unsigned long long)arg1 liveId:(unsigned long long)arg2 roomId:(id)arg3 andRetryCount:(unsigned int)arg4;
- (_Bool)likeWithLikeCount:(unsigned long long)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (_Bool)banLiveCommentWithLiveId:(unsigned long long)arg1 enableComment:(_Bool)arg2 andRoomId:(id)arg3;
- (_Bool)openLiveReplayWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 enableLiveReplay:(_Bool)arg3;
- (_Bool)postLiveMessageWithLiveId:(unsigned long long)arg1 msgType:(unsigned int)arg2 content:(id)arg3 clientMsgId:(id)arg4 andRoomId:(id)arg5;
- (_Bool)getLiveMessageWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)getLiveOnlineMemberByIdWithLiveId:(unsigned long long)arg1 andIdentityIdList:(id)arg2;
- (_Bool)getLiveMicAudienceInfoWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)modLiveMicModeWithLiveId:(unsigned long long)arg1 roomId:(id)arg2 useVideo:(_Bool)arg3;
- (_Bool)refreshLiveMicWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andLiveMicId:(id)arg3;
- (_Bool)updateLiveMicEnableWithLiveId:(unsigned long long)arg1 roomId:(id)arg2 andEnable:(_Bool)arg3;
- (_Bool)closeLiveMicWithLiveId:(unsigned long long)arg1 sdkUserId:(id)arg2 roomId:(id)arg3 andLiveMicId:(id)arg4;
- (_Bool)acceptLiveMicWithLiveId:(unsigned long long)arg1 sdkUserId:(id)arg2 roomId:(id)arg3 andLiveMicId:(id)arg4;
- (_Bool)applyLiveMicWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)setOfflineWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)closeLiveWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andCutLive:(_Bool)arg3;
- (_Bool)shareLiveWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)joinLiveWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)createLiveWithLiveName:(id)arg1 andRoomId:(id)arg2;
- (id)getLiveInfoWrap:(unsigned long long)arg1;
- (id)createLiveInfoWrapIfNotExists:(unsigned long long)arg1;
- (void)notifyLiveCountChanged:(id)arg1;
- (void)updateOpenedLiveIfNecessary:(id)arg1;
- (void)removeOpenedLive:(unsigned long long)arg1 roomId:(id)arg2;
- (void)removeOpenedLive:(id)arg1;
- (void)addOpenedLiveList:(id)arg1 roomId:(id)arg2;
- (void)addOpenedLive:(id)arg1;
- (_Bool)checkFetchLiveInfoQueue;
- (void)batchFetchLiveInfo:(id)arg1 roomId:(id)arg2;
- (void)loadOpenedLivesAsync;
- (void)loadLiveInfoIfExists:(id)arg1;
- (void)closeLiveTipBarWithRoomId:(id)arg1;
- (void)closeLiveTipBar:(unsigned long long)arg1 roomId:(id)arg2;
- (id)openedLiveList:(id)arg1;
- (id)unreadLiveListFilteredSelfJoined:(id)arg1;
- (id)unreadLiveList:(id)arg1;
- (id)getAnchorStatus:(unsigned long long)arg1;
- (unsigned long long)unreadLiveCountFilteredSelfJoined:(id)arg1;
- (unsigned long long)unreadLiveCount:(id)arg1;
- (void)clearAllLive;
- (void)clearLive:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (_Bool)sendGetLiveOnlineMemberByIdRequestBy:(unsigned long long)arg1 andIdentityIdList:(id)arg2;
- (_Bool)sendGetLiveMicAudienceInfoRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)sendModLiveMicModeRequestBy:(unsigned long long)arg1 roomId:(id)arg2 andMicMode:(unsigned int)arg3;
- (_Bool)setAnchorStatusRequestBy:(unsigned long long)arg1 andAnchorStatus:(id)arg2;
- (_Bool)sendKickAudienceRequestBy:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (_Bool)sendGetLiveOnlineStateByRoomRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)sendGetLiveOnlineByRoomRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)sendGetLiveInfoRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (unsigned int)sendLiveVerifyRequest;
- (_Bool)sendLikeRequestBy:(unsigned long long)arg1 liveId:(unsigned long long)arg2 roomId:(id)arg3 andRetryCount:(unsigned int)arg4;
- (_Bool)sendBanLiveCommentRequestBy:(unsigned long long)arg1 enableComment:(_Bool)arg2 andRoomId:(id)arg3;
- (_Bool)sendOpenLiveReplayRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2 enableLiveReplay:(_Bool)arg3;
- (_Bool)sendPostLiveMessageRequestBy:(unsigned long long)arg1 msgType:(unsigned int)arg2 content:(id)arg3 clientMsgId:(id)arg4 andRoomId:(id)arg5;
- (_Bool)sendGetLiveMessageRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2 offline:(_Bool)arg3;
- (_Bool)sendRefreshLiveMicWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andLiveMicId:(id)arg3;
- (_Bool)sendCloseApplyLiveMicRequestByLiveId:(unsigned long long)arg1 roomId:(id)arg2 andEnable:(_Bool)arg3;
- (_Bool)sendCloseLiveMicRequestByLiveId:(unsigned long long)arg1 sdkUserId:(id)arg2 roomId:(id)arg3 andLiveMicId:(id)arg4;
- (_Bool)sendAcceptLiveMicRequestBy:(unsigned long long)arg1 sdkUserId:(id)arg2 roomId:(id)arg3 andLiveMicId:(id)arg4;
- (_Bool)sendApplyLiveMicRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)sendCloseLiveRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2 andCutLive:(_Bool)arg3;
- (_Bool)sendShareLiveRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)sendJoinLiveRequestBy:(unsigned long long)arg1 andRoomId:(id)arg2;
- (_Bool)sendCreateLiveRequestBy:(id)arg1 andRoomId:(id)arg2;
- (void)onExptItemListChange;
- (void)handleGetLiveOnlineMemberByIdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLiveMicAudienceInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleModLiveMicModeResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSetAnchorStatusResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleKickAudienceResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLiveOnlineStateByRoomResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLiveOnlineByRoomResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLiveInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveVerifyResp:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyOnLiveLikeResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (void)handleMMLiveLikeResp:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyOnBanLiveCommentResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableComment:(_Bool)arg4;
- (void)handleMMLiveBanLiveCommentResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveOpenLiveReplayResp:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyOnPostLiveMessageResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (void)handleMMLivePostLiveMessageResp:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyOnGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)handleMMLiveGetLiveMessageResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveRefreshLiveMicResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveCloseApplyLiveMicResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveCloseLiveMicResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveAcceptLiveMicResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveApplyLiveMicResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveCloseLiveResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveShareLiveResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveJoinLiveResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleMMLiveCreateLiveResp:(id)arg1 Event:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

