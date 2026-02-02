//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDateFormatter, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCMetricKitDiagnosticMgr
{
    _Bool _crashShouldReport;
    _Bool _hangShouldReport;
    _Bool _cpuExceptionShouldReport;
    _Bool _diskWriteExceptionShouldReport;
    _Bool _appLaunchShouldReport;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_uploadingFiles;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
}

+ (void)updateVoipInfo:(int)arg1 lastVoipTimestamp:(double)arg2;
+ (void)enableForceReportForLastTermination;
- (void).cxx_destruct;
@property(nonatomic) _Bool appLaunchShouldReport; // @synthesize appLaunchShouldReport=_appLaunchShouldReport;
@property(nonatomic) _Bool diskWriteExceptionShouldReport; // @synthesize diskWriteExceptionShouldReport=_diskWriteExceptionShouldReport;
@property(nonatomic) _Bool cpuExceptionShouldReport; // @synthesize cpuExceptionShouldReport=_cpuExceptionShouldReport;
@property(nonatomic) _Bool hangShouldReport; // @synthesize hangShouldReport=_hangShouldReport;
@property(nonatomic) _Bool crashShouldReport; // @synthesize crashShouldReport=_crashShouldReport;
@property(retain, nonatomic) NSDateFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSMutableSet *uploadingFiles; // @synthesize uploadingFiles=_uploadingFiles;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (int)recursivelyEnumerateStackFrame:(id)arg1;
- (int)enumerate:(id)arg1;
- (id)getFileName:(id)arg1;
- (unsigned long long)getDumpType:(id)arg1;
- (id)generateFilePathWithType:(unsigned long long)arg1 ReportID:(id)arg2;
- (id)getDiagnosticDirectory;
- (void)logUploadedDiagnostic:(unsigned long long)arg1;
- (void)logUploadingDiagnostic:(unsigned long long)arg1;
- (void)logSavedDiagnostic:(unsigned long long)arg1;
- (_Bool)shouldReport:(unsigned long long)arg1;
- (void)autoClean;
- (void)onCustomIssue:(id)arg1 uploadComplete:(_Bool)arg2;
- (void)upload:(id)arg1;
- (void)uploadWithDate:(id)arg1 forceAll:(_Bool)arg2;
- (void)uploadWithDate:(id)arg1;
- (id)getStringOfSignal:(id)arg1;
- (id)getStringOfExceptionType:(id)arg1;
- (id)byteToMegabyte:(unsigned long long)arg1;
- (_Bool)isUnawareCrash:(id)arg1;
- (unsigned int)reviseClientVersion:(double)arg1;
- (id)voipInfo:(double)arg1;
- (id)heavyUserInfo;
- (id)timeInfo;
- (id)memoryInfo;
- (id)processInfo;
- (id)deviceInfo;
- (void)addUserInfo:(id)arg1;
- (void)addExtraInfo:(id)arg1 timeStampEnd:(id)arg2;
- (void)saveDiagnostic:(id)arg1 dumpType:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)didReceiveDiagnostic:(id)arg1 dumpType:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)p_didReceiveDiagnosticPayload:(id)arg1;
- (void)didReceiveDiagnosticPayload:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

