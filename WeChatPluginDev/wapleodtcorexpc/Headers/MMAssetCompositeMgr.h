//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OrderedDictionary;
@protocol MMAssetCompositeTaskProtocol;

@interface MMAssetCompositeMgr
{
    NSString *_username;
    long long _currentMgrState;
    OrderedDictionary *_taskListMap;
    id <MMAssetCompositeTaskProtocol> _currentTask;
}

+ (id)_ensureBackupAssetFilePathForShortName:(id)arg1 withError:(id *)arg2;
+ (id)_convertBackupAssetFilePathFromShortName:(id)arg1;
+ (id)_getAssetBackupDirPath;
+ (unsigned long long)deleteAssetBackupDir;
+ (unsigned long long)preGetAssetBackupDirSize;
+ (id)findBackupAssetFilePathForShortName:(id)arg1;
+ (long long)getAssetBackupDirSizeByte;
+ (_Bool)deleteBackupAssetFileForShortName:(id)arg1;
+ (void)_saveBackupAssetByExportWithAVAsset:(id)arg1 assetUrl:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (void)_saveBackupAssetByCopyWithAVAsset:(id)arg1 assetUrl:(id)arg2 maxSizeLimitMB:(long long)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (void)saveBackupAsset:(id)arg1 andCrop:(_Bool)arg2 forTimeRange:(CDStruct_e83c9415)arg3 withMaxSizeMB:(long long)arg4 resultBlock:(CDUnknownBlockType)arg5;
+ (id)genErrorForCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MMAssetCompositeTaskProtocol> currentTask; // @synthesize currentTask=_currentTask;
@property(retain) OrderedDictionary *taskListMap; // @synthesize taskListMap=_taskListMap;
@property(nonatomic) long long currentMgrState; // @synthesize currentMgrState=_currentMgrState;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)_isDestroyed;
- (_Bool)_isWorking;
- (_Bool)_isNewStateValid:(long long)arg1;
- (void)_updateState:(long long)arg1;
- (Class)_findCompositorClassForTask:(id)arg1;
- (void)_NEWSTATE_onTaskQueueIdle;
- (void)_NEWSTATE_onTask:(id)arg1 finishedWithResult:(id)arg2 compositeSession:(id)arg3;
- (void)_NEWSTATE_onTaskPicked:(id)arg1;
- (void)_NEWSTATE_onTaskDetached:(id)arg1;
- (void)_NEWSTATE_onTaskInterrupted:(id)arg1;
- (void)_NEWSTATE_onTaskPending:(id)arg1;
- (id)_detachTaskOfId:(id)arg1;
- (id)_popFirstTask;
- (void)_enqueue;
- (id)getQueueTaskIDs;
- (long long)getTaskQueueCount;
- (id)getCacheTaskFromTaskID:(id)arg1;
- (void)removeTaskOfId:(id)arg1;
- (_Bool)_addTask:(id)arg1;
- (_Bool)addTask:(id)arg1;
- (void)_clear;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

