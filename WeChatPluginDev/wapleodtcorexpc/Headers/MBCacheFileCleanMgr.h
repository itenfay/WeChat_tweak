//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MBFileSpaceTraceLogic, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MBCacheFileCleanMgr
{
    NSObject<OS_dispatch_queue> *_workQueue;
    MBFileSpaceTraceLogic *_fileTraceLogic;
    unsigned long long _scanPhase;
    unsigned long long _maxTotalFileSize;
}

- (void).cxx_destruct;
@property unsigned long long maxTotalFileSize; // @synthesize maxTotalFileSize=_maxTotalFileSize;
@property unsigned long long scanPhase; // @synthesize scanPhase=_scanPhase;
- (void)onBizDestory:(id)arg1;
- (void)onBizPause:(id)arg1;
- (void)scanFolder:(id)arg1 getTotalFileSize:(unsigned long long *)arg2 totalFileNum:(unsigned int *)arg3;
- (id)subFolderNamesWithPath:(id)arg1;
- (void)fileStatWithPath:(id)arg1 getCreateTime:(unsigned int *)arg2 modifyTime:(unsigned int *)arg3 fileSize:(unsigned long long *)arg4;
- (unsigned int)getModifyTimeWithPath:(id)arg1;
- (_Bool)isBizRunning:(id)arg1;
- (void)workthread_cleanFilesToMakeEnoughSpaceForBizName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)workthread_cleanFilesForApp:(id)arg1;
- (void)workthread_cleanGlobalFilesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)arg1 tempDirPath:(id)arg2;
- (void)removeBizItemNotHasFolder:(id)arg1;
- (id)scanRootDir;
- (void)innerScanFiles;
- (void)workThread_scanFiles;
- (id)arrSortBizItemFromStatus;
- (id)bizItemInStatus:(id)arg1;
- (id)allBizNameInStatus;
- (void)setTotalFileSize:(unsigned long long)arg1 totalFileNum:(unsigned int)arg2 contentModifyTime:(unsigned int)arg3 scanTime:(unsigned int)arg4 withBizName:(id)arg5;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withBizName:(id)arg3;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withBizName:(id)arg3;
- (unsigned long long)currentTotalFileSize;
- (void)saveStatus;
- (void)loadStatus;
- (id)statusFilePath;
- (void)asyncCleanFilesToMakeEnoughSpaceForBizName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncCleanFilesForApp:(id)arg1;
- (void)asyncCleanFilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)asyncScanFiles;
- (_Bool)isTotalFileSizeExceedHalfMax;
- (_Bool)isSingleAppTempSizeExceedSize:(unsigned long long)arg1 bizName:(id)arg2;
- (_Bool)isTotalFileSizeExceed;
- (void)setupMaxTotalFileSize;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (_Bool)isTempFileSizeExceedForBiz:(id)arg1 withFileSize:(unsigned long long)arg2;
- (unsigned long long)tempFileSizeOfBizName:(id)arg1;
- (void)removeTempFileStatWithFileSize:(unsigned long long)arg1 bizName:(id)arg2;
- (void)addTempFileStatWithPath:(id)arg1 bizName:(id)arg2;
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

