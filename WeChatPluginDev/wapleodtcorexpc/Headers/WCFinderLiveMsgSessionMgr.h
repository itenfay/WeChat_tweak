//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveMsgSessionInfoStorage;

@interface WCFinderLiveMsgSessionMgr
{
    WCFinderLiveMsgSessionInfoStorage *_qaSessionInfoStorage;
}

+ (id)defaultFinderContactForUsername:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveMsgSessionInfoStorage *qaSessionInfoStorage; // @synthesize qaSessionInfoStorage=_qaSessionInfoStorage;
- (unsigned long long)getTotalUnreadCount;
- (void)onFinderUserprepare;
- (void)onFinderCreateAccount;
- (void)onFinderCancellationAccount;
- (void)onFinderInitSuccessful;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)_batchAddMsgListForSession:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)finderLiveIdentityChange;
- (id)addLocalMsgWithSessionId:(id)arg1 liveAppMsg:(id)arg2 msgStatus:(unsigned int)arg3 localClientMsgId:(id)arg4;
- (id)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2;
- (_Bool)isUserNeedProcess:(id)arg1;
- (void)deleteSessionWithSessionId:(id)arg1;
- (void)clearUnreadCountForSessionId:(id)arg1;
- (unsigned int)getUnreadCountForSessionId:(id)arg1;
- (id)getLocalLiveMsgSessionInfosWithTaskId:(id)arg1;
- (id)getLocalMsgSessionInfoWithSessionId:(id)arg1;
- (void)getLiveMsgSessionInfoByAudienceWithTaskId:(id)arg1 sourceType:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getLiveMsgSessionInfoListByAnchorOrAssistantWithTaskId:(id)arg1;
- (void)genLiveMsgSessionIdWithTaskId:(id)arg1 sourceType:(unsigned int)arg2 toUserName:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

