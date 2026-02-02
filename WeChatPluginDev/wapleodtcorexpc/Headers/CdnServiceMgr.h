//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface CdnServiceMgr
{
    struct shared_ptr<CdnCallback> m_spCallback;
    NSRecursiveLock *_lock;
    NSMutableArray *_arrNotInitUploadTaskBlock;
    NSMutableArray *_arrNotInitDownloadTaskBlock;
    NSMutableDictionary *_dicTasksBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicTasksBlock; // @synthesize dicTasksBlock=_dicTasksBlock;
@property(retain, nonatomic) NSMutableArray *arrNotInitDownloadTaskBlock; // @synthesize arrNotInitDownloadTaskBlock=_arrNotInitDownloadTaskBlock;
@property(retain, nonatomic) NSMutableArray *arrNotInitUploadTaskBlock; // @synthesize arrNotInitUploadTaskBlock=_arrNotInitUploadTaskBlock;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)NotifyPlayerLeaveBuffering:(id)arg1;
- (void)NotifyPlayerEnterBuffering:(id)arg1;
- (void)UpdatePlaybackTime:(id)arg1 playTime:(double)arg2;
- (void)OnCdnInit;
- (void)OnCallDownloadNotifyPeerUploadFinish:(id)arg1 uploadFinish:(_Bool)arg2 fileSize:(unsigned long long)arg3;
- (void)OnUploadGetCdnFileID:(id)arg1;
- (void)OnRequestGetCdnDistance:(unsigned int)arg1 province:(unsigned int)arg2 city:(unsigned int)arg3;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)OnPreloadCompleted:(id)arg1;
- (void)onDownloadToEnd:(id)arg1;
- (void)OnMoovNotFound:(id)arg1;
- (void)OnMoovReady:(id)arg1;
- (void)OnM3u8Ready:(id)arg1;
- (void)OnDownloadPartialVideoData:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)onUploadFileExistOnCdn:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (unsigned long long)internalStartDownloadTaskWithTaskBlock:(id)arg1;
- (_Bool)internalStartUploadTaskWithTaskBlock:(id)arg1;
- (void)setCdnDebugIPForDownload:(id)arg1;
- (void)setCdnDebugIPForUpload:(id)arg1;
- (void)retryTaskWhenCdnInit;
- (void)removeCallbackBlock:(id)arg1;
- (unsigned int)getTaskStatus:(id)arg1;
- (_Bool)isTaskRunning:(id)arg1;
- (_Bool)stopDownloadTaskWithFileKey:(id)arg1 taskInfo:(id *)arg2;
- (_Bool)stopDownloadTaskWithFileKey:(id)arg1;
- (int)requestVideoData:(id)arg1 offset:(unsigned long long)arg2 length:(long long)arg3 bitrate:(int)arg4 dataReadyBlock:(CDUnknownBlockType)arg5;
- (void)setFastCompleteBlock:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)StartBatchCheckHitUpload:(void *)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)checkIfAllowMultipleTask:(id)arg1 existTaskBlocks:(id)arg2;
- (void)makeDownloadTaskStartFail:(id)arg1 errorCode:(int)arg2;
- (unsigned long long)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 m3u8Ready:(CDUnknownBlockType)arg5 moovReady:(CDUnknownBlockType)arg6 fastComplete:(CDUnknownBlockType)arg7 complete:(CDUnknownBlockType)arg8 preloadComplete:(CDUnknownBlockType)arg9;
- (_Bool)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 m3u8Ready:(CDUnknownBlockType)arg5 moovReady:(CDUnknownBlockType)arg6 complete:(CDUnknownBlockType)arg7;
- (_Bool)startPreloadDataWithRequest:(unsigned long long)arg1 request:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 preloadComplete:(CDUnknownBlockType)arg4;
- (_Bool)startDownloadWithType:(unsigned long long)arg1 request:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 fastComplete:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (_Bool)startDownloadWithType:(unsigned long long)arg1 request:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
- (_Bool)startDownloadTaskWithRequest:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (_Bool)stopUploadTaskWithFileKey:(id)arg1;
- (void)addTaskBlock:(id)arg1 forKey:(id)arg2;
- (_Bool)startUploadTaskWithRequest:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 existOnSvr:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
- (_Bool)startUploadTaskWithRequest:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

