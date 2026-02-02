//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QMStreamEncrypt, WCDownloadArgsWrap, WCPlayerDownloader;
@protocol OS_dispatch_queue, TingTPResourceLoaderDelegate;

@interface TingTPResourceLoader : NSObject
{
    _Bool _requestsAllDataToEndOfResource;
    _Bool _hasClearFile;
    _Bool _hasMoovReady;
    _Bool _hasDownloadComplete;
    _Bool _hasStartDownload;
    _Bool _isLocalFile;
    id <TingTPResourceLoaderDelegate> _delegate;
    WCPlayerDownloader *_downloader;
    NSString *_dataUrl;
    NSString *_decryptKey;
    NSString *_fileCacheId;
    NSString *_savePathSuffix;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableArray *_arrPendingRequests;
    WCDownloadArgsWrap *_downloadArgs;
    QMStreamEncrypt *_streamEncryptor;
    unsigned long long _callbackFileLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long callbackFileLength; // @synthesize callbackFileLength=_callbackFileLength;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) _Bool hasStartDownload; // @synthesize hasStartDownload=_hasStartDownload;
@property(nonatomic) _Bool hasDownloadComplete; // @synthesize hasDownloadComplete=_hasDownloadComplete;
@property(nonatomic) _Bool hasMoovReady; // @synthesize hasMoovReady=_hasMoovReady;
@property(nonatomic) _Bool hasClearFile; // @synthesize hasClearFile=_hasClearFile;
@property(retain, nonatomic) QMStreamEncrypt *streamEncryptor; // @synthesize streamEncryptor=_streamEncryptor;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgs; // @synthesize downloadArgs=_downloadArgs;
@property(retain, nonatomic) NSMutableArray *arrPendingRequests; // @synthesize arrPendingRequests=_arrPendingRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(copy, nonatomic) NSString *savePathSuffix; // @synthesize savePathSuffix=_savePathSuffix;
@property(copy, nonatomic) NSString *fileCacheId; // @synthesize fileCacheId=_fileCacheId;
@property(copy, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) WCPlayerDownloader *downloader; // @synthesize downloader=_downloader;
@property(nonatomic) _Bool requestsAllDataToEndOfResource; // @synthesize requestsAllDataToEndOfResource=_requestsAllDataToEndOfResource;
@property(nonatomic) __weak id <TingTPResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteTargetFile;
- (long long)fileLength;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onMoovReady;
- (void)onDataDownloadFailWithExpired:(_Bool)arg1;
- (void)onDataDownloadFail:(int)arg1;
- (void)onDataAvailableWithRange:(struct _NSRange)arg1;
- (void)onDataDownloadSuccess;
- (id)generateDownloadArgsWrap:(id)arg1;
- (unsigned long long)playerMode;
- (_Bool)useSimpleDns;
- (id)createPlayArgs:(id)arg1 downloadArgs:(id)arg2;
- (_Bool)respondDataWithLoadingRequest:(id)arg1;
- (void)removeLoadingRequests:(id)arg1;
- (void)processPendingRequests;
- (void)checkBufferTask;
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (_Bool)fillInformationForRequest:(id)arg1;
- (_Bool)tpResourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)tpResourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (void)stopDownload;
- (_Bool)isEncrypt;
- (void)prepare;
- (id)initWithDataUrl:(id)arg1 fileCacheId:(id)arg2 pathSuffix:(id)arg3 decryptKey:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

