//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoAttr, MMAssetForPHAssetFramework, NSError, NSString, NSURL, SightDraft, VideoCompositionAttr, VideoEncodeTask, WCMomentsPostReportSession;
@protocol WCSightVideoCompositeTaskDelegate;

@interface WCSightVideoCompositeTask : NSObject
{
    _Bool _isTaskCompleted;
    _Bool _isTaskRunning;
    _Bool _enablesCrashProtect;
    MMAssetForPHAssetFramework *_srcPHAsset;
    MMAssetForPHAssetFramework *_exportedPHAsset;
    EditVideoAttr *_editVideoAttr;
    VideoCompositionAttr *_compositionAttr;
    SightDraft *_completedSightDraft;
    NSError *_error;
    long long _taskFailedCount;
    id <WCSightVideoCompositeTaskDelegate> _delegate;
    long long _assetCompositionSource;
    WCMomentsPostReportSession *_postReportSession;
    NSString *_mjMetaInfoStr;
    VideoEncodeTask *_videoEncodeTask;
    NSString *_sightDraftVideoPath;
    NSString *_taskId;
    NSString *_savedAssetFileShortName;
    NSURL *_cachedEditedAssetFileURL;
    double _taskPendingTime;
    double _taskStartTime;
    double _taskFinishTime;
    double _taskStopTime;
    double _taskInterruptTime;
    double _taskDetachTime;
}

- (void).cxx_destruct;
@property(nonatomic) double taskDetachTime; // @synthesize taskDetachTime=_taskDetachTime;
@property(nonatomic) double taskInterruptTime; // @synthesize taskInterruptTime=_taskInterruptTime;
@property(nonatomic) double taskStopTime; // @synthesize taskStopTime=_taskStopTime;
@property(nonatomic) double taskFinishTime; // @synthesize taskFinishTime=_taskFinishTime;
@property(nonatomic) double taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(nonatomic) double taskPendingTime; // @synthesize taskPendingTime=_taskPendingTime;
@property(retain, nonatomic) NSURL *cachedEditedAssetFileURL; // @synthesize cachedEditedAssetFileURL=_cachedEditedAssetFileURL;
@property(retain, nonatomic) NSString *savedAssetFileShortName; // @synthesize savedAssetFileShortName=_savedAssetFileShortName;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *sightDraftVideoPath; // @synthesize sightDraftVideoPath=_sightDraftVideoPath;
@property(nonatomic) _Bool enablesCrashProtect; // @synthesize enablesCrashProtect=_enablesCrashProtect;
@property(retain, nonatomic) VideoEncodeTask *videoEncodeTask; // @synthesize videoEncodeTask=_videoEncodeTask;
@property(retain, nonatomic) NSString *mjMetaInfoStr; // @synthesize mjMetaInfoStr=_mjMetaInfoStr;
@property(retain, nonatomic) WCMomentsPostReportSession *postReportSession; // @synthesize postReportSession=_postReportSession;
@property(nonatomic) long long assetCompositionSource; // @synthesize assetCompositionSource=_assetCompositionSource;
@property(nonatomic) __weak id <WCSightVideoCompositeTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long taskFailedCount; // @synthesize taskFailedCount=_taskFailedCount;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SightDraft *completedSightDraft; // @synthesize completedSightDraft=_completedSightDraft;
@property(readonly, nonatomic) _Bool isTaskRunning; // @synthesize isTaskRunning=_isTaskRunning;
@property(nonatomic) _Bool isTaskCompleted; // @synthesize isTaskCompleted=_isTaskCompleted;
@property(retain, nonatomic) VideoCompositionAttr *compositionAttr; // @synthesize compositionAttr=_compositionAttr;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) MMAssetForPHAssetFramework *exportedPHAsset; // @synthesize exportedPHAsset=_exportedPHAsset;
@property(retain, nonatomic) MMAssetForPHAssetFramework *srcPHAsset; // @synthesize srcPHAsset=_srcPHAsset;
- (void)_retainSelfForBlock;
- (void)_handleCompositionTaskFailedWithSession:(id)arg1;
- (void)_handleCompositionTaskCompletedWithSession:(id)arg1;
- (void)_onTaskFinished;
- (void)onTaskDetached;
- (void)onTaskInterrupted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskStarted;
- (void)onTaskReady;
- (void)onTaskPending;
- (_Bool)shouldSaveExportVideoToLibrary;
- (_Bool)isSafe;
- (_Bool)isValid;
- (long long)taskType;
- (id)_getEditedAssetCacheFileURL;
- (struct CGSize)_getEditedAssetSize;
- (void)_prepareEditAttrWithResultBlock:(CDUnknownBlockType)arg1;
- (void)_saveBackupAssetToDiskIfNeeded:(CDUnknownBlockType)arg1;
- (id)generateWidgetCanvasView;
- (id)generatePreviewImage;
- (double)videoDuration;
- (double)videoCompressDuration;
- (_Bool)removeLocalCache;
- (void)prepareTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)getPreparedAssetFileURL;
- (void)willAddIntoTrash;
- (void)clearTaskData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4;
- (void)setupSightDraft:(id)arg1;
- (void)reportCompositionFailed;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

