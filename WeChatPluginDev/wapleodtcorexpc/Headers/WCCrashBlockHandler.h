//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCrashBlockHandler : NSObject
{
    unsigned int _reportCount;
    unsigned long long _readSize;
    unsigned long long _writeSize;
}

@property(nonatomic) unsigned int reportCount; // @synthesize reportCount=_reportCount;
@property(nonatomic) unsigned long long writeSize; // @synthesize writeSize=_writeSize;
@property(nonatomic) unsigned long long readSize; // @synthesize readSize=_readSize;
- (void)onMMCrashGetFile:(id)arg1;
- (void)p_reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3 dumpType:(unsigned long long)arg4;
- (void)onCrashBlockMonitorRunloopHangDetected:(unsigned long long)arg1;
- (void)onCrashBlockMonitorMemoryExcessive:(_Bool)arg1 footprint:(unsigned long long)arg2 available:(unsigned long long)arg3;
- (void)onCrashBlockMonitorMainThreadBlock;
- (void)onCrashBlockMonitorThermalStateChanged:(long long)arg1;
- (void)onCrashBlockMonitorDiskIOReportRepeat;
- (void)onCrashBlockMonitorDiskIOReportReadDump:(_Bool)arg1 writeDump:(_Bool)arg2;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (id)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)arg1 filter:(unsigned long long)arg2;
- (void)onCrashBlockMonitorGetDumpFile:(id)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2 runloopThreshold:(unsigned int)arg3;
- (void)tryGetInfomationOfFileDescriptorOfDumpType:(unsigned long long)arg1;
- (void)onClientVersionChange;
- (void)refreshKSCrashReportAppVersion;
- (id)getCrashBlockPluginConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

