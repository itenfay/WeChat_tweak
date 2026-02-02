//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MBFileSpaceTraceLogic, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MBLocalFileStorageMgr
{
    MBFileSpaceTraceLogic *_usrFileTraceLogic;
    NSObject<OS_dispatch_queue> *_fileTraceQueue;
    unsigned long long _usrFileTraceScanFrequency;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicFileStorageInfo;
}

- (void).cxx_destruct;
- (_Bool)moveFolderFiles:(id)arg1 intoFolder:(id)arg2 error:(id *)arg3;
- (id)workThread_unzipWithBizName:(id)arg1 filePath:(id)arg2 targetDirectory:(id)arg3;
- (id)unzipWithBizName:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3;
- (id)unzipForNative:(id)arg1 filePath:(id)arg2 targetDirectory:(id)arg3;
- (id)workThread_saveFileWithBizName:(id)arg1 tempPath:(id)arg2 usrLocalID:(id)arg3;
- (id)saveFileWithBizNama:(id)arg1 tempPath:(id)arg2 usrLocalID:(id)arg3;
- (_Bool)haveFreeSpace:(id)arg1 writeSize:(long long)arg2 localID:(id)arg3 error:(id *)arg4;
- (id)workthread_writeFileDataWithBizName:(id)arg1 localID:(id)arg2 isAppend:(_Bool)arg3 data:(id)arg4;
- (id)writeFileDataWithBizName:(id)arg1 localID:(id)arg2 isAppend:(_Bool)arg3 data:(id)arg4;
- (id)workthread_readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 error:(id *)arg5;
- (id)readFileDataWithBizName:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 error:(id *)arg5;
- (id)usrRealPath:(id)arg1 bizName:(id)arg2 error:(id *)arg3;
- (id)getFileStorageInfoWithBizName:(id)arg1;
- (id)getQueue;
- (void)onBizDestory:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (void)insertIntoSortedArray:(id)arg1 withItem:(id)arg2;
- (void)clearStoreSpaceOfBizName:(id)arg1;
- (void)clearUsrSpaceOfBizName:(id)arg1;
- (unsigned long long)getUsrStoreDataSpaceWithBizName:(id)arg1;
- (void)checkAndClearUsrStoreAndStorageData;
- (unsigned long long)scanIntervalWithPrefix:(id)arg1;
- (id)directoryOfBizName:(id)arg1 prefix:(id)arg2;
- (id)bizNamesThatHaveDirectoryWithPrefix:(id)arg1;
- (void)saveStatus;
- (unsigned long long)usrFileSizeOfbizName:(id)arg1;
- (void)removeUsrItemAndUpdateTotalSize:(id)arg1;
- (void)removeUsrFileStatWithFileSize:(unsigned long long)arg1 bizName:(id)arg2;
- (void)addUsrFileStatWithFileSize:(unsigned long long)arg1 bizName:(id)arg2;
- (void)addUsrFileStatWithDirectory:(id)arg1 bizName:(id)arg2;
- (void)asyncScanFile;
- (void)addUsrFileStatWithFilePath:(id)arg1 bizName:(id)arg2;
- (_Bool)isScanning;
- (void)initFileTraceLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

