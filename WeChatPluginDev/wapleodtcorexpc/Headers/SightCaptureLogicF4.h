//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, SightCameraCapture;
@protocol OS_dispatch_queue, SightCaptureDelegate;

@interface SightCaptureLogicF4
{
    id <SightCaptureDelegate> m_delegate;
    _Bool m_shouldStart;
    _Bool m_shouldNotifyPreviewReady;
    unsigned int m_currID;
    int m_zoomState;
    _Bool m_lightBoostOn;
    SightCameraCapture *m_movieCapture;
    NSMutableDictionary *m_recorderDict;
    NSMutableArray *m_compressorAry;
    NSObject<OS_dispatch_queue> *m_logicQueue;
    _Bool _needAudio;
    unsigned int _maasRecordId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maasRecordId; // @synthesize maasRecordId=_maasRecordId;
@property(nonatomic) _Bool needAudio; // @synthesize needAudio=_needAudio;
- (void)setCaptureNeedAudio:(_Bool)arg1;
- (void)stopCameraCapture;
- (id)getKeyFrameInterval;
- (id)getVideoProfileLevel;
- (id)getCodecSettingsWithBitrate:(int)arg1;
- (int)getCaptureFrameRate;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelExportingVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startExportingVideoWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginUseCameraInputWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearVideoRemixTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateAndVideoRemixTemplateWithItem:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (void)cancelLoadWithTaskID:(int)arg1;
- (void)cancelAll;
- (void)setLocationInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMiaojianCameraRecordNeedAudio:(_Bool)arg1;
- (void)changeCameraMusic:(id)arg1 musicEnable:(_Bool)arg2 restartPreview:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isCameraWXMusicLoaded:(id)arg1;
- (_Bool)isCameraMusicLoaded:(id)arg1;
- (void)clearTemplateWithMusicEnabled:(_Bool)arg1 params:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (void)preloadTemplateWithTemplateId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(_Bool)arg2 params:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getTemplateInfoWithItem:(id)arg1;
- (_Bool)isTemplateLoadedWithTemplate:(id)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 shouldEnableAudio:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearFilterDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startRecordingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setSightCameraDelegate:(id)arg1;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isUsingMaasCapSessionForRender;
- (id)capFunSessionRenderView;
- (void)cleanUpCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startUpCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)effectManagerPreviewLayer;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)switchBeautyEffect:(_Bool)arg1;
- (void)deallocEffectManager;
- (void)resetEffectManagerLite;
- (void)initEffectManager;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (double)minExposureISO;
- (double)maxExposureISO;
- (double)currentExposureISO;
- (void)setExposureISO:(double)arg1;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (void)stopQRCodeWatcher;
- (void)startQRCodeWatcher;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (_Bool)isSupportSwitchCamera;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (_Bool)isLightBoostOn;
- (double)setZoomFactor:(double)arg1 ignoreLimit:(_Bool)arg2 animated:(_Bool)arg3;
- (double)defaultZoomFactor;
- (double)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)maxZoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1 isProMode:(_Bool)arg2;
- (void)setZoomState:(int)arg1;
- (int)zoomState;
- (_Bool)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)capturePreviewImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregistPreviewView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (_Bool)isRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecord:(unsigned int)arg1;
- (void)stopRecord:(unsigned int)arg1;
- (_Bool)isMaasRecordId:(unsigned int)arg1;
- (id)generateMJRecordingSettingsWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3;
- (unsigned int)startRecordF4:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4 orientation:(long long)arg5 compressAudio:(_Bool)arg6 audioBitrate:(float)arg7 needAudio:(_Bool)arg8;
- (unsigned int)startHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5 needAudio:(_Bool)arg6;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6 needAudio:(_Bool)arg7;
- (void)realStartRecord;
- (unsigned int)prepareRecordF4:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4;
- (unsigned int)prepareHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (void)pauseCameraImmediately;
- (_Bool)pauseCamera;
- (void)startDeviceAudio;
- (void)startCameraWithAudio:(_Bool)arg1;
- (_Bool)isCameraOn;
- (void)onPictureRetake;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) SightCameraCapture *movieCapture; // @synthesize movieCapture=m_movieCapture;
- (id)getPreset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

