//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSString, ReportDeviceInfo;

@interface WARealTimeReportMgr
{
    MMTimer *_timerReportCheck;
    NSMutableArray *_arrReportInfo;
    unsigned int _reportTimeInterval;
    unsigned int _lastReportTime;
    ReportDeviceInfo *_deviceInfo;
}

- (void).cxx_destruct;
- (void)onReportResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)realTimeReportInfo;
- (void)onTimerRealTimeReportTimer:(id)arg1;
- (void)invadateRealTimeReportTimer;
- (void)startRealTimeReportTimer;
- (void)reportJSRealtimeAction:(id)arg1 appID:(id)arg2 withExtBaseItem:(id)arg3;
- (void)reportPageRouteInfo:(id)arg1 appID:(id)arg2 withExtBaseItem:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
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

