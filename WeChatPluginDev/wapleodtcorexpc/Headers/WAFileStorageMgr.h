//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString, WAFileSpaceTraceLogic;
@protocol OS_dispatch_queue;

@interface WAFileStorageMgr
{
    WAFileSpaceTraceLogic *_usrFileTraceLogic;
    NSObject<OS_dispatch_queue> *_fileTraceQueue;
    unsigned long long _usrFileTraceScanFrequency;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicFileStorageInfo;
    NSMutableDictionary *_dicAppHasReportTempLimit;
}

+ (id)getTempVideoPathWithMediaIdentifier:(id)arg1;
+ (id)getFormatPathWithMediaIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskDidFinishColdLaunchWithAppId:(id)arg1;
- (id)getZipEntryDicOfCurrentFile:(id)arg1 length:(unsigned int)arg2 position:(unsigned int)arg3 encoding:(id)arg4;
- (id)decodeData:(id)arg1 withEncoding:(id)arg2;
- (void)clearReportFlag:(id)arg1;
- (_Bool)setReportFlag:(id)arg1;
- (void)workthread_removeSinglePageDirWithAppID:(id)arg1;
- (_Bool)moveFolderFiles:(id)arg1 intoFolder:(id)arg2 error:(id *)arg3;
- (id)moveFolderFilesToTemp:(id)arg1 withAppID:(id)arg2;
- (void)workThread_unzipAsTempWithAppID:(id)arg1 localID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_readZipEntryWithAppID:(id)arg1 localID:(id)arg2 entries:(id)arg3 needReadAll:(_Bool)arg4 globalEncoding:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)workThread_unzipWithAppID:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)workThread_reportFileSizeByAppId:(id)arg1;
- (void)workthread_writeFileDataWithAppID:(id)arg1 localID:(id)arg2 isAppend:(_Bool)arg3 data:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)haveFreeSpace:(id)arg1 writeSize:(long long)arg2 localID:(id)arg3 error:(id *)arg4;
- (void)workthread_readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)workthread_writeFileFromBase64WithAppID:(id)arg1 localID:(id)arg2 base64:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)workthread_readFileToBase64WithAppID:(id)arg1 localID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)getFileStorageInfoWithAppID:(id)arg1;
- (void)workThread_updateFileStorageConfigWithAppID:(id)arg1;
- (void)workThread_getFileInfoWithAppID:(id)arg1 localID:(id)arg2 digestAlgorithm:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)workThread_getSavedFileInfoWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_getSavedFileListWithAppID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)workThread_removeSavedFileWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 usrPath:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)reportFileSizeByAppId:(id)arg1;
- (void)readZipEntryWithAppID:(id)arg1 localID:(id)arg2 entries:(id)arg3 needReadAll:(_Bool)arg4 globalEncoding:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)unzipAsTempWithAppID:(id)arg1 localID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)unzipWithAppID:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)writeFileDataWithAppID:(id)arg1 localID:(id)arg2 isAppend:(_Bool)arg3 data:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)writeFileFromBase64WithAppID:(id)arg1 localID:(id)arg2 base64:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readFileToBase64WithAppID:(id)arg1 localID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getFileInfoWithAppID:(id)arg1 localID:(id)arg2 digestAlgorithm:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)getSavedFileInfoWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getSavedFileListWithAppID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeSavedFileWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 usrPath:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)usrRealPath:(id)arg1 appID:(id)arg2 error:(id *)arg3;
- (id)getQueue;
- (void)onServiceClearData;
- (void)onServiceInit;
- (unsigned long long)scanIntervalWithPrefix:(id)arg1;
- (id)directoryOfAppId:(id)arg1 prefix:(id)arg2;
- (id)appIdsThatHaveDirectoryWithPrefix:(id)arg1;
- (void)saveStatus;
- (unsigned long long)usrFileSizeOfappId:(id)arg1;
- (void)removeUsrItemAndUpdateTotalSize:(id)arg1;
- (void)removeUsrFileStatWithFileSize:(unsigned long long)arg1 appId:(id)arg2;
- (void)addUsrFileStatWithFileSize:(unsigned long long)arg1 appId:(id)arg2;
- (void)addUsrFileStatWithDirectory:(id)arg1 appId:(id)arg2;
- (void)asyncScanFile;
- (void)addUsrFileStatWithFilePath:(id)arg1 appId:(id)arg2;
- (_Bool)isScanning;
- (void)initFileTraceLogic;
- (void)removeGeneratedKeysFromKeychainWithAppId:(id)arg1;
- (void)insertIntoSortedArray:(id)arg1 withItem:(id)arg2;
- (void)clearWxPrivateSpaceOfAppId:(id)arg1;
- (void)clearSinglePageSpaceOfAppId:(id)arg1;
- (void)clearStorageSpaceOfAppId:(id)arg1;
- (void)clearOpenDataSpaceOfAppId:(id)arg1;
- (void)clearStoreSpaceOfAppId:(id)arg1;
- (void)clearUsrSpaceOfAppId:(id)arg1;
- (unsigned long long)getUsrStoreDataSpaceWithAppId:(id)arg1;
- (void)checkAndClearUsrStoreAndStorageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

