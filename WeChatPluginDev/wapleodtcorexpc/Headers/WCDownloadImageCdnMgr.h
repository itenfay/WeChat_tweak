//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, OrderedDictionary;
@protocol WCCdnDownloadImageDelegate;

@interface WCDownloadImageCdnMgr : NSObject
{
    int _maxThumbDownloadCount;
    int _maxImageDownloadCount;
    OrderedDictionary *_dicThumbPendingTask;
    OrderedDictionary *_dicImagePendingTask;
    NSMutableDictionary *_dicThumbRunningTaskInfo;
    NSMutableDictionary *_dicImageRunningTaskInfo;
    NSMutableSet *_chokedTaskIDs;
    NSMutableSet *_filteredChokedTaskIDs;
    long long _currScene;
    long long _category;
    id <WCCdnDownloadImageDelegate> _delegate;
    NSMutableDictionary *_mediaThumbDownloadStateDic;
}

+ (long long)imageDownloadCategoryForMediaItem:(id)arg1;
+ (long long)imageDownloadCategoryForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mediaThumbDownloadStateDic; // @synthesize mediaThumbDownloadStateDic=_mediaThumbDownloadStateDic;
@property(nonatomic) __weak id <WCCdnDownloadImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)fillMediaDownloadStat:(id)arg1 taskInfo:(id)arg2;
- (unsigned int)getMediaDownloadStatus:(id)arg1 downloadType:(long long)arg2;
- (void)debugTask:(id)arg1;
- (void)logMd5WithRaw:(id)arg1 andJpg:(id)arg2 andUrl:(id)arg3 idInfo:(id)arg4;
- (void)networkEvaluator:(id)arg1 networkLinkConditionDidChange:(long long)arg2;
- (void)networkEvaluator:(id)arg1 networkConnectionStatusDidChange:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)onPostHandleResult:(id)arg1 cdnInfo:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)reportDownloadRecord:(id)arg1 taskInfo:(id)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)checkChokedRunningTask:(id)arg1 forType:(long long)arg2;
- (void)checkChokedRunningTasksForType:(long long)arg1;
- (void)markRunningTasksAsSufferedFromBadNetwork;
- (void)markRunningTasksAsSuspended;
- (void)markChokedInfoForStartingTask:(id)arg1;
- (long long)getDownloadTypeFromTaskId:(id)arg1;
- (id)getMediaIdFromTaskId:(id)arg1;
- (id)genBatchTaskItemIdFor:(id)arg1;
- (id)genBatchTaskIdForTid:(id)arg1;
- (id)genTaskIdFor:(id)arg1 type:(long long)arg2;
- (void)addRunningTask:(id)arg1 type:(long long)arg2;
- (id)getDicRunningTask:(long long)arg1;
- (id)getDicPendingTask:(long long)arg1;
- (id)filterBatchMedias:(id)arg1;
- (unsigned int)getMaxConcurrentCount:(long long)arg1;
- (_Bool)isReachConcurrentLimit:(long long)arg1;
- (void)useDefaultImageDownloadConcurrentCount;
- (void)updateDownloadConcurrentCount;
- (void)transSingleDownloadTaskFromBatchTask:(id)arg1;
- (id)getOneBatchMediaItemInfoByIndex:(unsigned int)arg1 taskInfo:(id)arg2;
- (id)getOneBatchMediaItemInfoForCdnResult:(id)arg1 taskInfo:(id)arg2;
- (_Bool)isImageTaskExist:(id)arg1 downloadType:(long long)arg2;
- (void)setDownloadScene:(long long)arg1;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(long long)arg2;
- (void)removeRunningTask:(id)arg1;
- (void)removePendingTask:(id)arg1;
- (id)getDataUrl:(id)arg1;
- (id)getUrlForMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)getWcUrlForMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)getRunningTaskContainsTaskId:(id)arg1 downloadType:(long long *)arg2;
- (id)getRunningTaskContainsTaskId:(id)arg1;
- (_Bool)finishBatchTask:(id)arg1;
- (_Bool)isBatchTaskExistSameFeed:(id)arg1;
- (_Bool)isTaskRunning:(id)arg1 downloadType:(long long)arg2;
- (_Bool)isTaskPending:(id)arg1 downloadType:(long long)arg2;
- (_Bool)isCacheExist:(id)arg1 downloadType:(long long)arg2;
- (void)createFileForTaskInfo:(id)arg1;
- (_Bool)realStartDownloadSnsWWImage:(id)arg1;
- (_Bool)realStartDownloadSnsWCImage:(id)arg1;
- (_Bool)realStartDownloadSnsImage:(id)arg1;
- (void)CheckQueue:(long long)arg1;
- (void)CheckAllQueue;
- (void)StopDownloadImage:(id)arg1 downloadType:(long long)arg2;
- (void)StartBatchDownloadThumb:(id)arg1 targetMedias:(id)arg2;
- (void)startDownloadWWImage:(id)arg1 downloadType:(long long)arg2 needNotify:(_Bool)arg3 force:(_Bool)arg4 preloadItem:(id)arg5 isAd:(_Bool)arg6;
- (void)startDownloadWCImage:(id)arg1 downloadType:(long long)arg2 needNotify:(_Bool)arg3 force:(_Bool)arg4 preloadItem:(id)arg5 isAd:(_Bool)arg6;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2 needNotify:(_Bool)arg3 force:(_Bool)arg4 preloadItem:(id)arg5 isAd:(_Bool)arg6;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2 needNotify:(_Bool)arg3 force:(_Bool)arg4 preloadItem:(id)arg5;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2 needNotify:(_Bool)arg3 force:(_Bool)arg4;
- (void)StartDownloadImage:(id)arg1 downloadType:(long long)arg2;
- (id)createTaskInfo;
- (void)dealloc;
- (id)initWithCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

