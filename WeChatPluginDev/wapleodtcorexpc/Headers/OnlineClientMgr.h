//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMOnlineSilentDownloadLogicController, MMTimer, NSMutableArray, NSMutableSet, NSNumber, NSString;

@interface OnlineClientMgr
{
    NSNumber *m_isRunningAsBakDevice;
    _Bool m_hasGetChatList;
    _Bool m_needHeartBeat;
    _Bool m_isLoginWebWX;
    _Bool m_isGettingOnlineInfo;
    _Bool m_shouldIgnorePushOpen;
    unsigned int m_lastLogoutTime;
    unsigned int m_curOnlineVersion;
    unsigned int m_iconType;
    NSString *m_summaryXml;
    NSMutableArray *m_arrOnlineInfo;
    NSMutableArray *m_lastOnlineInfo;
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
    unsigned long long m_lastReadItemCreateTime;
    _Bool m_isNeedGetOnlineInfo;
    NSNumber *m_nsLastOnelineInfoFlag;
    MMTimer *m_autoLoginToastTimer;
    MMOnlineSilentDownloadLogicController *_silentDownloadLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOnlineSilentDownloadLogicController *silentDownloadLogic; // @synthesize silentDownloadLogic=_silentDownloadLogic;
- (void)handleSilentDownloadFileList:(id)arg1;
- (id)GetBannerIcon;
- (void)markVoiceMsgAsReadWithMessage:(id)arg1;
- (void)handleMarkEnterpriseChatRead:(id)arg1;
- (void)handleQuitEnterpriseChat:(id)arg1;
- (void)handleEnterEnterpriseChat:(id)arg1;
- (void)handleMarkPatternLockUpdate:(id)arg1;
- (void)markPatternLockUpdate;
- (void)onLanguageChange;
- (void)onKickQuit;
- (void)showDeviceAutoLoginToast:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)shoudlSendActiveCGI;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncScheduleChange:(id)arg1;
- (void)onNewSyncShareCardMessageStatus:(id)arg1;
- (_Bool)isNeedSyncChatname:(id)arg1;
- (void)onNewSyncEnterSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onNewSyncQuitSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onGetChatListResponsed:(id)arg1;
- (void)onGetEnterFunction:(id)arg1;
- (void)onGetQuitFunction:(id)arg1;
- (void)onGetMarkFunction:(id)arg1;
- (void)onGetNotifyUnlockFunction:(id)arg1;
- (void)onGetSendCommandFunction:(id)arg1;
- (void)onNewSyncSendCommand:(id)arg1;
- (void)onNewSyncNotifyUnlock:(id)arg1;
- (void)onNewSyncMarkFunction:(id)arg1;
- (void)onNewSyncQuitFunction:(id)arg1;
- (void)onNewSyncEnterFunction:(id)arg1;
- (void)onNewSyncChatListSession:(id)arg1;
- (void)updateLoginStatus:(_Bool)arg1;
- (void)onNewSyncOnlineStatus:(unsigned int)arg1 withVersion:(unsigned int)arg2;
- (void)onNewSyncMarkUnread:(id)arg1;
- (void)onNewSyncHideSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onNewSyncGetAllChat;
- (void)getAllChat;
- (id)GetExtDeviceOnlineInfos;
- (id)GetOnlineTitleForMuteDevice;
- (id)GetOnlineSummaryForKey:(id)arg1;
- (unsigned int)GetOnlineIconType;
- (void)statusNotifyGetChatListRequest;
- (void)checkShouldIgnorePushOpenWithFlag:(unsigned int)arg1;
- (void)checkShouldAddFileHelperToTopWithFlag:(unsigned int)arg1;
- (void)checkShouldHideOnelineInfoBarWithFlag:(unsigned int)arg1;
- (void)checkExtDeviceOnlineStatusWithOnlineList:(id)arg1 flag:(unsigned int)arg2;
- (void)onGetOnlineInfoResponse:(id)arg1 newOnlineVersion:(unsigned int)arg2;
- (_Bool)createGetOnlineInfoEventWithNewOnlineVersion:(unsigned int)arg1;
- (void)GetOnlineInfoFromServerWithNewOnlineVersion:(unsigned int)arg1;
- (void)GetOnlineInfoFromServer;
- (void)notifyScheduleChange:(id)arg1 action:(long long)arg2;
- (void)notifyShareCardMessageStatusWithMessage:(id)arg1;
- (void)handleMarkTimelineListRead:(id)arg1;
- (void)markTimelineListReadWithLastItemId:(id)arg1 itemCreateTime:(unsigned long long)arg2;
- (void)handleEnterWCMsgList:(id)arg1;
- (void)enterWCMsgListWithLastItemCreateTime:(unsigned long long)arg1;
- (void)onMarkMsgReadReturn:(id)arg1 withResponse:(id)arg2;
- (void)onDeleteAllSessions;
- (void)onDeleteMessages:(id)arg1 list:(id)arg2;
- (void)onClearSession:(id)arg1;
- (void)onDeleteSession:(id)arg1;
- (void)setHideSession:(id)arg1;
- (void)markChatBoxRead;
- (void)MarkChatRead:(id)arg1;
- (void)MarkChatUnread:(id)arg1;
- (void)EnterChat:(id)arg1;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2 function:(id)arg3 alwaysSend:(_Bool)arg4;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2 function:(id)arg3;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2;
- (void)reloadBanner;
- (_Bool)isRunningAsBakDevice;
- (void)setIsNeedShowPush:(_Bool)arg1;
- (_Bool)isNeedShowPush;
- (void)logoutWeb:(_Bool)arg1 onlineInfo:(id)arg2;
- (_Bool)isLoginWebWX;
- (void)setAuthFlag:(unsigned long long)arg1;
- (unsigned int)genRandomClienMsgId;
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

