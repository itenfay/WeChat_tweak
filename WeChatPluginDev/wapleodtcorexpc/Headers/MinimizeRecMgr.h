//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCTDatabase, WCTTable;
@protocol MinimizeEventRouteDelegate><MinimizeTransitionInterface;

@interface MinimizeRecMgr
{
    id <MinimizeEventRouteDelegate><MinimizeTransitionInterface> _eventRouteDelegate;
    WCTDatabase *_db;
    WCTTable *_tableUsedRecordsInfo;
    WCTTable *_tablePinedRecordsInfo;
    NSMutableDictionary *_dicTaskKey2NotifyDelegate;
}

+ (_Bool)__checkRecTaskDataValid:(id)arg1;
+ (id)db_repairConfigPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicTaskKey2NotifyDelegate; // @synthesize dicTaskKey2NotifyDelegate=_dicTaskKey2NotifyDelegate;
@property(retain, nonatomic) WCTTable *tablePinedRecordsInfo; // @synthesize tablePinedRecordsInfo=_tablePinedRecordsInfo;
@property(retain, nonatomic) WCTTable *tableUsedRecordsInfo; // @synthesize tableUsedRecordsInfo=_tableUsedRecordsInfo;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
@property(nonatomic) __weak id <MinimizeEventRouteDelegate><MinimizeTransitionInterface> eventRouteDelegate; // @synthesize eventRouteDelegate=_eventRouteDelegate;
- (void)__asyncSaveSnapShotImage:(id)arg1 forTaskKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)__deleteTaskSnaphotImageForTaskKey:(id)arg1;
- (id)__checkAndReturnLocalTaskDataForTaskKey:(id)arg1;
- (_Bool)tryRemoveSnapShotImageForTaskKey:(id)arg1;
- (id)__rawImageWithTaskData:(id)arg1;
- (id)__decodedImageWithTaskData:(id)arg1;
- (id)taskSnapShotImageWithTaskData:(id)arg1;
- (_Bool)updateSnapshotImage:(id)arg1 taskBizName:(id)arg2 taskBizKey:(id)arg3;
- (id)getNofityDelegateRecoverIfNeed:(id)arg1;
- (_Bool)recoverNotifyDelegate:(id)arg1;
- (id)notifyDelegateFromTaskData:(id)arg1;
- (void)callExposedRecentUsedTaskWithData:(id)arg1;
- (void)callRemoveRecentUsedTaskWithData:(id)arg1;
- (void)callLaunchRecentUsedTaskWithData:(id)arg1 enterScene:(unsigned int)arg2;
- (_Bool)checkIfTaskValid:(id)arg1;
- (id)getRecentUsedRecordWithTaskBizName:(id)arg1 limit:(unsigned int)arg2;
- (_Bool)deleteUsedTaskDataBeforeFirstTaskCreateTime:(unsigned int)arg1 taskBizName:(id)arg2;
- (_Bool)deleteUsedTaskData:(id)arg1 inScene:(unsigned int)arg2;
- (_Bool)addUsedTaskDataToPined:(id)arg1;
- (_Bool)addOrUpdateUsedTaskData:(id)arg1 notifyDelegate:(id)arg2;
- (void)dealloc;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)callMinimizeTaskDataRemoved:(id)arg1;
- (void)callMinimizeTaskDataExposed:(id)arg1;
- (_Bool)callLaunchTaskRecord:(id)arg1 openContext:(id)arg2 enterTaskScene:(unsigned int)arg3;
- (_Bool)removeMinimizeTaskRecordWithKey:(id)arg1 isNotify:(_Bool)arg2;
- (_Bool)removeMinimizeTaskRecordWithKey:(id)arg1;
- (_Bool)isMinimizeTaskRecordForground:(id)arg1;
- (id)tryUpdateNewMinimizeTaskRecordAndModifyCurrentTaskData:(id)arg1;
- (_Bool)__tryAppendNewMinimizePositiveTask:(id)arg1 notifyDelegate:(id)arg2 supposedCreateTime:(unsigned int)arg3 isNotify:(_Bool)arg4;
- (_Bool)tryAppendNewMinimizePositiveTask:(id)arg1 notifyDelegate:(id)arg2 isNotify:(_Bool)arg3;
- (_Bool)tryAppendNewMinimizePositiveTask:(id)arg1 notifyDelegate:(id)arg2;
- (id)minimizeTaskRecordWithTaskKey:(id)arg1;
- (id)minimizeTaskRecordWithTaskBizName:(id)arg1;
- (id)minimizeTaskRecordWithTaskBizName:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)hasMinimizeTaskRecord:(id)arg1;
- (_Bool)updateTaskRecordLastEntryTimeIfNeed:(unsigned int)arg1;
- (id)fisrtMinimizedTaskRecord;
- (unsigned int)minimizeTaskRecordCount;
- (id)minimizedTaskRecordsWithDataChangeDelegate:(id)arg1;
- (id)minimizedTaskRecords;
- (void)removeRecoverNotification;
- (void)registerRecoverNotification;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)minimizeRecDidRecoverNotificationName;
- (id)minimizeRecWillRecoverNotificationName;
- (long long)minimizeRecWCTTag;
- (id)__getMinimizeTaskDataWithTaskKey:(id)arg1 table:(id)arg2;
- (id)__getMinimizeRecordTaskWithBizName:(id)arg1 table:(id)arg2 beforeCreateTime:(unsigned int)arg3;
- (id)__getMinimizeRecordTaskWithBizName:(id)arg1 table:(id)arg2 fromCreateTime:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)__getMinimizeRecordTaskSortByCreateTime:(id)arg1 limit:(unsigned int)arg2;
- (_Bool)__deleteMinimizeRecordTaskBeforeCreateTime:(unsigned int)arg1 table:(id)arg2;
- (_Bool)__deleteMinimizeRecordTaskWithTaskKey:(id)arg1 table:(id)arg2;
- (_Bool)__insertOrUpdateMinimizeRecordTask:(id)arg1 table:(id)arg2;
- (_Bool)db_batchUpdateMinimizeRecordTaskLastEntryTime:(unsigned int)arg1;
- (_Bool)db_deleteMinimizeRecordTaskBeforeCreateTime:(unsigned int)arg1;
- (_Bool)db_deletePinedMinimizeTaskDataWithKey:(id)arg1;
- (_Bool)db_insertOrUpdatePinedMinimizeTaskData:(id)arg1;
- (id)db_pinedMinimizeTaskDataWithBizName:(id)arg1;
- (id)db_pinedMinimizeTaskDataWithTaskKey:(id)arg1;
- (id)db_arrPinedMinimizeRecordsWithLimit:(unsigned int)arg1;
- (id)db_arrPinedMinimizeRecords;
- (unsigned int)db_pinedMinimizeTaskDataCount;
- (id)db_getUsedMinimizeTaskDataWithBizName:(id)arg1 beforeCreateTime:(unsigned int)arg2;
- (id)db_getUsedMinimizeTaskDataWithBizName:(id)arg1 fromCreateTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)db_getUsedMinimizeTaskDataWithBizName:(id)arg1 limit:(unsigned int)arg2;
- (id)db_usedMinimizeTaskDataWithTaskKey:(id)arg1;
- (_Bool)db_deleteUsedMinimizeTaskDataBeforeCreateTime:(unsigned int)arg1 taskBizName:(id)arg2;
- (_Bool)db_deleteUsedMinimizeTaskData:(id)arg1;
- (_Bool)db_insertOrUpdateUsedMinimizeTaskData:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (void)openDB;
- (void)callDeallocInCatagoryDataBase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

