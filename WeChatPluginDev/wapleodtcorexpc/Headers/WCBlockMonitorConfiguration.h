//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCBlockMonitorConfiguration : NSObject
{
    _Bool _bRunloopDynamicThreshold;
    _Bool _bMainThreadHandle;
    _Bool _bMainThreadProfile;
    _Bool _bPrintCPUUsage;
    _Bool _bGetCPUHighLog;
    _Bool _bGetPowerConsumeStack;
    _Bool _bFilterSameStack;
    _Bool _bPrintMemomryUse;
    _Bool _bPrintCPUFrequency;
    _Bool _bGetDiskIOStack;
    _Bool _bSensitiveRunloopHangDetection;
    _Bool _bSuspendAllThreads;
    _Bool _bEnableSnapshot;
    _Bool _bPrintVMSummary;
    _Bool _bPrintJSCType;
    _Bool _bBusyThreadProfile;
    _Bool _bMoreThreadInfo;
    _Bool _bMoreKSCrashLogs;
    _Bool _bCoreDumpAtCrash;
    _Bool _bCoreDumpAtNonCrash;
    _Bool _bUploadCoreDumpAfterCrash;
    _Bool _bSearchQueueNames;
    unsigned int _runloopTimeOut;
    unsigned int _runloopLowThreshold;
    unsigned int _checkPeriodTime;
    unsigned int _perStackInterval;
    unsigned int _mainThreadCount;
    float _limitCPUPercent;
    float _limitLowerCPUPercent;
    float _powerConsumeStackCPULimit;
    unsigned int _triggerToBeFilteredCount;
    unsigned int _dumpDailyLimit;
    unsigned int _memoryWarningThresholdInMB;
    unsigned int _busyThreadProfileDuration;
    unsigned int _busyThreadProfileInterval;
    unsigned long long _singleReadLimit;
    unsigned long long _singleWriteLimit;
    unsigned long long _totalReadLimit;
    unsigned long long _totalWriteLimit;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool bSearchQueueNames; // @synthesize bSearchQueueNames=_bSearchQueueNames;
@property(nonatomic) _Bool bUploadCoreDumpAfterCrash; // @synthesize bUploadCoreDumpAfterCrash=_bUploadCoreDumpAfterCrash;
@property(nonatomic) _Bool bCoreDumpAtNonCrash; // @synthesize bCoreDumpAtNonCrash=_bCoreDumpAtNonCrash;
@property(nonatomic) _Bool bCoreDumpAtCrash; // @synthesize bCoreDumpAtCrash=_bCoreDumpAtCrash;
@property(nonatomic) _Bool bMoreKSCrashLogs; // @synthesize bMoreKSCrashLogs=_bMoreKSCrashLogs;
@property(nonatomic) _Bool bMoreThreadInfo; // @synthesize bMoreThreadInfo=_bMoreThreadInfo;
@property(nonatomic) unsigned int busyThreadProfileInterval; // @synthesize busyThreadProfileInterval=_busyThreadProfileInterval;
@property(nonatomic) unsigned int busyThreadProfileDuration; // @synthesize busyThreadProfileDuration=_busyThreadProfileDuration;
@property(nonatomic) _Bool bBusyThreadProfile; // @synthesize bBusyThreadProfile=_bBusyThreadProfile;
@property(nonatomic) _Bool bPrintJSCType; // @synthesize bPrintJSCType=_bPrintJSCType;
@property(nonatomic) _Bool bPrintVMSummary; // @synthesize bPrintVMSummary=_bPrintVMSummary;
@property(nonatomic) _Bool bEnableSnapshot; // @synthesize bEnableSnapshot=_bEnableSnapshot;
@property(nonatomic) _Bool bSuspendAllThreads; // @synthesize bSuspendAllThreads=_bSuspendAllThreads;
@property(nonatomic) _Bool bSensitiveRunloopHangDetection; // @synthesize bSensitiveRunloopHangDetection=_bSensitiveRunloopHangDetection;
@property(nonatomic) unsigned int memoryWarningThresholdInMB; // @synthesize memoryWarningThresholdInMB=_memoryWarningThresholdInMB;
@property(nonatomic) unsigned long long totalWriteLimit; // @synthesize totalWriteLimit=_totalWriteLimit;
@property(nonatomic) unsigned long long totalReadLimit; // @synthesize totalReadLimit=_totalReadLimit;
@property(nonatomic) unsigned long long singleWriteLimit; // @synthesize singleWriteLimit=_singleWriteLimit;
@property(nonatomic) unsigned long long singleReadLimit; // @synthesize singleReadLimit=_singleReadLimit;
@property(nonatomic) _Bool bGetDiskIOStack; // @synthesize bGetDiskIOStack=_bGetDiskIOStack;
@property(nonatomic) _Bool bPrintCPUFrequency; // @synthesize bPrintCPUFrequency=_bPrintCPUFrequency;
@property(nonatomic) _Bool bPrintMemomryUse; // @synthesize bPrintMemomryUse=_bPrintMemomryUse;
@property(nonatomic) unsigned int dumpDailyLimit; // @synthesize dumpDailyLimit=_dumpDailyLimit;
@property(nonatomic) unsigned int triggerToBeFilteredCount; // @synthesize triggerToBeFilteredCount=_triggerToBeFilteredCount;
@property(nonatomic) _Bool bFilterSameStack; // @synthesize bFilterSameStack=_bFilterSameStack;
@property(nonatomic) float powerConsumeStackCPULimit; // @synthesize powerConsumeStackCPULimit=_powerConsumeStackCPULimit;
@property(nonatomic) _Bool bGetPowerConsumeStack; // @synthesize bGetPowerConsumeStack=_bGetPowerConsumeStack;
@property(nonatomic) _Bool bGetCPUHighLog; // @synthesize bGetCPUHighLog=_bGetCPUHighLog;
@property(nonatomic) _Bool bPrintCPUUsage; // @synthesize bPrintCPUUsage=_bPrintCPUUsage;
@property(nonatomic) float limitLowerCPUPercent; // @synthesize limitLowerCPUPercent=_limitLowerCPUPercent;
@property(nonatomic) float limitCPUPercent; // @synthesize limitCPUPercent=_limitCPUPercent;
@property(nonatomic) unsigned int mainThreadCount; // @synthesize mainThreadCount=_mainThreadCount;
@property(nonatomic) unsigned int perStackInterval; // @synthesize perStackInterval=_perStackInterval;
@property(nonatomic) _Bool bMainThreadProfile; // @synthesize bMainThreadProfile=_bMainThreadProfile;
@property(nonatomic) _Bool bMainThreadHandle; // @synthesize bMainThreadHandle=_bMainThreadHandle;
@property(nonatomic) unsigned int checkPeriodTime; // @synthesize checkPeriodTime=_checkPeriodTime;
@property(nonatomic) _Bool bRunloopDynamicThreshold; // @synthesize bRunloopDynamicThreshold=_bRunloopDynamicThreshold;
@property(nonatomic) unsigned int runloopLowThreshold; // @synthesize runloopLowThreshold=_runloopLowThreshold;
@property(nonatomic) unsigned int runloopTimeOut; // @synthesize runloopTimeOut=_runloopTimeOut;
- (id)description;

@end

