//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMResourceDownloadTaskContext, NSString;
@protocol MMResourceDownloadTaskDelegate, MMResourceDownloader;

@interface MMResourceDownloadTask : NSObject
{
    NSString *_resUrl;
    MMResourceDownloadTaskContext *_context;
    NSString *_downloadIdentifier;
    id <MMResourceDownloader> _downloader;
    long long _retryCnt;
    long long _currentCnt;
    id <MMResourceDownloadTaskDelegate> _downloadTaskDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMResourceDownloadTaskDelegate> downloadTaskDelegate; // @synthesize downloadTaskDelegate=_downloadTaskDelegate;
@property(nonatomic) long long currentCnt; // @synthesize currentCnt=_currentCnt;
@property(nonatomic) long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(readonly, copy, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) MMResourceDownloadTaskContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3 cdnResultCode:(long long)arg4;
- (void)onDownloadReportWithKey:(unsigned int)arg1;
- (_Bool)isSameResourceWithTask:(id)arg1;
- (Class)getResrouceDownloaderClass;
- (id)generateDownloadIdentifier;
- (void)reportWithKey:(unsigned int)arg1 network:(id)arg2;
- (void)clearDownloadData;
- (void)cancelDownload;
- (void)startDownload;
- (void)dealloc;
- (id)initWithResUrl:(id)arg1 context:(id)arg2;

@end

