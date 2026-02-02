//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface WCDBManager : NSObject
{
    NSMutableSet *m_tableUsageRecord;
    NSMutableDictionary *m_traceConfigs;
    long long m_diskIOErrorCount;
    struct map<WCDBTag, WCDBRouterInfo *, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, WCDBRouterInfo *>>> _taggedRouterInfos;
    struct set<WCDBTag, std::less<WCDBTag>, std::allocator<WCDBTag>> _criticalRouterTags;
    struct set<WCDBTag, std::less<WCDBTag>, std::allocator<WCDBTag>> _retrievableTags;
    struct map<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>, std::less<std::pair<WCDBTag, WCTErrorCode>>, std::allocator<std::pair<const std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>>> _errorIdkeys;
    NSMutableDictionary *_monitorDatabases;
    NSObject<OS_dispatch_queue> *_sqliteLintQueue;
    double _sqlCostLowerBound;
    MemoryMappedKV *m_kv;
    struct map<WCDBTag, int, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, int>>> _retrieveTimesIdkeys;
    struct map<WCDBTag, int, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, int>>> _retrieveScoreIdkeys;
    _Bool _needReportRetrieve;
    double _mechanicTime;
    double _mechanicSize;
    double _mechanicScore;
    int _mechanicCount;
    int _mechanicWalCount;
    int _mechanicTotalPageCount;
    double _fullCrawlTime;
    double _fullCrawlSize;
    double _fullCrawlScore;
    int _fullCrawlCount;
    int _fullCrawlTotalPageCount;
    _Bool _showWhereDatabase;
    NSArray *_routerInfos;
}

+ (void)tryReportBackupError:(id)arg1;
+ (id)backupRecordInfoPath;
+ (void)saveBackupInfo:(id)arg1;
+ (id)getOrCreateBackupInfo;
+ (unsigned long long)getThreadCPUTime;
+ (void)tryRecordBackupSize:(id)arg1;
+ (id)repairRecordInfoPath;
+ (void)tryReportAutoAddColumn:(id)arg1;
+ (void)printCorruptDBHeader:(id)arg1;
+ (void)tryReportIDKey:(id)arg1;
+ (void)tryReportKV:(id)arg1;
+ (void)report:(id)arg1;
+ (id)wcdbUserRecordDir;
+ (id)wcdbRecordDir;
+ (void)safeInvokeProgressHandler:(CDUnknownBlockType)arg1 withProgress:(double)arg2 andIncrement:(double)arg3;
+ (_Bool)isWCDBBuiltinTable:(id)arg1;
+ (id)shared;
+ (id)tryRecordTimeOnChainCall:(CDUnknownBlockType)arg1 ofType:(int)arg2 ofTag:(int)arg3;
+ (void)tryReportCompressionError:(id)arg1;
+ (id)compressRecordPathFor:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property _Bool showWhereDatabase; // @synthesize showWhereDatabase=_showWhereDatabase;
@property(readonly, nonatomic) NSArray *routerInfos; // @synthesize routerInfos=_routerInfos;
- (void)saveRepairInfo:(id)arg1;
- (id)getOrCreateRepairInfos;
- (void)tracePerformance:(id)arg1 withCost:(double)arg2 onDatabase:(id)arg3;
- (_Bool)excuteSQL:(id)arg1 onDB:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)monitorDatabase:(id)arg1;
- (void)reportMatrixIssue:(id)arg1;
- (const void *)errorIdkeys;
- (void)enableTraceForDatabase:(int)arg1;
- (void)asyncShowUsageForDatabase:(int)arg1 withCompleteHandler:(CDUnknownBlockType)arg2;
- (void)onIPxx:(id)arg1;
- (void)clearInitMark;
- (void)enableIdleTimer:(_Bool)arg1;
- (void)enableNewSync:(_Bool)arg1;
- (void)exitApplication;
- (_Bool)rollbackMessageDatabase:(CDUnknownBlockType)arg1;
- (_Bool)rollbackBrandMsgDatabase:(CDUnknownBlockType)arg1;
- (id)kvStorage;
- (id)getABTest:(id)arg1;
- (void)updateKey:(id)arg1 withExpt:(id)arg2;
- (void)updateABTest;
- (void)configABTest;
- (void)tryRecordRetrieveInfo:(id)arg1;
- (void)enableAutoRecovering:(id)arg1;
- (id)getAndCheckCorruptedDatabaseInfosWithProgressHandler:(CDUnknownBlockType)arg1;
- (id)getCorruptedCriticalDatabaseInfos;
- (_Bool)removeDepositedDatabase;
- (_Bool)containsDeposited;
- (id)getRetrievableDatabaseInfos;
- (_Bool)recover:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2 reportAfterFinished:(_Bool)arg3;
- (id)routerInfoWithTag:(int)arg1;
- (_Bool)isCriticalRouter:(int)arg1;
- (id)initOnce;
- (id)blockOfRecordingCRUD:(int)arg1;
- (void)recordTimeOfCRUD;
- (void)markAsCompressFinish:(int)arg1;
- (void)markAsCompressBegin:(int)arg1;
- (int)getCompressionIDKey:(int)arg1;
- (_Bool)rollbackCompressionForDatabase:(int)arg1 progress:(CDUnknownBlockType)arg2;
- (_Bool)shouldClearCompressedKey:(int)arg1;
- (_Bool)hasStartCompress:(int)arg1;
- (_Bool)tryRegisterDict:(unsigned long long)arg1;
- (id)decompressDictData:(id)arg1;
- (id)decryptDict:(id)arg1 verifyMD5:(id)arg2;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)genDictKey;
- (id)getDataOfDict:(unsigned long long)arg1;
- (void)traceEmptyElement:(id)arg1;
- (void)traceError:(id)arg1;
- (void)traceDiskIOError;
- (id)extracted:(id)arg1;
- (void)tryLoadTraceConfigs;
- (void)saveSQLTraceRecordForTag:(int)arg1;
- (double)getSQLTraceRecordForTag:(int)arg1;
- (_Bool)shouldTraceDataBase:(int)arg1;
- (long long)getMsgCountFrom:(id)arg1;
- (void)reportMsgUsage;
- (unsigned long long)getAppMsgReportType:(id)arg1;
- (unsigned long long)getMsgReportType:(unsigned int)arg1 dbTag:(int)arg2;
- (void)enumerateAllDatabases:(CDUnknownBlockType)arg1;
- (void)reportDBUsage:(unsigned long long)arg1;
- (void)reportUsage:(id)arg1;
- (_Bool)executeVacuum:(id)arg1 freedSize:(long long *)arg2 progress:(CDUnknownBlockType)arg3;
- (id)getVacuumInfo:(int)arg1 path:(id)arg2 withFreeSize:(unsigned long long)arg3;
- (id)getVacuumInfo:(int)arg1 withFreeSize:(unsigned long long)arg2;
- (id)databaseFromVacuumInfo:(id)arg1;
- (id)getVacuumInfosWithFreeSpace:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

