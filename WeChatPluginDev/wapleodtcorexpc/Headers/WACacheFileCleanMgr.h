//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, WAFileSpaceTraceLogic;
@protocol OS_dispatch_queue;

@interface WACacheFileCleanMgr
{
    NSObject<OS_dispatch_queue> *_workQueue;
    WAFileSpaceTraceLogic *_fileTraceLogic;
    unsigned long long _scanPhase;
    unsigned long long _maxTotalFileSize;
}

- (void).cxx_destruct;
@property unsigned long long maxTotalFileSize; // @synthesize maxTotalFileSize=_maxTotalFileSize;
@property unsigned long long scanPhase; // @synthesize scanPhase=_scanPhase;
- (void)onAppTaskTerminate:(id)arg1;
- (void)scanFolder:(id)arg1 getTotalFileSize:(unsigned long long *)arg2 totalFileNum:(unsigned int *)arg3;
- (id)subFolderNamesWithPath:(id)arg1;
- (void)fileStatWithPath:(id)arg1 getCreateTime:(unsigned int *)arg2 modifyTime:(unsigned int *)arg3 fileSize:(unsigned long long *)arg4;
- (unsigned int)getModifyTimeWithPath:(id)arg1;
- (_Bool)isWeAppRunning:(id)arg1;
- (void)workthread_cleanFilesToMakeEnoughSpaceForAppId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)workthread_cleanFilesForApp:(id)arg1;
- (void)workthread_cleanGlobalFilesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)arg1 tempDirPath:(id)arg2;
- (void)removeAppItemNotHasFolder:(id)arg1;
- (id)scanRootDir;
- (void)innerScanFiles;
- (void)workThread_scanFiles;
- (id)arrSortAppItemFromStatus;
- (unsigned long long)tempFileSizeOfAppId:(id)arg1;
- (id)appItemInStatus:(id)arg1;
- (id)allAppIDInStatus;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (void)setTotalFileSize:(unsigned long long)arg1 totalFileNum:(unsigned int)arg2 contentModifyTime:(unsigned int)arg3 scanTime:(unsigned int)arg4 withAppID:(id)arg5;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (unsigned long long)currentTotalFileSize;
- (void)saveStatus;
- (void)loadStatus;
- (id)statusFilePath;
- (void)asyncCleanFilesToMakeEnoughSpaceForAppId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncCleanFilesForApp:(id)arg1;
- (void)asyncCleanFilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)asyncScanFiles;
- (_Bool)isTotalFileSizeExceedHalfMax;
- (_Bool)isSingleAppTempSizeExceedSize:(unsigned long long)arg1 appId:(id)arg2;
- (_Bool)isTempFileSizeExceedForApp:(id)arg1 withFileSize:(unsigned long long)arg2;
- (_Bool)isTotalFileSizeExceed;
- (void)setupMaxTotalFileSize;
- (void)removeTempFileStatWithFileSize:(unsigned long long)arg1 appID:(id)arg2;
- (void)addTempFileStatWithPath:(id)arg1 appID:(id)arg2;
- (void)reportAllFileSizeOnOpenWeApp:(id)arg1;
- (void)reportOneFileSize:(unsigned long long)arg1 appId:(id)arg2;
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

