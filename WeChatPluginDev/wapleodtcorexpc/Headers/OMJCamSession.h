//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJCamSink, UIView;
@protocol OMJCamSessionDelegate;

@interface OMJCamSession : NSObject
{
    OMJCamSink *_camSink;
    id <OMJCamSessionDelegate> _delegate;
    SharedPtr_8d35978a _backingSession;
    shared_ptr_85cde1ea _backingRenderView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_85cde1ea backingRenderView; // @synthesize backingRenderView=_backingRenderView;
@property(nonatomic) SharedPtr_8d35978a backingSession; // @synthesize backingSession=_backingSession;
@property(nonatomic) __weak id <OMJCamSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) OMJCamSink *camSink; // @synthesize camSink=_camSink;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getCamGestureRecognizerSettings;
- (id)backingRenderViewCon;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelExportingVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startExportingVideoWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginUseCameraInputWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 assetInputSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocationInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toggleFaceGenderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setAudioDeviceType:(long long)arg1;
- (unsigned long long)getPreferredCameraDimensionLevel;
- (void)resumeBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getCurrentBackgroundMusicDesc;
- (void)clearBackgroundMusicWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 shouldRestartPreview:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getFilterDesc;
- (void)clearFilterDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getBeautyAdjustmentDesc;
- (void)clearBeautyAdjustmentDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIView *renderView;
- (_Bool)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (void)resumePreviewingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pausePreviewingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportPhotoWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3 shouldTeardownSession:(_Bool)arg4 useRenderAspectRatio:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)exportPhotoWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3 shouldTeardownSession:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)exportPhotoWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3 outputFilePath:(id)arg4 shouldTeardownSession:(_Bool)arg5 useRenderAspectRatio:(_Bool)arg6 photoSettings:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)stopRecordingWithShouldTeardownSession:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearVideoRemixTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateAndVideoRemixTemplateWithID:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearTemplateWithOverridingParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseTemplateWithID:(id)arg1 overridingParams:(id)arg2 useTemplateCompletionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long state;
- (void)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateRenderAspectRatioWithWidth:(int)arg1 height:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startPreviewingWithVideoRemixTemplateID:(id)arg1 videoRemixParams:(id)arg2 settings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPreviewingWithTemplateID:(id)arg1 overridingParams:(id)arg2 settings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPreviewingWithSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupBeginRequestAIGCCallback;
- (void)setupFirstFrameDidPresentCallback;
- (void)setupRecordingTimeDidChangeCallback;
- (void)setupRecordingDidFailCallback;
- (void)dealloc;
- (id)initWithBackingSession:(const void *)arg1;

@end

