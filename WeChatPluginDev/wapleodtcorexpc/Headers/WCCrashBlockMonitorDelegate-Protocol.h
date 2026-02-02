//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCCrashBlockMonitorDelegate <NSObject>

@optional
- (void)onCrashBlockMonitorRunloopHangDetected:(unsigned long long)arg1;
- (NSDictionary *)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorMemoryExcessive:(_Bool)arg1 footprint:(unsigned long long)arg2 available:(unsigned long long)arg3;
- (void)onCrashBlockMonitorMemoryExcessive;
- (void)onCrashBlockMonitorMainThreadBlock;
- (void)onCrashBlockMonitorThermalStateChanged:(long long)arg1;
- (void)onCrashBlockMonitorThermalStateElevated;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)arg1 filter:(unsigned long long)arg2;
- (void)onCrashBlockMonitorGetDumpFile:(NSString *)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2 runloopThreshold:(unsigned int)arg3;
- (void)onCrashBlockMonitorEnterNextCheckWithDumpType:(unsigned long long)arg1;
@end

