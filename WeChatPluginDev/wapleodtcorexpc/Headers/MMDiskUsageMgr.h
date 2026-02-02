//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDiskCommonUsageScanner, MMDiskUsageConfigHandler, MMDiskUsageReporter, MMDiskUsageScaner, MMDiskUsageStatus, MMFolderWrapCacheData, MMTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMDiskUsageMgr
{
    _Bool _shouldToScan;
    _Bool _shouldReport;
    NSObject<OS_dispatch_queue> *_workQueue;
    MMTimer *_finishScanTimer;
    MMDiskUsageScaner *_scanner;
    MMFolderWrapCacheData *_sharedCache;
    MMDiskUsageReporter *_reporter;
    MMDiskUsageConfigHandler *_configHandler;
    MMDiskUsageStatus *_diskUsageStatus;
    MMDiskCommonUsageScanner *_appGroupScanner;
}

+ (unsigned int)getUrgentLevel;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReport; // @synthesize shouldReport=_shouldReport;
@property(nonatomic) _Bool shouldToScan; // @synthesize shouldToScan=_shouldToScan;
@property(retain, nonatomic) MMDiskCommonUsageScanner *appGroupScanner; // @synthesize appGroupScanner=_appGroupScanner;
@property(retain, nonatomic) MMDiskUsageStatus *diskUsageStatus; // @synthesize diskUsageStatus=_diskUsageStatus;
@property(retain, nonatomic) MMDiskUsageConfigHandler *configHandler; // @synthesize configHandler=_configHandler;
@property(retain, nonatomic) MMDiskUsageReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak MMFolderWrapCacheData *sharedCache; // @synthesize sharedCache=_sharedCache;
@property(retain, nonatomic) MMDiskUsageScaner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) MMTimer *finishScanTimer; // @synthesize finishScanTimer=_finishScanTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (void)startScanAppGroup;
- (_Bool)p_shouldFinishScanWithUrgentLevel:(unsigned int)arg1;
- (_Bool)p_shouldForceCleanTmp;
- (void)markLastForceCleanTmpTime;
- (void)stopScanDisk;
- (void)startFinishScanDiskWithUrgentLevel:(unsigned int)arg1;
- (_Bool)rejectScan;
- (void)finishScanPhase;
- (void)onReportFinished;
- (void)reportIfNeeded;
- (_Bool)shouldDiskUsageReport;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)clearData;
- (void)dealloc;
- (id)sharedCacheData;
- (void)asyncGetDiskScanData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

