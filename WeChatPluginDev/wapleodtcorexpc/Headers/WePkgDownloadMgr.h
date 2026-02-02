//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WePkgDownloader, WePkgFileDownloadInfo;

@interface WePkgDownloadMgr
{
    NSMutableArray *_arrWaitingDownloadList;
    WePkgFileDownloadInfo *_currDownladInfo;
    WePkgDownloader *_downloader;
}

- (void).cxx_destruct;
- (int)checkIfFileValidAfterDownloadSuccess:(id)arg1 TmpFilePath:(id)arg2;
- (void)downloaderDidFinishDownloadFor:(id)arg1 TmpFilePath:(id)arg2 isSuccess:(_Bool)arg3 isLocalValidFile:(_Bool)arg4;
- (void)tryNextDownload;
- (void)clearCurrentDownloadingTask;
- (void)cancelDownloadIfVersionNotMatch:(id)arg1 Version:(id)arg2;
- (void)addToDownloadList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

