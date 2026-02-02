//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicJoinLiveBattleInfoWrap, MMFinderLiveConnectMicPKInfo, MMFinderLiveConnectMicUsersInfo, MMLiveSEIConnectMicMsg, NSMutableArray, NSString, OrderedDictionary;

@interface MMFinderLiveCDNViewerMicLogic
{
    _Bool _isVideoLandscapeMode;
    _Bool _isAnchorMain;
    MMFinderLiveConnectMicPKInfo *_anchorPkInfo;
    OrderedDictionary *_cachedConnectMicAudienceDict;
    OrderedDictionary *_cachedConnectMicAnchorDict;
    OrderedDictionary *_cachedOtherRoomMicAudienceDict;
    OrderedDictionary *_otherRoomMicAnchorDict;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    MMFinderLiveConnectMicJoinLiveBattleInfoWrap *_joinLiveBattleInfoWrap;
    MMLiveSEIConnectMicMsg *_lastSeiMicMsg;
    NSString *_micVroomId;
    unsigned long long _micVroomIdVersion;
    NSMutableArray *_micSeatBaseInfoListInAudioRoomMode;
    NSMutableArray *_micSeatBaseInfoListInOrdinaryMode;
    unsigned long long _battleNotifyVersion;
}

+ (id)generateNoUserMicUsersInfoForMultiPlayerAudioRoomModeWithAnchorSdkUserId:(id)arg1 andAnchorContact:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long battleNotifyVersion; // @synthesize battleNotifyVersion=_battleNotifyVersion;
@property(retain, nonatomic) NSMutableArray *micSeatBaseInfoListInOrdinaryMode; // @synthesize micSeatBaseInfoListInOrdinaryMode=_micSeatBaseInfoListInOrdinaryMode;
@property(retain, nonatomic) NSMutableArray *micSeatBaseInfoListInAudioRoomMode; // @synthesize micSeatBaseInfoListInAudioRoomMode=_micSeatBaseInfoListInAudioRoomMode;
@property(nonatomic) unsigned long long micVroomIdVersion; // @synthesize micVroomIdVersion=_micVroomIdVersion;
@property(copy, nonatomic) NSString *micVroomId; // @synthesize micVroomId=_micVroomId;
@property(nonatomic) _Bool isAnchorMain; // @synthesize isAnchorMain=_isAnchorMain;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *lastSeiMicMsg; // @synthesize lastSeiMicMsg=_lastSeiMicMsg;
@property(retain, nonatomic) MMFinderLiveConnectMicJoinLiveBattleInfoWrap *joinLiveBattleInfoWrap; // @synthesize joinLiveBattleInfoWrap=_joinLiveBattleInfoWrap;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(retain, nonatomic) OrderedDictionary *otherRoomMicAnchorDict; // @synthesize otherRoomMicAnchorDict=_otherRoomMicAnchorDict;
@property(retain, nonatomic) OrderedDictionary *cachedOtherRoomMicAudienceDict; // @synthesize cachedOtherRoomMicAudienceDict=_cachedOtherRoomMicAudienceDict;
@property(retain, nonatomic) OrderedDictionary *cachedConnectMicAnchorDict; // @synthesize cachedConnectMicAnchorDict=_cachedConnectMicAnchorDict;
@property(retain, nonatomic) OrderedDictionary *cachedConnectMicAudienceDict; // @synthesize cachedConnectMicAudienceDict=_cachedConnectMicAudienceDict;
@property(nonatomic) _Bool isVideoLandscapeMode; // @synthesize isVideoLandscapeMode=_isVideoLandscapeMode;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *anchorPkInfo; // @synthesize anchorPkInfo=_anchorPkInfo;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(_Bool)arg1;
- (void)updateMicUsersInfoSeatNameWithMicSeatBaseInfoList:(id)arg1;
- (void)updateSeatNameForMicSeatBaseInfo:(id)arg1 withMicSeatBaseInfoList:(id)arg2;
- (void)handleFinderLiveSeatInfoListUpdated:(id)arg1 isAudioRoomMode:(_Bool)arg2;
- (void)handleFinderLiveMicConfigUpdated:(id)arg1 fromFirstJoinLive:(_Bool)arg2;
- (void)checkAndInitMicSeatBaseInfoListInOrdinaryMode;
- (void)checkAndInitMicSeatBaseInfoListInAudioRoomMode;
- (void)updateKtvSingerFlagInAudioRoomMicUsersInfo;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateAudioRoomInfoView;
- (void)realCheckAndUpdateMicUsersStatusForCdnAudienceWithAudioRoomSeiMicMsg:(id)arg1;
- (void)realUpdateConnectMicUsersInfoForCDNUserWithAudioRoomSeiMicMsg:(id)arg1;
- (void)onTaskedBonusStateChangedByOrchestrator:(id)arg1;
- (id)liveTask;
- (void)handleFinderLiveMicInfo:(id)arg1 fromFirstJoinLive:(_Bool)arg2 updateMicUsersListForCdnAudience:(_Bool)arg3;
- (void)handleCurrentLiveRoomMicAudienceList:(id)arg1 fromFirstJoinLive:(_Bool)arg2;
- (_Bool)handleMicAudienceList:(id)arg1 fromFirstJoinLive:(_Bool)arg2 isInOtherRoom:(_Bool)arg3 anchorSdkUserId:(id)arg4;
- (_Bool)handleNewAnchorMicInfos:(id)arg1 fromFirstJoinLive:(_Bool)arg2;
- (void)handleNewAnchorMicInfosInJoinLiveResp:(id)arg1;
- (_Bool)handleNewOtherRoomMicAnchorUser:(id)arg1;
- (_Bool)handleFinderLiveMicPkInfo:(id)arg1 fromFirstJoinLive:(_Bool)arg2;
- (void)handleAnchorNewPkInfoInJoinLiveResp:(id)arg1;
- (void)handleAnchorNewCloseConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 applyId:(id)arg3 sessionId:(id)arg4;
- (void)handleAnchorNewAcceptConnectMicFromContact:(id)arg1 pkroomAnchors:(id)arg2 sessionId:(id)arg3 vroomId:(id)arg4 vroomIdVersion:(unsigned long long)arg5;
- (void)handleAnchorNewApplyConnectMicFromContact:(id)arg1 applyAnchor:(id)arg2 acceptorAnchor:(id)arg3 pkroomAnchors:(id)arg4 applyId:(id)arg5 randomMicBuffer:(id)arg6 expiredTime:(unsigned long long)arg7;
- (_Bool)checkIsSameMicUserInfo:(id)arg1 withOtherMicUserInfo:(id)arg2;
- (_Bool)checkIsSameMicUserInfo:(id)arg1 withApplyId:(id)arg2 andSessionId:(id)arg3;
- (id)handleNewAnchorPkInfoAndGenerateMicUser:(id)arg1 checkSessionId:(_Bool)arg2;
- (id)getSortedMicUserListWithOriginalList:(id)arg1;
- (void)updateOtherRoomMicUsersWithAnchorSdkUserId:(id)arg1 anchorSEIInfo:(id)arg2;
- (void)showOtherMicAnchorMicMutedToastWithUserInfo:(id)arg1;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged:(id)arg1;
- (void)updateOtherConnectMicAnchor:(id)arg1 anchorSeiStatus:(unsigned int)arg2 anchorSEIInfo:(id)arg3;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)realCheckAndUpdateMicUsersStatusForCdnAudienceWithSeiMicMsg:(id)arg1;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)realUpdateConnectMicUsersInfoForCDNUserWithSeiMicMsg:(id)arg1 cdnVideoDisplayType:(unsigned long long)arg2;
- (id)findMicAudienceUserInfoForCDNUserBySdkUserId:(id)arg1;
- (void)notifyConnectMicWithUserInfo:(id)arg1;
- (void)checkRemoteClosedCachedOtherRoomMicAudienceForCDNUser;
- (void)checkRemoteClosedCachedMicAudienceForCDNUser;
- (void)checkAndClearConnectMicAudienceForCDNUser;
- (void)checkAndClearConnectMicAnchorForCDNUser;
- (void)checkAndClearConnectMicUsersForCDNUser;
- (void)clearConnectMicAnchorUserInfo:(id)arg1;
- (void)resetConnectMicUsersInfoForCDNUser;
- (void)checkConnectMicUserInfoAndVideoSizeForCdnAudience;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)checkAndUpdateLiveView;
- (void)updateBattleReportInfo;
- (void)updateUserPkStateUI;
- (void)startOrStopAnchorSEISynchronize:(_Bool)arg1;
@property(readonly, nonatomic) NSString *currentAnchorFinderUserName;
- (void)checkAndClearInvitedPkState;
- (void)receiveAnchorConnectMicBattleInfo:(id)arg1 fromJoinLive:(_Bool)arg2 micSessionId:(id)arg3 vroomId:(id)arg4 serverUnixEpochTimeInSeconds:(unsigned long long)arg5;
- (unsigned int)getAudienceDelayTimeInPK;
- (void)updateJoinLiveBattleInfoWrapWithBattleInfo:(id)arg1 andMicSessionId:(id)arg2 vroomId:(id)arg3;
- (void)checkAndChangeToPkStateStartedForAudience;
- (void)clearAnchorPkInfo;
- (void)resetAnchorPkInfo;
- (id)findMicAnchorUserInfoFromAllDictWithSessionId:(id)arg1;
- (id)findMicAnchorUserInfoFromDict:(id)arg1 withSessionId:(id)arg2;
- (id)findValidMicAnchorUserInfoFromAllDictWithSdkUserId:(id)arg1;
- (void)receiveOtherRoomAudienceCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 sdkUserId:(id)arg3;
- (void)receiveAnchorCloseConnectMicMsgForAudienceWithSessionId:(id)arg1;
- (void)receiveAnchorConnectMicStatus:(long long)arg1 connectMicFinderContact:(id)arg2 coverImageUrlString:(id)arg3 liveRoomImages:(id)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 sdkUserId:(id)arg7 sdkRoomId:(unsigned int)arg8 fromJoinLive:(_Bool)arg9;
- (void)receiveConnectMicOtherRoomAudienceUser:(id)arg1 updateMicUsersListForCdnAudience:(_Bool)arg2;
- (void)receiveConnectMicOtherRoomAudienceUser:(id)arg1;
- (void)receiveConnectMicUserForAudience:(id)arg1 updateMicUsersListForCdnAudience:(_Bool)arg2;
- (void)receiveConnectMicAudienceUser:(id)arg1 expiredTime:(unsigned long long)arg2 fromJoinLive:(_Bool)arg3 updateMicUsersListForCdnAudience:(_Bool)arg4;
- (void)receiveConnectMicFinderContact:(id)arg1 withVideo:(_Bool)arg2 sdkUserId:(id)arg3 expiredTime:(unsigned long long)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 seatId:(unsigned int)arg7 fromJoinLive:(_Bool)arg8 isInOtherRoom:(_Bool)arg9 anchorSdkUserId:(id)arg10 updateMicUsersListForCdnAudience:(_Bool)arg11;
- (void)receiveConnectMicFinderContact:(id)arg1 withVideo:(_Bool)arg2 sdkUserId:(id)arg3 expiredTime:(unsigned long long)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 seatId:(unsigned int)arg7 fromJoinLive:(_Bool)arg8 isInOtherRoom:(_Bool)arg9 anchorSdkUserId:(id)arg10;
- (void)addCachedOtherRoomMicAudienceWithUserInfo:(id)arg1;
- (void)addCachedConnectMicAnchorWithUserInfo:(id)arg1;
- (void)addCachedConnectMicAudienceWithUserInfo:(id)arg1;
- (id)findConnectMicUserInfoInDict:(id)arg1 bySdkUserId:(id)arg2;
- (void)checkAllCachedMicUsersDictWithUserInfo:(id)arg1;
- (unsigned long long)getAvailableMicIndexFromSeatId:(unsigned int)arg1;
- (void)checkCachedMicAnchorDictWithClosedMicSessionId:(id)arg1;
- (void)checkCachedMicAudienceDictWithClosedMicSessionId:(id)arg1;
- (void)receiveCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 closeMicInfo:(id)arg3;
@property(readonly, nonatomic) _Bool isAudiencePkEnable;
@property(readonly, nonatomic) _Bool isMultiAnchorMicEnabled;
- (id)initWithTaskId:(id)arg1;
- (void)checkJoinLiveBattleInfoWrap;
- (void)checkAndClearOverPkState;
- (_Bool)handleBattleInfo:(id)arg1 fromJoinLive:(_Bool)arg2 micSessionId:(id)arg3 serverUnixEpochTimeInSeconds:(unsigned long long)arg4;
- (void)decreasePkInfoDisplayedTimeLeft;
- (void)assemblePkUIConf;
- (_Bool)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5 ownerPlayerInfo:(id)arg6 otherPlayerInfo:(id)arg7 winningStreakCount:(unsigned int)arg8;
- (void)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5;
- (void)updateConnectMicAnchorUserPkState:(unsigned long long)arg1;
- (void)checkAndUpdateMicLayoutModeWithBattleLayoutValue:(unsigned int)arg1;
- (void)checkClearPkInfoWhenSeiUpdated;
- (void)checkJoinLiveBattleInfoWrap_new;
- (void)handlePkStateAborted;
- (void)handlePkStateOver;
- (void)checkAndClearOverPkState_new;
- (_Bool)handleBattleInfo_new:(id)arg1 fromJoinLive:(_Bool)arg2 micSessionId:(id)arg3 vroomId:(id)arg4 serverUnixEpochTimeInSeconds:(unsigned long long)arg5;
- (void)decreasePkInfoDisplayedTimeLeft_new;
- (void)assemblePkUIConf_new:(unsigned long long)arg1;
- (_Bool)updateNewConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 battleInfo:(id)arg3 serverUnixEpochTimeInSeconds:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

