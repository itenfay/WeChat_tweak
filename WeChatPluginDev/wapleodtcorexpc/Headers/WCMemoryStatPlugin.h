//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSTimer, WCMemoryRecordManager, WCMemoryStatConfig, WCMemoryStatRecord;
@protocol WCMemoryStatPluginDelegate;

@interface WCMemoryStatPlugin
{
    WCMemoryRecordManager *m_recordManager;
    WCMemoryStatRecord *m_lastRecord;
    WCMemoryStatRecord *m_currRecord;
    NSTimer *m_autoDumpTimer;
    id <WCMemoryStatPluginDelegate> _delegate;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCMemoryStatPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarningNotification;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)stop;
- (_Bool)enableLeaksChecker;
- (_Bool)enableAllocationsLogger;
- (_Bool)startMemoryLogging;
- (_Bool)startVMRegionsLogging;
- (_Bool)start;
- (void)registerNotification;
- (void)reportErrorCode:(int)arg1;
- (void)setCurrentRecordInvalid;
- (void)cleanMemoryStatData;
- (unsigned long long)getMemoryStatDataSize;
- (unsigned long long)pluginMemoryUsed;
- (id)recordByLaunchTime:(unsigned long long)arg1;
- (id)recordOfLastRun;
- (id)recordList;
- (void)leaksCheckAndGenerateReportData:(id)arg1 customInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)allocationsDumpAndGenerateReportData:(id)arg1 customInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)uploadRecord:(id)arg1 withCustomInfo:(id)arg2;
- (void)deplayTryReportOOMInfo;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WCMemoryStatConfig *pluginConfig; // @dynamic pluginConfig;

@end

