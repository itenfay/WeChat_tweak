//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTemplateSessionQueue, MMContext, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, OMJMaasCore;
@protocol OS_dispatch_queue;

@interface MJTemplateCoreManager
{
    NSObject<OS_dispatch_queue> *_cleanClipBundleQueue;
    NSMutableSet *_finishedClipBundleRelativePathSet;
    _Bool _isCleaningCache;
    long long _coreStatus;
    OMJMaasCore *_maasCore;
    NSString *_coreKey;
    MMContext *_mmContext;
    NSMutableArray *_corePrepareCompletionHandlers;
    MJTemplateSessionQueue *_movieSessionQueue;
    MJTemplateSessionQueue *_moviePlayerQueue;
    MJTemplateSessionQueue *_cameraSessionQueue;
    MJTemplateSessionQueue *_movieComposingSessionQueue;
    MJTemplateSessionQueue *_imageEditSessionQueue;
    NSMutableDictionary *_taskStartTimeDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *taskStartTimeDictionary; // @synthesize taskStartTimeDictionary=_taskStartTimeDictionary;
@property(nonatomic) _Bool isCleaningCache; // @synthesize isCleaningCache=_isCleaningCache;
@property(retain, nonatomic) MJTemplateSessionQueue *imageEditSessionQueue; // @synthesize imageEditSessionQueue=_imageEditSessionQueue;
@property(retain, nonatomic) MJTemplateSessionQueue *movieComposingSessionQueue; // @synthesize movieComposingSessionQueue=_movieComposingSessionQueue;
@property(retain, nonatomic) MJTemplateSessionQueue *cameraSessionQueue; // @synthesize cameraSessionQueue=_cameraSessionQueue;
@property(retain, nonatomic) MJTemplateSessionQueue *moviePlayerQueue; // @synthesize moviePlayerQueue=_moviePlayerQueue;
@property(retain, nonatomic) MJTemplateSessionQueue *movieSessionQueue; // @synthesize movieSessionQueue=_movieSessionQueue;
@property(retain, nonatomic) NSMutableArray *corePrepareCompletionHandlers; // @synthesize corePrepareCompletionHandlers=_corePrepareCompletionHandlers;
@property(retain, nonatomic) MMContext *mmContext; // @synthesize mmContext=_mmContext;
@property(copy, nonatomic) NSString *coreKey; // @synthesize coreKey=_coreKey;
@property(retain, nonatomic) OMJMaasCore *maasCore; // @synthesize maasCore=_maasCore;
@property(nonatomic) long long coreStatus; // @synthesize coreStatus=_coreStatus;
- (unsigned long long)reportScene;
- (void)_cleanCachesWithExcludedClipBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanCachesIfNeeded;
- (void)exportManager:(id)arg1 taskStateDidChangeWithTaskID:(id)arg2 taskState:(unsigned long long)arg3 progress:(float)arg4 outputFilePath:(id)arg5;
- (void)exportManager:(id)arg1 videoFrameDidUpdate:(id)arg2 taskID:(id)arg3;
- (void)exportManager:(id)arg1 serviceStateDidChange:(unsigned long long)arg2;
- (void)ExportTasks_cleanCachesIfNeeded;
- (_Bool)checkIdleForExportManager:(id)arg1;
- (void)exportTaskDidCompleteWithTaskID:(id)arg1;
- (void)ExportTasks_didFinishPreparingCoreWithError:(id)arg1;
- (id)_cancelExportTaskWithID:(id)arg1;
- (id)_pauseExportTaskWithID:(id)arg1;
- (id)_startExportTaskWithID:(id)arg1;
- (void)cancelExportTaskWithID:(id)arg1;
- (void)pauseExportTaskWithID:(id)arg1;
- (void)startExportTaskWithID:(id)arg1;
- (void)Sessions_cleanCachesIfNeeded;
- (void)Sessions_didFinishPreparingCoreWithError:(id)arg1;
- (void)prepareNextSessionsForAllQueues;
- (void)prepareNextSessionInQueue:(id)arg1;
- (void)destroySession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareSession:(id)arg1;
- (void)prepareSession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)checkIdleForAllSessionQueues;
- (id)sessionQueueForSession:(id)arg1;
- (void)maasCore:(id)arg1 didReportAnalyticsEventWithType:(long long)arg2 data:(id)arg3;
- (void)_requestILinkAuthorizationWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)generateILinkAppClientParams;
- (void)_finishCleaningUp;
- (void)_prepareCore;
- (void)Core_didFinishPreparingCoreWithError:(id)arg1;
- (void)prepareCoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didCompleteStartingUpWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createAndStartUpMaasCoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canStartUp;
- (void)dealloc;
- (id)init;
- (_Bool)_exceedMaxCleanCheckInterval;
- (void)_markClipBundleHasCleanUpTime;
- (void)_saveFinishedClipBundleRelativePathSet;
- (void)_loadFinishedClipBundleRelativePathSet;
- (_Bool)_cleanClipBundleWithRelativePath:(id)arg1;
- (void)finishMissionWithClipBundleID:(id)arg1;
- (void)asyncCleanClipBundleIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

