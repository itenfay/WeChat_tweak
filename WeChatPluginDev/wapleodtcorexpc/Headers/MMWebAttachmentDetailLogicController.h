//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, NSURLSession;

@interface MMWebAttachmentDetailLogicController
{
    NSURL *_fileURL;
    NSString *_filePath;
    NSString *_fileName;
    NSString *_fileExtensionName;
    unsigned long long _navigationResponseContentLength;
    NSURLSession *_session;
    unsigned long long _targetSize;
    unsigned long long _downloadedSize;
}

+ (id)localFilePathForFileURL:(id)arg1 fileExtName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(nonatomic) unsigned long long targetSize; // @synthesize targetSize=_targetSize;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long navigationResponseContentLength; // @synthesize navigationResponseContentLength=_navigationResponseContentLength;
@property(retain, nonatomic) NSString *fileExtensionName; // @synthesize fileExtensionName=_fileExtensionName;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)downloadFileFailureOnMainThreadWithFailureStr:(id)arg1;
- (void)downloadFileFailureOnMainThread;
- (void)downloadFileSuccessOnMainThread;
- (void)downloadFileProcessUpdatedOnMainThread;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned int)getMsgUiDownloadStatus;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (unsigned int)GetPreviewType;
- (unsigned long long)GetTempSize;
- (unsigned long long)GetFileSize;
- (id)GetFileName;
- (void)onForwardToContact:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)stopDownload;
- (void)startDownload;
- (_Bool)isViewBePopedStopDownload;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

