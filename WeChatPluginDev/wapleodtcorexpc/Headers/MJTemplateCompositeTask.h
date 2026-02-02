//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTemplateAsyncExportInfo, NSString, OMJMaasCore, OMJMusicInfo, OMJTemplateInfo, UIImage;

@interface MJTemplateCompositeTask
{
    MJTemplateAsyncExportInfo *_asyncExportInfo;
    NSString *_exportFilePath;
    CDUnknownBlockType _resultBlock;
    OMJMaasCore *_maasCore;
    OMJTemplateInfo *_templateInfo;
    OMJMusicInfo *_musicInfo;
    UIImage *_coverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) OMJMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) OMJTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) OMJMaasCore *maasCore; // @synthesize maasCore=_maasCore;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) NSString *exportFilePath; // @synthesize exportFilePath=_exportFilePath;
@property(retain, nonatomic) MJTemplateAsyncExportInfo *asyncExportInfo; // @synthesize asyncExportInfo=_asyncExportInfo;
- (void)templateCoreManager:(id)arg1 videoFrameDidUpdate:(id)arg2 taskID:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportProgressDidChange:(float)arg2 taskID:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidCancelWithTaskID:(id)arg2;
- (void)templateCoreManager:(id)arg1 exportTaskDidFailWithTaskID:(id)arg2 error:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidFinishWithTaskID:(id)arg2 outputFilePath:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)onTaskDetached;
- (void)onTaskInterrupted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskReady;
- (void)onTaskStarted;
- (_Bool)shouldSaveExportVideoToLibrary;
- (long long)taskType;
- (void)setupSightDraft:(id)arg1;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (id)generatePreviewImage;
- (id)generateWidgetCanvasView;
- (double)videoDuration;
- (id)getPreparedAssetFileURL;
- (_Bool)removeLocalCache;
- (void)prepareTaskWithBlock:(CDUnknownBlockType)arg1;
- (void)didGenerateNewAsyncTaskID:(id)arg1;
- (void)willAddIntoTrash;
- (_Bool)isValid;
- (id)initWithTaskId:(id)arg1 maasCore:(id)arg2 asyncExportInfo:(id)arg3 templateInfo:(id)arg4 musicInfo:(id)arg5 exportFilePath:(id)arg6;

@end

