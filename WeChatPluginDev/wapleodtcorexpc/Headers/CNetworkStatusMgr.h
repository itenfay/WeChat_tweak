//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSDate, NSMutableArray, NSString, ReportInfo;

@interface CNetworkStatusMgr
{
    _Bool m_bConnecting;
    _Bool m_bConnected;
    _Bool m_bAllStatusServerFailed;
    _Bool m_bLongLinkStatusServerFailed;
    _Bool m_bAllStatusServerConnected;
    _Bool m_bGettingData;
    _Bool m_bReadOnceAgain;
    NSMutableArray *m_messsageIdToListen;
    _Bool m_bIsNetworkReachable;
    _Bool m_bIsServerReachable;
    unsigned int m_eNetworkStatusType;
    _Bool m_bIsNetworkWeak;
    NSDate *m_dtLastReport;
    ReportInfo *m_oReportInfo;
    MMTimer *m_oReportTimer;
    NSString *m_nsLastWifiBssid;
    NSString *m_nsCacheWifiBssid;
    NSString *m_nsCacheWifiSsid;
    _Bool m_isCheckingNetwork;
    _Bool m_isBaseNetworkOK;
    _Bool m_isWechatNetworkOK;
    _Bool m_isWechatLongLinkOK;
    unsigned long long m_beginGettingDataTime;
}

- (void).cxx_destruct;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (_Bool)isNetworkWeak;
- (void)onNetworkCheckResult:(_Bool)arg1 stage:(unsigned int)arg2 allEnds:(_Bool)arg3 kvString:(id)arg4;
- (void)startNetworkChecking;
- (_Bool)isNetworkChecking;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)InternalReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)InternalReportNetworkInfo:(id)arg1;
- (id)MakeSafeReportString:(id)arg1;
- (void)CheckReportNetworkInfo:(unsigned int)arg1;
- (void)CheckBG2FG;
- (void)onAuthOK;
- (void)OnNetworkStatusReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)SaveReportInfo;
- (void)LoadReportInfo;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)isConnectedTestingEnv;
- (void)OnUpdateWifiInfo:(_Bool)arg1 Scene:(unsigned int)arg2;
- (void)UpdateWifiInfo:(unsigned int)arg1;
- (void)ClearIDCache;
- (void)setReadToGettingData;
- (unsigned int)getNetworkStatusType;
- (id)getGpsReportString:(id)arg1;
- (id)getReportStringWithScene:(unsigned int)arg1;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onNewSyncEnd;
- (void)onNewSyncOplogConnectFail;
- (void)onNewSyncOplogFail;
- (void)onNewSyncBegin;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)unregExt;
- (void)regExt;
- (void)unListenMessageId;
- (void)initMessageIdToListen;
- (void)handleSyncEnd;
- (void)handleSyncBegin;
- (void)handleNetworkStatusChange:(id)arg1;
- (void)checkCallStatusChangedExt;
- (_Bool)isGettingData;
- (_Bool)isServerReachable;
- (void)translateStatus;
- (_Bool)isDuringSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

