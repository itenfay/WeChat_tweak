//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTaskInfo, NSMutableArray, NSString, PreloadVideoCleanLogic;

@interface DownloadVideoCDNMgr : NSObject
{
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrPreloadTask;
    _Bool _bEnablePreload;
    PreloadVideoCleanLogic *m_preloadCacheCleanLogic;
    CdnTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)processDownloadCompleteEvent:(id)arg1 downloadInfo:(id)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)updateVideoDownloadModeWithClientId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (_Bool)IsVideoMoovHasDownloadedByMessageWrap:(id)arg1;
- (_Bool)StopVideoStreamingDownload:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)ResumePreload;
- (void)PausePreload;
- (void)Stop;
- (void)StopDownloadByChatName:(id)arg1;
- (_Bool)StopDownload:(id)arg1 downloadTaskInfo:(id *)arg2 needNotify:(_Bool)arg3;
- (_Bool)StopDownload:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StopCurDownload:(id *)arg1;
- (_Bool)canUseVideoStreamFullDownloadLogic:(id)arg1;
- (_Bool)shouldUseOldVideoDownloadLogic:(id)arg1;
- (_Bool)canUseStreamStopLogic:(id)arg1;
- (unsigned long long)GetVideoMessageDownloadingMode:(id)arg1;
- (void)StartPreloadVideo:(id)arg1 behavior:(long long)arg2;
- (void)StartPreloadVideo:(id)arg1 useQuota:(_Bool)arg2;
- (void)StartPreloadVideo:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4 Silent:(_Bool)arg5;
- (unsigned long long)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4;
- (_Bool)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2;
- (_Bool)IsMsgCurrentDownloading:(id)arg1 inNormalDownloadQueue:(_Bool)arg2;
- (_Bool)IsMsgInPreloadQueue:(id)arg1;
- (_Bool)IsMsgInDownloadQueue:(id)arg1;
- (void)updateFileAndCache:(id)arg1;
- (_Bool)isFirstDownloadTask:(id)arg1;
- (_Bool)checkDownloadState:(id)arg1;
- (void)CheckQueue;
- (_Bool)CheckForLocalCache:(id)arg1 isPreloadTask:(_Bool)arg2;
- (void)DelTask:(id)arg1 inQueue:(id)arg2;
- (void)DelTaskInPreloadQueue:(id)arg1;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)videoKVReportWithTaskInfo:(id)arg1 result:(const void *)arg2;
- (void)DownloadFail:(int)arg1 oDownloadInfo:(id)arg2 taskInfo:(id)arg3;
- (void)DownloadOk:(id)arg1;
- (void)updateVideoThumb:(id)arg1;
- (void)updateVideoThumbImage:(id)arg1;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2 result:(const void *)arg3;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2;
- (unsigned long long)CleanAllPreloadTempFile;
- (void)CleanOutOfDatePreloadTempFile;
- (void)RemovePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)AddPreloadRecord:(id)arg1;
- (_Bool)IsNextPreloadOverDailyMaxCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

