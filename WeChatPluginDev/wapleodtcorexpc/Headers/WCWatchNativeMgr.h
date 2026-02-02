//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSDate, NSDictionary, NSMutableArray, NSObject, NSString, WCSession;
@protocol OS_dispatch_queue;

@interface WCWatchNativeMgr
{
    _Bool _isRefreshingSessionKey;
    _Bool _needRefreshSessionKey;
    _Bool _didHandledOpenURLSinceEnterForeground;
    _Bool _reachable;
    _Bool _isWatchRunning;
    _Bool _requestSessionKeyWaitForAuthOk;
    unsigned int _watchXLabSwitch;
    unsigned int _globalXLabSwitch;
    WCSession *_session;
    NSObject<OS_dispatch_queue> *_watchSessionQueue;
    NSMutableArray *_pendingSignalMessages;
    NSDictionary *_latestContact;
    NSDictionary *_recentContactDic;
    NSDate *_setupDate;
    NSString *_requestSessionKeyId;
    NSString *_userXLabConfiguration;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) NSString *userXLabConfiguration; // @synthesize userXLabConfiguration=_userXLabConfiguration;
@property(nonatomic) unsigned int globalXLabSwitch; // @synthesize globalXLabSwitch=_globalXLabSwitch;
@property(nonatomic) unsigned int watchXLabSwitch; // @synthesize watchXLabSwitch=_watchXLabSwitch;
@property(retain, nonatomic) NSString *requestSessionKeyId; // @synthesize requestSessionKeyId=_requestSessionKeyId;
@property(nonatomic) _Bool requestSessionKeyWaitForAuthOk; // @synthesize requestSessionKeyWaitForAuthOk=_requestSessionKeyWaitForAuthOk;
@property(retain, nonatomic) NSDate *setupDate; // @synthesize setupDate=_setupDate;
@property(retain, nonatomic) NSDictionary *recentContactDic; // @synthesize recentContactDic=_recentContactDic;
@property(retain, nonatomic) NSDictionary *latestContact; // @synthesize latestContact=_latestContact;
@property(retain, nonatomic) NSMutableArray *pendingSignalMessages; // @synthesize pendingSignalMessages=_pendingSignalMessages;
@property(readonly, nonatomic) _Bool isWatchRunning; // @synthesize isWatchRunning=_isWatchRunning;
@property(readonly, nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *watchSessionQueue; // @synthesize watchSessionQueue=_watchSessionQueue;
@property(retain, nonatomic) WCSession *session; // @synthesize session=_session;
- (void)mockRequestNewSession;
- (void)onExptItemListChange;
- (void)onSessionChatBoxTypeChange:(id)arg1 inChatBox:(_Bool)arg2;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(_Bool)arg2;
- (void)checkAndRefreshHostIfNeeded;
- (_Bool)dnsHostForWatch;
- (_Bool)isValidContactForWatch:(id)arg1;
- (void)debugLog:(id)arg1;
- (_Bool)isWatchRecentReachable;
- (_Bool)isNotificationActionFromWatch:(id)arg1;
@property(readonly, nonatomic) _Bool isWatchAppInstalled;
- (id)GetUserXLabConfiguration;
- (unsigned int)globalXLabSwitchValue;
- (unsigned int)watchXLabSwitchValue;
- (id)settingDicWithCurCSetting:(id)arg1;
- (void)updateApplicationContextIfCould:(unsigned long long)arg1;
- (id)hookConfDic;
- (unsigned int)replyYoTo:(id)arg1 observer:(id)arg2;
- (void)displayAllPendingSignalMessages;
- (void)displaySignalMessageWithDelay:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)logoutWatch;
- (void)onNewRegOK;
- (void)onManulLoginOK;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)getExtensionKeyForceRefresh:(_Bool)arg1;
- (void)checkAndRefreshSessionKeyIfNeed;
- (_Bool)isSessionKeyCached;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)_handleSessionMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)callbackSessionKeyRequest:(_Bool)arg1;
- (void)_handleSessionUserInfo:(id)arg1;
- (void)requestUploadLogWithTimeSpan:(id)arg1;
- (void)session:(id)arg1 didReceiveFile:(id)arg2;
- (void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (_Bool)handleUserActivty:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)enterBackground:(id)arg1;
- (void)_handleDeviceIdFromWatch:(id)arg1;
- (void)handleUpdateQuickReplies:(id)arg1;
- (id)getRecentContactsInfosForWatch;
- (id)dictionaryFromDBMsg:(id)arg1 chatName:(id)arg2;
- (id)dictionaryFromContact:(id)arg1 sessionLastTime:(unsigned int)arg2;
- (void)sendPairedInfoToServer;
- (void)setupSession;
- (void)willHandleOpenURL:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
@property(retain, nonatomic) NSDate *lastReachableDate;
@property(readonly, nonatomic) _Bool isPairedWatch;
- (void)dealloc;
- (id)init;
- (void)reportActiveData:(unsigned int)arg1 byFile:(id)arg2;
- (void)statDurationData:(unsigned int)arg1 systemVersion:(id)arg2 byFile:(id)arg3;
- (void)statActiveData:(unsigned int)arg1 systemVersion:(id)arg2 byFile:(id)arg3;
- (void)statCodePayData:(unsigned int)arg1 byFile:(id)arg2;
- (void)logReportsWCSessionFile:(id)arg1;
- (void)logStatsWCSessionFile:(id)arg1;
- (void)transferInitDataForWatch;
- (void)transferCachedImage:(id)arg1 forURLString:(id)arg2 progress:(float)arg3;
- (void)transferCachedImage:(id)arg1 forURLString:(id)arg2;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (id)transferUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

