//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AffRoamCommonDeviceInfo, CustomRoamDiskCallback, NSMutableArray, NSString, NSURL, WXGRoamCustomDiskBaseLogic;
@protocol OS_dispatch_queue;

@interface WXGRoamCustomDiskBridge : NSObject
{
    CustomRoamDiskCallback *_diskCb;
    AffRoamCommonDeviceInfo *_deviceInfo;
    WXGRoamCustomDiskBaseLogic *_processLogic;
    NSObject<OS_dispatch_queue> *_bridgeQueue;
    NSMutableArray *_transferQueuePool;
    NSURL *_curURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *curURL; // @synthesize curURL=_curURL;
@property(retain, nonatomic) NSMutableArray *transferQueuePool; // @synthesize transferQueuePool=_transferQueuePool;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bridgeQueue; // @synthesize bridgeQueue=_bridgeQueue;
@property(retain, nonatomic) WXGRoamCustomDiskBaseLogic *processLogic; // @synthesize processLogic=_processLogic;
@property(retain, nonatomic) AffRoamCommonDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) CustomRoamDiskCallback *diskCb; // @synthesize diskCb=_diskCb;
- (void)onDownloadFileProgressEvent:(long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileProgressEvent:(long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onUploadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onCreateDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteFileListComplete:(unsigned long long)arg1 overallErr:(int)arg2 errList:(id)arg3;
- (void)onDeleteFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onGetDirsSizeComplete:(unsigned long long)arg1 error:(int)arg2 dirSize:(id)arg3;
- (void)onGetFileInfoListComplete:(unsigned long long)arg1 err:(int)arg2 fileInfoList:(id)arg3;
- (void)onGetFileInfoComplete:(unsigned long long)arg1 err:(int)arg2 fileInfo:(id)arg3;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)arg1 err:(int)arg2 info:(id)arg3;
- (void)fileStreamReadAsync:(unsigned long long)arg1 context:(id)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamReadBeginAsync:(unsigned long long)arg1 remotePath:(id)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamWriteEndAsync:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteAsync:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteBeginAsync:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)fileStreamWriteOnceAsync:(unsigned long long)arg1 remotePath:(id)arg2 buf:(id)arg3;
- (void)downloadFileAsync:(unsigned long long)arg1 invokeId:(unsigned long long)arg2 remotePath:(id)arg3 localPath:(id)arg4;
- (void)uploadFileAsync:(unsigned long long)arg1 invokeId:(unsigned long long)arg2 localPath:(id)arg3 remotePath:(id)arg4;
- (void)deleteDirAsync:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)getDirsSizeAsync:(unsigned long long)arg1 dirPaths:(id)arg2;
- (void)createDirAsync:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)deleteFileListAsync:(unsigned long long)arg1 filePathList:(id)arg2;
- (void)deleteFileAsync:(unsigned long long)arg1 filePath:(id)arg2;
- (void)getFileInfoAsync:(unsigned long long)arg1 filePath:(id)arg2;
- (void)getFileInfoListAsync:(unsigned long long)arg1 parentPath:(id)arg2 recursiveDepth:(int)arg3;
- (void)getRoamDiskInfoAsync:(unsigned long long)arg1;
- (void)uninitAsync:(unsigned long long)arg1;
- (void)initializeAsync:(unsigned long long)arg1 commonInfo:(id)arg2 specialInfoPb:(id)arg3;
- (void)setCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

