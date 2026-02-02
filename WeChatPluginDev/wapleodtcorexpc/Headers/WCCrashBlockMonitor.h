//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCBlockMonitorConfiguration, WCBlockMonitorMgr;
@protocol WCCrashBlockMonitorDelegate;

@interface WCCrashBlockMonitor : NSObject
{
    _Bool _bInstallSuccess;
    NSString *_appVersion;
    NSString *_appShortVersion;
    CDUnknownFunctionPointerType _onHandleSignalCallBack;
    CDUnknownFunctionPointerType _onAppendAdditionalInfoCallBack;
    id <WCCrashBlockMonitorDelegate> _delegate;
    WCBlockMonitorConfiguration *_bmConfiguration;
    WCBlockMonitorMgr *_blockMonitor;
}

+ (_Bool)p_isDumpTypeRelatedToFOOM:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCBlockMonitorMgr *blockMonitor; // @synthesize blockMonitor=_blockMonitor;
@property(nonatomic) _Bool bInstallSuccess; // @synthesize bInstallSuccess=_bInstallSuccess;
@property(retain, nonatomic) WCBlockMonitorConfiguration *bmConfiguration; // @synthesize bmConfiguration=_bmConfiguration;
@property(nonatomic) __weak id <WCCrashBlockMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDUnknownFunctionPointerType onAppendAdditionalInfoCallBack; // @synthesize onAppendAdditionalInfoCallBack=_onAppendAdditionalInfoCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSignalCallBack; // @synthesize onHandleSignalCallBack=_onHandleSignalCallBack;
@property(copy, nonatomic) NSString *appShortVersion; // @synthesize appShortVersion=_appShortVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void)onBlockMonitor:(id)arg1 runloopHangDetected:(unsigned long long)arg2;
- (void)onBlockMonitorMemoryExcessive:(id)arg1 exceeded:(_Bool)arg2 footprint:(unsigned long long)arg3 available:(unsigned long long)arg4;
- (void)onBlockMonitorMainThreadBlock:(id)arg1;
- (void)onBlockMonitorThermalStateChanged:(id)arg1 thermalState:(long long)arg2;
- (void)onBlockMonitorIntervalCPUTooHigh:(id)arg1;
- (void)onBlockMonitorCurrentCPUTooHigh:(id)arg1;
- (id)onBlockMonitor:(id)arg1 getCustomUserInfoForDumpType:(unsigned long long)arg2;
- (void)onBlockMonitor:(id)arg1 dumpType:(unsigned long long)arg2 filter:(unsigned long long)arg3;
- (void)onBlockMonitor:(id)arg1 getDumpFile:(id)arg2 withDumpType:(unsigned long long)arg3;
- (void)onBlockMonitor:(id)arg1 enterNextCheckWithDumpType:(unsigned long long)arg2;
- (void)onBlockMonitor:(id)arg1 beginDump:(unsigned long long)arg2 blockTime:(unsigned long long)arg3 runloopThreshold:(unsigned int)arg4;
- (unsigned int)lastJSCType;
- (_Bool)shouldReportCoreDumpAfterCrash;
- (id)generateLiveReportWithDumpType:(unsigned long long)arg1 withReason:(id)arg2 selfDefinedPath:(_Bool)arg3;
- (void)setUserID:(unsigned long long)arg1;
- (void)setShouldSuspendAllThreads:(_Bool)arg1;
- (_Bool)recoverRunloopThreshold;
- (_Bool)lowerRunloopThreshold;
- (_Bool)setRunloopThreshold:(unsigned int)arg1;
- (_Bool)recoverCPUUsage;
- (_Bool)lowerCPUUsage;
- (_Bool)isBackgroundCPUTooSmall;
- (void)stopTrackCPU;
- (void)startTrackCPU;
- (void)handleSuspend;
- (void)handleBackgroundLaunch;
- (void)resetAppFullVersion:(id)arg1 shortVersion:(id)arg2;
- (void)stopBlockMonitor;
- (void)startBlockMonitor;
- (void)enableBlockMonitor;
- (_Bool)installKSCrash:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

