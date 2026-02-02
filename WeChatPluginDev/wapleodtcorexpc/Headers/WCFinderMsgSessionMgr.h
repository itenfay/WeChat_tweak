//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, WCFinderMsgAuthorSessionMgr, WCFinderMsgSessionInfoStorage, WCFinderMsgSessionStatusStorage;

@interface WCFinderMsgSessionMgr
{
    NSMutableOrderedSet *m_asFansSessionIdListWithNewArrivalMsg;
    WCFinderMsgSessionInfoStorage *_asFansSessionStorage;
    WCFinderMsgSessionInfoStorage *_asAliasSessionStorage;
    NSMutableDictionary *_sessionStoragesDic;
    WCFinderMsgAuthorSessionMgr *_authorSessionMgr;
    WCFinderMsgSessionInfoStorage *_asAuthorSessionStorage;
    WCFinderMsgSessionStatusStorage *_sessionStatusStorage;
    NSMutableSet *_finderUserNamesUpdated;
    NSMutableSet *_sessionIdsForUpdatedStatusFromSvr;
    NSMutableDictionary *_contactExtInfoDict;
}

+ (id)defaultFinderContactForUsername:(id)arg1;
+ (_Bool)isFinderContactUserName:(id)arg1;
+ (unsigned int)accountTypeForUsername:(id)arg1;
+ (id)userNameForMyAccountType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *contactExtInfoDict; // @synthesize contactExtInfoDict=_contactExtInfoDict;
@property(retain, nonatomic) NSMutableSet *sessionIdsForUpdatedStatusFromSvr; // @synthesize sessionIdsForUpdatedStatusFromSvr=_sessionIdsForUpdatedStatusFromSvr;
@property(retain, nonatomic) NSMutableSet *finderUserNamesUpdated; // @synthesize finderUserNamesUpdated=_finderUserNamesUpdated;
@property(retain, nonatomic) WCFinderMsgSessionStatusStorage *sessionStatusStorage; // @synthesize sessionStatusStorage=_sessionStatusStorage;
@property(retain, nonatomic) WCFinderMsgSessionInfoStorage *asAuthorSessionStorage; // @synthesize asAuthorSessionStorage=_asAuthorSessionStorage;
@property(retain, nonatomic) WCFinderMsgAuthorSessionMgr *authorSessionMgr; // @synthesize authorSessionMgr=_authorSessionMgr;
@property(retain, nonatomic) NSMutableDictionary *sessionStoragesDic; // @synthesize sessionStoragesDic=_sessionStoragesDic;
@property(retain, nonatomic) WCFinderMsgSessionInfoStorage *asAliasSessionStorage; // @synthesize asAliasSessionStorage=_asAliasSessionStorage;
@property(retain, nonatomic) WCFinderMsgSessionInfoStorage *asFansSessionStorage; // @synthesize asFansSessionStorage=_asFansSessionStorage;
- (unsigned long long)getWxPrivateUnreadCount;
- (unsigned long long)getPrivateMsgTotalUnreadCountByUsername:(id)arg1;
- (void)onFinderUserprepare;
- (void)onFinderCreateAccount;
- (void)onFinderCancellationAccount;
- (void)onFinderInitSuccessful;
- (void)onFinderNotifyUnreadSystemCountUpdate:(_Bool)arg1 finderUsername:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)_batchAddMsgListForSession:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (id)importSessionsForSessionType:(id)arg1 identityID:(id)arg2;
- (void)finderLiveIdentityChange;
- (void)onAsFansSessionMsgTipsChange;
- (void)removeAsFansSessionIdWithNewArrivalMsg:(id)arg1;
- (void)updateNewArrivalMsgWithSessionIds:(id)arg1;
- (void)removeAllAliasSessionInAsFansSessionIdListWithNewArrivalMsg;
- (void)clearAsFansSessionIdListWithNewArrivalMsg;
- (void)saveAsFansSessionIdListWithNewArrivalMsg;
- (id)asFansSessionIdListWithNewArrivalMsg;
- (void)onGreetMsgSessionUnreadStatusChanged:(id)arg1;
- (id)getPrivateMsgContactExtInfoForSessionId:(id)arg1;
- (void)tryUpdatePrivateMsgContactExtInfoForSessionId:(id)arg1 sourceType:(int)arg2;
- (void)callSessionStatusUpdatedExtWithSessionId:(id)arg1;
- (void)makeSureSessionStatusExistWithType:(unsigned int)arg1 sessionInfo:(id)arg2 isInNormalSession:(_Bool)arg3;
- (void)markSessionStatusDBNeedRecover;
- (void)recoverSessionStatus;
- (void)recoverSessionStatusFromSessionInfos:(id)arg1 myAccountType:(unsigned int)arg2 isInNormalSession:(_Bool)arg3;
- (id)recoverStatusFromSessionListWithSessionId:(id)arg1;
- (void)updateSessionStatusWithType:(unsigned int)arg1 svrSessionInfo:(id)arg2 username:(id)arg3;
- (_Bool)adjustMsgUsersWithSessionId:(id)arg1 msgWrap:(id)arg2;
- (_Bool)isSessionExistedWithSessionId:(id)arg1;
- (_Bool)disableSendmsgNeedFollowForSessionId:(id)arg1;
- (_Bool)canSendAttachmentForSessionId:(id)arg1;
- (_Bool)rejectMsgStatusWithSessionId:(id)arg1;
- (id)selfUserNameWithSessionId:(id)arg1;
- (id)realChatUserWithSessionId:(id)arg1;
- (id)sessionStatusWithSessionId:(id)arg1;
- (void)updateSessionStatusWithSessionId:(id)arg1 rejectMsgStatus:(_Bool)arg2;
- (void)tryUpdateSessionStatusFromSvrWithSessionId:(id)arg1 sourceType:(int)arg2 userpageEnterType:(unsigned int)arg3 lastCommentScene:(int)arg4;
- (void)updateFinderRedDotForClearUnread:(id)arg1;
- (void)updateFinderRedDotForQuitPrivateMsgEntrance:(id)arg1;
- (void)updateFinderRedDotForNewMsg:(id)arg1;
- (id)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2;
- (_Bool)isUserNeedProcess:(id)arg1;
- (void)deleteSessionWithSessionId:(id)arg1;
- (void)clearUnreadCountForSessionId:(id)arg1;
- (unsigned int)getUnreadCountForSessionId:(id)arg1;
- (id)getUnreadPrivateMsgLastSession;
- (void)quitSessionListWithCellDataSource:(id)arg1;
- (void)willQuitSessionListWithCellDataSource:(id)arg1;
- (void)enterSessionListWithCellDataSource:(id)arg1;
- (_Bool)adjustMsgContentLogic:(id)arg1 sessionStatus:(id)arg2 realChatFinderContact:(id)arg3;
- (void)adjustMsgContentLogic:(id)arg1 withSessionId:(id)arg2;
- (id)msgContentLogicWithSessionId:(id)arg1 realChatFinderContact:(id)arg2;
- (void)openChatWithSessionId:(id)arg1 realChatFinderContact:(id)arg2 fromNav:(id)arg3 animated:(_Bool)arg4 sourceType:(int)arg5 reporter:(id)arg6;
- (void)openChatWithSessionId:(id)arg1 realChatFinderContact:(id)arg2 fromNav:(id)arg3 animated:(_Bool)arg4 reporter:(id)arg5;
- (void)asyncGetSessionIdWithRequest:(id)arg1 loadingVC:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetSessionIdWithFinderMention:(id)arg1 loadingVC:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetSessionIdForAudienceInFinderLiveLotteryWithFinderContact:(id)arg1 myAccountType:(unsigned int)arg2 objectId:(unsigned long long)arg3 lotteryId:(id)arg4 loadingVC:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)asyncGetSessionIdForAnchorInFinderLiveLotteryWithUserName:(id)arg1 objectId:(unsigned long long)arg2 lotteryId:(id)arg3 liveContactExtInfo:(id)arg4 loadingVC:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)asyncGetSessionIdForFinderLiveAnchorWithFinderContact:(id)arg1 objectId:(unsigned long long)arg2 liveContactExtInfo:(id)arg3 loadingVC:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)asyncGetSessionIdWithListenBuffer:(id)arg1 username:(id)arg2 loadingVC:(id)arg3 finderUsername:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)asyncStreamProfileGetSessionIdWithContact:(id)arg1 myAccountType:(unsigned int)arg2 loadingVC:(id)arg3 profileEnterSource:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)asyncGetSessionIdWithFinderContact:(id)arg1 myAccountType:(unsigned int)arg2 loadingVC:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)asyncGetSessionIdWithFinderContact:(id)arg1 loadingVC:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetSessionIdWithFavID:(id)arg1 username:(id)arg2 objectID:(id)arg3 loadingVC:(id)arg4 finderUsername:(id)arg5 sourceType:(int)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)asyncGetSessionIdWithFavID:(id)arg1 username:(id)arg2 objectID:(id)arg3 loadingVC:(id)arg4 finderUsername:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)asyncGetSessionIdWithLikeId:(unsigned long long)arg1 username:(id)arg2 objectID:(id)arg3 loadingVC:(id)arg4 finderUsername:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)asyncGetSessionIdWithFansUsername:(id)arg1 fansId:(id)arg2 loadingVC:(id)arg3 finderUsername:(id)arg4 sourceType:(int)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)asyncGetSessionIdWithFansUsername:(id)arg1 fansId:(id)arg2 loadingVC:(id)arg3 finderUsername:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)asyncGetSessionIdWithComment:(id)arg1 loadingVC:(id)arg2 finderUsername:(id)arg3 sourceType:(int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)asyncGetSessionIdWithComment:(id)arg1 loadingVC:(id)arg2 finderUsername:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)finderContactForUserName:(id)arg1 sessionId:(id)arg2 tryUpdate:(_Bool)arg3 commentScene:(int)arg4;
- (id)asAliasSessionViewController;
- (id)asFansSessionViewController;
- (id)asAuthorGreetMsgSessionViewControllerWithUsername:(id)arg1;
- (id)asAuthorSessionViewControllerWithUsername:(id)arg1;
- (id)sessionInfoForAliasSessionEntrance;
- (unsigned long long)sessionCountForMyAccountType:(unsigned int)arg1;
- (void)removeRedDotForAccountType:(unsigned int)arg1 username:(id)arg2;
- (_Bool)updateSessionOwner:(id)arg1 otherValidUsernames:(id)arg2 myAccountType:(unsigned int)arg3 storage:(id)arg4;
- (_Bool)configAsAliasSessionOwnerWithForceUpate:(_Bool)arg1;
- (void)tryUpdateAsAuthorSessionOwner;
- (_Bool)configAsAuthorSessionOwnerWithForceUpate:(_Bool)arg1 sessionStorage:(id)arg2;
- (_Bool)checkNeedCleanLocalAuthorSession;
- (void)updateLocalSessionUsernameForFinderMultipleAccounts;
- (void)onServiceMemoryWarning;
- (id)sessionStorageForAccountType:(int)arg1 username:(id)arg2;
- (id)getSessionStorageWithSessionID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

