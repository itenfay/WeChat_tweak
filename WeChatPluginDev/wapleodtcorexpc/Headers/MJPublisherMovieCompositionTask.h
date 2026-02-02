//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJMovieComposingAsyncExportInfo, NSString, UIImage;

@interface MJPublisherMovieCompositionTask
{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _videoFrameCallback;
    MJMovieComposingAsyncExportInfo *_asyncExportInfo;
    NSString *_exportFilePath;
    UIImage *_coverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSString *exportFilePath; // @synthesize exportFilePath=_exportFilePath;
@property(retain, nonatomic) MJMovieComposingAsyncExportInfo *asyncExportInfo; // @synthesize asyncExportInfo=_asyncExportInfo;
@property(copy, nonatomic) CDUnknownBlockType videoFrameCallback; // @synthesize videoFrameCallback=_videoFrameCallback;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)templateCoreManager:(id)arg1 videoFrameDidUpdate:(id)arg2 taskID:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportProgressDidChange:(float)arg2 taskID:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidCancelWithTaskID:(id)arg2;
- (void)templateCoreManager:(id)arg1 exportTaskDidFailWithTaskID:(id)arg2 error:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidFinishWithTaskID:(id)arg2 outputFilePath:(id)arg3;
- (void)willAddIntoTrash;
- (void)onTaskDetached;
- (void)onTaskInterrupted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskStarted;
- (void)onTaskReady;
- (void)onTaskPending;
- (_Bool)shouldSaveExportVideoToLibrary;
- (_Bool)isValid;
- (long long)taskType;
- (id)taskId;
- (_Bool)removeLocalCache;
- (void)prepareTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)getPreparedAssetFileURL;
- (void)didGenerateNewAsyncTaskID:(id)arg1;
- (id)generatePreviewImage;
- (id)generatePreviewImageAtStartTime:(double)arg1;
- (id)initWithTaskID:(id)arg1 srcPHAsset:(id)arg2 asyncExportInfo:(id)arg3 previewThumbImageSize:(struct CGSize)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

