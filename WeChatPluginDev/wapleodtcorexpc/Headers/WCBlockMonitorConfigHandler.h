//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCBlockMonitorConfiguration;

@interface WCBlockMonitorConfigHandler : NSObject
{
    WCBlockMonitorConfiguration *m_currentConfiguration;
}

+ (int)getDeviceCPUCount;
- (void).cxx_destruct;
- (_Bool)getShouldSearchQueueNames;
- (_Bool)getShouldUploadCoreDumpAfterCrash;
- (_Bool)getShouldCoreDumpAtNonCrash;
- (_Bool)getShouldCoreDumpAtCrash;
- (_Bool)getShouldEnableMoreKSCrashLogs;
- (_Bool)getShouldEnableMoreThreadInfo;
- (unsigned int)getBusyThreadProfileInterval;
- (unsigned int)getBusyThreadProfileDuration;
- (_Bool)getShouldEnableBusyThreadProfile;
- (_Bool)getShouldPrintJSCType;
- (_Bool)getShouldPrintVMSummary;
- (_Bool)getShouldEnableSnapshot;
- (_Bool)getShouldSuspendAllThreads;
- (_Bool)getSensitiveRunloopHangDetection;
- (unsigned int)getMemoryWarningThresholdInMB;
- (unsigned long long)getTotalWriteLimit;
- (unsigned long long)getTotalReadLimit;
- (unsigned long long)getSingleWriteLimit;
- (unsigned long long)getSingleReadLimit;
- (_Bool)getShouldGetDiskIOStack;
- (_Bool)getShouldPrintCPUFrequency;
- (_Bool)getShouldPrintMemoryUse;
- (unsigned int)getDumpDailyLimit;
- (unsigned int)getTriggerFilterCount;
- (_Bool)getShouldFilterSameStack;
- (float)getPowerConsumeCPULimit;
- (_Bool)getShouldGetPowerConsumeStack;
- (_Bool)getShouldGetCPUHighLog;
- (_Bool)getShouldPrintCPUUsage;
- (int)getMainThreadCount;
- (_Bool)getMainThreadProfile;
- (unsigned int)getPerStackInterval;
- (unsigned int)getCheckPeriodTime;
- (_Bool)getMainThreadHandle;
- (float)getLowerCPUUsagePercent;
- (float)getCPUUsagePercent;
- (_Bool)getRunloopDynamicThresholdEnabled;
- (unsigned int)getRunloopLowThreshold;
- (unsigned int)getRunloopTimeOut;
- (void)setConfiguration:(id)arg1;
- (id)init;

@end

