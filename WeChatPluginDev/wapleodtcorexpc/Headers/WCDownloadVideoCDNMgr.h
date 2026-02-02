//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WCPreloadVideoCleanLogic;

@interface WCDownloadVideoCDNMgr : NSObject
{
    _Bool _bEnablePreload;
    long long _category;
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrPreloadTask;
    WCPreloadVideoCleanLogic *_preloadCacheCleanLogic;
    NSMutableDictionary *_dicPreloadingTask;
    NSMutableDictionary *_dicStreamingTask;
    NSMutableDictionary *_dicDownloadingInfoWraps;
    NSMutableDictionary *_dicDownloadingArgsWraps;
}

+ (long long)videoDownloadCategoryForMediaItem:(id)arg1;
+ (long long)videoDownloadCategoryForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicDownloadingArgsWraps; // @synthesize dicDownloadingArgsWraps=_dicDownloadingArgsWraps;
@property(retain, nonatomic) NSMutableDictionary *dicDownloadingInfoWraps; // @synthesize dicDownloadingInfoWraps=_dicDownloadingInfoWraps;
@property(retain, nonatomic) NSMutableDictionary *dicStreamingTask; // @synthesize dicStreamingTask=_dicStreamingTask;
@property(retain, nonatomic) NSMutableDictionary *dicPreloadingTask; // @synthesize dicPreloadingTask=_dicPreloadingTask;
@property(retain, nonatomic) WCPreloadVideoCleanLogic *preloadCacheCleanLogic; // @synthesize preloadCacheCleanLogic=_preloadCacheCleanLogic;
@property(retain, nonatomic) NSMutableArray *arrPreloadTask; // @synthesize arrPreloadTask=_arrPreloadTask;
@property(retain, nonatomic) NSMutableArray *arrDownloadTask; // @synthesize arrDownloadTask=_arrDownloadTask;
@property(nonatomic) _Bool bEnablePreload; // @synthesize bEnablePreload=_bEnablePreload;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (void)getMomentsFileKey:(id *)arg1 mid:(id *)arg2 fromDownloadArgsWrap:(id)arg3;
- (_Bool)regenerateThumbImageForMediaItem:(id)arg1 withSightPath:(id)arg2;
- (void)downloadVideoSucess:(id)arg1;
- (void)videoSourceChange:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2 result:(const void *)arg3;
- (void)KVStatPreloadVideoFinish:(id)arg1 kbPerSec:(unsigned int)arg2;
- (void)CleanOutOfDatePreloadTempFile;
- (void)RemovePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)AddPreloadRecord:(id)arg1;
- (_Bool)IsNextPreloadOverDailyMaxCount;
- (_Bool)saveFileFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)createFileWithPath:(id)arg1 exists:(_Bool *)arg2;
- (void)ResumePreload;
- (void)PausePreload;
- (void)realStartDownload:(id)arg1 info:(id)arg2;
- (id)generateVideoInfoWrap:(id)arg1;
- (_Bool)prepareDownloadArgsForTaskInfo:(id)arg1;
- (void)CheckQueue;
- (void)downloadTaskWithTaskInfo:(id)arg1;
- (_Bool)StopDownloadVideo:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StopPreloadVideo:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)reportKVVideoArgsWithResult:(id)arg1;
- (_Bool)StopCurDownloadWithTaskInfo:(id)arg1 outInfo:(id *)arg2;
- (void)startStreamingDownloadWithTask:(id)arg1;
- (void)stopPreloadWithTask:(id)arg1;
- (void)startPreloadWithTask:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2 requestPercent:(unsigned int)arg3 preloadItem:(id)arg4;
- (void)clearAllCurrentVideoPreload;
- (void)StartPreloadVideoForMediaItem:(id)arg1 preloadItem:(id)arg2;
- (unsigned long long)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (unsigned long long)StartDownloadVideo:(id)arg1;
- (id)getDownloadReferUrl:(id)arg1;
- (_Bool)checkDownloadState:(id)arg1;
- (_Bool)IsMediaItemInDownloadQueue:(id)arg1 isIncludePlayerDownload:(_Bool)arg2;
- (_Bool)IsMediaItemInDownloadQueue:(id)arg1;
- (void)initData;
- (id)initWithCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

