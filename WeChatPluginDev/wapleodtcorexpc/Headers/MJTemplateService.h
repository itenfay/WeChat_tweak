//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSMutableArray, NSString, NSURLSessionDownloadTask;

@interface MJTemplateService
{
    MMLRUCache *_templateCacheFromSvr;
    MMLRUCache *_templateCacheFromSDK;
    MMLRUCache *_templateListOfSceneCacheFromSvr;
    NSString *_currentCameraTemplatePreloadTaskId;
    NSURLSessionDownloadTask *_currentTemplateDownloadTask;
    NSMutableArray *_taskQueue;
    NSMutableArray *_highPriorityTaskQueue;
}

+ (id)_cachePreviewFilePathFromUrlStr:(id)arg1;
+ (id)localPathWithUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *highPriorityTaskQueue; // @synthesize highPriorityTaskQueue=_highPriorityTaskQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSURLSessionDownloadTask *currentTemplateDownloadTask; // @synthesize currentTemplateDownloadTask=_currentTemplateDownloadTask;
@property(copy, nonatomic) NSString *currentCameraTemplatePreloadTaskId; // @synthesize currentCameraTemplatePreloadTaskId=_currentCameraTemplatePreloadTaskId;
@property(retain, nonatomic) MMLRUCache *templateListOfSceneCacheFromSvr; // @synthesize templateListOfSceneCacheFromSvr=_templateListOfSceneCacheFromSvr;
@property(retain, nonatomic) MMLRUCache *templateCacheFromSDK; // @synthesize templateCacheFromSDK=_templateCacheFromSDK;
@property(retain, nonatomic) MMLRUCache *templateCacheFromSvr; // @synthesize templateCacheFromSvr=_templateCacheFromSvr;
- (void)requestILinkAuthorizationWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateTemplateListSvrDataCacheWithTemplateList:(id)arg1 categoryList:(id)arg2 pageBuffer:(id)arg3 validityTerm:(unsigned int)arg4 forScene:(unsigned long long)arg5;
- (id)availableTemplateSvrDataCacheOfScene:(unsigned long long)arg1;
- (void)updateTemplateFromSDKCached:(id)arg1 withTemplateId:(id)arg2;
- (id)templateCachedFromSDKForTemplateId:(id)arg1;
- (void)updateTemplateFromSvrCached:(id)arg1 withTemplateId:(id)arg2 type:(unsigned long long)arg3;
- (id)templateCachedFromSvrForTemplateId:(id)arg1 type:(unsigned long long)arg2;
- (id)templateKeyWithTemplateId:(id)arg1 type:(unsigned long long)arg2;
- (void)getFavTemplateListWithPageBuf:(id)arg1 preFetchType:(unsigned long long)arg2 finderUserName:(id)arg3 successfulBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (id)getCachedCameraVideoTemplateList;
- (void)getCameraVideoTemplateListWithPagebuf:(id)arg1 scene:(unsigned long long)arg2 finderUserName:(id)arg3 preFetchType:(unsigned long long)arg4 optionalParams:(id)arg5 successfulBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;
- (void)getCameraVideoTemplateListWithPagebuf:(id)arg1 scene:(unsigned long long)arg2 finderUserName:(id)arg3 successfulBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)fetchTemplateInfoWithShortURL:(id)arg1 type:(unsigned long long)arg2 scene:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchTemplateInfoWithID:(id)arg1 type:(unsigned long long)arg2 scene:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchTemplateListWithPreviousPageBuffer:(id)arg1 options:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)finderMediaVideoDownloadQueueChange;
- (void)resumeAllTemplateResourceDownloadTask;
- (void)cancelAllTemplateResourceDownloadTask;
- (void)registerTemplateResourceToMaasSDKWithTemplateInfo:(id)arg1 localPath:(id)arg2;
- (_Bool)checkTemplateResourceHasResignToMaasSDK:(id)arg1;
- (_Bool)checkHasPreloadTemplateResourceWithTemplateInfo:(id)arg1;
- (_Bool)checkHasPreloadTemplateResourceWithTemplateItem:(id)arg1;
- (void)checkQueue;
- (void)removeTask:(id)arg1;
- (void)_safeAddTask:(id)arg1 inQueue:(id)arg2;
- (void)_startPreloadTemplateResouceWithTemplateInfo:(id)arg1 isHighPriority:(_Bool)arg2;
- (void)preloadCameraTemplateResourceIfNeeded:(id)arg1 isHighPriority:(_Bool)arg2;
- (void)preloadCameraTemplateResourceIfNeeded:(id)arg1;
- (void)downloadPreviewAnimForCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startDownloadMaterialResource:(id)arg1 successful:(CDUnknownBlockType)arg2;
- (void)getTemplateResourceWithScene:(unsigned long long)arg1 successful:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

