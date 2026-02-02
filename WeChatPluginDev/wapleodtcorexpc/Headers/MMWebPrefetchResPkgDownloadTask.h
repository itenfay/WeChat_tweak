//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebPrefetchDownloadTask, MMWebPrefetchResPkgDownloadRequest, NSURLSession;

@interface MMWebPrefetchResPkgDownloadTask : NSObject
{
    _Bool _isCancel;
    MMWebPrefetchResPkgDownloadRequest *_request;
    NSURLSession *_urlSession;
    MMWebPrefetchDownloadTask *_downloadPkgTask;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MMWebPrefetchDownloadTask *downloadPkgTask; // @synthesize downloadPkgTask=_downloadPkgTask;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) MMWebPrefetchResPkgDownloadRequest *request; // @synthesize request=_request;
- (void)mainThread_callBackSuccessWithPkgPath:(id)arg1;
- (void)mainThread_callBackFailWithErrorMsg:(id)arg1;
- (void)cancel;
- (_Bool)verifyLocalFileMd5:(id)arg1 pkgFileData:(id)arg2;
- (_Bool)verifyLocalFileMd5:(id)arg1 pkgFilePath:(id)arg2;
- (void)subThread_verifyLocalFileMd5:(id)arg1 pkgFileData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subThread_verifyLocalFileMd5:(id)arg1 pkgFilePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mergeResPkgWithBasePkgPath:(id)arg1 patchPkgPath:(id)arg2;
- (void)subThread_mergeResPkgWithBasePkgPath:(id)arg1 patchPkgPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onMergePkgSuccessWithData:(id)arg1;
- (void)onDownloadBasePkgSuccessWithResult:(id)arg1 request:(id)arg2;
- (void)start;
- (id)initWithRequest:(id)arg1 urlSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

