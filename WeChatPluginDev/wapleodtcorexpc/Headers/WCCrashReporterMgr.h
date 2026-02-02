//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCrashReporterMgr
{
    unsigned long long _currentReportType;
}

+ (void)reportWithID:(int)arg1 ext:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)reportIdKeyList:(vector_0827168c)arg1;
+ (void)reportId:(int)arg1 key:(int)arg2 andValue:(int)arg3;
@property(nonatomic) unsigned long long currentReportType; // @synthesize currentReportType=_currentReportType;
- (void)handleReportCoreDumpIssue:(id)arg1 success:(_Bool)arg2;
- (void)handleBeginReportCoreDumpIssue:(id)arg1;
- (void)handleReportCrashError:(id)arg1;
- (void)handleReportCrashIssue:(id)arg1 success:(_Bool)arg2;
- (void)handleBeginReportCrashIssue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

