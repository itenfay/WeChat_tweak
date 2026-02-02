//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMTimer, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMShareExtMgr
{
    ForwardMessageLogicController *m_forwardLogic;
    _Bool _sessionDidChanged;
    _Bool _isMsgFailChecking;
    _Bool _didHandleShareExtEventAfterActive;
    _Bool _isRefreshingSessionKey;
    MMTimer *_msgFailCkeckTimer;
    NSMutableDictionary *_msgClientIdDict;
    NSMutableSet *_headImgHashUsernameSet;
    NSObject<OS_dispatch_queue> *_sessionRefreshQueue;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 excludedActivityTypes:(id)arg2 fromViewController:(id)arg3 sourceRect:(struct CGRect)arg4;
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 excludedActivityTypes:(id)arg2 fromViewController:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionRefreshQueue; // @synthesize sessionRefreshQueue=_sessionRefreshQueue;
@property(retain, nonatomic) NSMutableSet *headImgHashUsernameSet; // @synthesize headImgHashUsernameSet=_headImgHashUsernameSet;
@property(nonatomic) _Bool isRefreshingSessionKey; // @synthesize isRefreshingSessionKey=_isRefreshingSessionKey;
@property(nonatomic) _Bool didHandleShareExtEventAfterActive; // @synthesize didHandleShareExtEventAfterActive=_didHandleShareExtEventAfterActive;
@property(retain, nonatomic) NSMutableDictionary *msgClientIdDict; // @synthesize msgClientIdDict=_msgClientIdDict;
@property(nonatomic) _Bool isMsgFailChecking; // @synthesize isMsgFailChecking=_isMsgFailChecking;
@property(retain, nonatomic) MMTimer *msgFailCkeckTimer; // @synthesize msgFailCkeckTimer=_msgFailCkeckTimer;
@property(nonatomic) _Bool sessionDidChanged; // @synthesize sessionDidChanged=_sessionDidChanged;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (unsigned long long)clearShareExtResourceInternal;
- (void)handleShareExtKVReportAfterAppActive;
- (void)handleShareExtIdKeyReportAfterAppActive;
- (void)handleShareExtFavFileUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavVideoUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavUrlUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavImageUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavRequestAfterAppActive;
- (void)handleAppMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleAppMsgSendStatus:(id)arg1;
- (void)saveVideoMsgFileData:(id)arg1 videoInfo:(id)arg2;
- (void)handleVideoMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleVideoMsgSendStatus:(id)arg1;
- (_Bool)saveImageMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)saveImageMsgImg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleImageMsgSendStatus:(_Bool)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleImageMsgSendStatus:(id)arg1;
- (void)handleAppMsgNewXml:(id)arg1;
- (void)handleVideoMsgNewXml:(id)arg1;
- (void)handleImageMsgNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)reportSendMsgFailIdKeyWithStatuscode:(long long)arg1;
- (void)reportSendTimelineFailIdKeyWithStatuscode:(long long)arg1;
- (void)handleMessageUploadTaskWithURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleTimelineUploadTaskWithURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAppmsgClientID:(id)arg1;
- (void)addVideoMsgClientID:(id)arg1;
- (void)addImageMsgClientID:(id)arg1;
- (_Bool)hasFailMessageTask;
- (void)removeAppMsgID:(id)arg1;
- (void)removeVideoMsgID:(id)arg1;
- (void)removeImageMsgID:(id)arg1;
- (void)onMsgFailCheckTimeout;
- (void)genMsgFailClientIdDict;
- (void)removeMessageMetaDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
- (void)handleShareExtMessageFailRequestAfterServiceActive;
- (void)handleShareExtTimelineFailRequestAfterAppActive;
- (void)updateShareExtKeyAfterServiceActive;
- (void)handleShareExtEventAfterServiceActive;
- (id)getUserNamesOnContactsListMaxCount:(unsigned int)arg1;
- (void)refreshExtraSessionListData;
- (_Bool)needRefreshExtraShareSession;
- (void)shareMessageToFriend:(long long)arg1 scene:(int)arg2;
- (id)genMsgByTransmitVideoData:(id)arg1;
- (id)genMsgByTransmitFileData:(id)arg1;
- (id)genMsgByTransmitUrlData:(id)arg1;
- (id)genMsgByTransmitImageData:(id)arg1;
- (id)getRecentShareSessionWithSessionList:(id)arg1;
- (void)refreshShareSessionIfNeed;
- (void)refreshShareSessionData;
- (id)GetSessionRefreshQueue;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onNeedReload;
- (void)refreshServerIPForExtension;
- (_Bool)isSupportExtension;
- (void)OnUpdatedCdnDnsInfo:(id)arg1 snsCdnInfo:(id)arg2 appCdnInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)refershExtensionKey;
- (void)onPreQuit;
- (void)saveShareExtUserData;
- (void)onAuthOK;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

