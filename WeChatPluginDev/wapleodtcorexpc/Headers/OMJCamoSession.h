//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJCDNBridgeService, UIView;
@protocol OMJCamoSessionDelegate;

@interface OMJCamoSession : NSObject
{
    id <OMJCamoSessionDelegate> _delegate;
    OMJCDNBridgeService *_cdnBridgeService;
    SharedPtr_a4453dff _backingSession;
    shared_ptr_85cde1ea _backingRenderView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_85cde1ea backingRenderView; // @synthesize backingRenderView=_backingRenderView;
@property(nonatomic) SharedPtr_a4453dff backingSession; // @synthesize backingSession=_backingSession;
@property(readonly, nonatomic) OMJCDNBridgeService *cdnBridgeService; // @synthesize cdnBridgeService=_cdnBridgeService;
@property(nonatomic) __weak id <OMJCamoSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetExposureISO;
- (void)setExposureISO:(double)arg1;
- (double)exposureISO;
- (double)minExposureISO;
- (double)maxExposureISO;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (void)setFlashMode:(long long)arg1;
- (long long)flashMode;
- (void)setVideoZoomFactor:(double)arg1;
- (double)videoZoomFactor;
- (double)videoMinZoomFactor;
- (double)videoMaxZoomFactor;
- (void)switchCameraToPosition:(long long)arg1;
- (long long)getDevicePosition;
- (void)setLocationInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIsDeformNeedCrop:(_Bool)arg1;
- (void)setFaceGender:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toggleFaceGenderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setAudioDeviceType:(long long)arg1;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)cancelAllLoadTasks;
- (void)cancelLoadWithTaskID:(int)arg1;
- (void)registerLocalStickerMaterialIfNeededWithMaterialID:(id)arg1 version:(long long)arg2 zipFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)loadMusicWithMusicID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (_Bool)isMusicLoadedWithID:(id)arg1;
- (void)selectAndLoadMusicWithMusicIDs:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 musicCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)removeTemplateWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (int)loadTemplateWithTemplateID:(id)arg1 loadPriority:(long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getTemplateInfoWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (int)loadBuiltinCommonResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isBuiltinCommonResourcesLoaded;
- (id)backingRenderViewCon;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)notifyAIGCTaskDidCompleted;
- (void)registerCDNBridgeService:(id)arg1;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endAdjustSpatialWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginAdjustSpatialDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelExportingVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startExportingVideoWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginUseCameraInputWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 assetInputSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearVideoRemixTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearTemplateWithOverridingParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseTemplateWithID:(id)arg1 overridingParams:(id)arg2 useTemplateCompletionHandler:(CDUnknownBlockType)arg3;
- (void)resumeBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearMusicLyricsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateMusicLyricsWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 shouldRestartPreview:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearComponentGroupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseComponentGroupWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getFilterDesc;
- (void)clearFilterDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getBeautyAdjustmentDesc;
- (void)clearBeautyAdjustmentDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resumeRenderingToScreenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseRenderingToScreenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumePreviewingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pausePreviewingWithShouldPresentBlankFrame:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)exportPhotoWithShouldTeardownSession:(_Bool)arg1 useRenderAspectRatio:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopRecordingWithShouldTeardownSession:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopRunningWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startRunningWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startupWithParams:(id)arg1 usingFrontCamera:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIView *renderView;
- (_Bool)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (void)setupSwitchCameraDidFinishCallbackFunc;
- (void)setupAIGCFinishCallback;
- (void)setupBeginRequestAIGCCallback;
- (void)setupFirstFrameDidPresentAfterSwitchTemplateCallback;
- (void)setupFirstFrameDidPresentCallback;
- (void)setupRecordingTimeDidChangeCallback;
- (void)setupRecordingDidFailCallback;
- (id)initWithBackingSession:(const void *)arg1 backingRenderView:(const void *)arg2;

@end

