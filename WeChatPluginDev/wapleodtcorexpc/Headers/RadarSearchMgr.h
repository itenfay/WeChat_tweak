//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, LocationRetriever, MMTimer, NSString, RadarSearchSetting;

@interface RadarSearchMgr
{
    _Bool _isStartReport;
    LocationRetriever *_locationRetrieve;
    MMTimer *_sendReportTimer;
    NSString *_ticket;
    RadarSearchSetting *_setting;
    CLLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) RadarSearchSetting *setting; // @synthesize setting=_setting;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleRadarSearchResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVerifyUserResp:(id)arg1 Event:(unsigned int)arg2;
- (void)onVerifyOkSuccessed:(id)arg1;
- (void)onVerifyOkFail:(id)arg1;
- (void)onSendRequestSuccessed:(id)arg1 pbCGIWrap:(id)arg2;
- (void)onAddContactSuccessed:(id)arg1;
- (void)onSendRequestFail:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (id)getLocation;
- (void)sendRadarReportRequest:(_Bool)arg1;
- (void)verifyUsr:(id)arg1 withTicket:(id)arg2;
- (void)addFriend:(id)arg1;
- (void)stopRadarReport;
- (void)removeRadarReportRequest;
- (void)startRadarReport;
- (void)stopResendRadarReportLogic;
- (void)startResendRadarReportLogic;
- (void)reSendRadarReportRequest;
- (void)stopRetrieveLocation;
- (void)startRetrieveLocationFor:(unsigned long long)arg1;
- (void)saveSetting;
- (void)loadRadarSearchSetting;
- (id)getSettingPath;
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

