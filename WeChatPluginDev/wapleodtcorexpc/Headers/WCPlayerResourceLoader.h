//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, NSString, WCBaseScheduler, WCPlayerDownloader, WCPlayerLoadingRequestTaskInfo, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter, WCResourceLoaderMoniter;
@protocol OS_dispatch_queue, WCPlayerResourceLoaderDelegate;

@interface WCPlayerResourceLoader : NSObject
{
    _Bool _notifyDataReadyMode;
    _Bool _bDataSourceSwitching;
    _Bool _bHadRecievePreLoadData;
    _Bool _isWaitingLoadingRequestAfterSeek;
    int _loadingRequestSeq;
    unsigned int _taskSeq;
    unsigned int _lastNotAnyPendingRequestTime;
    WCPlayerDownloader *_downloader;
    WCPlayerReporter *_reporter;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    id <WCPlayerResourceLoaderDelegate> _delegate;
    unsigned long long _playerScene;
    NSMutableArray *_arrPendingRequests;
    WCPlayerLoadingRequestTaskInfo *_currentTaskInfo;
    WCResourceLoaderMoniter *_loadingRequestMoniter;
    NSRecursiveLock *_lock;
    unsigned long long _responseTotalData;
    NSString *_nsIdentifier;
    NSObject<OS_dispatch_queue> *_processingQueue;
    long long _requestSecondsAfterSeek;
    WCBaseScheduler *_scheduler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBaseScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) long long requestSecondsAfterSeek; // @synthesize requestSecondsAfterSeek=_requestSecondsAfterSeek;
@property(nonatomic) _Bool isWaitingLoadingRequestAfterSeek; // @synthesize isWaitingLoadingRequestAfterSeek=_isWaitingLoadingRequestAfterSeek;
@property(nonatomic) unsigned int lastNotAnyPendingRequestTime; // @synthesize lastNotAnyPendingRequestTime=_lastNotAnyPendingRequestTime;
@property(nonatomic) unsigned int taskSeq; // @synthesize taskSeq=_taskSeq;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) unsigned long long responseTotalData; // @synthesize responseTotalData=_responseTotalData;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool bHadRecievePreLoadData; // @synthesize bHadRecievePreLoadData=_bHadRecievePreLoadData;
@property(retain, nonatomic) WCResourceLoaderMoniter *loadingRequestMoniter; // @synthesize loadingRequestMoniter=_loadingRequestMoniter;
@property(retain, nonatomic) WCPlayerLoadingRequestTaskInfo *currentTaskInfo; // @synthesize currentTaskInfo=_currentTaskInfo;
@property(retain, nonatomic) NSMutableArray *arrPendingRequests; // @synthesize arrPendingRequests=_arrPendingRequests;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(nonatomic) int loadingRequestSeq; // @synthesize loadingRequestSeq=_loadingRequestSeq;
@property(nonatomic) _Bool bDataSourceSwitching; // @synthesize bDataSourceSwitching=_bDataSourceSwitching;
@property(nonatomic) _Bool notifyDataReadyMode; // @synthesize notifyDataReadyMode=_notifyDataReadyMode;
@property(nonatomic) __weak id <WCPlayerResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCPlayerDownloader *downloader; // @synthesize downloader=_downloader;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onMoovReady;
- (void)onM3u8Ready;
- (void)onDataDownloadFail:(int)arg1;
- (void)onVideoSourceChanged;
- (void)onDataAvailableWithRange:(struct _NSRange)arg1;
- (void)onUpdateNetwordSpeed:(unsigned int)arg1;
- (void)onSwitchDataSource:(id)arg1;
- (void)onDataDownloadSuccess;
- (void)tpResourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)tpResourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)onReceiveDelLoadingRequest:(id)arg1;
- (void)onReceiveNewLoadingRequest:(id)arg1;
- (_Bool)respondDataWithLoadingRequest:(id)arg1;
- (void)processPendingRequests;
- (void)cancelAllPendingLoadingRequests;
- (_Bool)fillInformationForRequest:(id)arg1;
- (void)checkLoadingRequestStateWhenNoAnyLoadingRequest;
- (void)removeLoadingRequests:(id)arg1;
- (void)addNewLoadingRequest:(id)arg1;
- (_Bool)isDownloadingData;
- (void)onPlayerSeekComplete;
- (void)onPlayerSeekStart;
- (_Bool)isWaitingReadyAfterSeek;
- (void)requestVideoDataWithSec:(float)arg1;
- (void)checkToFetchAllData;
- (unsigned long long)checkBufferTask:(unsigned long long)arg1;
- (void)checkStateWhenBufferingStart;
- (void)finishCurrentTask;
- (id)getResourceUrl;
- (void)refreshFetchAllDataState;
- (void)requestCompleteVideoData;
- (void)cancelAllDataRequest;
- (void)startDataPreload;
- (void)resumeDownload;
- (void)stopVideoDownload;
- (void)startDownload:(unsigned long long)arg1;
- (void)startVideoWithPlayerMode:(unsigned long long)arg1;
- (id)getDownloadArgsWrap;
- (id)getProcessingQueue;
- (id)getResouceloaderID;
- (id)generateDownloaderWithDownloadArgs:(id)arg1;
- (id)generateScheduler;
- (void)dealloc;
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2 downloadArgsWrap:(id)arg3;
- (void)onPlayerLeaveBuffering;
- (void)onPlayerEnterBuffering;
- (void)onPlayerTimeChanged:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

