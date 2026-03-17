//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CALayer, MJCamSetupTemplateParams, MMCameraTemplateItem, NSError, NSMutableArray, NSSet, NSString, OMCGeographicInfo, OMJAIGCParams, OMJAssetInfo, OMJBeautyAdjustmentDesc, OMJCamFilterDesc, OMJCamMusicDesc, OMJCamTemplateInfo, OMJCamTemplateOverridingParams, OMJMusicInfo, OMJRecordingSettings, SightCameraPreviewView, UIEvent, UIImage, UIView;
@protocol SightCameraCaptureDelegate, SightCaptureDelegate, SightPreviewView, WCMJCameraMusicPlayableData;

@protocol SightCaptureLogic <NSObject>
- (void)updateAIGCResultWithParams:(OMJAIGCParams *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)cancelExportingVideoWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startExportingVideoWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3 completionHandler:(void (^)(OMJRecordingFinishInfo *, NSError *))arg4;
- (void)beginUseCameraInputWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)beginUseAssetInputWithAssetInfo:(OMJAssetInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)clearVideoRemixTemplateWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)beginUseVideoRemixTemplateWithID:(NSString *)arg1 overridingParams:(OMJCamTemplateOverridingParams *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)beginUseTemplateAndVideoRemixTemplateWithItem:(MMCameraTemplateItem *)arg1 videoRemixTemplateID:(NSString *)arg2 overridingParams:(OMJCamTemplateOverridingParams *)arg3 completionHandler:(void (^)(OMJCamUseTemplateFinishInfo *, NSError *))arg4;
- (int)loadTemplateWithTemplateID:(NSString *)arg1 progressHandler:(void (^)(float))arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)isTemplateLoadedWithTemplateID:(NSString *)arg1 version:(unsigned long long)arg2;
- (void)cancelLoadWithTaskID:(int)arg1;
- (void)cancelAll;
- (void)setLocationInfo:(OMCGeographicInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerLocalMusicWithInfo:(OMJMusicInfo *)arg1 musicFilePath:(NSString *)arg2;
- (void)beginPlayBackgroundMusicWithDesc:(OMJCamMusicDesc *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (OMJBeautyAdjustmentDesc *)getBeautyAdjustmentDescWithMaterialID:(NSString *)arg1;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(NSString *)arg1 progressHandler:(void (^)(float))arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)setMiaojianCameraRecordNeedAudio:(_Bool)arg1;
- (void)setSightCameraDelegate:(id <SightCameraCaptureDelegate>)arg1;
- (void)changeCameraMusic:(id <WCMJCameraMusicPlayableData>)arg1 musicEnable:(_Bool)arg2 restartPreview:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (_Bool)isCameraWXMusicLoaded:(NSMutableArray *)arg1;
- (_Bool)isCameraMusicLoaded:(id <WCMJCameraMusicPlayableData>)arg1;
- (void)clearTemplateWithMusicEnabled:(_Bool)arg1 params:(MJCamSetupTemplateParams *)arg2 completionHandler:(void (^)(NSError *, MJCamChangeTemplateParams *))arg3;
- (void)clearTemplateWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)sendMaasCamSessionWithTouches:(NSSet *)arg1 event:(UIEvent *)arg2 states:(unsigned long long)arg3;
- (void)preloadTemplateWithTemplateId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)beginUseTemplateWithTemplate:(MMCameraTemplateItem *)arg1 enableMusic:(_Bool)arg2 params:(MJCamSetupTemplateParams *)arg3 completionHandler:(void (^)(NSError *, MJCamChangeTemplateParams *))arg4;
- (OMJCamTemplateInfo *)getTemplateInfoWithItem:(MMCameraTemplateItem *)arg1;
- (_Bool)isTemplateLoadedWithTemplate:(MMCameraTemplateItem *)arg1;
- (void)setBeautyAdjustmentWithDesc:(OMJBeautyAdjustmentDesc *)arg1 shouldEnableAudio:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)clearFilterDescWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setFilterDesc:(OMJCamFilterDesc *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSError *)stopRecordingWithCompletionHandler:(void (^)(OMJRecordingFinishInfo *, NSError *))arg1;
- (NSError *)startRecordingWithOutputFilePath:(NSString *)arg1 exportSettings:(OMJRecordingSettings *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(NSString *)arg1 version:(unsigned long long)arg2 completionHandler:(void (^)(_Bool))arg3;
- (_Bool)isUsingMaasCapSessionForRender;
- (UIView *)capFunSessionRenderView;
- (void)cleanUpCameraSessionWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)startUpCameraSessionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setCaptureNeedAudio:(_Bool)arg1;
- (CALayer *)effectManagerPreviewLayer;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)switchBeautyEffect:(_Bool)arg1;
- (void)deallocEffectManager;
- (void)resetEffectManagerLite;
- (void)initEffectManager;
- (void)stopQRCodeWatcher;
- (void)startQRCodeWatcher;
- (UIImage *)processWithSampleImageAfterPerformCachedOperations:(UIImage *)arg1;
- (double)minExposureISO;
- (double)maxExposureISO;
- (double)currentExposureISO;
- (void)setExposureISO:(double)arg1;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
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
- (double)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)defaultZoomFactor;
- (double)maxZoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1 isProMode:(_Bool)arg2;
- (void)setZoomState:(int)arg1;
- (int)zoomState;
- (_Bool)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopCameraCapture;
- (void)capturePreviewImage:(UIView<SightPreviewView> *)arg1 withBlock:(void (^)(UIImage *))arg2;
- (void)takePicturWithCompletion:(void (^)(UIImage *, NSData *))arg1;
- (void)unregistPreviewView:(id <SightPreviewView>)arg1;
- (SightCameraPreviewView *)genPreviewView:(struct CGRect)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecord:(unsigned int)arg1;
- (void)stopRecord:(unsigned int)arg1;
- (void)realStartRecord;
- (unsigned int)prepareHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (unsigned int)startHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5 needAudio:(_Bool)arg6;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6 needAudio:(_Bool)arg7;
- (void)pauseCameraImmediately;
- (_Bool)pauseCamera;
- (void)startDeviceAudio;
- (void)startCameraWithAudio:(_Bool)arg1;
- (_Bool)isCameraOn;
- (void)onPictureRetake;
- (void)setDelegate:(id <SightCaptureDelegate>)arg1;
@end

