//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMSilentPushReporter, NSString;

@interface SPLogUploadMgr
{
    MMSilentPushReporter *_logReporter;
    NSString *_m_realReportUrl;
    NSString *_m_realHost;
    unsigned long long _m_packageSize;
}

+ (id)silentPushBackgroundURLSessionIndentifierPrefix;
+ (id)xmlStringFromCgContent:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_packageSize; // @synthesize m_packageSize=_m_packageSize;
@property(retain, nonatomic) NSString *m_realHost; // @synthesize m_realHost=_m_realHost;
@property(retain, nonatomic) NSString *m_realReportUrl; // @synthesize m_realReportUrl=_m_realReportUrl;
@property(retain, nonatomic) MMSilentPushReporter *logReporter; // @synthesize logReporter=_logReporter;
- (void)handleSilentPushLogUploadTaskWithURLSessionID:(id)arg1;
- (unsigned long long)uploadId;
- (unsigned long long)stackLength:(id)arg1;
- (id)makeHttpRequest:(id)arg1;
- (void)handleLogUpload:(id)arg1;
- (void)upload:(id)arg1;
- (id)getUserName;
- (_Bool)onIPxx:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)lazyInitLogReporter;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

