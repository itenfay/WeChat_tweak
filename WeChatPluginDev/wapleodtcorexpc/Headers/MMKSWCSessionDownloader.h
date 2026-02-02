//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCURLSession, WCURLSessionDownloadTask;

@interface MMKSWCSessionDownloader
{
    WCURLSession *_urlSession;
    WCURLSessionDownloadTask *_downloadTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) WCURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)reportDownloadCompleteWithSuccess:(_Bool)arg1;
- (void)reportInvalidContantTypeInResponse;
- (void)reportContentLengthNotFoundInResponse;
- (void)reportContentRangeNotFoundInResponse;
- (void)reportDownloadStartWithIsWholeRange:(_Bool)arg1;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)WCURLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
- (_Bool)beginDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

