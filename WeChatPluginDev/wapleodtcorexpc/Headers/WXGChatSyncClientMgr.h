//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WXGChatSyncClientMgr
{
    NSString *_lastDownloadFileName;
    _Bool _isAuthFinish;
    _Bool _isManualAuth;
    _Bool _isMainDeviceSupportAfterSleep;
    unsigned int _timeIntervalFromLastSucceedChatSync;
    unsigned int _timeIntervalFromLastSendChatSyncRequest;
    unsigned int _timeLimitPackageMsg;
}

+ (void)hexStringToUnsignedChar:(id)arg1 output:(char **)arg2 outputLength:(unsigned int *)arg3;
- (void).cxx_destruct;
- (id)decryptOriginAesKeyFromAppMsg:(id)arg1 withPrivatekey:(id)arg2;
- (void)loadStatus;
- (void)saveStatus;
- (id)getMMKV;
- (_Bool)filterMsgBeforeAddToDB:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendChatSyncNewXmlWithAction:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3 sessionName:(id)arg4 identifier:(id)arg5 limit:(unsigned int)arg6;
- (void)requestChatSyncAfterSleep;
- (_Bool)checkRequestAfterSleepFrequent;
- (void)importMsgFromSyncFile:(id)arg1;
- (id)getRealSyncDataDirFromUnzipDir:(id)arg1;
- (void)parseAppMsg:(id)arg1;
- (void)onRevChatSyncRequest:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

