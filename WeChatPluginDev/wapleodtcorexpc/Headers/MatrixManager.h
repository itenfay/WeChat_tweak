//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class Matrix, MatrixStrategyIDCache, NSMutableDictionary, NSString;
@protocol MatrixManagerDelegate, MatrixManagerReportDelegate, OS_dispatch_queue;

@interface MatrixManager : NSObject
{
    id <MatrixManagerDelegate> _delegate;
    id <MatrixManagerReportDelegate> _matrixReportDelegate;
    unsigned long long _strategyUin;
    NSObject<OS_dispatch_queue> *_reporterQueue;
    NSMutableDictionary *_reportIssueDict;
    Matrix *_matrix;
    MatrixStrategyIDCache *_strategyIDCache;
}

+ (id)formatReportIDFromDumpFilePath:(id)arg1;
+ (void)enableLocalSymbolicate;
+ (void)setMatrixCacheRootPath:(id)arg1;
+ (id)sharedInstance;
+ (id)getCrashReportStrategyTag;
+ (unsigned long long)strategyReportEnvForTag:(id)arg1;
+ (void)strategyUpdateUploadCnt:(int)arg1 forTag:(id)arg2;
+ (_Bool)startegyIsMaxUploadCntForTag:(id)arg1;
+ (_Bool)strategyIsAutoReportForTag:(id)arg1;
+ (void)updateStrategy:(id)arg1 forTag:(id)arg2;
+ (void)setUinForStrategy:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MatrixStrategyIDCache *strategyIDCache; // @synthesize strategyIDCache=_strategyIDCache;
@property(retain, nonatomic) Matrix *matrix; // @synthesize matrix=_matrix;
@property(retain, nonatomic) NSMutableDictionary *reportIssueDict; // @synthesize reportIssueDict=_reportIssueDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reporterQueue; // @synthesize reporterQueue=_reporterQueue;
@property(nonatomic) unsigned long long strategyUin; // @synthesize strategyUin=_strategyUin;
@property(nonatomic) __weak id <MatrixManagerReportDelegate> matrixReportDelegate; // @synthesize matrixReportDelegate=_matrixReportDelegate;
@property(nonatomic) __weak id <MatrixManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getReportIDForStrategy:(id)arg1;
- (void)addReportID:(id)arg1 forStrategy:(id)arg2;
- (_Bool)p_isReportSupportCustomLagStrategy;
- (void)p_callCoreDumpIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadCoreDumpIssueDelegate:(id)arg1;
- (void)p_callCustomIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadCustomIssueDelegate:(id)arg1;
- (void)p_callSqliteLintDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadSqliteLintIssueDelegate:(id)arg1;
- (void)p_callMemoryStatIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadMemStatIssueDelegate:(id)arg1;
- (void)p_callLagIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadLagIssueDelegate:(id)arg1;
- (void)p_callCrashIssueErrorDelegate:(id)arg1;
- (void)p_callCrashIssueDelegate:(id)arg1 success:(_Bool)arg2;
- (void)p_callUploadCrashIssueDelegate:(id)arg1;
- (id)tryGetMatrixReportCustomLagLimitReportIDs:(id)arg1;
- (_Bool)isCanCustomAutoReportLag:(id)arg1 customStrategy:(id)arg2;
- (_Bool)isReportCustomLagLimit:(id)arg1 customStrategy:(id)arg2;
- (_Bool)isReportSupportCustomLagStrategy;
- (_Bool)isNetworkAllowAutoReportLag:(id)arg1;
- (_Bool)isCanAutoReportLag:(id)arg1;
- (_Bool)isReportLagLimit:(id)arg1;
- (_Bool)isReportCrashLimit:(id)arg1;
- (void)notifyAppWillSuspend;
- (void)notifyAppBackgroundFetch;
- (void)uploadCustomIssue:(id)arg1;
- (int)getIssueTypeOfMatrixIssue:(id)arg1;
- (_Bool)uploadMatrixIssue:(id)arg1;
- (void)uploadMatrixIssueCompleted:(_Bool)arg1 withIssueID:(id)arg2;
- (void)onReportIssue:(id)arg1;
- (void)onError:(id)arg1 error:(id)arg2;
- (void)onDestroy:(id)arg1;
- (void)onStop:(id)arg1;
- (void)onStart:(id)arg1;
- (void)onInit:(id)arg1;
- (void)setUserScene:(id)arg1;
- (_Bool)checkXPCReboot;
- (_Bool)isAfterLastLaunchUserRebootDevice;
- (unsigned long long)lastRebootType;
- (id)getFPSMonitorPlugin;
- (id)getCrashBlockPlugin;
- (void)installWithBuilder:(id)arg1;
- (id)init;
- (_Bool)isLagReportUploadCountLimit:(id)arg1;
- (void)incrementLagReportUploadCount:(int)arg1 pluginTag:(id)arg2;
- (_Bool)isCurrentNetworkAllowLagReport:(id)arg1;
- (_Bool)canAutoLagReport:(id)arg1;
- (void)updateVipLagReportStartegyWithPluginTag:(id)arg1 withSampleRatio:(float)arg2 withReportLimitCount:(unsigned long long)arg3 withNetworkEnv:(unsigned long long)arg4 withTimeout:(unsigned long long)arg5;
- (void)updateLagReportStartegyWithPluginTag:(id)arg1 withSampleRatio:(float)arg2 withReportLimitCount:(unsigned long long)arg3 withNetworkEnv:(unsigned long long)arg4;
- (_Bool)isCrashReportUploadCountLimit;
- (void)incrementCrashReportUploadCount:(int)arg1;
- (void)updateCrashReportStrategyWithReportLimitCount:(unsigned long long)arg1;
- (id)getReportCachePath;
- (id)getReportURL;
- (id)getReportHost;
- (id)getReportUserName;
- (unsigned int)getReportAppVersion;
- (unsigned int)getReportUin;
- (id)getReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (unsigned int)getReportProductID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

