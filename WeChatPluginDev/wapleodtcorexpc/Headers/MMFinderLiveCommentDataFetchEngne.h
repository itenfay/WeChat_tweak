//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveCommentDataFetchEngne
{
    int _logCommentOpen;
}

+ (void)logForRewardRankComment:(id)arg1 logStr:(id)arg2;
+ (id)filterNotifyTypeCommentData:(id)arg1 taskId:(id)arg2;
+ (id)filterAdAppMsg:(id)arg1 type:(unsigned int)arg2;
+ (id)filterLikeMsg:(id)arg1;
+ (void)filterUnValidMsg:(id)arg1;
@property(nonatomic) int logCommentOpen; // @synthesize logCommentOpen=_logCommentOpen;
- (void)logForSpecialNotifyToMe:(id)arg1 logStr:(id)arg2;
- (void)checkAndPickExraInfoFromGlobalRankUpdateNoticeMsg:(id)arg1 forTaskId:(id)arg2;
- (void)checkAndPickExtraInfoFromCommentDatas:(id)arg1 forTaskId:(id)arg2;
- (void)logForRedPacketComment:(id)arg1 logStr:(id)arg2;
- (void)logForJoinFansGroupNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForGlobalRankUpdateNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForRewardRankingNoticeComment:(id)arg1 logStr:(id)arg2;
- (void)logForComboLiveRewardComment:(id)arg1 logStr:(id)arg2 selfUserName:(id)arg3;
- (void)logForCommentData:(id)arg1;
- (_Bool)isCommentMsgTypeBanCommentPersonal:(unsigned int)arg1;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)arg1;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (id)commentDataMgr;
- (_Bool)applyGetLiveMessageWithTaskId:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

