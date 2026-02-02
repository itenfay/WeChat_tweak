//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, NSURL, WKDownload;

@interface MMWebNewAttachmentDetailLogicController
{
    _Bool _isObservingDownload;
    unsigned int _currentDownloadState;
    NSString *_filePath;
    NSString *_fileName;
    long long _navigationResponseContentLength;
    NSURL *_requestUrl;
    WKDownload *_downloadTask;
    NSData *_lastResumeData;
}

+ (id)attachmentPathForURLString:(id)arg1 andExtName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isObservingDownload; // @synthesize isObservingDownload=_isObservingDownload;
@property(retain, nonatomic) NSData *lastResumeData; // @synthesize lastResumeData=_lastResumeData;
@property(retain, nonatomic) WKDownload *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) unsigned int currentDownloadState; // @synthesize currentDownloadState=_currentDownloadState;
@property(nonatomic) long long navigationResponseContentLength; // @synthesize navigationResponseContentLength=_navigationResponseContentLength;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)stopObservingDownloadProgresss;
- (void)startObservingDownloadProgresss;
- (void)dealloc;
- (void)download:(id)arg1 didFailWithError:(id)arg2 resumeData:(id)arg3;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 decideDestinationUsingResponse:(id)arg2 suggestedFilename:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getMusicLocalFileDataUnit;
- (void)checkStateAndCallDownloadFinish;
- (void)OnFileDetailVCDidAppear;
- (void)onForwardToContact:(id)arg1;
- (unsigned int)GetPreviewType;
- (id)GetFilePath;
- (unsigned int)getMsgUiDownloadStatus;
- (unsigned long long)GetFileSize;
- (id)GetTmpFilePath;
- (unsigned long long)GetTempSize;
- (void)downloadFileFailureOnMainThreadWithFailureStr:(id)arg1;
- (void)downloadFileSuccessOnMainThread;
- (void)downloadFileProcessUpdatedOnMainThreadWithProgress:(double)arg1;
- (id)GetFileName;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (_Bool)isViewBePopedStopDownload;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (void)startDownload;
- (void)stopDownload;
- (void)initMembersWithDownload:(id)arg1;
- (id)initWithWKDownlad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

