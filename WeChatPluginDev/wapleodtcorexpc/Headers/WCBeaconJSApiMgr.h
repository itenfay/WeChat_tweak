//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBCentralManager, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface WCBeaconJSApiMgr
{
    MMUIViewController<WXCustomWebViewControllerProtocol> *m_currentWebViewController;
    NSString *m_ticket;
    CBCentralManager *m_bleMgr;
    unsigned long long m_locationMgrTag;
    NSMutableArray *m_aryUUID;
    NSMutableDictionary *m_canRegionDic;
    NSMutableArray *m_hadGetBeacons;
    NSMutableArray *m_getBeaconsInfoWatingQueue;
    NSMutableArray *m_getBeaconsInfoRunningQueue;
    unsigned long long m_verifyReqResult;
}

- (void).cxx_destruct;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyStartMonitoringFailByRangeFailedWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailByBLEPowerOffWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailWithErrorMsg:(id)arg1;
- (void)finishCauseOf:(unsigned long long)arg1;
- (void)stopMonitoring;
- (unsigned long long)startMonitorBeacon:(id)arg1 ticket:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

