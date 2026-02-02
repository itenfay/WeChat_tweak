//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveKtvThemeRepository, MMLiveResourceFetcherFanoutFlowAction, NSMutableDictionary, NSObject, NSString, OrderedDictionary;
@protocol OS_dispatch_queue;

@interface MMFinderLiveKTVResourceMgr
{
    MMLiveResourceFetcherFanoutFlowAction *_downloadMgr;
    OrderedDictionary *_songBasicInfoDic;
    OrderedDictionary *_songResourceInfoDic;
    MMLiveKtvThemeRepository *_themeRepository;
    NSObject<OS_dispatch_queue> *_lyricNoteResProcessQueue;
    NSMutableDictionary *_loadingTaskDict;
}

+ (id)createTaskKeyWithSong:(id)arg1 needsSongResources:(_Bool)arg2 taskId:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadingTaskDict; // @synthesize loadingTaskDict=_loadingTaskDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lyricNoteResProcessQueue; // @synthesize lyricNoteResProcessQueue=_lyricNoteResProcessQueue;
@property(retain, nonatomic) MMLiveKtvThemeRepository *themeRepository; // @synthesize themeRepository=_themeRepository;
@property(retain, nonatomic) OrderedDictionary *songResourceInfoDic; // @synthesize songResourceInfoDic=_songResourceInfoDic;
@property(retain, nonatomic) OrderedDictionary *songBasicInfoDic; // @synthesize songBasicInfoDic=_songBasicInfoDic;
@property(retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
- (void)onKtvSongModSuccessNotification:(int)arg1 songItem:(id)arg2 taskId:(id)arg3;
- (void)onLiveKTVFirstSongVersionUpdate:(unsigned int)arg1 pendingSongs:(id)arg2 source:(long long)arg3 taskId:(id)arg4;
- (void)onLiveKTVPendingSongItemsUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)notifyResourcesLoadResultForTask:(id)arg1 success:(_Bool)arg2 taskId:(id)arg3;
- (void)loadResourcesForTheme:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadThemeResource:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchAllThemesWithFetchingProvider:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchThemeWithId:(id)arg1 fetchingProvider:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadKsBasicInfo:(id)arg1 taskId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadKsResource:(id)arg1 needsSongResources:(_Bool)arg2 taskId:(id)arg3;
- (id)getLiveTask:(id)arg1;
- (id)createResLoadTaskWithTaskKey:(id)arg1;
- (_Bool)outQueueLoadTaskWithTaskKey:(id)arg1;
- (_Bool)outQueueLoadTaskWithSong:(id)arg1 needsSongResources:(_Bool)arg2 taskId:(id)arg3;
- (_Bool)tryEnqueueLoadTaskWithSong:(id)arg1 needsSongResources:(_Bool)arg2 taskId:(id)arg3;
- (void)checkSongResourceCacheOverLimit;
- (id)getSongResourceInfo:(id)arg1;
- (void)cacheSongResourceInfo:(id)arg1 songId:(id)arg2;
- (void)checkSongBasicCacheOverLimit;
- (id)getSongBasicInfo:(id)arg1;
- (void)cacheSongBasicInfo:(id)arg1 songId:(id)arg2;
- (id)createFetcherTasksForCdnResourcesInTask:(id)arg1;
- (void)saveQrcLyricAndNoteAsync:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getResourceInfo:(id)arg1 feedPreviewTaskId:(id)arg2 cacheInfo:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)getResourceInfo:(id)arg1 finderTaskId:(id)arg2 cacheInfo:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)getResourceInfo:(id)arg1 taskId:(id)arg2 cacheInfo:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)fetchResourceInfo:(id)arg1 taskId:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)loadResourceInfoIfNeed:(id)arg1;
- (void)checkResourceInfo:(id)arg1 taskId:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)createDownloadTaskForSongItem:(id)arg1 needsSongResources:(_Bool)arg2;
- (void)preloadKsResourceForSongItemsIfNeed:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (_Bool)isResTypeSourcedFromCdn:(unsigned int)arg1;
- (_Bool)isResTypeNecessary:(unsigned int)arg1 needsSongResources:(_Bool)arg2;
- (_Bool)checkSongLyricNoteResExist:(id)arg1;
- (_Bool)checkSong:(id)arg1 resourceExist:(unsigned int)arg2;
- (_Bool)checkResource:(id)arg1;
- (id)resourcePath:(id)arg1 type:(unsigned int)arg2;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)clearData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

