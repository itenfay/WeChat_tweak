//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderPreloadGlobalInfo, MMLRUCache, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCFinderVideoDownLoadMgr
{
    _Bool _canDownload265;
    _Bool _canUsePCDN;
    unsigned long long _lastestPreloadStrategyUpdateTimestamp;
    unsigned long long _nextUpdatePreloadStrategyTimestamp;
    unsigned long long _updatePreloadStrategyFailRequestTime;
    unsigned long long _updatePreloadStrategyFailCount;
    NSMutableArray *_preloadingArray;
    NSMutableArray *_firstFramePreloadTaskArray;
    NSMutableArray *_preloadQueue;
    NSObject<OS_dispatch_queue> *_handleQueue;
    NSMutableArray *_lowPriorityPreloadQueue;
    NSMutableDictionary *_firstFrameGroupIDSet;
    NSMutableDictionary *_dicStreamingTask;
    NSMutableDictionary *_dicPreloadingTask;
    NSMutableDictionary *_dicIplist;
    NSMutableDictionary *_preloadDict;
    NSDictionary *_holdoutExptDict;
    MMLRUCache *_preloadResultDict;
    unsigned long long _preloadConcurrentCount;
    unsigned long long _preloadArrayVersion;
    FinderPreloadGlobalInfo *_preloadInfo;
    unsigned long long _preloadStrategyId;
    unsigned long long _preloadMaxCount;
    unsigned long long _megaVideoPreloadFrontFeedCount;
    unsigned long long _megaVideoPreloadNextFeedCount;
    NSString *_pausePreloadStreamKey;
    NSArray *_pausePreloadArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canUsePCDN; // @synthesize canUsePCDN=_canUsePCDN;
@property(copy, nonatomic) NSArray *pausePreloadArray; // @synthesize pausePreloadArray=_pausePreloadArray;
@property(retain, nonatomic) NSString *pausePreloadStreamKey; // @synthesize pausePreloadStreamKey=_pausePreloadStreamKey;
@property(nonatomic) _Bool canDownload265; // @synthesize canDownload265=_canDownload265;
@property(nonatomic) unsigned long long megaVideoPreloadNextFeedCount; // @synthesize megaVideoPreloadNextFeedCount=_megaVideoPreloadNextFeedCount;
@property(nonatomic) unsigned long long megaVideoPreloadFrontFeedCount; // @synthesize megaVideoPreloadFrontFeedCount=_megaVideoPreloadFrontFeedCount;
@property(nonatomic) unsigned long long preloadMaxCount; // @synthesize preloadMaxCount=_preloadMaxCount;
@property(nonatomic) unsigned long long preloadStrategyId; // @synthesize preloadStrategyId=_preloadStrategyId;
@property(retain, nonatomic) FinderPreloadGlobalInfo *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(nonatomic) unsigned long long preloadArrayVersion; // @synthesize preloadArrayVersion=_preloadArrayVersion;
@property(nonatomic) unsigned long long preloadConcurrentCount; // @synthesize preloadConcurrentCount=_preloadConcurrentCount;
@property(retain, nonatomic) MMLRUCache *preloadResultDict; // @synthesize preloadResultDict=_preloadResultDict;
@property(copy, nonatomic) NSDictionary *holdoutExptDict; // @synthesize holdoutExptDict=_holdoutExptDict;
@property(retain, nonatomic) NSMutableDictionary *preloadDict; // @synthesize preloadDict=_preloadDict;
@property(retain, nonatomic) NSMutableDictionary *dicIplist; // @synthesize dicIplist=_dicIplist;
@property(retain, nonatomic) NSMutableDictionary *dicPreloadingTask; // @synthesize dicPreloadingTask=_dicPreloadingTask;
@property(retain, nonatomic) NSMutableDictionary *dicStreamingTask; // @synthesize dicStreamingTask=_dicStreamingTask;
@property(retain, nonatomic) NSMutableDictionary *firstFrameGroupIDSet; // @synthesize firstFrameGroupIDSet=_firstFrameGroupIDSet;
@property(retain, nonatomic) NSMutableArray *lowPriorityPreloadQueue; // @synthesize lowPriorityPreloadQueue=_lowPriorityPreloadQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue; // @synthesize handleQueue=_handleQueue;
@property(retain, nonatomic) NSMutableArray *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(retain, nonatomic) NSMutableArray *firstFramePreloadTaskArray; // @synthesize firstFramePreloadTaskArray=_firstFramePreloadTaskArray;
@property(retain, nonatomic) NSMutableArray *preloadingArray; // @synthesize preloadingArray=_preloadingArray;
@property(nonatomic) unsigned long long updatePreloadStrategyFailCount; // @synthesize updatePreloadStrategyFailCount=_updatePreloadStrategyFailCount;
@property(nonatomic) unsigned long long updatePreloadStrategyFailRequestTime; // @synthesize updatePreloadStrategyFailRequestTime=_updatePreloadStrategyFailRequestTime;
@property(nonatomic) unsigned long long nextUpdatePreloadStrategyTimestamp; // @synthesize nextUpdatePreloadStrategyTimestamp=_nextUpdatePreloadStrategyTimestamp;
@property(nonatomic) unsigned long long lastestPreloadStrategyUpdateTimestamp; // @synthesize lastestPreloadStrategyUpdateTimestamp=_lastestPreloadStrategyUpdateTimestamp;
- (void)stopPlayerStreamDownloadAllFormatWithClientID:(id)arg1;
- (id)_getHashKeyWithClientID:(id)arg1;
- (void)onExptItemListChange;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (_Bool)isTaskStreamRunningWithClientId:(id)arg1;
- (_Bool)isTaskStreamRunningWithClientId:(id)arg1 ignoreFormat:(_Bool)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (void)cancelDownloadTotalVideoWithMediaInfo:(id)arg1;
- (_Bool)stopDownloadTotablVideoWithMediaWrap:(id)arg1;
- (void)stopDownloadTotablVideoWithMediaInfo:(id)arg1;
- (void)startDownloadTotalVideoWithMediaWrap:(id)arg1;
- (void)startDownloadTotalVideoWithMediaInfo:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)removeLowBitRateWithMediaURL:(id)arg1 fileFormat:(id)arg2 isStreamDownload:(_Bool)arg3;
- (void)removeLowBitRateWithMediaURL:(id)arg1 formatFlag:(id)arg2 isStreamDownload:(_Bool)arg3 mediaItem:(id)arg4;
- (unsigned long long)getPreloadInfoIDWithMediaURL:(id)arg1;
- (id)getPreloadInfoWithMediaURL:(id)arg1;
- (_Bool)isDownloadH266FileWithTaskInfo:(id)arg1;
- (_Bool)isDownloadH265FileWithTaskInfo:(id)arg1;
- (void)updateLoadInfoWithTid:(id)arg1 downloadInfo:(id)arg2;
- (void)updateLoadInfoWithTid:(id)arg1 progressInfo:(id)arg2;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)streamingDownloadSuccessfulWithPlayerDownloadInfo:(id)arg1 argsWrap:(id)arg2;
- (void)streamingDownloadSuccessfulWithDownloadInfo:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)realStartDownload:(id)arg1;
- (void)downloadTask:(id)arg1;
- (void)CheckPreloadQueue;
- (_Bool)isPreloadingWithClientID:(id)arg1;
- (_Bool)IsPreloadingWithMediaWrap:(id)arg1;
- (void)stopAllLowPriorityPreloadVideos;
- (void)immigrateMediaToPreCacheDir:(id)arg1;
- (void)removeLowPriorityTaskWithKey:(id)arg1;
- (void)addLowPriorityPreloadVideoWithMediaWraps:(id)arg1;
- (void)appendPreloadVideoWithMediaWraps:(id)arg1;
- (void)startFeedPreloadFirstFrameWraps:(id)arg1;
- (void)startFeedPreloadFirstFrameWraps:(id)arg1 groupID:(id)arg2;
- (unsigned long long)findClientIDTaskCountInGrounpSet:(id)arg1;
- (void)cleanFirstFrameTaskArrayWithGroupId:(id)arg1 newPreloadTaskSet:(id)arg2;
- (void)StartPreloadVideoWithMediaWraps:(id)arg1;
- (void)printFirstFrameArray;
- (id)downloadArgsWrapWithMediaWrap:(id)arg1;
- (void)addStreamingTaskWithTaskInfo:(id)arg1;
- (void)removeStreamingTaskWithKey:(id)arg1;
- (void)addPreloadingTaskWithTaskInfo:(id)arg1;
- (void)removePreloadingTaskWithKey:(id)arg1;
- (id)generateDownloadTaskInfoWith:(id)arg1;
- (id)predownloadProgressInfoWithClientID:(id)arg1;
- (id)getAllPreDownloadKey;
- (id)getAllStreamDownloadKey;
@property(readonly, nonatomic) _Bool canPreCreatedPlayer;
- (unsigned long long)getVideoStreamLimitBufferCount;
- (id)currentPreloadInfo;
- (unsigned long long)getMegaVideoPreloadNextFeedCount;
- (unsigned long long)getMegaVideoPreloadFrontFeedCount;
- (unsigned long long)getPreloadNextFeedCount;
- (unsigned long long)getPreloadFrontFeedCount;
- (void)updatePreloadStrategy:(id)arg1;
- (_Bool)canRefreshPreloadStrategy;
- (_Bool)IsPreloadingVideoUrl:(id)arg1;
- (_Bool)removePreLoadWithClientId:(id)arg1;
- (_Bool)RemoveAllPreLoadTaskWithClientID:(id)arg1;
- (void)cleanPausePreloadQueueWithIdentifier:(id)arg1;
- (void)_resumePreloadQueueWithIdentifier:(id)arg1;
- (void)resumePreloadQueueWithStreamMediaWrap:(id)arg1;
- (_Bool)isStreamDownloadingWithClientID:(id)arg1;
- (_Bool)isPausePreloadQueue;
- (_Bool)isPreloadingVideoWithTid:(id)arg1;
- (_Bool)hasPreloadTask;
- (_Bool)hasDowningloadTask;
- (_Bool)isPausePreload;
- (void)pausePreloadFeedsWithStreamMediaWrap:(id)arg1;
- (_Bool)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2 checkPreloadQueue:(_Bool)arg3 onlyCancelPreloadTask:(_Bool)arg4 removePreloadTask:(_Bool)arg5;
- (_Bool)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2 checkPreloadQueue:(_Bool)arg3 onlyCancelPreloadTask:(_Bool)arg4;
- (_Bool)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2 checkPreloadQueue:(_Bool)arg3;
- (_Bool)StopDownloadPreloadTaskWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)stopDownloadTaskWithClientID:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StopDownloadTaskWithMediaWrap:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)cleanQueueWithNewStreamTask:(id)arg1;
- (void)StartDownloadWithMediaWrap:(id)arg1;
- (_Bool)IsDownlingWithMediaWrap:(id)arg1;
- (_Bool)canUse265;
- (id)getHoldoutExpt:(id)arg1;
- (id)getGlobalInfo;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

