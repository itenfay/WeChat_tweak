//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableSet, NSObject, NSString, WCCrashBlockMonitor, WCCrashBlockMonitorConfig;
@protocol OS_dispatch_queue, WCReportStrategyDelegate;

@interface WCCrashBlockMonitorPlugin
{
    id <WCReportStrategyDelegate> _reportDelegate;
    WCCrashBlockMonitor *_cbMonitor;
    NSMutableArray *_uploadingLagFileIDArray;
    NSMutableArray *_uploadingCrashFileIDArray;
    NSMutableSet *_uploadingCoreDumpIDs;
    NSObject<OS_dispatch_queue> *_pluginReportQueue;
    unsigned long long _dumpUploadType;
    unsigned long long _currentUploadType;
    NSString *_currentUploadDate;
}

+ (_Bool)haveLagFilesOnDate:(id)arg1 onType:(unsigned long long)arg2;
+ (_Bool)haveLagFilesOnType:(unsigned long long)arg1;
+ (_Bool)haveLagFilesOnDate:(id)arg1;
+ (_Bool)haveLagFiles;
+ (_Bool)hasCrashReport;
+ (id)getTag;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentUploadDate; // @synthesize currentUploadDate=_currentUploadDate;
@property(nonatomic) unsigned long long currentUploadType; // @synthesize currentUploadType=_currentUploadType;
@property(nonatomic) unsigned long long dumpUploadType; // @synthesize dumpUploadType=_dumpUploadType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pluginReportQueue; // @synthesize pluginReportQueue=_pluginReportQueue;
@property(retain, nonatomic) NSMutableSet *uploadingCoreDumpIDs; // @synthesize uploadingCoreDumpIDs=_uploadingCoreDumpIDs;
@property(retain, nonatomic) NSMutableArray *uploadingCrashFileIDArray; // @synthesize uploadingCrashFileIDArray=_uploadingCrashFileIDArray;
@property(retain, nonatomic) NSMutableArray *uploadingLagFileIDArray; // @synthesize uploadingLagFileIDArray=_uploadingLagFileIDArray;
@property(retain, nonatomic) WCCrashBlockMonitor *cbMonitor; // @synthesize cbMonitor=_cbMonitor;
@property(nonatomic) __weak id <WCReportStrategyDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)reportCoreDumpWithFileID:(id)arg1 FilePath:(id)arg2;
- (void)reportCoreDumpWithCrashReportID:(id)arg1;
- (void)reportAllCoreDump;
- (void)reportCoreDumpWithTaskData:(id)arg1;
- (void)reportCoreDumpWithTaskDataArray:(id)arg1;
- (id)getMatrixIssueFromReportTaskData:(id)arg1 withReportType:(int)arg2 quickUpload:(_Bool)arg3;
- (void)reportTodayOneTypeLagWithlimitUploadConfig:(id)arg1 withLimitReportCount:(unsigned long long)arg2 withLimitReportIDs:(id)arg3;
- (void)reportTodayOneTypeLagLimit:(id)arg1;
- (void)reportTodayOneTypeLag;
- (void)reportOneTypeLag:(unsigned long long)arg1 onDate:(id)arg2;
- (void)reportAllLagFileOnDate:(id)arg1;
- (void)reportAllLagFile;
- (void)autoReportLag;
- (void)reportCrash;
- (void)autoReportCrash;
- (void)autoClean;
- (void)delayReportCrash;
- (void)notifyAppEnterForeground;
- (void)removeCrashFromUploadingArray:(id)arg1;
- (void)addCrashToUploadingArray:(id)arg1;
- (_Bool)isCrashUploading:(id)arg1;
- (void)removeLagFromUploadingArray:(id)arg1;
- (void)addLagToUploadingArray:(id)arg1;
- (_Bool)isLagUploading:(id)arg1;
- (unsigned int)lastJSCType;
- (void)setUserID:(unsigned long long)arg1;
- (id)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(_Bool)arg3;
- (void)setShouldSuspendAllThreads:(_Bool)arg1;
- (_Bool)recoverRunloopThreshold;
- (_Bool)lowerRunloopThreshold;
- (_Bool)setRunloopThreshold:(unsigned int)arg1;
- (_Bool)recoverCPUUsage;
- (_Bool)lowerCPUUsage;
- (_Bool)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)stopBlockMonitor;
- (void)startBlockMonitor;
- (void)handleSuspend;
- (void)handleBackgroundLaunch;
- (void)resetAppFullVersion:(id)arg1 shortVersion:(id)arg2;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)reportIssue:(id)arg1;
- (void)destroy;
- (void)setupPluginListener:(id)arg1;
- (void)stop;
- (_Bool)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WCCrashBlockMonitorConfig *pluginConfig; // @dynamic pluginConfig;

@end

