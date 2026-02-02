//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAIAssetGenerateResult, MJAIAssetGenerateTask, MJAITemplateAssetOptions, NSArray, NSData, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface MJAIAssetProcessor : NSObject
{
    _Bool _manuallyReportsWhileFinished;
    _Bool _manuallyReportsWhileFailed;
    _Bool _manuallyReportsWhileCancelled;
    NSString *_sessionKey;
    unsigned long long _reportScene;
    NSArray *_originalAssetInfos;
    MJAITemplateAssetOptions *_options;
    long long _state;
    long long _phase;
    NSData *_aigcBuffer;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_AIAssetInfos;
    NSError *_error;
    NSArray *_assetTaskInfos;
    NSMutableArray *_assetFilePaths;
    NSDate *_assetPreparationStartTime;
    NSDate *_assetPreparationEndTime;
    NSMutableArray *_cdnUploadTaskKeys;
    NSMutableDictionary *_cdnUploadRequests;
    NSMutableDictionary *_cdnUploadResults;
    NSDate *_cdnUploadStartTime;
    NSDate *_cdnUploadEndTime;
    NSMutableArray *_cdnDownloadTaskKeys;
    NSMutableDictionary *_cdnDownloadRequests;
    NSMutableDictionary *_cdnDownloadResults;
    NSDate *_cdnDownloadStartTime;
    NSDate *_cdnDownloadEndTime;
    MJAIAssetGenerateTask *_aiAssetGenerateTask;
    MJAIAssetGenerateResult *_aiAssetGenerateResult;
    NSDate *_aiAssetGeneratingStartTime;
    NSDate *_aiAssetGeneratingEndTime;
    unsigned long long _totalTaskCount;
    unsigned long long _finishedTaskCount;
}

+ (long long)errorTypeForError:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long finishedTaskCount; // @synthesize finishedTaskCount=_finishedTaskCount;
@property(nonatomic) unsigned long long totalTaskCount; // @synthesize totalTaskCount=_totalTaskCount;
@property(retain, nonatomic) NSDate *aiAssetGeneratingEndTime; // @synthesize aiAssetGeneratingEndTime=_aiAssetGeneratingEndTime;
@property(retain, nonatomic) NSDate *aiAssetGeneratingStartTime; // @synthesize aiAssetGeneratingStartTime=_aiAssetGeneratingStartTime;
@property(retain, nonatomic) MJAIAssetGenerateResult *aiAssetGenerateResult; // @synthesize aiAssetGenerateResult=_aiAssetGenerateResult;
@property(retain, nonatomic) MJAIAssetGenerateTask *aiAssetGenerateTask; // @synthesize aiAssetGenerateTask=_aiAssetGenerateTask;
@property(retain, nonatomic) NSDate *cdnDownloadEndTime; // @synthesize cdnDownloadEndTime=_cdnDownloadEndTime;
@property(retain, nonatomic) NSDate *cdnDownloadStartTime; // @synthesize cdnDownloadStartTime=_cdnDownloadStartTime;
@property(retain, nonatomic) NSMutableDictionary *cdnDownloadResults; // @synthesize cdnDownloadResults=_cdnDownloadResults;
@property(retain, nonatomic) NSMutableDictionary *cdnDownloadRequests; // @synthesize cdnDownloadRequests=_cdnDownloadRequests;
@property(retain, nonatomic) NSMutableArray *cdnDownloadTaskKeys; // @synthesize cdnDownloadTaskKeys=_cdnDownloadTaskKeys;
@property(retain, nonatomic) NSDate *cdnUploadEndTime; // @synthesize cdnUploadEndTime=_cdnUploadEndTime;
@property(retain, nonatomic) NSDate *cdnUploadStartTime; // @synthesize cdnUploadStartTime=_cdnUploadStartTime;
@property(retain, nonatomic) NSMutableDictionary *cdnUploadResults; // @synthesize cdnUploadResults=_cdnUploadResults;
@property(retain, nonatomic) NSMutableDictionary *cdnUploadRequests; // @synthesize cdnUploadRequests=_cdnUploadRequests;
@property(retain, nonatomic) NSMutableArray *cdnUploadTaskKeys; // @synthesize cdnUploadTaskKeys=_cdnUploadTaskKeys;
@property(retain, nonatomic) NSDate *assetPreparationEndTime; // @synthesize assetPreparationEndTime=_assetPreparationEndTime;
@property(retain, nonatomic) NSDate *assetPreparationStartTime; // @synthesize assetPreparationStartTime=_assetPreparationStartTime;
@property(retain, nonatomic) NSMutableArray *assetFilePaths; // @synthesize assetFilePaths=_assetFilePaths;
@property(retain, nonatomic) NSArray *assetTaskInfos; // @synthesize assetTaskInfos=_assetTaskInfos;
@property(nonatomic) _Bool manuallyReportsWhileCancelled; // @synthesize manuallyReportsWhileCancelled=_manuallyReportsWhileCancelled;
@property(nonatomic) _Bool manuallyReportsWhileFailed; // @synthesize manuallyReportsWhileFailed=_manuallyReportsWhileFailed;
@property(nonatomic) _Bool manuallyReportsWhileFinished; // @synthesize manuallyReportsWhileFinished=_manuallyReportsWhileFinished;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *AIAssetInfos; // @synthesize AIAssetInfos=_AIAssetInfos;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSData *aigcBuffer; // @synthesize aigcBuffer=_aigcBuffer;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MJAITemplateAssetOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSArray *originalAssetInfos; // @synthesize originalAssetInfos=_originalAssetInfos;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(readonly, copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
- (void)reportIfNeeded;
- (id)generateReporter;
- (void)createAIAssetInfos;
- (void)MJCdnDownloadManager:(id)arg1 downloadTaskDidComplete:(id)arg2;
- (id)AIAssetFilePathAtIndex:(unsigned long long)arg1;
- (void)downloadAIAssetFileWithTaskKey:(id)arg1 cdnURL:(id)arg2 filePath:(id)arg3;
- (void)checkDownloadFinished;
- (void)cancelDownloadingAIAssetFiles;
- (void)downloadAIAssetFiles;
- (void)cancelGeneratingAIAssets;
- (void)generateAIAssets;
@property(readonly, copy, nonatomic) NSString *serverTaskID;
- (void)MJCdnUploadManager:(id)arg1 uploadTaskDidComplete:(id)arg2;
- (void)cancelUploadingOriginalAssetFiles;
- (void)uploadOriginalAssetFileWithTaskKey:(id)arg1 filePath:(id)arg2;
- (void)checkUploadFinished;
- (void)uploadOriginalAssetFiles;
- (_Bool)saveOriginalAssetWithImage:(id)arg1 atFilePath:(id)arg2;
- (id)assetFileKeyForPHAsset:(id)arg1;
- (id)assetFileKeyForFileAtIndex:(unsigned long long)arg1;
- (id)originalAssetFilePathAtIndex:(unsigned long long)arg1;
- (id)resizedImageWithOriginalImage:(id)arg1;
- (void)recursivelyPrepareOriginalAssetFilesAtIndex:(unsigned long long)arg1;
- (void)prepareOriginalAssetFiles;
- (void)callCompletionHandler;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
@property(readonly, nonatomic) float progress;
- (void)updateProgressWithFinishedTaskCount:(unsigned long long)arg1;
- (void)initProgressComponents;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithSessionKey:(id)arg1 originalAssetInfos:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

