//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol KSCrashReportFilter;

@interface KSCrash : NSObject
{
    _Bool _searchQueueNames;
    _Bool _introspectMemory;
    _Bool _addConsoleLogToReport;
    _Bool _printPreviousLog;
    _Bool _shouldPrintVMSummary;
    _Bool _shouldPrintJSCType;
    _Bool _matrixKSLoggerEnabled;
    _Bool _coreDumpEnabledAtCrash;
    _Bool _coreDumpEnabledAtNonCrash;
    int _deleteBehaviorAfterSendAll;
    int _monitoring;
    int _demangleLanguages;
    int _maxReportCount;
    id <KSCrashReportFilter> _sink;
    NSDictionary *_userInfo;
    double _deadlockWatchdogInterval;
    CDUnknownFunctionPointerType _onCrash;
    CDUnknownFunctionPointerType _onHandleSignalCallBack;
    CDUnknownFunctionPointerType _onWritePointThread;
    CDUnknownFunctionPointerType _onWritePointThreadRepeatNumber;
    CDUnknownFunctionPointerType _onWriteProfileCallBack;
    CDUnknownFunctionPointerType _onWritePointCpuHighThread;
    CDUnknownFunctionPointerType _onWritePointCpuHighThreadCount;
    CDUnknownFunctionPointerType _onWritePointCpuHighThreadValue;
    NSString *_bundleName;
    NSString *_basePath;
    NSArray *_doNotIntrospectClasses;
    CDUnknownFunctionPointerType _uncaughtExceptionHandler;
    unsigned long long _userID;
    CDUnknownFunctionPointerType _onInnerHandleSignalCallBack;
}

+ (void)applicationWillTerminate;
+ (void)applicationWillEnterForeground;
+ (void)applicationDidEnterBackground;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (void)classDidBecomeLoaded;
+ (void)subscribeToNotifications;
+ (void)setCustomFullVersion:(id)arg1 shortVersion:(id)arg2;
+ (id)sharedInstance;
+ (void)initialize;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) CDUnknownFunctionPointerType onInnerHandleSignalCallBack; // @synthesize onInnerHandleSignalCallBack=_onInnerHandleSignalCallBack;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool coreDumpEnabledAtNonCrash; // @synthesize coreDumpEnabledAtNonCrash=_coreDumpEnabledAtNonCrash;
@property(nonatomic) _Bool coreDumpEnabledAtCrash; // @synthesize coreDumpEnabledAtCrash=_coreDumpEnabledAtCrash;
@property(nonatomic) _Bool matrixKSLoggerEnabled; // @synthesize matrixKSLoggerEnabled=_matrixKSLoggerEnabled;
@property(nonatomic) _Bool shouldPrintJSCType; // @synthesize shouldPrintJSCType=_shouldPrintJSCType;
@property(nonatomic) _Bool shouldPrintVMSummary; // @synthesize shouldPrintVMSummary=_shouldPrintVMSummary;
@property(nonatomic) CDUnknownFunctionPointerType uncaughtExceptionHandler; // @synthesize uncaughtExceptionHandler=_uncaughtExceptionHandler;
@property(nonatomic) int maxReportCount; // @synthesize maxReportCount=_maxReportCount;
@property(nonatomic) _Bool printPreviousLog; // @synthesize printPreviousLog=_printPreviousLog;
@property(nonatomic) _Bool addConsoleLogToReport; // @synthesize addConsoleLogToReport=_addConsoleLogToReport;
@property(nonatomic) int demangleLanguages; // @synthesize demangleLanguages=_demangleLanguages;
@property(retain, nonatomic) NSArray *doNotIntrospectClasses; // @synthesize doNotIntrospectClasses=_doNotIntrospectClasses;
@property(nonatomic) _Bool introspectMemory; // @synthesize introspectMemory=_introspectMemory;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(nonatomic) CDUnknownFunctionPointerType onWritePointCpuHighThreadValue; // @synthesize onWritePointCpuHighThreadValue=_onWritePointCpuHighThreadValue;
@property(nonatomic) CDUnknownFunctionPointerType onWritePointCpuHighThreadCount; // @synthesize onWritePointCpuHighThreadCount=_onWritePointCpuHighThreadCount;
@property(nonatomic) CDUnknownFunctionPointerType onWritePointCpuHighThread; // @synthesize onWritePointCpuHighThread=_onWritePointCpuHighThread;
@property(nonatomic) CDUnknownFunctionPointerType onWriteProfileCallBack; // @synthesize onWriteProfileCallBack=_onWriteProfileCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onWritePointThreadRepeatNumber; // @synthesize onWritePointThreadRepeatNumber=_onWritePointThreadRepeatNumber;
@property(nonatomic) CDUnknownFunctionPointerType onWritePointThread; // @synthesize onWritePointThread=_onWritePointThread;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSignalCallBack; // @synthesize onHandleSignalCallBack=_onHandleSignalCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onCrash; // @synthesize onCrash=_onCrash;
@property(nonatomic) _Bool searchQueueNames; // @synthesize searchQueueNames=_searchQueueNames;
@property(nonatomic) double deadlockWatchdogInterval; // @synthesize deadlockWatchdogInterval=_deadlockWatchdogInterval;
@property(nonatomic) int monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) int deleteBehaviorAfterSendAll; // @synthesize deleteBehaviorAfterSendAll=_deleteBehaviorAfterSendAll;
@property(retain, nonatomic) id <KSCrashReportFilter> sink; // @synthesize sink=_sink;
- (id)nullTerminated:(id)arg1;
- (void)deleteReportWithID:(id)arg1 withStorePath:(id)arg2;
- (void)deleteReportWithID:(id)arg1;
- (id)reportWithStringID:(id)arg1 error:(id *)arg2;
- (id)loadCrashReportJSONWithStringID:(id)arg1 error:(id *)arg2;
- (id)reportIDFromFilename:(id)arg1 extension:(id)arg2;
- (id)allReportIDWithPath:(id)arg1 extension:(id)arg2;
- (id)allReportIDWithPath:(id)arg1;
- (id)allCoreDumpID;
- (id)allReportID;
- (id)pathToCoreDumpWithID:(id)arg1 withStorePath:(id)arg2;
- (id)pathToCrashReportWithID:(id)arg1 withStorePath:(id)arg2;
- (id)pathToCrashReportWithID:(id)arg1;
- (id)coreDumpFileNameWithID:(id)arg1;
- (id)crashReportFileNameWithID:(id)arg1;
- (id)allReports;
- (id)reportWithID:(long long)arg1;
- (void)doctorReport:(id)arg1;
- (id)loadCrashReportJSONWithID:(long long)arg1;
- (void)sendReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int reportCount;
@property(readonly, nonatomic) _Bool crashedLastLaunch;
@property(readonly, nonatomic) int sessionsSinceLaunch;
@property(readonly, nonatomic) double backgroundDurationSinceLaunch;
@property(readonly, nonatomic) double activeDurationSinceLaunch;
@property(readonly, nonatomic) int sessionsSinceLastCrash;
@property(readonly, nonatomic) int launchesSinceLastCrash;
@property(readonly, nonatomic) double backgroundDurationSinceLastCrash;
@property(readonly, nonatomic) double activeDurationSinceLastCrash;
- (void)reportUserException:(id)arg1 reason:(id)arg2 language:(id)arg3 lineOfCode:(id)arg4 stackTrace:(id)arg5 logAllThreads:(_Bool)arg6 enableSnapshot:(_Bool)arg7 terminateProgram:(_Bool)arg8 writeCpuUsage:(_Bool)arg9 dumpFilePath:(id)arg10 dumpType:(int)arg11;
- (void)deleteAllReports;
- (void)sendAllReportsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)install;
@property(readonly, nonatomic) NSDictionary *systemInfo;
@property(readonly, nonatomic) unsigned int lastJSCType;
@property(nonatomic) _Bool catchZombies;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)initWithBasePath:(id)arg1;
- (id)init;

@end

