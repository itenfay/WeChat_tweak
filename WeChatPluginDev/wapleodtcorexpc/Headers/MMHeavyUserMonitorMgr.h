//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDiskUsageScaner, MMHeavyUserClassifier, MMHeavyUserDataSource, MMHeavyUserEvaluator, MMStackReportConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMHeavyUserMonitorMgr
{
    unsigned long long m_uiHeavyUserType;
    MMStackReportConnection *m_customInfoReporter;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    NSObject<OS_dispatch_queue> *m_heavyUsrQueue;
    MMDiskUsageScaner *m_usageScanner;
    MMHeavyUserDataSource *_heavyUserDataSource;
    MMHeavyUserClassifier *_heavyUserClassifier;
    MMHeavyUserEvaluator *_heavyUserEvaluator;
}

+ (id)getHeavyUserInfoPath;
- (void).cxx_destruct;
@property(retain, nonatomic) MMHeavyUserEvaluator *heavyUserEvaluator; // @synthesize heavyUserEvaluator=_heavyUserEvaluator;
@property(retain, nonatomic) MMHeavyUserClassifier *heavyUserClassifier; // @synthesize heavyUserClassifier=_heavyUserClassifier;
@property(retain, nonatomic) MMHeavyUserDataSource *heavyUserDataSource; // @synthesize heavyUserDataSource=_heavyUserDataSource;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)onHeavyUserPointChange:(unsigned long long)arg1;
- (void)p_updateIDKeySetting:(unsigned long long)arg1;
- (void)p_reportToMMTestWithHeavyUserType:(unsigned long long)arg1;
- (void)p_reportHeavyUserSubtype:(unsigned long long)arg1;
- (void)onHeavyUserTypeChange:(unsigned long long)arg1;
- (void)onHeavyUserDataUpdate;
- (void)clearCache;
- (void)updateLiveTime:(unsigned long long)arg1;
- (void)updateFinderAEC:(double)arg1;
- (void)addDumpCount;
- (void)updateWechatSize:(unsigned long long)arg1;
- (void)updateContactCount:(unsigned long long)arg1;
- (void)updateSessionCount:(unsigned long long)arg1;
- (id)getHeavyUserDataSource;
- (void)p_checkFirstReport;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)startCheckDiskSize;
- (void)onServiceEnterBackground;
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

