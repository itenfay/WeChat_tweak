//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURLSessionDownloadTask, WePkgFileDownloadInfo;
@protocol WePkgDownloaderDelegate;

@interface WePkgDownloader
{
    WePkgFileDownloadInfo *_downloadInfo;
    id <WePkgDownloaderDelegate> _delegate;
    NSURLSessionDownloadTask *_downloadTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) __weak id <WePkgDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WePkgFileDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
- (void)cancelDownload;
- (int)applyBsPatch:(id)arg1 oldFile:(id)arg2 newFile:(id)arg3;
- (void)applyPatchIfNeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDownloadEndForUrl:(id)arg1 storeIn:(id)arg2 andResponse:(id)arg3 andError:(id)arg4;
- (void)startDownload;
- (id)getFilePathIfAlreadyDownloaded;
- (id)initWithPkgDownloadInfo:(id)arg1 delegate:(id)arg2;

@end

