//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject, NSString, VideoEncodeTask;

@interface VideoEncodeMgr
{
    VideoEncodeTask *_currentTask;
    NSMutableArray *_normalTaskQueue;
    NSMutableArray *_highPriorityTaskQueue;
    NSObject *_queueLockObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *queueLockObject; // @synthesize queueLockObject=_queueLockObject;
@property(retain, nonatomic) NSMutableArray *highPriorityTaskQueue; // @synthesize highPriorityTaskQueue=_highPriorityTaskQueue;
@property(retain, nonatomic) NSMutableArray *normalTaskQueue; // @synthesize normalTaskQueue=_normalTaskQueue;
@property(readonly, nonatomic) VideoEncodeTask *currentTask; // @synthesize currentTask=_currentTask;
- (id)getParamsForNearbyAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7;
- (id)getParamsForNearbyVideoRecord;
- (id)getParamsForNearbyAlbumVideo:(id)arg1;
- (id)getParamsForNearbyAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (unsigned int)getFullScreenAlrightHeightWith:(unsigned int)arg1;
- (void)checkQueue;
- (void)addLowPriorityTask:(id)arg1;
- (void)addHighPriorityTask:(id)arg1;
- (id)getTaskWithVideoAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 includingReplicableTask:(_Bool)arg4;
- (_Bool)makeTaskLowPriority:(id)arg1;
- (_Bool)makeTaskHighPriority:(id)arg1;
- (void)removeAllTasks;
- (void)removeTask:(id)arg1;
- (_Bool)isTaskInQueue:(id)arg1;
- (id)startMAVExportSessionTaskWithMAVVideoComposition:(id)arg1 config:(id)arg2 inputPath:(id)arg3 outputPath:(id)arg4 params:(id)arg5 videoEncodeTaskParams:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)startNewTaskForAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 params:(id)arg4 videoEncodeTaskParams:(id)arg5 configVideoComposition:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)startMMAssetExportSessionTaskWithInputPath:(id)arg1 outputPath:(id)arg2 params:(id)arg3 videoEncodeTaskParams:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)startNewTaskForAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 params:(id)arg4 videoEncodeTaskParams:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)getVideoConfigForScene:(unsigned long long)arg1 encodeJson:(id)arg2;
- (id)getVideoConfigForScene:(unsigned long long)arg1;
- (id)getVideoEncodeJson:(unsigned long long)arg1;
- (long long)getTimeMinuteCountFrom:(id)arg1;
- (void)setDefaultStepConfigs:(id)arg1;
- (id)getParamsForFinderVideoRecord:(_Bool)arg1;
- (id)getParamsForGameVideo:(id)arg1;
- (id)getParamsForHighQulity:(id)arg1;
- (id)getParamsForTextStateVideo:(id)arg1;
- (id)getParamsForStoryVideoRecord;
- (id)getParamsForStoryAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForStoryAlbumVideo:(id)arg1;
- (id)getParamsForMomentsWithMiaoJianApp;
- (id)getParamsForMomentsWithMiaoJianTemplate;
- (id)getParamsForMomentVideoRecord;
- (id)getParamsForChatVideoRecord;
- (id)getParamsForChatAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7 encodeScene:(unsigned long long)arg8 encodeJson:(id)arg9;
- (id)getParamsForFinderMiaojianPublisher;
- (id)getParamsForFinderAlbumVideoSize:(struct CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7 encodeScene:(unsigned long long)arg8;
- (id)getParamsForFinderAlbumVideo:(id)arg1 withDuration:(double)arg2 encodeScene:(unsigned long long)arg3;
- (id)getParamsForFinderAlbumVideo:(id)arg1 renderSize:(struct CGSize)arg2 encodeScene:(unsigned long long)arg3;
- (id)getParamsForFinderAlbumVideo:(id)arg1 renderSize:(struct CGSize)arg2;
- (id)getParamsForFinderAlbumMegaVideo:(id)arg1 renderSize:(struct CGSize)arg2;
- (id)getParamsForFinderAlbumVideo:(id)arg1;
- (id)getParamsForMomentAlbumWithEncodeScene:(unsigned long long)arg1 videoSize:(struct CGSize)arg2 duration:(double)arg3 fps:(float)arg4 videoBitrate:(float)arg5 audioSampleRate:(float)arg6 audioChannel:(unsigned int)arg7 audioBitrate:(float)arg8;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withDuration:(double)arg2 encodeScene:(unsigned long long)arg3;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withEncodeScene:(unsigned long long)arg2;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForMomentAlbumVideo:(id)arg1;
- (id)getParamsForCompressChatAlbumVideo:(id)arg1;
- (id)getParamsForChatVideo:(id)arg1 withDuration:(double)arg2 encodeScene:(unsigned long long)arg3 encodeJson:(id)arg4;
- (id)getParamsForChatVideo:(id)arg1 encodeScene:(unsigned long long)arg2 encodeJson:(id)arg3;
- (id)getParamsForChatAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForChatAlbumVideo:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

